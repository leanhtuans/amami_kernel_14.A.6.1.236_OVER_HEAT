/*
 * Modified 2013 Sony Mobile Communications AB.
 */
#ifndef __MSM_HDMI_MODES_H__
#define __MSM_HDMI_MODES_H__
#include <linux/types.h>

struct msm_hdmi_mode_timing_info {
	uint32_t	video_format;
	uint32_t	active_h;
	uint32_t	front_porch_h;
	uint32_t	pulse_width_h;
	uint32_t	back_porch_h;
	uint32_t	active_low_h;
	uint32_t	active_v;
	uint32_t	front_porch_v;
	uint32_t	pulse_width_v;
	uint32_t	back_porch_v;
	uint32_t	active_low_v;
	/* Must divide by 1000 to get the actual frequency in MHZ */
	uint32_t	pixel_freq;
	/* Must divide by 1000 to get the actual frequency in HZ */
	uint32_t	refresh_rate;
	uint32_t	interlaced;
	uint32_t	supported;
};

#define MSM_HDMI_MODES_CEA		(1 << 0)
#define MSM_HDMI_MODES_XTND		(1 << 1)
#define MSM_HDMI_MODES_DVI		(1 << 2)
#define MSM_HDMI_MODES_ALL		(MSM_HDMI_MODES_CEA |\
					 MSM_HDMI_MODES_XTND |\
					 MSM_HDMI_MODES_DVI)

/* all video formats defined by CEA 861D */
#define HDMI_VFRMT_UNKNOWN		0
#define HDMI_VFRMT_640x480p60_4_3	1
#define HDMI_VFRMT_720x480p60_4_3	2
#define HDMI_VFRMT_720x480p60_16_9	3
#define HDMI_VFRMT_1280x720p60_16_9	4
#define HDMI_VFRMT_1920x1080i60_16_9	5
#define HDMI_VFRMT_720x480i60_4_3	6
#define HDMI_VFRMT_1440x480i60_4_3	HDMI_VFRMT_720x480i60_4_3
#define HDMI_VFRMT_720x480i60_16_9	7
#define HDMI_VFRMT_1440x480i60_16_9	HDMI_VFRMT_720x480i60_16_9
#define HDMI_VFRMT_720x240p60_4_3	8
#define HDMI_VFRMT_1440x240p60_4_3	HDMI_VFRMT_720x240p60_4_3
#define HDMI_VFRMT_720x240p60_16_9	9
#define HDMI_VFRMT_1440x240p60_16_9	HDMI_VFRMT_720x240p60_16_9
#define HDMI_VFRMT_2880x480i60_4_3	10
#define HDMI_VFRMT_2880x480i60_16_9	11
#define HDMI_VFRMT_2880x240p60_4_3	12
#define HDMI_VFRMT_2880x240p60_16_9	13
#define HDMI_VFRMT_1440x480p60_4_3	14
#define HDMI_VFRMT_1440x480p60_16_9	15
#define HDMI_VFRMT_1920x1080p60_16_9	16
#define HDMI_VFRMT_720x576p50_4_3	17
#define HDMI_VFRMT_720x576p50_16_9	18
#define HDMI_VFRMT_1280x720p50_16_9	19
#define HDMI_VFRMT_1920x1080i50_16_9	20
#define HDMI_VFRMT_720x576i50_4_3	21
#define HDMI_VFRMT_1440x576i50_4_3	HDMI_VFRMT_720x576i50_4_3
#define HDMI_VFRMT_720x576i50_16_9	22
#define HDMI_VFRMT_1440x576i50_16_9	HDMI_VFRMT_720x576i50_16_9
#define HDMI_VFRMT_720x288p50_4_3	23
#define HDMI_VFRMT_1440x288p50_4_3	HDMI_VFRMT_720x288p50_4_3
#define HDMI_VFRMT_720x288p50_16_9	24
#define HDMI_VFRMT_1440x288p50_16_9	HDMI_VFRMT_720x288p50_16_9
#define HDMI_VFRMT_2880x576i50_4_3	25
#define HDMI_VFRMT_2880x576i50_16_9	26
#define HDMI_VFRMT_2880x288p50_4_3	27
#define HDMI_VFRMT_2880x288p50_16_9	28
#define HDMI_VFRMT_1440x576p50_4_3	29
#define HDMI_VFRMT_1440x576p50_16_9	30
#define HDMI_VFRMT_1920x1080p50_16_9	31
#define HDMI_VFRMT_1920x1080p24_16_9	32
#define HDMI_VFRMT_1920x1080p25_16_9	33
#define HDMI_VFRMT_1920x1080p30_16_9	34
#define HDMI_VFRMT_2880x480p60_4_3	35
#define HDMI_VFRMT_2880x480p60_16_9	36
#define HDMI_VFRMT_2880x576p50_4_3	37
#define HDMI_VFRMT_2880x576p50_16_9	38
#define HDMI_VFRMT_1920x1250i50_16_9	39
#define HDMI_VFRMT_1920x1080i100_16_9	40
#define HDMI_VFRMT_1280x720p100_16_9	41
#define HDMI_VFRMT_720x576p100_4_3	42
#define HDMI_VFRMT_720x576p100_16_9	43
#define HDMI_VFRMT_720x576i100_4_3	44
#define HDMI_VFRMT_1440x576i100_4_3	HDMI_VFRMT_720x576i100_4_3
#define HDMI_VFRMT_720x576i100_16_9	45
#define HDMI_VFRMT_1440x576i100_16_9	HDMI_VFRMT_720x576i100_16_9
#define HDMI_VFRMT_1920x1080i120_16_9	46
#define HDMI_VFRMT_1280x720p120_16_9	47
#define HDMI_VFRMT_720x480p120_4_3	48
#define HDMI_VFRMT_720x480p120_16_9	49
#define HDMI_VFRMT_720x480i120_4_3	50
#define HDMI_VFRMT_1440x480i120_4_3	HDMI_VFRMT_720x480i120_4_3
#define HDMI_VFRMT_720x480i120_16_9	51
#define HDMI_VFRMT_1440x480i120_16_9	HDMI_VFRMT_720x480i120_16_9
#define HDMI_VFRMT_720x576p200_4_3	52
#define HDMI_VFRMT_720x576p200_16_9	53
#define HDMI_VFRMT_720x576i200_4_3	54
#define HDMI_VFRMT_1440x576i200_4_3	HDMI_VFRMT_720x576i200_4_3
#define HDMI_VFRMT_720x576i200_16_9	55
#define HDMI_VFRMT_1440x576i200_16_9	HDMI_VFRMT_720x576i200_16_9
#define HDMI_VFRMT_720x480p240_4_3	56
#define HDMI_VFRMT_720x480p240_16_9	57
#define HDMI_VFRMT_720x480i240_4_3	58
#define HDMI_VFRMT_1440x480i240_4_3	HDMI_VFRMT_720x480i240_4_3
#define HDMI_VFRMT_720x480i240_16_9	59
#define HDMI_VFRMT_1440x480i240_16_9	HDMI_VFRMT_720x480i240_16_9
#define HDMI_VFRMT_1280x720p24_16_9	60
#define HDMI_VFRMT_1280x720p25_16_9	61
#define HDMI_VFRMT_1280x720p30_16_9	62
#define HDMI_VFRMT_1920x1080p120_16_9	63
#define HDMI_VFRMT_1920x1080p100_16_9	64
/* Video Identification Codes from 65-127 are reserved for the future */
#define HDMI_VFRMT_END			127

/* extended video formats */
#define HDMI_VFRMT_3840x2160p30_16_9	(HDMI_VFRMT_END + 1)
#define HDMI_VFRMT_3840x2160p25_16_9	(HDMI_VFRMT_END + 2)
#define HDMI_VFRMT_3840x2160p24_16_9	(HDMI_VFRMT_END + 3)
#define HDMI_VFRMT_4096x2160p24_16_9	(HDMI_VFRMT_END + 4)
#define HDMI_EVFRMT_END			HDMI_VFRMT_4096x2160p24_16_9

/* VESA DMT TIMINGS */
#define HDMI_VFRMT_1024x768p60_4_3	(HDMI_EVFRMT_END + 1)
#define HDMI_VFRMT_1280x1024p60_5_4	(HDMI_EVFRMT_END + 2)
#define HDMI_VFRMT_2560x1600p60_16_9	(HDMI_EVFRMT_END + 3)
#define VESA_DMT_VFRMT_END		HDMI_VFRMT_2560x1600p60_16_9
#define HDMI_VFRMT_MAX			(VESA_DMT_VFRMT_END + 1)
#define HDMI_VFRMT_FORCE_32BIT		0x7FFFFFFF

/* Timing information for supported modes */
#define VFRMT_NOT_SUPPORTED(VFRMT) \
	{VFRMT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, false}

#define HDMI_VFRMT_640x480p60_4_3_TIMING				\
	{HDMI_VFRMT_640x480p60_4_3, 640, 16, 96, 48, true,		\
	 480, 10, 2, 33, true, 25200, 60000, false, true}
#define HDMI_VFRMT_720x480p60_4_3_TIMING				\
	{HDMI_VFRMT_720x480p60_4_3, 720, 16, 62, 60, true,		\
	 480, 9, 6, 30, true, 27030, 60000, false, true}
#define HDMI_VFRMT_720x480p60_16_9_TIMING				\
	{HDMI_VFRMT_720x480p60_16_9, 720, 16, 62, 60, true,		\
	 480, 9, 6, 30, true, 27030, 60000, false, true}
#define HDMI_VFRMT_1280x720p60_16_9_TIMING				\
	{HDMI_VFRMT_1280x720p60_16_9, 1280, 110, 40, 220, false,	\
	 720, 5, 5, 20, false, 74250, 60000, false, true}
#define HDMI_VFRMT_1920x1080i60_16_9_TIMING				\
	{HDMI_VFRMT_1920x1080i60_16_9, 1920, 88, 44, 148, false,	\
	 540, 2, 5, 5, false, 74250, 60000, false, true}
#define HDMI_VFRMT_1440x480i60_4_3_TIMING				\
	{HDMI_VFRMT_1440x480i60_4_3, 1440, 38, 124, 114, true,		\
	 240, 4, 3, 15, true, 27000, 60000, true, true}
#define HDMI_VFRMT_1440x480i60_16_9_TIMING				\
	{HDMI_VFRMT_1440x480i60_16_9, 1440, 38, 124, 114, true,		\
	 240, 4, 3, 15, true, 27000, 60000, true, true}
#define HDMI_VFRMT_1920x1080p60_16_9_TIMING				\
	{HDMI_VFRMT_1920x1080p60_16_9, 1920, 88, 44, 148, false,	\
	 1080, 4, 5, 36, false, 148500, 60000, false, true}
#define HDMI_VFRMT_720x576p50_4_3_TIMING				\
	{HDMI_VFRMT_720x576p50_4_3, 720, 12, 64, 68, true,		\
	 576,  5, 5, 39, true, 27000, 50000, false, true}
#define HDMI_VFRMT_720x576p50_16_9_TIMING				\
	{HDMI_VFRMT_720x576p50_16_9, 720, 12, 64, 68, true,		\
	 576,  5, 5, 39, true, 27000, 50000, false, true}
#define HDMI_VFRMT_1280x720p50_16_9_TIMING				\
	{HDMI_VFRMT_1280x720p50_16_9, 1280, 440, 40, 220, false,	\
	 720,  5, 5, 20, false, 74250, 50000, false, true}
#define HDMI_VFRMT_1440x576i50_4_3_TIMING				\
	{HDMI_VFRMT_1440x576i50_4_3, 1440, 24, 126, 138, true,		\
	 288,  2, 3, 19, true, 27000, 50000, true, true}
#define HDMI_VFRMT_1440x576i50_16_9_TIMING				\
	{HDMI_VFRMT_1440x576i50_16_9, 1440, 24, 126, 138, true,		\
	 288,  2, 3, 19, true, 27000, 50000, true, true}
#define HDMI_VFRMT_1920x1080p50_16_9_TIMING				\
	{HDMI_VFRMT_1920x1080p50_16_9, 1920, 528, 44, 148, false,	\
	 1080, 4, 5, 36, false, 148500, 50000, false, true}
#define HDMI_VFRMT_1920x1080p24_16_9_TIMING				\
	{HDMI_VFRMT_1920x1080p24_16_9, 1920, 638, 44, 148, false,	\
	 1080, 4, 5, 36, false, 74250, 24000, false, true}
#define HDMI_VFRMT_1920x1080p25_16_9_TIMING				\
	{HDMI_VFRMT_1920x1080p25_16_9, 1920, 528, 44, 148, false,	\
	 1080, 4, 5, 36, false, 74250, 25000, false, true}
#define HDMI_VFRMT_1920x1080p30_16_9_TIMING				\
	{HDMI_VFRMT_1920x1080p30_16_9, 1920, 88, 44, 148, false,	\
	 1080, 4, 5, 36, false, 74250, 30000, false, true}
#define HDMI_VFRMT_1024x768p60_4_3_TIMING                               \
	{HDMI_VFRMT_1024x768p60_4_3, 1024, 24, 136, 160, false,         \
	768, 2, 6, 29, false, 65000, 60000, false, true}
#define HDMI_VFRMT_1280x1024p60_5_4_TIMING				\
	{HDMI_VFRMT_1280x1024p60_5_4, 1280, 48, 112, 248, false,	\
	1024, 1, 3, 38, false, 108000, 60000, false, true}
#define HDMI_VFRMT_2560x1600p60_16_9_TIMING				\
	{HDMI_VFRMT_2560x1600p60_16_9, 2560, 48, 32, 80, false,		\
	 1600, 3, 6, 37, false, 268500, 60000, false, true}
#define HDMI_VFRMT_3840x2160p30_16_9_TIMING				\
	{HDMI_VFRMT_3840x2160p30_16_9, 3840, 176, 88, 296, false,	\
	 2160, 8, 10, 72, false, 297000, 30000, false, true}
#define HDMI_VFRMT_3840x2160p25_16_9_TIMING				\
	{HDMI_VFRMT_3840x2160p25_16_9, 3840, 1056, 88, 296, false,	\
	 2160, 8, 10, 72, false, 297000, 25000, false, true}
#define HDMI_VFRMT_3840x2160p24_16_9_TIMING				\
	{HDMI_VFRMT_3840x2160p24_16_9, 3840, 1276, 88, 296, false,	\
	 2160, 8, 10, 72, false, 297000, 24000, false, true}
#define HDMI_VFRMT_4096x2160p24_16_9_TIMING				\
	{HDMI_VFRMT_4096x2160p24_16_9, 4096, 1020, 88, 296, false,	\
	 2160, 8, 10, 72, false, 297000, 24000, false, true}

#define MSM_HDMI_MODES_SET_TIMING(LUT, MODE) do {		\
	struct msm_hdmi_mode_timing_info mode = MODE##_TIMING;	\
	LUT[MODE] = mode;\
	} while (0)

#define MSM_HDMI_MODES_INIT_TIMINGS(__lut)	\
do {	\
	unsigned int i;	\
	for (i = 0; i < HDMI_VFRMT_MAX; i++) {	\
		struct msm_hdmi_mode_timing_info mode =	\
			VFRMT_NOT_SUPPORTED(i);	\
		(__lut)[i] = mode;	\
	}	\
} while (0)

#define MSM_HDMI_MODES_SET_SUPP_TIMINGS(__lut, __type)	\
do {	\
	if (__type & MSM_HDMI_MODES_CEA) {	\
		MSM_HDMI_MODES_SET_TIMING(__lut,	\
			HDMI_VFRMT_640x480p60_4_3);	\
		MSM_HDMI_MODES_SET_TIMING(__lut,	\
			HDMI_VFRMT_720x480p60_16_9);	\
		MSM_HDMI_MODES_SET_TIMING(__lut,	\
			HDMI_VFRMT_1280x720p60_16_9);	\
		MSM_HDMI_MODES_SET_TIMING(__lut,	\
			HDMI_VFRMT_1920x1080p24_16_9);	\
		MSM_HDMI_MODES_SET_TIMING(__lut,	\
			HDMI_VFRMT_1920x1080p30_16_9);	\
	}	\
} while (0)

static inline const char *msm_hdmi_mode_2string(uint32_t mode)
{
	switch (mode) {
	case HDMI_VFRMT_UNKNOWN:		return "Unknown";
	case HDMI_VFRMT_640x480p60_4_3:		return "640x480 p60 4/3";
	case HDMI_VFRMT_720x480p60_4_3:		return "720x480 p60 4/3";
	case HDMI_VFRMT_720x480p60_16_9:	return "720x480 p60 16/9";
	case HDMI_VFRMT_1280x720p60_16_9:	return "1280x 720 p60 16/9";
	case HDMI_VFRMT_1920x1080i60_16_9:	return "1920x1080 i60 16/9";
	case HDMI_VFRMT_1440x480i60_4_3:	return "1440x480 i60 4/3";
	case HDMI_VFRMT_1440x480i60_16_9:	return "1440x480 i60 16/9";
	case HDMI_VFRMT_1440x240p60_4_3:	return "1440x240 p60 4/3";
	case HDMI_VFRMT_1440x240p60_16_9:	return "1440x240 p60 16/9";
	case HDMI_VFRMT_2880x480i60_4_3:	return "2880x480 i60 4/3";
	case HDMI_VFRMT_2880x480i60_16_9:	return "2880x480 i60 16/9";
	case HDMI_VFRMT_2880x240p60_4_3:	return "2880x240 p60 4/3";
	case HDMI_VFRMT_2880x240p60_16_9:	return "2880x240 p60 16/9";
	case HDMI_VFRMT_1440x480p60_4_3:	return "1440x480 p60 4/3";
	case HDMI_VFRMT_1440x480p60_16_9:	return "1440x480 p60 16/9";
	case HDMI_VFRMT_1920x1080p60_16_9:	return "1920x1080 p60 16/9";
	case HDMI_VFRMT_720x576p50_4_3:		return "720x576 p50 4/3";
	case HDMI_VFRMT_720x576p50_16_9:	return "720x576 p50 16/9";
	case HDMI_VFRMT_1280x720p50_16_9:	return "1280x720 p50 16/9";
	case HDMI_VFRMT_1920x1080i50_16_9:	return "1920x1080 i50 16/9";
	case HDMI_VFRMT_1440x576i50_4_3:	return "1440x576 i50 4/3";
	case HDMI_VFRMT_1440x576i50_16_9:	return "1440x576 i50 16/9";
	case HDMI_VFRMT_1440x288p50_4_3:	return "1440x288 p50 4/3";
	case HDMI_VFRMT_1440x288p50_16_9:	return "1440x288 p50 16/9";
	case HDMI_VFRMT_2880x576i50_4_3:	return "2880x576 i50 4/3";
	case HDMI_VFRMT_2880x576i50_16_9:	return "2880x576 i50 16/9";
	case HDMI_VFRMT_2880x288p50_4_3:	return "2880x288 p50 4/3";
	case HDMI_VFRMT_2880x288p50_16_9:	return "2880x288 p50 16/9";
	case HDMI_VFRMT_1440x576p50_4_3:	return "1440x576 p50 4/3";
	case HDMI_VFRMT_1440x576p50_16_9:	return "1440x576 p50 16/9";
	case HDMI_VFRMT_1920x1080p50_16_9:	return "1920x1080 p50 16/9";
	case HDMI_VFRMT_1920x1080p24_16_9:	return "1920x1080 p24 16/9";
	case HDMI_VFRMT_1920x1080p25_16_9:	return "1920x1080 p25 16/9";
	case HDMI_VFRMT_1920x1080p30_16_9:	return "1920x1080 p30 16/9";
	case HDMI_VFRMT_2880x480p60_4_3:	return "2880x480 p60 4/3";
	case HDMI_VFRMT_2880x480p60_16_9:	return "2880x480 p60 16/9";
	case HDMI_VFRMT_2880x576p50_4_3:	return "2880x576 p50 4/3";
	case HDMI_VFRMT_2880x576p50_16_9:	return "2880x576 p50 16/9";
	case HDMI_VFRMT_1920x1250i50_16_9:	return "1920x1250 i50 16/9";
	case HDMI_VFRMT_1920x1080i100_16_9:	return "1920x1080 i100 16/9";
	case HDMI_VFRMT_1280x720p100_16_9:	return "1280x720 p100 16/9";
	case HDMI_VFRMT_720x576p100_4_3:	return "720x576 p100 4/3";
	case HDMI_VFRMT_720x576p100_16_9:	return "720x576 p100 16/9";
	case HDMI_VFRMT_1440x576i100_4_3:	return "1440x576 i100 4/3";
	case HDMI_VFRMT_1440x576i100_16_9:	return "1440x576 i100 16/9";
	case HDMI_VFRMT_1920x1080i120_16_9:	return "1920x1080 i120 16/9";
	case HDMI_VFRMT_1280x720p120_16_9:	return "1280x720 p120 16/9";
	case HDMI_VFRMT_720x480p120_4_3:	return "720x480 p120 4/3";
	case HDMI_VFRMT_720x480p120_16_9:	return "720x480 p120 16/9";
	case HDMI_VFRMT_1440x480i120_4_3:	return "1440x480 i120 4/3";
	case HDMI_VFRMT_1440x480i120_16_9:	return "1440x480 i120 16/9";
	case HDMI_VFRMT_720x576p200_4_3:	return "720x576 p200 4/3";
	case HDMI_VFRMT_720x576p200_16_9:	return "720x576 p200 16/9";
	case HDMI_VFRMT_1440x576i200_4_3:	return "1440x576 i200 4/3";
	case HDMI_VFRMT_1440x576i200_16_9:	return "1440x576 i200 16/9";
	case HDMI_VFRMT_720x480p240_4_3:	return "720x480 p240 4/3";
	case HDMI_VFRMT_720x480p240_16_9:	return "720x480 p240 16/9";
	case HDMI_VFRMT_1440x480i240_4_3:	return "1440x480 i240 4/3";
	case HDMI_VFRMT_1440x480i240_16_9:	return "1440x480 i240 16/9";
	case HDMI_VFRMT_1280x720p24_16_9:	return "1280x720 p24 16/9";
	case HDMI_VFRMT_1280x720p25_16_9:	return "1280x720 p25 16/9";
	case HDMI_VFRMT_1280x720p30_16_9:	return "1280x720 p30 16/9";
	case HDMI_VFRMT_1920x1080p120_16_9:	return "1920x1080 p120 16/9";
	case HDMI_VFRMT_1920x1080p100_16_9:	return "1920x1080 p100 16/9";
	case HDMI_VFRMT_3840x2160p30_16_9:	return "3840x2160 p30 16/9";
	case HDMI_VFRMT_3840x2160p25_16_9:	return "3840x2160 p25 16/9";
	case HDMI_VFRMT_3840x2160p24_16_9:	return "3840x2160 p24 16/9";
	case HDMI_VFRMT_4096x2160p24_16_9:	return "4096x2160 p24 16/9";
	case HDMI_VFRMT_1024x768p60_4_3:	return "1024x768 p60 4/3";
	case HDMI_VFRMT_1280x1024p60_5_4:	return "1280x1024 p60 5/4";
	case HDMI_VFRMT_2560x1600p60_16_9:	return "2560x1600 p60 16/9";
	default:				return "???";
	}
}
#endif /* __MSM_HDMI_MODES_H__ */
