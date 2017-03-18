/******************************************************************************
 *
 * Copyright( c ) 2009-2012  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 *
 * Bug Fixes and enhancements for Linux Kernels >= 3.2
 * by Benjamin Porter <BenjaminPorter86@gmail.com>
 *
 * Project homepage: https://github.com/FreedomBen/rtl8188ce-linux-driver
 *
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/

#ifndef __RTL92CE_LED_H__
#define __RTL92CE_LED_H__

void rtl92ce_init_sw_leds( struct ieee80211_hw *hw );
void rtl92ce_sw_led_on( struct ieee80211_hw *hw, struct rtl_led *pled );
void rtl92ce_sw_led_off( struct ieee80211_hw *hw, struct rtl_led *pled );
void rtl92ce_led_control( struct ieee80211_hw *hw, enum led_ctl_mode ledaction );

#endif
