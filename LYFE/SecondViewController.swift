//
//  SecondViewController.swift
//  LYFE
//
//  Created by Conlan Davey on 11/8/14.
//  Copyright (c) 2014 Dark Matter Co. All rights reserved.
//

import UIKit

class SecondViewController: UIViewController, UIPickerViewDataSource {

    @IBOutlet weak var MyPicker: UIPickerView!
    @IBOutlet weak var MyLabel: UILabel!
    let PickerData = ["Sleep", "Do Work", "Work Hard"]
    func numberOfComponentsInPickerView(pickerView: UIPickerView) -> Int {
        return 1
    }
    func pickerView(pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return PickerData.count
    }
    func pickerView(pickerView: UIPickerView, titleForRow row: Int, forComponent component: Int) -> String! {
        return PickerData[row]
    }
    
    func pickerView(pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        MyLabel.text = PickerData[row]
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

