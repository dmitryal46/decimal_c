#include "test.h"

START_TEST(s21_is_less_or_equal_1) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_2) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x80000000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_3) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x80010000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_4) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x80010000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_5) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000001, 0x00000000, 0x00000000, 0x80060000}};
  s21_decimal val2 = {{0x00000001, 0x00000000, 0x00000000, 0x800B0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_6) {
  int true_res = 1;
  s21_decimal val1 = {{0x422F6348, 0x34B3C781, 0xB21A84F8, 0x80090000}};
  s21_decimal val2 = {{0xEA89EDF3, 0x1E3756A4, 0x1BD16E19, 0x800C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_7) {
  int true_res = 1;
  s21_decimal val1 = {{0xB2227359, 0x6CB488D1, 0x34A0F317, 0x00150000}};
  s21_decimal val2 = {{0x3C95977C, 0x360DE584, 0x32A8C843, 0x00050000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_8) {
  int true_res = 0;
  s21_decimal val1 = {{0x6006AE74, 0x40BA5F8C, 0x8359D738, 0x800F0000}};
  s21_decimal val2 = {{0x5A9C3DB3, 0x1788EC8C, 0x539DE1A0, 0x80050000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_9) {
  int true_res = 1;
  s21_decimal val1 = {{0x8271CBB9, 0x0554E9A3, 0xD85D1FB4, 0x80060000}};
  s21_decimal val2 = {{0xE24CF2E8, 0x0E86FADE, 0xF0F7931B, 0x80160000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_10) {
  int true_res = 0;
  s21_decimal val1 = {{0x16631DA7, 0x716D5126, 0x7B0D9959, 0x80130000}};
  s21_decimal val2 = {{0xE71B5385, 0x7900A1A5, 0x2BAB25E0, 0x80110000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_11) {
  int true_res = 0;
  s21_decimal val1 = {{0x94486892, 0xD09F3631, 0x133DB63F, 0x00150000}};
  s21_decimal val2 = {{0x345E1991, 0x166168F5, 0x24A0F059, 0x80190000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_12) {
  int true_res = 0;
  s21_decimal val1 = {{0xF5AD1C8B, 0x5F94C1B8, 0xB1F1B181, 0x00000000}};
  s21_decimal val2 = {{0x88461AEC, 0x6620B0E9, 0x03447075, 0x800C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_13) {
  int true_res = 0;
  s21_decimal val1 = {{0x60D3BF9B, 0x5ACB8C7C, 0x3A2A430D, 0x00170000}};
  s21_decimal val2 = {{0x89C34FA8, 0xD3403875, 0x931283DE, 0x80120000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_14) {
  int true_res = 1;
  s21_decimal val1 = {{0x73A898D4, 0x9CF64290, 0x6C115266, 0x800A0000}};
  s21_decimal val2 = {{0xD048ACA9, 0x79B7E242, 0xC81DF4C6, 0x00070000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_15) {
  int true_res = 1;
  s21_decimal val1 = {{0x7E6EE3B6, 0xF19144DE, 0xF5384697, 0x00180000}};
  s21_decimal val2 = {{0xB6D806AB, 0x720BCEAA, 0x43DF9CD8, 0x00010000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_16) {
  int true_res = 0;
  s21_decimal val1 = {{0x2C00C9BB, 0xFD01BF9A, 0xA03B60D2, 0x00070000}};
  s21_decimal val2 = {{0xCE0B82B7, 0xD30A6A07, 0x209A97FE, 0x80170000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_17) {
  int true_res = 0;
  s21_decimal val1 = {{0xCD2E88EA, 0xCADFA6F1, 0x346E66D0, 0x00030000}};
  s21_decimal val2 = {{0x23855BC9, 0x1F4180B7, 0x42462624, 0x00140000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_18) {
  int true_res = 1;
  s21_decimal val1 = {{0xC1B5FC45, 0x70E28B00, 0x905F5B99, 0x80050000}};
  s21_decimal val2 = {{0x1524FDCA, 0x51450797, 0x7DACADB8, 0x000B0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_19) {
  int true_res = 0;
  s21_decimal val1 = {{0x5769C690, 0x571773C9, 0x792D9E27, 0x80050000}};
  s21_decimal val2 = {{0x0D29F69D, 0xA691377C, 0xEDF522DE, 0x80040000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_20) {
  int true_res = 1;
  s21_decimal val1 = {{0xB45A02CB, 0x60D2EF7B, 0x90F3B813, 0x800A0000}};
  s21_decimal val2 = {{0x6522ACEC, 0x9E32FBE7, 0xF9C405E1, 0x800C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_21) {
  int true_res = 1;
  s21_decimal val1 = {{0x06DB95F8, 0xAD374215, 0xCBE772D5, 0x00120000}};
  s21_decimal val2 = {{0xF9996A98, 0xFBEACDB1, 0x6FD56122, 0x00020000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_22) {
  int true_res = 1;
  s21_decimal val1 = {{0xFAD3D56A, 0x633B4A93, 0x624CA62A, 0x000F0000}};
  s21_decimal val2 = {{0x09A6C15B, 0x02A92DA4, 0xF460656C, 0x00020000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x24CB6B2A, 0x67C42A94, 0x38BD41A6, 0x001A0000}};
  s21_decimal val2 = {{0x23C1390F, 0x1F8FBA60, 0x1B06F130, 0x80180000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_24) {
  int true_res = 0;
  s21_decimal val1 = {{0xC664498F, 0xF48B1754, 0x370EA1E7, 0x000A0000}};
  s21_decimal val2 = {{0x5631B19D, 0xC2F5CA92, 0xBED3EE37, 0x801A0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_25) {
  int true_res = 1;
  s21_decimal val1 = {{0xB8B7185D, 0x9183B1E8, 0x908D2A39, 0x80060000}};
  s21_decimal val2 = {{0xD713423B, 0x031C7231, 0x02072AF3, 0x001C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_26) {
  int true_res = 1;
  s21_decimal val1 = {{0x325F804C, 0x3D003AC9, 0x03B95CCF, 0x80190000}};
  s21_decimal val2 = {{0x325F804C, 0x3D003AC9, 0x03B95CCF, 0x000C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_27) {
  int true_res = 0;
  s21_decimal val1 = {{0xE3FC9245, 0x919B15D4, 0xFE8C75FC, 0x800D0000}};
  s21_decimal val2 = {{0xE3FC9245, 0x919B15D4, 0xFE8C75FC, 0x800C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_28) {
  int true_res = 1;
  s21_decimal val1 = {{0xF6171B6F, 0xB27FD8F1, 0x6816A3D1, 0x00090000}};
  s21_decimal val2 = {{0xF6171B6F, 0xB27FD8F1, 0x6816A3D1, 0x00070000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_29) {
  int true_res = 1;
  s21_decimal val1 = {{0xCA18C6F9, 0x28733AF5, 0xDCC532CD, 0x800C0000}};
  s21_decimal val2 = {{0xCA18C6F9, 0x28733AF5, 0xDCC532CD, 0x00020000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_30) {
  int true_res = 0;
  s21_decimal val1 = {{0xFFB994AE, 0x1144996A, 0xF3DE38F6, 0x000C0000}};
  s21_decimal val2 = {{0xFFB994AE, 0x1144996A, 0xF3DE38F6, 0x80100000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_31) {
  int true_res = 1;
  s21_decimal val1 = {{0x2138B0CD, 0xCAA71C8A, 0xDD5EB4CA, 0x801B0000}};
  s21_decimal val2 = {{0x2138B0CD, 0xCAA71C8A, 0xDD5EB4CA, 0x000C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_32) {
  int true_res = 1;
  s21_decimal val1 = {{0xF40CF7E1, 0xED525BD1, 0xE4BFFBB3, 0x800B0000}};
  s21_decimal val2 = {{0xF40CF7E1, 0xED525BD1, 0xE4BFFBB3, 0x00010000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_33) {
  int true_res = 0;
  s21_decimal val1 = {{0xDFB38D15, 0x74AEED22, 0x4F48CA66, 0x00080000}};
  s21_decimal val2 = {{0xDFB38D15, 0x74AEED22, 0x4F48CA66, 0x80070000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_34) {
  int true_res = 0;
  s21_decimal val1 = {{0xF433E680, 0x3A4962B4, 0x8AF8CD68, 0x00040000}};
  s21_decimal val2 = {{0xF433E680, 0x3A4962B4, 0x8AF8CD68, 0x80190000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_35) {
  int true_res = 1;
  s21_decimal val1 = {{0x502FCABE, 0x0EB01EF5, 0x0B2A1700, 0x80130000}};
  s21_decimal val2 = {{0x502FCABE, 0x0EB01EF5, 0x0B2A1700, 0x00020000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_36) {
  int true_res = 1;
  s21_decimal val1 = {{0x28344A1A, 0xBC546DA7, 0xF258FF8C, 0x80040000}};
  s21_decimal val2 = {{0x28344A1A, 0xBC546DA7, 0xF258FF8C, 0x00110000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_37) {
  int true_res = 1;
  s21_decimal val1 = {{0x9CA3CE0D, 0xE3FABBBB, 0x9B577322, 0x800B0000}};
  s21_decimal val2 = {{0x9CA3CE0D, 0xE3FABBBB, 0x9B577322, 0x00000000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_38) {
  int true_res = 0;
  s21_decimal val1 = {{0x68A8B625, 0x64D3DB12, 0xCCE9CE3E, 0x00090000}};
  s21_decimal val2 = {{0x68A8B625, 0x64D3DB12, 0xCCE9CE3E, 0x801B0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_39) {
  int true_res = 1;
  s21_decimal val1 = {{0xDFBE361E, 0x77751E61, 0xF6D1FC8E, 0x80060000}};
  s21_decimal val2 = {{0xDFBE361E, 0x77751E61, 0xF6D1FC8E, 0x000F0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_40) {
  int true_res = 0;
  s21_decimal val1 = {{0x165E9C8B, 0x2C0F422F, 0x69420A47, 0x00140000}};
  s21_decimal val2 = {{0x165E9C8B, 0x2C0F422F, 0x69420A47, 0x80020000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_41) {
  int true_res = 1;
  s21_decimal val1 = {{0xAD9A8B26, 0xFF0BC89B, 0x4A366CE0, 0x00090000}};
  s21_decimal val2 = {{0xAD9A8B26, 0xFF0BC89B, 0x4A366CE0, 0x00030000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_42) {
  int true_res = 1;
  s21_decimal val1 = {{0x30656B5B, 0x3D1FA9C9, 0x095F03CC, 0x001B0000}};
  s21_decimal val2 = {{0x30656B5B, 0x3D1FA9C9, 0x095F03CC, 0x00090000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x28EC4A22, 0x8F4495A7, 0x207D23F5, 0x00070000}};
  s21_decimal val2 = {{0x28EC4A22, 0x8F4495A7, 0x207D23F5, 0x800C0000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_44) {
  int true_res = 0;
  s21_decimal val1 = {{0xB2495BCD, 0x3E0B7195, 0xE028E0AF, 0x00190000}};
  s21_decimal val2 = {{0xB2495BCD, 0x3E0B7195, 0xE028E0AF, 0x80000000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_45) {
  int true_res = 1;
  s21_decimal val1 = {{0x4223C455, 0x88B35317, 0x211C6374, 0x00050000}};
  s21_decimal val2 = {{0x4223C455, 0x88B35317, 0x211C6374, 0x00040000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_46) {
  int true_res = 1;
  s21_decimal val1 = {{0x4A53C03B, 0x831C55D7, 0x31EB62AF, 0x80140000}};
  s21_decimal val2 = {{0x4A53C03B, 0x831C55D7, 0x31EB62AF, 0x00080000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_47) {
  int true_res = 1;
  s21_decimal val1 = {{0x37C518EF, 0x8BAEDCCF, 0x610E8D2B, 0x00170000}};
  s21_decimal val2 = {{0x37C518EF, 0x8BAEDCCF, 0x610E8D2B, 0x00170000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_48) {
  int true_res = 1;
  s21_decimal val1 = {{0x9C901271, 0x4EC82890, 0xD071C6EC, 0x001A0000}};
  s21_decimal val2 = {{0x9C901271, 0x4EC82890, 0xD071C6EC, 0x00010000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_49) {
  int true_res = 1;
  s21_decimal val1 = {{0xD1B84FAD, 0xE104CCBE, 0xF10ED7B7, 0x00170000}};
  s21_decimal val2 = {{0xD1B84FAD, 0xE104CCBE, 0xF10ED7B7, 0x00110000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_less_or_equal_50) {
  int true_res = 0;
  s21_decimal val1 = {{0xB03A3433, 0xBF5F047D, 0x1D17D332, 0x80130000}};
  s21_decimal val2 = {{0xB03A3433, 0xBF5F047D, 0x1D17D332, 0x80110000}};
  int s21_res = s21_is_less_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_is_less_or_equal(void) {
  Suite *s = suite_create("\033[45m-=S21_IS_LESS_OR_EQUAL=-\033[0m");
  TCase *tc = tcase_create("s21_is_less_or_equal_tc");
  tcase_add_test(tc, s21_is_less_or_equal_1);
  tcase_add_test(tc, s21_is_less_or_equal_2);
  tcase_add_test(tc, s21_is_less_or_equal_3);
  tcase_add_test(tc, s21_is_less_or_equal_4);
  tcase_add_test(tc, s21_is_less_or_equal_5);
  tcase_add_test(tc, s21_is_less_or_equal_6);
  tcase_add_test(tc, s21_is_less_or_equal_7);
  tcase_add_test(tc, s21_is_less_or_equal_8);
  tcase_add_test(tc, s21_is_less_or_equal_9);
  tcase_add_test(tc, s21_is_less_or_equal_10);
  tcase_add_test(tc, s21_is_less_or_equal_11);
  tcase_add_test(tc, s21_is_less_or_equal_12);
  tcase_add_test(tc, s21_is_less_or_equal_13);
  tcase_add_test(tc, s21_is_less_or_equal_14);
  tcase_add_test(tc, s21_is_less_or_equal_15);
  tcase_add_test(tc, s21_is_less_or_equal_16);
  tcase_add_test(tc, s21_is_less_or_equal_17);
  tcase_add_test(tc, s21_is_less_or_equal_18);
  tcase_add_test(tc, s21_is_less_or_equal_19);
  tcase_add_test(tc, s21_is_less_or_equal_20);
  tcase_add_test(tc, s21_is_less_or_equal_21);
  tcase_add_test(tc, s21_is_less_or_equal_22);
  tcase_add_test(tc, s21_is_less_or_equal_23);
  tcase_add_test(tc, s21_is_less_or_equal_24);
  tcase_add_test(tc, s21_is_less_or_equal_25);
  tcase_add_test(tc, s21_is_less_or_equal_26);
  tcase_add_test(tc, s21_is_less_or_equal_27);
  tcase_add_test(tc, s21_is_less_or_equal_28);
  tcase_add_test(tc, s21_is_less_or_equal_29);
  tcase_add_test(tc, s21_is_less_or_equal_30);
  tcase_add_test(tc, s21_is_less_or_equal_31);
  tcase_add_test(tc, s21_is_less_or_equal_32);
  tcase_add_test(tc, s21_is_less_or_equal_33);
  tcase_add_test(tc, s21_is_less_or_equal_34);
  tcase_add_test(tc, s21_is_less_or_equal_35);
  tcase_add_test(tc, s21_is_less_or_equal_36);
  tcase_add_test(tc, s21_is_less_or_equal_37);
  tcase_add_test(tc, s21_is_less_or_equal_38);
  tcase_add_test(tc, s21_is_less_or_equal_39);
  tcase_add_test(tc, s21_is_less_or_equal_40);
  tcase_add_test(tc, s21_is_less_or_equal_41);
  tcase_add_test(tc, s21_is_less_or_equal_42);
  tcase_add_test(tc, s21_is_less_or_equal_43);
  tcase_add_test(tc, s21_is_less_or_equal_44);
  tcase_add_test(tc, s21_is_less_or_equal_45);
  tcase_add_test(tc, s21_is_less_or_equal_46);
  tcase_add_test(tc, s21_is_less_or_equal_47);
  tcase_add_test(tc, s21_is_less_or_equal_48);
  tcase_add_test(tc, s21_is_less_or_equal_49);
  tcase_add_test(tc, s21_is_less_or_equal_50);

  suite_add_tcase(s, tc);
  return s;
}
