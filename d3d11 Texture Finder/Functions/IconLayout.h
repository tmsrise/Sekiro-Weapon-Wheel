#pragma once
#include "Functions.h"

std::vector<ImageInfoStruct> imageInfos;

void initializeImageStructs() {
imageInfos.emplace_back(SB_Boss, 750, 1750, 1280, 252, 252);
imageInfos.emplace_back(SB_Boss, 752, 1750, 1024, 252, 252);
imageInfos.emplace_back(SB_Boss, 754, 1644, 768, 252, 252);
imageInfos.emplace_back(SB_Boss, 756, 1594, 512, 252, 252);
imageInfos.emplace_back(SB_Boss, 970, 1594, 256, 252, 252);
imageInfos.emplace_back(SB_Boss, 972, 1594, 0, 252, 252);
imageInfos.emplace_back(SB_Boss, 973, 1750, 1536, 252, 252);
imageInfos.emplace_back(SB_Boss, 974, 1494, 1472, 252, 252);
imageInfos.emplace_back(SB_Boss, 975, 1494, 1216, 252, 252);
imageInfos.emplace_back(SB_Boss, 976, 1338, 512, 252, 252);
imageInfos.emplace_back(SB_Boss, 977, 1338, 256, 252, 252);
imageInfos.emplace_back(SB_Boss, 978, 1338, 0, 252, 252);
imageInfos.emplace_back(SB_Boss, 990, 1494, 1728, 252, 252);
imageInfos.emplace_back(SB_Boss, 1650, 676, 876, 252, 252);
imageInfos.emplace_back(SB_Icon, 1, 3840, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 10, 3840, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 11, 3840, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 12, 3840, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 20, 3840, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 21, 3840, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 22, 3840, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 23, 3584, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 30, 3584, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 31, 3584, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 40, 3584, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 43, 3584, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 44, 3584, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 45, 3584, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 50, 3584, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 51, 3328, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 52, 3328, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 60, 3328, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 61, 3328, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 62, 3328, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 63, 3328, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 70, 3328, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 71, 3328, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 72, 3072, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 80, 3072, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 90, 3072, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 150, 3072, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 151, 3072, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 152, 3072, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 153, 3072, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 160, 3072, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 161, 2816, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 162, 2816, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 163, 2816, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 170, 2816, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 171, 2816, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 172, 2816, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 173, 2816, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 180, 2816, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 181, 2560, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 182, 2560, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 183, 2560, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 190, 2560, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 191, 2560, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 192, 2560, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 193, 2560, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 250, 2560, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 251, 2304, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 260, 2304, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 261, 2304, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 262, 2304, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 400, 2304, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 401, 2304, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 450, 2304, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 510, 2304, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 520, 2048, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 530, 2048, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 531, 2048, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 532, 2048, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 533, 2048, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 534, 2048, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 535, 2048, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 536, 2048, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 537, 1792, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 538, 1792, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 539, 1792, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 540, 1792, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 542, 1792, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 543, 1792, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 544, 1792, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 550, 1792, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 551, 1536, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 552, 1536, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 561, 1536, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 562, 1536, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 563, 1536, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 565, 1536, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 566, 1536, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 571, 1536, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 572, 1280, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 573, 1280, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 574, 1280, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 588, 1280, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 589, 1280, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 650, 1280, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 651, 1280, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 652, 1280, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 720, 1024, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 800, 1024, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 801, 1024, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 802, 1024, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 810, 1024, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 811, 1024, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 818, 1024, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 819, 1024, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 820, 768, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 1000, 768, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 1100, 768, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 1101, 768, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 1102, 768, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 1103, 768, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 1104, 768, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 1105, 768, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 1106, 512, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 1108, 512, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 1109, 512, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 1150, 512, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 1151, 512, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 1152, 512, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 1153, 512, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 1154, 512, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 1155, 256, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 1156, 256, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 1158, 256, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 1159, 256, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 1200, 256, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 1201, 256, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 1202, 256, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 1203, 256, 0, 252, 252);
imageInfos.emplace_back(SB_Icon, 1204, 0, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon, 1205, 0, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon, 1206, 0, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon, 1207, 0, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon, 1208, 0, 768, 252, 252);
imageInfos.emplace_back(SB_Icon, 1209, 0, 512, 252, 252);
imageInfos.emplace_back(SB_Icon, 1210, 0, 256, 252, 252);
imageInfos.emplace_back(SB_Icon, 1212, 0, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1300, 256, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1310, 768, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1320, 768, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1330, 768, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1340, 768, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1350, 768, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1360, 768, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1370, 768, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1380, 512, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1400, 512, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1410, 512, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1420, 512, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1430, 512, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1440, 512, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1450, 512, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1510, 512, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1520, 768, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1530, 256, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1600, 256, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1610, 256, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1620, 256, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1630, 256, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1700, 256, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1710, 256, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1720, 0, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1750, 0, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1760, 0, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1770, 0, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1780, 0, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1800, 0, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1810, 0, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_02, 1830, 0, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 13, 1792, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 14, 3840, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 41, 3840, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 42, 3840, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 65, 3840, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 81, 3840, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 100, 3840, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 110, 3840, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 111, 3584, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 112, 3584, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 113, 3584, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 270, 3584, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 271, 3584, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 272, 3584, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 273, 3584, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 274, 3584, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 280, 3328, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 410, 3328, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 411, 3328, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 412, 3328, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 413, 3328, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 414, 3328, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 415, 3328, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 416, 3328, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 417, 3072, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 418, 3072, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 419, 3072, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 420, 3072, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 545, 3072, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 546, 3072, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 564, 3072, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 567, 3072, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 568, 2816, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 569, 2816, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 576, 2816, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 578, 2816, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 579, 2816, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 580, 2816, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 581, 2816, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 582, 2816, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 583, 2560, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 584, 2560, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 585, 2560, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 586, 2560, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 590, 2560, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 591, 2560, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 592, 2560, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 593, 2560, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 594, 2304, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 595, 2304, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 596, 2304, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 600, 2304, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 601, 2304, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 602, 2304, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 610, 2304, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 620, 2304, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 621, 2048, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 630, 2048, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 631, 2048, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 640, 2048, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 700, 2048, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 710, 2048, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 711, 2048, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 712, 2048, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 713, 3840, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 714, 1792, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 715, 1792, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 716, 1792, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 717, 1792, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 718, 1792, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 719, 1792, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 803, 1792, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 804, 1536, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 805, 1536, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 806, 1536, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 807, 1536, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 808, 1536, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 809, 1536, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 812, 1536, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 813, 1536, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 814, 1280, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 815, 1280, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 816, 1280, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 817, 1280, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 900, 1280, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 901, 1280, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 910, 1280, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 920, 1280, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 930, 1024, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 940, 1024, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 950, 1024, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 951, 1024, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 960, 1024, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 961, 1024, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 962, 1024, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1107, 1024, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1157, 768, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1160, 768, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1211, 768, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1213, 768, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1214, 768, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1215, 768, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1216, 768, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1217, 768, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1218, 512, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1219, 512, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1220, 512, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1221, 512, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1222, 512, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1223, 512, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1224, 512, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1225, 512, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1226, 256, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1227, 256, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1228, 256, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1229, 256, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1790, 256, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1820, 256, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1840, 256, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1850, 256, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1860, 0, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1870, 0, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1880, 0, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1890, 0, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1900, 0, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1910, 0, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 1920, 0, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_03, 2010, 0, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 252, 256, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 255, 768, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 421, 768, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 422, 768, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 423, 768, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 424, 768, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 425, 768, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 426, 768, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 427, 512, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 428, 512, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 429, 512, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 430, 512, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 431, 512, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 432, 512, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 433, 512, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 434, 512, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 435, 768, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 436, 256, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 437, 256, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 440, 256, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 441, 256, 768, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 442, 256, 512, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 443, 256, 256, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 1940, 256, 0, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 1997, 0, 1792, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 1998, 0, 1536, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 1999, 0, 1280, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 2720, 0, 1024, 252, 252);
imageInfos.emplace_back(SB_Icon_04, 2740, 0, 768, 252, 252);
	}