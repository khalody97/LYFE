//
//  FirstViewController.swift
//  LYFE
//
//  Created by Conlan Davey on 11/8/14.
//  Copyright (c) 2014 Dark Matter Co. All rights reserved.
//

import UIKit

class FirstViewController: UIViewController{
    var slotpress = 0
    
    func switchColor(num: Int) {
        switch num {
        case 1:
            slot1Label.backgroundColor = UIColor.blueColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        case 2:
            slot2Label.backgroundColor = UIColor.blueColor()
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        case 3:
            slot3Label.backgroundColor = UIColor.blueColor()
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        case 4:
            slot4Label.backgroundColor = UIColor.blueColor()
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        case 5:
            slot5Label.backgroundColor = UIColor.blueColor()
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        case 6:
            slot6Label.backgroundColor = UIColor.blueColor()
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
        default:
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        }
    }
    
    @IBAction func slot1Button(sender: AnyObject) {
        slotpress = 1
        switchColor(1)
    }
    @IBAction func slot2Button(sender: AnyObject) {
        slotpress = 2
        switchColor(2)
    }
    @IBAction func slot3Button(sender: AnyObject) {
        slotpress = 3
        switchColor(3)
    }    
    @IBAction func slot4Button(sender: AnyObject) {
        slotpress = 4
        switchColor(4)
    }
    @IBAction func slot5Button(sender: AnyObject) {
        slotpress = 5
        switchColor(5)
    }
    @IBAction func slot6Button(sender: AnyObject) {
        slotpress = 6
        switchColor(6)
    }
    
    @IBOutlet weak var slot1Label: UILabel!
    @IBOutlet weak var slot2Label: UILabel!
    @IBOutlet weak var slot3Label: UILabel!
    @IBOutlet weak var slot4Label: UILabel!
    @IBOutlet weak var slot5Label: UILabel!
    @IBOutlet weak var slot6Label: UILabel!
    
    
    let pickerData = ["Work", "Work Hard", "Rest", "Suck Up to Boss", "Romance", "Spend Time With Kids"]
    
    override func viewDidLoad() {
        switch slotpress {
        case 1:
            slot1Label.backgroundColor = UIColor.blueColor()
        case 2:
            slot2Label.backgroundColor = UIColor.blueColor()
        case 3:
            slot3Label.backgroundColor = UIColor.blueColor()
        case 4:
            slot4Label.backgroundColor = UIColor.blueColor()
        case 5:
            slot5Label.backgroundColor = UIColor.blueColor()
        case 6:
            slot6Label.backgroundColor = UIColor.blueColor()
        default:
            slot1Label.backgroundColor = UIColor.whiteColor()
            slot2Label.backgroundColor = UIColor.whiteColor()
            slot3Label.backgroundColor = UIColor.whiteColor()
            slot4Label.backgroundColor = UIColor.whiteColor()
            slot5Label.backgroundColor = UIColor.whiteColor()
            slot6Label.backgroundColor = UIColor.whiteColor()
        }
        super.viewDidLoad()
        slot1Label.text = pickerData[0]
        slot2Label.text = pickerData[0]
        slot3Label.text = pickerData[0]
        slot4Label.text = pickerData[0]
        slot5Label.text = pickerData[0]
        slot6Label.text = pickerData[0]
        
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    func numberOfComponentsInPickerView(pickerView: UIPickerView) -> Int {
        
        return 1
        
    }
    func pickerView(pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return pickerData.count
    }
    func pickerView(pickerView: UIPickerView, titleForRow row: Int, forComponent component: Int) -> String! {
        return pickerData[row]
    }
    func pickerView(pickerView: UIPickerView!, didSelectRow row: Int, inComponent component: Int) {
        var itemSelected = pickerData[row]
        switch slotpress {
        case 1:
            slot1Label.text = itemSelected
        case 2:
            slot2Label.text = itemSelected
        case 3:
            slot3Label.text = itemSelected
        case 4:
            slot4Label.text = itemSelected
        case 5:
            slot5Label.text = itemSelected
        case 6:
            slot6Label.text = itemSelected
        default:
            slotpress = 0
        }
    }
}

