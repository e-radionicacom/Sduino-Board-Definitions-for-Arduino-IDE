/*
   xtensa-versions.h -- definitions of Xtensa version and release numbers

   This file defines most Xtensa-related product versions and releases
   that exist so far.
   It also provides a bit of information about which ones are current.
   This file changes every release, as versions/releases get added.


   $Id: //depot/rel/Eaglenest/Xtensa/Software/misc/xtensa-versions.h.tpp#2 $

   Copyright (c) 2006-2010 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef XTENSA_VERSIONS_H
#define XTENSA_VERSIONS_H


/*
 *  NOTE:  A "release" is a collection of product versions
 *	made available at once (together) to customers.
 *	In the past, release and version names all matched in T####.# form,
 *	making the distinction irrelevant.
 *	Starting with the RA-2004.1 release, this is no longer the case.
 */


/* Hardware (Xtensa/Diamond processor) versions:  */
#define XTENSA_HWVERSION_T1020_0	102000	/* versions T1020.0 */
#define  XTENSA_HWCIDSCHEME_T1020_0	 10
#define  XTENSA_HWCIDVERS_T1020_0	 2
#define XTENSA_HWVERSION_T1020_1	102001	/* versions T1020.1 */
#define  XTENSA_HWCIDSCHEME_T1020_1	 10
#define  XTENSA_HWCIDVERS_T1020_1	 3
#define XTENSA_HWVERSION_T1020_2B	102002	/* versions T1020.2b */
#define  XTENSA_HWCIDSCHEME_T1020_2B	 10
#define  XTENSA_HWCIDVERS_T1020_2B	 5
#define XTENSA_HWVERSION_T1020_2	102002	/* versions T1020.2 */
#define  XTENSA_HWCIDSCHEME_T1020_2	 10
#define  XTENSA_HWCIDVERS_T1020_2	 4
#define XTENSA_HWVERSION_T1020_3	102003	/* versions T1020.3 */
#define  XTENSA_HWCIDSCHEME_T1020_3	 10
#define  XTENSA_HWCIDVERS_T1020_3	 6
#define XTENSA_HWVERSION_T1020_4	102004	/* versions T1020.4 */
#define  XTENSA_HWCIDSCHEME_T1020_4	 10
#define  XTENSA_HWCIDVERS_T1020_4	 7
#define XTENSA_HWVERSION_T1030_0	103000	/* versions T1030.0 */
#define  XTENSA_HWCIDSCHEME_T1030_0	 10
#define  XTENSA_HWCIDVERS_T1030_0	 9
#define XTENSA_HWVERSION_T1030_1	103001	/* versions T1030.1 */
#define  XTENSA_HWCIDSCHEME_T1030_1	 10
#define  XTENSA_HWCIDVERS_T1030_1	 10
#define XTENSA_HWVERSION_T1030_2	103002	/* versions T1030.2 */
#define  XTENSA_HWCIDSCHEME_T1030_2	 10
#define  XTENSA_HWCIDVERS_T1030_2	 11
#define XTENSA_HWVERSION_T1030_3	103003	/* versions T1030.3 */
#define  XTENSA_HWCIDSCHEME_T1030_3	 10
#define  XTENSA_HWCIDVERS_T1030_3	 12
#define XTENSA_HWVERSION_T1040_0	104000	/* versions T1040.0 */
#define  XTENSA_HWCIDSCHEME_T1040_0	 10
#define  XTENSA_HWCIDVERS_T1040_0	 15
#define XTENSA_HWVERSION_T1040_1	104001	/* versions T1040.1 */
#define  XTENSA_HWCIDSCHEME_T1040_1	 01
#define  XTENSA_HWCIDVERS_T1040_1	 32
#define XTENSA_HWVERSION_T1040_1P	104001	/* versions T1040.1-prehotfix */
#define  XTENSA_HWCIDSCHEME_T1040_1P	 10
#define  XTENSA_HWCIDVERS_T1040_1P	 16
#define XTENSA_HWVERSION_T1040_2	104002	/* versions T1040.2 */
#define  XTENSA_HWCIDSCHEME_T1040_2	 01
#define  XTENSA_HWCIDVERS_T1040_2	 33
#define XTENSA_HWVERSION_T1040_3	104003	/* versions T1040.3 */
#define  XTENSA_HWCIDSCHEME_T1040_3	 01
#define  XTENSA_HWCIDVERS_T1040_3	 34
#define XTENSA_HWVERSION_T1050_0	105000	/* versions T1050.0 */
#define  XTENSA_HWCIDSCHEME_T1050_0	 1100
#define  XTENSA_HWCIDVERS_T1050_0	 1
#define XTENSA_HWVERSION_T1050_1	105001	/* versions T1050.1 */
#define  XTENSA_HWCIDSCHEME_T1050_1	 1100
#define  XTENSA_HWCIDVERS_T1050_1	 2
#define XTENSA_HWVERSION_T1050_2	105002	/* versions T1050.2 */
#define  XTENSA_HWCIDSCHEME_T1050_2	 1100
#define  XTENSA_HWCIDVERS_T1050_2	 4
#define XTENSA_HWVERSION_T1050_3	105003	/* versions T1050.3 */
#define  XTENSA_HWCIDSCHEME_T1050_3	 1100
#define  XTENSA_HWCIDVERS_T1050_3	 6
#define XTENSA_HWVERSION_T1050_4	105004	/* versions T1050.4 */
#define  XTENSA_HWCIDSCHEME_T1050_4	 1100
#define  XTENSA_HWCIDVERS_T1050_4	 7
#define XTENSA_HWVERSION_T1050_5	105005	/* versions T1050.5 */
#define  XTENSA_HWCIDSCHEME_T1050_5	 1100
#define  XTENSA_HWCIDVERS_T1050_5	 8
#define XTENSA_HWVERSION_RA_2004_1	210000	/* versions LX1.0.0 */
#define  XTENSA_HWCIDSCHEME_RA_2004_1	 1100
#define  XTENSA_HWCIDVERS_RA_2004_1	 3
#define XTENSA_HWVERSION_RA_2005_1	210001	/* versions LX1.0.1 */
#define  XTENSA_HWCIDSCHEME_RA_2005_1	 1100
#define  XTENSA_HWCIDVERS_RA_2005_1	 20
#define XTENSA_HWVERSION_RA_2005_2	210002	/* versions LX1.0.2 */
#define  XTENSA_HWCIDSCHEME_RA_2005_2	 1100
#define  XTENSA_HWCIDVERS_RA_2005_2	 21
#define XTENSA_HWVERSION_RA_2005_3	210003	/* versions LX1.0.3, X6.0.3 */
#define  XTENSA_HWCIDSCHEME_RA_2005_3	 1100
#define  XTENSA_HWCIDVERS_RA_2005_3	 22
#define XTENSA_HWVERSION_RA_2006_4	210004	/* versions LX1.0.4, X6.0.4 */
#define  XTENSA_HWCIDSCHEME_RA_2006_4	 1100
#define  XTENSA_HWCIDVERS_RA_2006_4	 23
#define XTENSA_HWVERSION_RA_2006_5	210005	/* versions LX1.0.5, X6.0.5 */
#define  XTENSA_HWCIDSCHEME_RA_2006_5	 1100
#define  XTENSA_HWCIDVERS_RA_2006_5	 24
#define XTENSA_HWVERSION_RA_2006_6	210006	/* versions LX1.0.6, X6.0.6 */
#define  XTENSA_HWCIDSCHEME_RA_2006_6	 1100
#define  XTENSA_HWCIDVERS_RA_2006_6	 25
#define XTENSA_HWVERSION_RA_2007_7	210007	/* versions LX1.0.7, X6.0.7 */
#define  XTENSA_HWCIDSCHEME_RA_2007_7	 1100
#define  XTENSA_HWCIDVERS_RA_2007_7	 26
#define XTENSA_HWVERSION_RA_2008_8	210008	/* versions LX1.0.8, X6.0.8 */
#define  XTENSA_HWCIDSCHEME_RA_2008_8	 1100
#define  XTENSA_HWCIDVERS_RA_2008_8	 27
#define XTENSA_HWVERSION_RB_2006_0	220000	/* versions LX2.0.0, X7.0.0 */
#define  XTENSA_HWCIDSCHEME_RB_2006_0	 1100
#define  XTENSA_HWCIDVERS_RB_2006_0	 48
#define XTENSA_HWVERSION_RB_2007_1	220001	/* versions LX2.0.1, X7.0.1 */
#define  XTENSA_HWCIDSCHEME_RB_2007_1	 1100
#define  XTENSA_HWCIDVERS_RB_2007_1	 49
#define XTENSA_HWVERSION_RB_2007_2	221000	/* versions LX2.1.0, X7.1.0 */
#define  XTENSA_HWCIDSCHEME_RB_2007_2	 1100
#define  XTENSA_HWCIDVERS_RB_2007_2	 52
#define XTENSA_HWVERSION_RB_2008_3	221001	/* versions LX2.1.1, X7.1.1 */
#define  XTENSA_HWCIDSCHEME_RB_2008_3	 1100
#define  XTENSA_HWCIDVERS_RB_2008_3	 53
#define XTENSA_HWVERSION_RB_2008_4	221002	/* versions LX2.1.2, X7.1.2 */
#define  XTENSA_HWCIDSCHEME_RB_2008_4	 1100
#define  XTENSA_HWCIDVERS_RB_2008_4	 54
#define XTENSA_HWVERSION_RB_2009_5	221003	/* versions LX2.1.3, X7.1.3 */
#define  XTENSA_HWCIDSCHEME_RB_2009_5	 1100
#define  XTENSA_HWCIDVERS_RB_2009_5	 55
#define XTENSA_HWVERSION_RB_2007_2_MP	221100	/* versions LX2.1.8-MP, X7.1.8-MP */
#define  XTENSA_HWCIDSCHEME_RB_2007_2_MP	 1100
#define  XTENSA_HWCIDVERS_RB_2007_2_MP	 64
#define XTENSA_HWVERSION_RC_2009_0	230000	/* versions LX3.0.0, X8.0.0, MX1.0.0 */
#define  XTENSA_HWCIDSCHEME_RC_2009_0	 1100
#define  XTENSA_HWCIDVERS_RC_2009_0	 65
#define XTENSA_HWVERSION_RC_2010_1	230001	/* versions LX3.0.1, X8.0.1, MX1.0.1 */
#define  XTENSA_HWCIDSCHEME_RC_2010_1	 1100
#define  XTENSA_HWCIDVERS_RC_2010_1	 66
#define XTENSA_HWVERSION_RC_2010_2	230002	/* versions LX3.0.2, X8.0.2, MX1.0.2 */
#define  XTENSA_HWCIDSCHEME_RC_2010_2	 1100
#define  XTENSA_HWCIDVERS_RC_2010_2	 67
#define XTENSA_HWVERSION_RC_2011_3	230003	/* versions LX3.0.3, X8.0.3, MX1.0.3 */
#define  XTENSA_HWCIDSCHEME_RC_2011_3	 1100
#define  XTENSA_HWCIDVERS_RC_2011_3	 68
#define XTENSA_HWVERSION_RD_2010_0	240000	/* versions LX4.0.0, X9.0.0, MX1.1.0, TX1.0.0 */
#define  XTENSA_HWCIDSCHEME_RD_2010_0	 1100
#define  XTENSA_HWCIDVERS_RD_2010_0	 80
#define XTENSA_HWVERSION_RD_2011_1	240001	/* versions LX4.0.1, X9.0.1, MX1.1.1, TX1.0.1 */
#define  XTENSA_HWCIDSCHEME_RD_2011_1	 1100
#define  XTENSA_HWCIDVERS_RD_2011_1	 81
#define XTENSA_HWVERSION_RD_2011_2	240002	/* versions LX4.0.2, X9.0.2, MX1.1.2, TX1.0.2 */
#define  XTENSA_HWCIDSCHEME_RD_2011_2	 1100
#define  XTENSA_HWCIDVERS_RD_2011_2	 82
#define XTENSA_HWVERSION_RD_2011_3	240003	/* versions LX4.0.3, X9.0.3, MX1.1.3, TX1.0.3 */
#define  XTENSA_HWCIDSCHEME_RD_2011_3	 1100
#define  XTENSA_HWCIDVERS_RD_2011_3	 83
#define XTENSA_HWVERSION_RD_2012_4	240004	/* versions LX4.0.4, X9.0.4, MX1.1.4, TX1.0.4 */
#define  XTENSA_HWCIDSCHEME_RD_2012_4	 1100
#define  XTENSA_HWCIDVERS_RD_2012_4	 84
#define XTENSA_HWVERSION_RD_2012_5	240005	/* versions LX4.0.5, X9.0.5, MX1.1.5, TX1.0.5 */
#define  XTENSA_HWCIDSCHEME_RD_2012_5	 1100
#define  XTENSA_HWCIDVERS_RD_2012_5	 85
#define XTENSA_HWVERSION_RE_2012_0	250000	/* versions LX5.0.0, X10.0.0, MX1.2.0, TX2.0.0 */
#define  XTENSA_HWCIDSCHEME_RE_2012_0	 1100
#define  XTENSA_HWCIDVERS_RE_2012_0	 96
#define XTENSA_HWVERSION_RE_2012_1	250001	/* versions LX5.0.1, X10.0.1, MX1.2.1, TX2.0.1 */
#define  XTENSA_HWCIDSCHEME_RE_2012_1	 1100
#define  XTENSA_HWCIDVERS_RE_2012_1	 97
#define XTENSA_HWVERSION_RE_2013_2	250002	/* versions LX5.0.2, X10.0.2, MX1.2.2, TX2.0.2 */
#define  XTENSA_HWCIDSCHEME_RE_2013_2	 1100
#define  XTENSA_HWCIDVERS_RE_2013_2	 98
#define XTENSA_HWVERSION_RE_2013_3	250003	/* versions LX5.0.3, X10.0.3, MX1.2.3, TX2.0.3 */
#define  XTENSA_HWCIDSCHEME_RE_2013_3	 1100
#define  XTENSA_HWCIDVERS_RE_2013_3	 99
#define XTENSA_HWVERSION_RE_2013_4	250004	/* versions LX5.0.4, X10.0.4, MX1.2.4, TX2.0.4 */
#define  XTENSA_HWCIDSCHEME_RE_2013_4	 1100
#define  XTENSA_HWCIDVERS_RE_2013_4	 100
#define XTENSA_HWVERSION_RE_2014_5	250005	/* versions LX5.0.5, X10.0.5, MX1.2.5, TX2.0.5 */
#define  XTENSA_HWCIDSCHEME_RE_2014_5	 1100
#define  XTENSA_HWCIDVERS_RE_2014_5	 101
#define XTENSA_HWVERSION_RE_2015_6	250006	/* versions LX5.0.6, X10.0.6, MX1.2.6, TX2.0.6 */
#define  XTENSA_HWCIDSCHEME_RE_2015_6	 1100
#define  XTENSA_HWCIDVERS_RE_2015_6	 102
#define XTENSA_HWVERSION_RF_2014_0	260000	/* versions LX6.0.0, X11.0.0, MX1.3.0, TX3.0.0 */
#define  XTENSA_HWCIDSCHEME_RF_2014_0	 1100
#define  XTENSA_HWCIDVERS_RF_2014_0	 112
#define XTENSA_HWVERSION_RF_2014_1	260001	/* versions LX6.0.1, X11.0.1 */
#define  XTENSA_HWCIDSCHEME_RF_2014_1	 1100
#define  XTENSA_HWCIDVERS_RF_2014_1	 113
#define XTENSA_HWVERSION_RF_2015_2	260002	/* versions LX6.0.2, X11.0.2 */
#define  XTENSA_HWCIDSCHEME_RF_2015_2	 1100
#define  XTENSA_HWCIDVERS_RF_2015_2	 114
#define XTENSA_HWVERSION_RF_2015_3	260003	/* versions LX6.0.3, X11.0.3 */
#define  XTENSA_HWCIDSCHEME_RF_2015_3	 1100
#define  XTENSA_HWCIDVERS_RF_2015_3	 115
#define XTENSA_HWVERSION_RG_2015_0	270000	/* versions LX7.0.0, X12.0.0, NX1.0.0, SX1.0.0, MX1.4.0, TX4.0.0 */
#define  XTENSA_HWCIDSCHEME_RG_2015_0	 1100
#define  XTENSA_HWCIDVERS_RG_2015_0	 128

/* Software (Xtensa Tools) versions:  */
#define XTENSA_SWVERSION_T1020_0	102000	/* versions T1020.0 */
#define XTENSA_SWVERSION_T1020_1	102001	/* versions T1020.1 */
#define XTENSA_SWVERSION_T1020_2B	102002	/* versions T1020.2b */
#define XTENSA_SWVERSION_T1020_2	102002	/* versions T1020.2 */
#define XTENSA_SWVERSION_T1020_3	102003	/* versions T1020.3 */
#define XTENSA_SWVERSION_T1020_4	102004	/* versions T1020.4 */
#define XTENSA_SWVERSION_T1030_0	103000	/* versions T1030.0 */
#define XTENSA_SWVERSION_T1030_1	103001	/* versions T1030.1 */
#define XTENSA_SWVERSION_T1030_2	103002	/* versions T1030.2 */
#define XTENSA_SWVERSION_T1030_3	103003	/* versions T1030.3 */
#define XTENSA_SWVERSION_T1040_0	104000	/* versions T1040.0 */
#define XTENSA_SWVERSION_T1040_1	104001	/* versions T1040.1 */
#define XTENSA_SWVERSION_T1040_1P	104001	/* versions T1040.1-prehotfix */
#define XTENSA_SWVERSION_T1040_2	104002	/* versions T1040.2 */
#define XTENSA_SWVERSION_T1040_3	104003	/* versions T1040.3 */
#define XTENSA_SWVERSION_T1050_0	105000	/* versions T1050.0 */
#define XTENSA_SWVERSION_T1050_1	105001	/* versions T1050.1 */
#define XTENSA_SWVERSION_T1050_2	105002	/* versions T1050.2 */
#define XTENSA_SWVERSION_T1050_3	105003	/* versions T1050.3 */
#define XTENSA_SWVERSION_T1050_4	105004	/* versions T1050.4 */
#define XTENSA_SWVERSION_T1050_5	105005	/* versions T1050.5 */
#define XTENSA_SWVERSION_RA_2004_1	600000	/* versions 6.0.0 */
#define XTENSA_SWVERSION_RA_2005_1	600001	/* versions 6.0.1 */
#define XTENSA_SWVERSION_RA_2005_2	600002	/* versions 6.0.2 */
#define XTENSA_SWVERSION_RA_2005_3	600003	/* versions 6.0.3 */
#define XTENSA_SWVERSION_RA_2006_4	600004	/* versions 6.0.4 */
#define XTENSA_SWVERSION_RA_2006_5	600005	/* versions 6.0.5 */
#define XTENSA_SWVERSION_RA_2006_6	600006	/* versions 6.0.6 */
#define XTENSA_SWVERSION_RA_2007_7	600007	/* versions 6.0.7 */
#define XTENSA_SWVERSION_RA_2008_8	600008	/* versions 6.0.8 */
#define XTENSA_SWVERSION_RB_2006_0	700000	/* versions 7.0.0 */
#define XTENSA_SWVERSION_RB_2007_1	700001	/* versions 7.0.1 */
#define XTENSA_SWVERSION_RB_2007_2	701000	/* versions 7.1.0 */
#define XTENSA_SWVERSION_RB_2008_3	701001	/* versions 7.1.1 */
#define XTENSA_SWVERSION_RB_2008_4	701002	/* versions 7.1.2 */
#define XTENSA_SWVERSION_RB_2009_5	701003	/* versions 7.1.3 */
#define XTENSA_SWVERSION_RB_2007_2_MP	701100	/* versions 7.1.8-MP */
#define XTENSA_SWVERSION_RC_2009_0	800000	/* versions 8.0.0 */
#define XTENSA_SWVERSION_RC_2010_1	800001	/* versions 8.0.1 */
#define XTENSA_SWVERSION_RC_2010_2	800002	/* versions 8.0.2 */
#define XTENSA_SWVERSION_RC_2011_3	800003	/* versions 8.0.3 */
#define XTENSA_SWVERSION_RD_2010_0	900000	/* versions 9.0.0 */
#define XTENSA_SWVERSION_RD_2011_1	900001	/* versions 9.0.1 */
#define XTENSA_SWVERSION_RD_2011_2	900002	/* versions 9.0.2 */
#define XTENSA_SWVERSION_RD_2011_3	900003	/* versions 9.0.3 */
#define XTENSA_SWVERSION_RD_2012_4	900004	/* versions 9.0.4 */
#define XTENSA_SWVERSION_RD_2012_5	900005	/* versions 9.0.5 */
#define XTENSA_SWVERSION_RE_2012_0	1000000	/* versions 10.0.0 */
#define XTENSA_SWVERSION_RE_2012_1	1000001	/* versions 10.0.1 */
#define XTENSA_SWVERSION_RE_2013_2	1000002	/* versions 10.0.2 */
#define XTENSA_SWVERSION_RE_2013_3	1000003	/* versions 10.0.3 */
#define XTENSA_SWVERSION_RE_2013_4	1000004	/* versions 10.0.4 */
#define XTENSA_SWVERSION_RE_2014_5	1000005	/* versions 10.0.5 */
#define XTENSA_SWVERSION_RE_2015_6	1000006	/* versions 10.0.6 */
#define XTENSA_SWVERSION_RF_2014_0	1100000	/* versions 11.0.0 */
#define XTENSA_SWVERSION_RF_2014_1	1100001	/* versions 11.0.1 */
#define XTENSA_SWVERSION_RF_2015_2	1100002	/* versions 11.0.2 */
#define XTENSA_SWVERSION_RF_2015_3	1100003	/* versions 11.0.3 */
#define XTENSA_SWVERSION_RG_2015_0	1200000	/* versions 12.0.0 */
#define XTENSA_SWVERSION_T1040_1_PREHOTFIX	XTENSA_SWVERSION_T1040_1P	/* T1040.1-prehotfix */
#define XTENSA_SWVERSION_6_0_0	XTENSA_SWVERSION_RA_2004_1	/* 6.0.0 */
#define XTENSA_SWVERSION_6_0_1	XTENSA_SWVERSION_RA_2005_1	/* 6.0.1 */
#define XTENSA_SWVERSION_6_0_2	XTENSA_SWVERSION_RA_2005_2	/* 6.0.2 */
#define XTENSA_SWVERSION_6_0_3	XTENSA_SWVERSION_RA_2005_3	/* 6.0.3 */
#define XTENSA_SWVERSION_6_0_4	XTENSA_SWVERSION_RA_2006_4	/* 6.0.4 */
#define XTENSA_SWVERSION_6_0_5	XTENSA_SWVERSION_RA_2006_5	/* 6.0.5 */
#define XTENSA_SWVERSION_6_0_6	XTENSA_SWVERSION_RA_2006_6	/* 6.0.6 */
#define XTENSA_SWVERSION_6_0_7	XTENSA_SWVERSION_RA_2007_7	/* 6.0.7 */
#define XTENSA_SWVERSION_6_0_8	XTENSA_SWVERSION_RA_2008_8	/* 6.0.8 */
#define XTENSA_SWVERSION_7_0_0	XTENSA_SWVERSION_RB_2006_0	/* 7.0.0 */
#define XTENSA_SWVERSION_7_0_1	XTENSA_SWVERSION_RB_2007_1	/* 7.0.1 */
#define XTENSA_SWVERSION_7_1_0	XTENSA_SWVERSION_RB_2007_2	/* 7.1.0 */
#define XTENSA_SWVERSION_7_1_1	XTENSA_SWVERSION_RB_2008_3	/* 7.1.1 */
#define XTENSA_SWVERSION_7_1_2	XTENSA_SWVERSION_RB_2008_4	/* 7.1.2 */
#define XTENSA_SWVERSION_7_1_3	XTENSA_SWVERSION_RB_2009_5	/* 7.1.3 */
#define XTENSA_SWVERSION_7_1_8_MP	XTENSA_SWVERSION_RB_2007_2_MP	/* 7.1.8-MP */
#define XTENSA_SWVERSION_8_0_0	XTENSA_SWVERSION_RC_2009_0	/* 8.0.0 */
#define XTENSA_SWVERSION_8_0_1	XTENSA_SWVERSION_RC_2010_1	/* 8.0.1 */
#define XTENSA_SWVERSION_8_0_2	XTENSA_SWVERSION_RC_2010_2	/* 8.0.2 */
#define XTENSA_SWVERSION_8_0_3	XTENSA_SWVERSION_RC_2011_3	/* 8.0.3 */
#define XTENSA_SWVERSION_9_0_0	XTENSA_SWVERSION_RD_2010_0	/* 9.0.0 */
#define XTENSA_SWVERSION_9_0_1	XTENSA_SWVERSION_RD_2011_1	/* 9.0.1 */
#define XTENSA_SWVERSION_9_0_2	XTENSA_SWVERSION_RD_2011_2	/* 9.0.2 */
#define XTENSA_SWVERSION_9_0_3	XTENSA_SWVERSION_RD_2011_3	/* 9.0.3 */
#define XTENSA_SWVERSION_9_0_4	XTENSA_SWVERSION_RD_2012_4	/* 9.0.4 */
#define XTENSA_SWVERSION_9_0_5	XTENSA_SWVERSION_RD_2012_5	/* 9.0.5 */
#define XTENSA_SWVERSION_10_0_0	XTENSA_SWVERSION_RE_2012_0	/* 10.0.0 */
#define XTENSA_SWVERSION_10_0_1	XTENSA_SWVERSION_RE_2012_1	/* 10.0.1 */
#define XTENSA_SWVERSION_10_0_2	XTENSA_SWVERSION_RE_2013_2	/* 10.0.2 */
#define XTENSA_SWVERSION_10_0_3	XTENSA_SWVERSION_RE_2013_3	/* 10.0.3 */
#define XTENSA_SWVERSION_10_0_4	XTENSA_SWVERSION_RE_2013_4	/* 10.0.4 */
#define XTENSA_SWVERSION_10_0_5	XTENSA_SWVERSION_RE_2014_5	/* 10.0.5 */
#define XTENSA_SWVERSION_10_0_6	XTENSA_SWVERSION_RE_2015_6	/* 10.0.6 */
#define XTENSA_SWVERSION_11_0_0	XTENSA_SWVERSION_RF_2014_0	/* 11.0.0 */
#define XTENSA_SWVERSION_11_0_1	XTENSA_SWVERSION_RF_2014_1	/* 11.0.1 */
#define XTENSA_SWVERSION_11_0_2	XTENSA_SWVERSION_RF_2015_2	/* 11.0.2 */
#define XTENSA_SWVERSION_11_0_3	XTENSA_SWVERSION_RF_2015_3	/* 11.0.3 */
#define XTENSA_SWVERSION_12_0_0	XTENSA_SWVERSION_RG_2015_0	/* 12.0.0 */


/*  The current release:  */
#define XTENSA_RELEASE_NAME		"RF-2015.3"
#define XTENSA_RELEASE_CANONICAL_NAME	"RF-2015.3"

/*  The product versions within the current release:  */
#define XTENSA_SWVERSION		XTENSA_SWVERSION_RF_2015_3
#define XTENSA_SWVERSION_NAME		"11.0.3"
#define XTENSA_SWVERSION_CANONICAL_NAME	"11.0.3"
#define XTENSA_SWVERSION_MAJORMID_NAME	"11.0"
#define XTENSA_SWVERSION_MAJOR_NAME	"11"
/*  For product licensing (not necessarily same as *_MAJORMID_NAME):  */
#define XTENSA_SWVERSION_LICENSE_NAME	"11.0"

/*  Note:  there may be multiple hardware products in one release,
    and software can target older hardware, so the notion of
    "current" hardware versions is partially configuration dependent.
    For now, "current" hardware product version info is left out
    to avoid confusion.  */

#endif /*XTENSA_VERSIONS_H*/

