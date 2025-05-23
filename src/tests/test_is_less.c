#include "test.h"

START_TEST(s21_is_less_1) {
  int true_res = 0;
  s21_decimal val1 = {{0x57D373E1, 0x74A31546, 0xECBF089C, 0x00010000}};
  s21_decimal val2 = {{0x712D75B1, 0x4417C52E, 0x259B8BDF, 0x00180000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_2) {
  int true_res = 0;
  s21_decimal val1 = {{0x4216247B, 0xD8F8C5DE, 0x103C0B83, 0x00090000}};
  s21_decimal val2 = {{0xD0E24D7E, 0xF7EE7C67, 0xA1826B09, 0x00190000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_3) {
  int true_res = 0;
  s21_decimal val1 = {{0xB415BE5D, 0x52E56FCE, 0xB1F5E13E, 0x801C0000}};
  s21_decimal val2 = {{0xCA07C943, 0x0B7A6678, 0x814B755D, 0x80090000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_4) {
  int true_res = 1;
  s21_decimal val1 = {{0xD7D3F06E, 0xEA579F37, 0x981083CF, 0x80000000}};
  s21_decimal val2 = {{0x932B6C70, 0x7D4E28B1, 0xD59A906A, 0x00070000}};
  int s21_res = s21_is_less(val1, val2);

  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_5) {
  int true_res = 1;
  s21_decimal val1 = {{0x152F80F3, 0x8E8A4CA9, 0x024D48F0, 0x00180000}};
  s21_decimal val2 = {{0xC0B7E708, 0xC7C2A8B2, 0xF2B2C869, 0x00160000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_6) {
  int true_res = 1;
  s21_decimal val1 = {{0x04C5B08B, 0xA24E81C9, 0x256117E6, 0x80150000}};
  s21_decimal val2 = {{0xF070E19D, 0x980306AC, 0xA7CC93B6, 0x000A0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xCA5BD021, 0xA3863214, 0x81B02AEA, 0x001C0000}};
  s21_decimal val2 = {{0xBC742561, 0xD900222B, 0xBC5B165E, 0x80130000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_8) {
  int true_res = 0;
  s21_decimal val1 = {{0x7BA8F9E7, 0xC87C7BC9, 0xAB322666, 0x00080000}};
  s21_decimal val2 = {{0xF570F664, 0xEFC9D213, 0x94987315, 0x80050000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_9) {
  int true_res = 0;
  s21_decimal val1 = {{0x15EDFED9, 0xB5A06368, 0x883DE665, 0x000E0000}};
  s21_decimal val2 = {{0xA026F18A, 0x763FA37B, 0x8CC85751, 0x80050000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_10) {
  int true_res = 0;
  s21_decimal val1 = {{0xB24BAE39, 0x0ECC9A6F, 0xB71EA820, 0x000E0000}};
  s21_decimal val2 = {{0x7DF20136, 0x431E6317, 0x3AB2A5F7, 0x00150000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_11) {
  int true_res = 0;
  s21_decimal val1 = {{0x482D62C4, 0x757C6ACE, 0x1F535F9F, 0x00030000}};
  s21_decimal val2 = {{0x8DAEA7C5, 0xEA8F8C5E, 0x4CF09B7F, 0x80190000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_12) {
  int true_res = 0;
  s21_decimal val1 = {{0xDAF5646E, 0x46C26FE8, 0x39184E04, 0x00070000}};
  s21_decimal val2 = {{0x99E68CF1, 0xEABB1F4E, 0x4029966E, 0x80120000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_13) {
  int true_res = 0;
  s21_decimal val1 = {{0xE0760787, 0x1FD77DFD, 0x42645105, 0x80150000}};
  s21_decimal val2 = {{0x41724525, 0x6D77992A, 0x81721105, 0x80040000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_14) {
  int true_res = 0;
  s21_decimal val1 = {{0x91807A78, 0x5828791E, 0x6AEC92EC, 0x80170000}};
  s21_decimal val2 = {{0xEDE5440E, 0xB73901CE, 0x038B3CC2, 0x80040000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_15) {
  int true_res = 1;
  s21_decimal val1 = {{0x1E9CB0C1, 0xC3A613C1, 0xB43747ED, 0x80140000}};
  s21_decimal val2 = {{0x8822F489, 0x228A7B3A, 0x2C90FA44, 0x80180000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_16) {
  int true_res = 1;
  s21_decimal val1 = {{0xC439DC9A, 0x029E414E, 0xA3B15454, 0x80010000}};
  s21_decimal val2 = {{0xD63977A2, 0x16FFB436, 0x6B445860, 0x00100000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_17) {
  int true_res = 0;
  s21_decimal val1 = {{0x6E34301A, 0xBA4EB415, 0x5992CBA3, 0x00140000}};
  s21_decimal val2 = {{0x3A623EFC, 0xFE42FDEF, 0x8018C7FC, 0x001B0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_18) {
  int true_res = 0;
  s21_decimal val1 = {{0xC315B8E8, 0xACA4B0C4, 0x286C707A, 0x000F0000}};
  s21_decimal val2 = {{0x588C41DF, 0x5506BD4F, 0x26BA03A9, 0x80180000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_19) {
  int true_res = 1;
  s21_decimal val1 = {{0xC243085A, 0xC47883DB, 0x06C40212, 0x80070000}};
  s21_decimal val2 = {{0x5B2BF0A6, 0xE0392EEB, 0x4AEDA21F, 0x00050000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_20) {
  int true_res = 1;
  s21_decimal val1 = {{0xD01ED995, 0xA3BE8EC4, 0x0EA680D1, 0x80140000}};
  s21_decimal val2 = {{0x0D7F38D8, 0x4CCE317C, 0x39F40365, 0x80180000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_21) {
  int true_res = 1;
  s21_decimal val1 = {{0x627CBD00, 0x15EC6CD2, 0x3451B718, 0x80050000}};
  s21_decimal val2 = {{0xF7707259, 0x77876817, 0x9D62CD20, 0x00010000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_22) {
  int true_res = 1;
  s21_decimal val1 = {{0xD819531A, 0x7265BFB0, 0xC0991319, 0x80120000}};
  s21_decimal val2 = {{0x4E27C4FD, 0x336F0294, 0x1651AB96, 0x80160000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x81CABFC8, 0xA1842874, 0x956F79CA, 0x801B0000}};
  s21_decimal val2 = {{0xF41E9A7A, 0x394891C5, 0x763F548F, 0x80110000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_24) {
  int true_res = 1;
  s21_decimal val1 = {{0x3A6434D0, 0xFBA62919, 0x20C19A67, 0x00070000}};
  s21_decimal val2 = {{0x6339F8DA, 0x15CE1B20, 0x0D369711, 0x00000000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_25) {
  int true_res = 1;
  s21_decimal val1 = {{0x8C1A7C60, 0xF7CA31FC, 0x389E7815, 0x80070000}};
  s21_decimal val2 = {{0xEE79FB0A, 0x286E42DF, 0xC3321BF9, 0x00010000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_26) {
  int true_res = 1;
  s21_decimal val1 = {{0x90AAE8DD, 0x077D29DF, 0x63B53C9B, 0x800C0000}};
  s21_decimal val2 = {{0x14BD07C8, 0xB6486E49, 0x33F60117, 0x00100000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_27) {
  int true_res = 0;
  s21_decimal val1 = {{0xFA2482B1, 0x1B266F92, 0x6C9BFF21, 0x000F0000}};
  s21_decimal val2 = {{0x97DCF4C0, 0xD3E287BA, 0xD8119EB4, 0x80000000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_28) {
  int true_res = 1;
  s21_decimal val1 = {{0xC33329FB, 0xCFC67E6E, 0xDCB00345, 0x000F0000}};
  s21_decimal val2 = {{0x383FD562, 0x6E77338A, 0xDAB39925, 0x00050000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_29) {
  int true_res = 1;
  s21_decimal val1 = {{0x50A9D6E3, 0x82ABDD78, 0x1BC9E69D, 0x80060000}};
  s21_decimal val2 = {{0x05544A0C, 0xEED6E09C, 0x650C0DFF, 0x800D0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_30) {
  int true_res = 1;
  s21_decimal val1 = {{0xC8B225EC, 0x90CC2EAF, 0x78E59FDB, 0x80110000}};
  s21_decimal val2 = {{0x7CD3B517, 0x7E7CADA3, 0x6189F810, 0x00090000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_31) {
  int true_res = 1;
  s21_decimal val1 = {{0x42F1BC6A, 0xED2B43C2, 0xF5F54C61, 0x80180000}};
  s21_decimal val2 = {{0xBEE6F280, 0xF7CFE2BF, 0xE4197A44, 0x00010000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_32) {
  int true_res = 0;
  s21_decimal val1 = {{0xED461447, 0x246A38F4, 0x02F55A1E, 0x80190000}};
  s21_decimal val2 = {{0xB53B6B78, 0xB52AE1C1, 0x3903C67A, 0x80040000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_33) {
  int true_res = 1;
  s21_decimal val1 = {{0x7F606841, 0xA3728DFA, 0x6C429DBD, 0x800C0000}};
  s21_decimal val2 = {{0x797F0F90, 0x59028757, 0x9D4E9953, 0x00110000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_34) {
  int true_res = 0;
  s21_decimal val1 = {{0xE9DAB046, 0xF8D69711, 0xF9378862, 0x00080000}};
  s21_decimal val2 = {{0x012C6E15, 0x1A595DB2, 0xABA67AAB, 0x00190000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_35) {
  int true_res = 1;
  s21_decimal val1 = {{0x7FFCFBF9, 0x0F3A9E86, 0x9A88F7AA, 0x00160000}};
  s21_decimal val2 = {{0x3C34C40F, 0xC735BDF5, 0xD973349C, 0x000C0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_36) {
  int true_res = 1;
  s21_decimal val1 = {{0x085D081B, 0x69F4AD6A, 0x9E325254, 0x80050000}};
  s21_decimal val2 = {{0x199562D7, 0x25CAF4F0, 0xAF4B18A2, 0x801C0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_37) {
  int true_res = 1;
  s21_decimal val1 = {{0xC26A896C, 0x19CBE2B6, 0xD56BC4C3, 0x80150000}};
  s21_decimal val2 = {{0x2D1B639D, 0x52F9DE64, 0xC6CA08BF, 0x00110000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_38) {
  int true_res = 0;
  s21_decimal val1 = {{0xE3632775, 0x92208E9D, 0x52BBB0F2, 0x00050000}};
  s21_decimal val2 = {{0x01A259B6, 0xDFC8A2C2, 0x715D80B0, 0x80100000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_39) {
  int true_res = 0;
  s21_decimal val1 = {{0x004F20A2, 0xAB7157E1, 0x89537B7E, 0x000E0000}};
  s21_decimal val2 = {{0xE2037A87, 0x7C3DA91B, 0x8CF74459, 0x80010000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_40) {
  int true_res = 1;
  s21_decimal val1 = {{0x6BEDC1A8, 0x773F8D55, 0x59886C36, 0x80030000}};
  s21_decimal val2 = {{0x9778C776, 0x9B8EE593, 0x79F40530, 0x800C0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_41) {
  int true_res = 0;
  s21_decimal val1 = {{0x50DE73CE, 0x2C5EF84A, 0xC7D8D8A3, 0x00170000}};
  s21_decimal val2 = {{0x2E9B1217, 0x33504DD4, 0xBD18398F, 0x001A0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_42) {
  int true_res = 0;
  s21_decimal val1 = {{0xF343642F, 0x9BA4A87D, 0x90AD1403, 0x00010000}};
  s21_decimal val2 = {{0x90540C80, 0x20D5EEEA, 0xF57C9C9F, 0x001A0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x55EDB8CD, 0x781EE567, 0xA56DEF1C, 0x00060000}};
  s21_decimal val2 = {{0xD30450AD, 0x46EBB107, 0x639638A2, 0x80190000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_44) {
  int true_res = 1;
  s21_decimal val1 = {{0x66AB749A, 0xB44E6399, 0x01182523, 0x801A0000}};
  s21_decimal val2 = {{0x2B6AB824, 0x2C0EEF7D, 0x5DE4268F, 0x000D0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_45) {
  int true_res = 1;
  s21_decimal val1 = {{0xBED3D37C, 0xE58B8560, 0x688F7827, 0x80090000}};
  s21_decimal val2 = {{0x5B0B16C2, 0xE69B4AF3, 0xB7E41128, 0x800F0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_46) {
  int true_res = 0;
  s21_decimal val1 = {{0x166043F0, 0xA8E7FD68, 0x9F491809, 0x00010000}};
  s21_decimal val2 = {{0xE28D3895, 0x6F1E770B, 0x2224AD4F, 0x00070000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_47) {
  int true_res = 0;
  s21_decimal val1 = {{0xD80CDF6F, 0xB7346A44, 0x590E3CB2, 0x80100000}};
  s21_decimal val2 = {{0xE151F00E, 0xF56B7DFD, 0x2119D362, 0x800A0000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xAD23FC95, 0xAF1BE392, 0x3C3E24F7, 0x800F0000}};
  s21_decimal val2 = {{0xA9DB192B, 0x737C1A23, 0x296CEEA6, 0x80050000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_49) {
  int true_res = 0;
  s21_decimal val1 = {{0x2F2176B0, 0x83B84C81, 0xB9C6B4FF, 0x000E0000}};
  s21_decimal val2 = {{0x0BD09345, 0xA871394E, 0x0ECA483A, 0x80000000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_50) {
  int true_res = 1;
  s21_decimal val1 = {{0x9BE59354, 0x45539467, 0x79DA4E99, 0x80020000}};
  s21_decimal val2 = {{0x402D9C27, 0xCBB17E88, 0x12770054, 0x00140000}};
  int s21_res = s21_is_less(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_is_less(void) {
  Suite *s = suite_create("\033[45m-=S21_IS_LESS=-\033[0m");
  TCase *tc = tcase_create("s21_is_less_tc");

  tcase_add_test(tc, s21_is_less_1);
  tcase_add_test(tc, s21_is_less_2);
  tcase_add_test(tc, s21_is_less_3);
  tcase_add_test(tc, s21_is_less_4);
  tcase_add_test(tc, s21_is_less_5);
  tcase_add_test(tc, s21_is_less_6);
  tcase_add_test(tc, s21_is_less_7);
  tcase_add_test(tc, s21_is_less_8);
  tcase_add_test(tc, s21_is_less_9);
  tcase_add_test(tc, s21_is_less_10);
  tcase_add_test(tc, s21_is_less_11);
  tcase_add_test(tc, s21_is_less_12);
  tcase_add_test(tc, s21_is_less_13);
  tcase_add_test(tc, s21_is_less_14);
  tcase_add_test(tc, s21_is_less_15);
  tcase_add_test(tc, s21_is_less_16);
  tcase_add_test(tc, s21_is_less_17);
  tcase_add_test(tc, s21_is_less_18);
  tcase_add_test(tc, s21_is_less_19);
  tcase_add_test(tc, s21_is_less_20);
  tcase_add_test(tc, s21_is_less_21);
  tcase_add_test(tc, s21_is_less_22);
  tcase_add_test(tc, s21_is_less_23);
  tcase_add_test(tc, s21_is_less_24);
  tcase_add_test(tc, s21_is_less_25);
  tcase_add_test(tc, s21_is_less_26);
  tcase_add_test(tc, s21_is_less_27);
  tcase_add_test(tc, s21_is_less_28);
  tcase_add_test(tc, s21_is_less_29);
  tcase_add_test(tc, s21_is_less_30);
  tcase_add_test(tc, s21_is_less_31);
  tcase_add_test(tc, s21_is_less_32);
  tcase_add_test(tc, s21_is_less_33);
  tcase_add_test(tc, s21_is_less_34);
  tcase_add_test(tc, s21_is_less_35);
  tcase_add_test(tc, s21_is_less_36);
  tcase_add_test(tc, s21_is_less_37);
  tcase_add_test(tc, s21_is_less_38);
  tcase_add_test(tc, s21_is_less_39);
  tcase_add_test(tc, s21_is_less_40);
  tcase_add_test(tc, s21_is_less_41);
  tcase_add_test(tc, s21_is_less_42);
  tcase_add_test(tc, s21_is_less_43);
  tcase_add_test(tc, s21_is_less_44);
  tcase_add_test(tc, s21_is_less_45);
  tcase_add_test(tc, s21_is_less_46);
  tcase_add_test(tc, s21_is_less_47);
  tcase_add_test(tc, s21_is_less_48);
  tcase_add_test(tc, s21_is_less_49);
  tcase_add_test(tc, s21_is_less_50);

  suite_add_tcase(s, tc);
  return s;
}
