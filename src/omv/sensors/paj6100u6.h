/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2019 Lake Fu <lake_fu@pixart.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * PAJ6100U6 driver.
 *
 */
#ifndef __PAJ6100U6_H__
#define __PAJ6100U6_H__
#include <stdbool.h>
#include "sensor.h"
#define PAJ6100U6_XCLK_FREQ 6000000

bool findPaj6100(sensor_t *sensor);
int paj6100u6_init(sensor_t *sensor);
#endif