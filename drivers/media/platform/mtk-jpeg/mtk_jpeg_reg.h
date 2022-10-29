/*
 * Copyright (c) 2016 MediaTek Inc.
 * Author: Ming Hsiu Tsai <minghsiu.tsai@mediatek.com>
 *         Rick Chang <rick.chang@mediatek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _MTK_JPEG_REG_H
#define _MTK_JPEG_REG_H

#define MTK_JPEG_COMP_MAX		3
#define MTK_JPEG_BLOCK_MAX		10
#define MTK_JPEG_DCTSIZE		8

#define BIT_INQST_MASK_ERROR_BS		0x20
#define BIT_INQST_MASK_PAUSE		0x10
#define BIT_INQST_MASK_OVERFLOW		0x04
#define BIT_INQST_MASK_UNDERFLOW	0x02
#define BIT_INQST_MASK_EOF		0x01
#define BIT_INQST_MASK_ALLIRQ		0x37

#define JPGDEC_REG_RESET		0x0090
#define JPGDEC_REG_BRZ_FACTOR		0x00F8
#define JPGDEC_REG_DU_NUM		0x00FC
#define JPGDEC_REG_DEST_ADDR0_Y		0x0140
#define JPGDEC_REG_DEST_ADDR0_U		0x0144
#define JPGDEC_REG_DEST_ADDR0_V		0x0148
#define JPGDEC_REG_DEST_ADDR1_Y		0x014C
#define JPGDEC_REG_DEST_ADDR1_U		0x0150
#define JPGDEC_REG_DEST_ADDR1_V		0x0154
#define JPGDEC_REG_STRIDE_Y		0x0158
#define JPGDEC_REG_STRIDE_UV		0x015C
#define JPGDEC_REG_IMG_STRIDE_Y		0x0160
#define JPGDEC_REG_IMG_STRIDE_UV	0x0164
#define JPGDEC_REG_WDMA_CTRL		0x016C
#define JPGDEC_REG_PAUSE_MCU_NUM	0x0170
#define JPGDEC_REG_OPERATION_MODE	0x017C
#define JPGDEC_REG_FILE_ADDR		0x0200
#define JPGDEC_REG_COMP_ID		0x020C
#define JPGDEC_REG_TOTAL_MCU_NUM	0x0210
#define JPGDEC_REG_COMP0_DATA_UNIT_NUM	0x0224
#define JPGDEC_REG_DU_CTRL		0x023C
#define JPGDEC_REG_TRIG			0x0240
#define JPGDEC_REG_FILE_BRP		0x0248
#define JPGDEC_REG_FILE_TOTAL_SIZE	0x024C
#define JPGDEC_REG_QT_ID		0x0270
#define JPGDEC_REG_INTERRUPT_STATUS	0x0274
#define JPGDEC_REG_STATUS		0x0278
#define JPGDEC_REG_ST_HUFFMAN_EN	0x0320

#endif /* _MTK_JPEG_REG_H */
