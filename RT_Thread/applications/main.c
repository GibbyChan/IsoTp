/*
 * Copyright (c) 2006-2024, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-11-22     RT-Thread    first version
 */

#include <rtthread.h>

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>
#include <rtdevice.h>
#include <drv_common.h>

#define GRN_LED_PIN GET_PIN(A,5)
#define USR_BTN_PIN GET_PIN(C,13)

int main(void)
{
    int count = 1;

    rt_pin_mode(GRN_LED_PIN, PIN_MODE_OUTPUT);
    rt_pin_mode(USR_BTN_PIN, PIN_MODE_INPUT);
    //can_test();
    while (count++)
    {
        //LOG_D("Hello RT-Thread!");
        rt_pin_write(GRN_LED_PIN, PIN_LOW);
        rt_thread_mdelay(1000);
        rt_pin_write(GRN_LED_PIN, PIN_HIGH);
        rt_thread_mdelay(1000);
    }


    return RT_EOK;
}
