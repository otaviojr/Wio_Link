/*
 * grove_magnetic_switch.h
 *
 * Copyright (c) 2012 seeed technology inc.
 * Website    : www.seeed.cc
 * Author     : Jack Shao (jacky.shaoxg@gmail.com)
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#ifndef __GROVE_MAGNETIC_SWITCH_H__
#define __GROVE_MAGNETIC_SWITCH_H__

#include "suli2.h"

//GROVE_NAME        "Grove-Magnetic Switch"
//SKU               101020038
//IF_TYPE           GPIO
//IMAGE_URL         http://www.seeedstudio.com/wiki/images/thumb/c/c0/Magnetic_Switch.jpg/400px-Magnetic_Switch.jpg

class GroveMagneticSwitch
{
public:
    GroveMagneticSwitch(int pin);
    
    /**
     * Read the status if a magnet is approaching the sensor.
     * 
     * @param approach - 1: magnet approached 0: not
     * 
     * @return bool 
     */
    bool read_approach(uint8_t *mag_approach);
    
    EVENT_T * attach_event_reporter_for_mag_approached(CALLBACK_T reporter);
    EVENT_T *event;
    IO_T *io;
    uint32_t time;
};

static void mag_approach_interrupt_handler(void *para);

#endif
