import QtQuick 2.12
import TableModel 0.1
import QtQuick.Window 2.12
Window
{
    visible: true
    height:1000
    width:600
     onScreenChanged: TableView.scale

TableView {

    anchors.fill: parent
    x:100;y:100
    columnSpacing: 1
    rowSpacing: 1
    clip: true


    //anchors.centerIn: parent
    model: TableModel {}

    delegate: Rectangle {
        //anchors.centerIn: parent
        implicitWidth: 100
        implicitHeight: 50
        border.color: "black"
        color: (heading==true)?"lightblue":"lightgreen"



        Text {
            text: tabledata
            anchors.centerIn: parent
        }
    }
}
}
