//
//  Calculations.swift
//  oij
//
//  Created by Conlan Davey on 11/8/14.
//  Copyright (c) 2014 Dark Matter Co. All rights reserved.
//

import Foundation

public var happiness = 0
public var bank = 0
public var dayNumber = 0
public var salary = 0
public var position = 0
public var salaryLevel = 0
public var positionLevel = 0
public var exhaustion = 0
public var partner = 0
public var kids = 0
public var gameLength = 0

let percentBank = 25*(bank/(10*salary));
let percentBoss = 10*(boss/100);
let percentPosition = 20*(position/100);
let percentExhuastion = -1*(exhaustion*10);
let percentPartner = 25*(partner/100);
let percentKids = 20*(kids/100);
let happinessLvl = [percentBank+percentBoss+percentPosition+percentExhuastion+percentPartner+percentKids]

