#include "test.h"

START_TEST(s21_is_greater_or_equal_1) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_2) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x80000000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_3) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x80010000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_4) {
  int true_res = 1;
  s21_decimal val1 = {{0x00000000, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal val2 = {{0x00000000, 0x00000000, 0x00000000, 0x80010000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_5) {
  int true_res = 0;
  s21_decimal val1 = {{0x00000001, 0x00000000, 0x00000000, 0x80060000}};
  s21_decimal val2 = {{0x00000001, 0x00000000, 0x00000000, 0x800B0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_6) {
  int true_res = 1;
  s21_decimal val1 = {{0xF22AF21A, 0x172B164E, 0x6424540C, 0x800C0000}};
  s21_decimal val2 = {{0x682347D8, 0x44A406E0, 0x810E6A6E, 0x800C0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_7) {
  int true_res = 0;
  s21_decimal val1 = {{0x7C0F21F8, 0xB4B6196A, 0xC6414A06, 0x801A0000}};
  s21_decimal val2 = {{0x562DF7B9, 0xDF4C587E, 0x86278564, 0x801A0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_8) {
  int true_res = 1;
  s21_decimal val1 = {{0x9820EC86, 0xAC87126A, 0xDB9DBCD3, 0x80040000}};
  s21_decimal val2 = {{0xEA4EE893, 0xE45BD02B, 0xE6991072, 0x80040000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_9) {
  int true_res = 0;
  s21_decimal val1 = {{0x36567F61, 0x4C509A37, 0x2231C8ED, 0x00000000}};
  s21_decimal val2 = {{0x4637878B, 0x70273A81, 0xF0D238A4, 0x00000000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_10) {
  int true_res = 1;
  s21_decimal val1 = {{0x425D9FBB, 0xE059B553, 0x186983BD, 0x80110000}};
  s21_decimal val2 = {{0xECB91DBA, 0xAC0D6788, 0x32F9813F, 0x80110000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_11) {
  int true_res = 0;
  s21_decimal val1 = {{0xD76E1B7F, 0x56471757, 0x51466574, 0x80120000}};
  s21_decimal val2 = {{0x27A69919, 0xAC6668AA, 0x301F3B2B, 0x80120000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x0A2ECCAA, 0xCCA8B8B6, 0x147FE317, 0x00110000}};
  s21_decimal val2 = {{0x6C31CBCB, 0x5E7E3334, 0x48152F3F, 0x00110000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_13) {
  int true_res = 0;
  s21_decimal val1 = {{0xC8D69F55, 0x8F427878, 0x8732B58F, 0x000A0000}};
  s21_decimal val2 = {{0x8FF5FE40, 0xA95AB153, 0xB894E50F, 0x000A0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_14) {
  int true_res = 0;
  s21_decimal val1 = {{0x720DAAC2, 0xC1B414C9, 0xEB76D28B, 0x800D0000}};
  s21_decimal val2 = {{0xB01F330A, 0xF6EAC05C, 0x157B077F, 0x800D0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_15) {
  int true_res = 1;
  s21_decimal val1 = {{0x175FFDAD, 0x1DAD67C9, 0xBB23945F, 0x000D0000}};
  s21_decimal val2 = {{0xB191B24A, 0x34A91334, 0x7240459F, 0x000D0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_16) {
  int true_res = 1;
  s21_decimal val1 = {{0xF38A986D, 0x192D8D40, 0xD999CE6D, 0x00130000}};
  s21_decimal val2 = {{0x43DA11FC, 0x2311ABB4, 0x9A85AA5D, 0x00130000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_17) {
  int true_res = 0;
  s21_decimal val1 = {{0x91D260C7, 0xE2BBD6D7, 0xF769E673, 0x80140000}};
  s21_decimal val2 = {{0xE2E90BF1, 0x7D6239D0, 0xDC4C94CF, 0x80140000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_18) {
  int true_res = 0;
  s21_decimal val1 = {{0xE7C51672, 0x9CB642EE, 0x0B35766F, 0x00010000}};
  s21_decimal val2 = {{0x0B9D855B, 0x580981AE, 0x8DB60C5D, 0x00010000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_19) {
  int true_res = 0;
  s21_decimal val1 = {{0x5E6FAB24, 0x40C43E2D, 0xFFB4CCCA, 0x80170000}};
  s21_decimal val2 = {{0x71D6E6BF, 0x652C85FD, 0x2318BF54, 0x80170000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_20) {
  int true_res = 1;
  s21_decimal val1 = {{0xB436DD4B, 0xB0C32518, 0x8DD8E1E1, 0x80040000}};
  s21_decimal val2 = {{0x5A4AF31B, 0x9C6863C2, 0x9FF6E16C, 0x80040000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_21) {
  int true_res = 1;
  s21_decimal val1 = {{0xC601E7DB, 0xA22CCE68, 0xA0C352BC, 0x80150000}};
  s21_decimal val2 = {{0xD969AF54, 0x8C86BE56, 0xC1345A4E, 0x80150000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_22) {
  int true_res = 0;
  s21_decimal val1 = {{0x149F31F6, 0xADDB6D6F, 0x833CB8E7, 0x801A0000}};
  s21_decimal val2 = {{0xF11ACBF5, 0xC7A8287E, 0x5F388B13, 0x801A0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_23) {
  int true_res = 1;
  s21_decimal val1 = {{0x58265D56, 0x70005B17, 0x49D2348C, 0x800E0000}};
  s21_decimal val2 = {{0x509BC1D0, 0xA0309C72, 0x8193E248, 0x800E0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_24) {
  int true_res = 1;
  s21_decimal val1 = {{0xBF5BD266, 0x477C4D04, 0xF8E83244, 0x001B0000}};
  s21_decimal val2 = {{0x94A6C1C8, 0x2BB6102A, 0x787323BA, 0x001B0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_25) {
  int true_res = 1;
  s21_decimal val1 = {{0x92A860C2, 0xDB1FEE6A, 0x829416CC, 0x80190000}};
  s21_decimal val2 = {{0x40AD1B61, 0x5C54FD34, 0xD4AE3684, 0x80190000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_26) {
  int true_res = 1;
  s21_decimal val1 = {{0xB9DE33F4, 0x2A6CA682, 0xA6F44C43, 0x00140000}};
  s21_decimal val2 = {{0xB9DE33F4, 0x2A6CA682, 0xA6F44C43, 0x001B0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x096A8E79, 0x68941E98, 0xA527CA15, 0x80040000}};
  s21_decimal val2 = {{0x096A8E79, 0x68941E98, 0xA527CA15, 0x80170000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_28) {
  int true_res = 0;
  s21_decimal val1 = {{0x71D12DB4, 0x1E45888C, 0x596BA129, 0x00160000}};
  s21_decimal val2 = {{0x71D12DB4, 0x1E45888C, 0x596BA129, 0x00130000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_29) {
  int true_res = 1;
  s21_decimal val1 = {{0x6CCEAFE1, 0x61FD6254, 0x3D166DFF, 0x00120000}};
  s21_decimal val2 = {{0x6CCEAFE1, 0x61FD6254, 0x3D166DFF, 0x80170000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_30) {
  int true_res = 0;
  s21_decimal val1 = {{0xA29B38D5, 0x36A8AD67, 0x4397464D, 0x800C0000}};
  s21_decimal val2 = {{0xA29B38D5, 0x36A8AD67, 0x4397464D, 0x000E0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_31) {
  int true_res = 0;
  s21_decimal val1 = {{0xD5F77D35, 0xBB001EA3, 0xE955EC0E, 0x800C0000}};
  s21_decimal val2 = {{0xD5F77D35, 0xBB001EA3, 0xE955EC0E, 0x000E0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_32) {
  int true_res = 0;
  s21_decimal val1 = {{0xCC396D2D, 0x6CA90915, 0x739DF7BA, 0x00090000}};
  s21_decimal val2 = {{0xCC396D2D, 0x6CA90915, 0x739DF7BA, 0x00040000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_33) {
  int true_res = 0;
  s21_decimal val1 = {{0x806D4C36, 0x143E776E, 0x54F2642A, 0x80090000}};
  s21_decimal val2 = {{0x806D4C36, 0x143E776E, 0x54F2642A, 0x801A0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_34) {
  int true_res = 1;
  s21_decimal val1 = {{0x19CB2E92, 0xBB9B8C07, 0x70489B33, 0x00100000}};
  s21_decimal val2 = {{0x19CB2E92, 0xBB9B8C07, 0x70489B33, 0x80010000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x48B7541C, 0x75DC74BE, 0xBE26FE8B, 0x80060000}};
  s21_decimal val2 = {{0x48B7541C, 0x75DC74BE, 0xBE26FE8B, 0x00160000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_36) {
  int true_res = 0;
  s21_decimal val1 = {{0x138E02F0, 0xB8E6EC01, 0x6D6FD3DB, 0x001C0000}};
  s21_decimal val2 = {{0x138E02F0, 0xB8E6EC01, 0x6D6FD3DB, 0x00070000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_37) {
  int true_res = 1;
  s21_decimal val1 = {{0xAD45493F, 0xA3AD670C, 0xF2955E74, 0x80090000}};
  s21_decimal val2 = {{0xAD45493F, 0xA3AD670C, 0xF2955E74, 0x80000000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_38) {
  int true_res = 1;
  s21_decimal val1 = {{0x2697E84F, 0x0B634550, 0x8F85E919, 0x00080000}};
  s21_decimal val2 = {{0x2697E84F, 0x0B634550, 0x8F85E919, 0x80100000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_39) {
  int true_res = 1;
  s21_decimal val1 = {{0x882DB1BA, 0xB7FB6549, 0x0E107ED7, 0x000F0000}};
  s21_decimal val2 = {{0x882DB1BA, 0xB7FB6549, 0x0E107ED7, 0x00190000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_40) {
  int true_res = 0;
  s21_decimal val1 = {{0xB96CB850, 0x6A83FCBC, 0xF793BCD8, 0x80090000}};
  s21_decimal val2 = {{0xB96CB850, 0x6A83FCBC, 0xF793BCD8, 0x00190000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_41) {
  int true_res = 0;
  s21_decimal val1 = {{0xD17D406E, 0x18BB63B2, 0xEA7E31EA, 0x800B0000}};
  s21_decimal val2 = {{0xD17D406E, 0x18BB63B2, 0xEA7E31EA, 0x00050000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_42) {
  int true_res = 0;
  s21_decimal val1 = {{0x489AF100, 0xFD5C529B, 0x027D4F27, 0x001C0000}};
  s21_decimal val2 = {{0x489AF100, 0xFD5C529B, 0x027D4F27, 0x00030000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_43) {
  int true_res = 1;
  s21_decimal val1 = {{0x4D42B391, 0x5A5F0A07, 0xA932C708, 0x00050000}};
  s21_decimal val2 = {{0x4D42B391, 0x5A5F0A07, 0xA932C708, 0x001C0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_44) {
  int true_res = 0;
  s21_decimal val1 = {{0x158E452C, 0x5F05413A, 0x9736AD1E, 0x00150000}};
  s21_decimal val2 = {{0x158E452C, 0x5F05413A, 0x9736AD1E, 0x000B0000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_45) {
  int true_res = 1;
  s21_decimal val1 = {{0xAE3ECA6A, 0x3ECBE73B, 0x6352AD77, 0x00100000}};
  s21_decimal val2 = {{0xAE3ECA6A, 0x3ECBE73B, 0x6352AD77, 0x80120000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_46) {
  int true_res = 0;
  s21_decimal val1 = {{0x5AEF3DFC, 0x04F7C004, 0x5099B09B, 0x80120000}};
  s21_decimal val2 = {{0x5AEF3DFC, 0x04F7C004, 0x5099B09B, 0x00160000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_47) {
  int true_res = 0;
  s21_decimal val1 = {{0xAD22C1B1, 0x3E7D3B5B, 0x4EBA7983, 0x00190000}};
  s21_decimal val2 = {{0xAD22C1B1, 0x3E7D3B5B, 0x4EBA7983, 0x00050000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xCF2BE58B, 0x9D2FD444, 0x66033A33, 0x80060000}};
  s21_decimal val2 = {{0xCF2BE58B, 0x9D2FD444, 0x66033A33, 0x00120000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_49) {
  int true_res = 1;
  s21_decimal val1 = {{0xF6572618, 0xBF5BA903, 0xB6C114B5, 0x00090000}};
  s21_decimal val2 = {{0xF6572618, 0xBF5BA903, 0xB6C114B5, 0x00090000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_is_greater_or_equal_50) {
  int true_res = 0;
  s21_decimal val1 = {{0xBF2A881D, 0x43C0FF7C, 0xBDD75932, 0x80120000}};
  s21_decimal val2 = {{0xBF2A881D, 0x43C0FF7C, 0xBDD75932, 0x00120000}};
  int s21_res = s21_is_greater_or_equal(val1, val2);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_is_greater_or_equal(void) {
  Suite *s = suite_create("\033[45m-=S21_IS_GREATER_OR_EQUAL=-\033[0m");
  TCase *tc = tcase_create("s21_is_greater_or_equal_tc");

  tcase_add_test(tc, s21_is_greater_or_equal_1);
  tcase_add_test(tc, s21_is_greater_or_equal_2);
  tcase_add_test(tc, s21_is_greater_or_equal_3);
  tcase_add_test(tc, s21_is_greater_or_equal_4);
  tcase_add_test(tc, s21_is_greater_or_equal_5);
  tcase_add_test(tc, s21_is_greater_or_equal_6);
  tcase_add_test(tc, s21_is_greater_or_equal_7);
  tcase_add_test(tc, s21_is_greater_or_equal_8);
  tcase_add_test(tc, s21_is_greater_or_equal_9);
  tcase_add_test(tc, s21_is_greater_or_equal_10);
  tcase_add_test(tc, s21_is_greater_or_equal_11);
  tcase_add_test(tc, s21_is_greater_or_equal_12);
  tcase_add_test(tc, s21_is_greater_or_equal_13);
  tcase_add_test(tc, s21_is_greater_or_equal_14);
  tcase_add_test(tc, s21_is_greater_or_equal_15);
  tcase_add_test(tc, s21_is_greater_or_equal_16);
  tcase_add_test(tc, s21_is_greater_or_equal_17);
  tcase_add_test(tc, s21_is_greater_or_equal_18);
  tcase_add_test(tc, s21_is_greater_or_equal_19);
  tcase_add_test(tc, s21_is_greater_or_equal_20);
  tcase_add_test(tc, s21_is_greater_or_equal_21);
  tcase_add_test(tc, s21_is_greater_or_equal_22);
  tcase_add_test(tc, s21_is_greater_or_equal_23);
  tcase_add_test(tc, s21_is_greater_or_equal_24);
  tcase_add_test(tc, s21_is_greater_or_equal_25);
  tcase_add_test(tc, s21_is_greater_or_equal_26);
  tcase_add_test(tc, s21_is_greater_or_equal_27);
  tcase_add_test(tc, s21_is_greater_or_equal_28);
  tcase_add_test(tc, s21_is_greater_or_equal_29);
  tcase_add_test(tc, s21_is_greater_or_equal_30);
  tcase_add_test(tc, s21_is_greater_or_equal_31);
  tcase_add_test(tc, s21_is_greater_or_equal_32);
  tcase_add_test(tc, s21_is_greater_or_equal_33);
  tcase_add_test(tc, s21_is_greater_or_equal_34);
  tcase_add_test(tc, s21_is_greater_or_equal_35);
  tcase_add_test(tc, s21_is_greater_or_equal_36);
  tcase_add_test(tc, s21_is_greater_or_equal_37);
  tcase_add_test(tc, s21_is_greater_or_equal_38);
  tcase_add_test(tc, s21_is_greater_or_equal_39);
  tcase_add_test(tc, s21_is_greater_or_equal_40);
  tcase_add_test(tc, s21_is_greater_or_equal_41);
  tcase_add_test(tc, s21_is_greater_or_equal_42);
  tcase_add_test(tc, s21_is_greater_or_equal_43);
  tcase_add_test(tc, s21_is_greater_or_equal_44);
  tcase_add_test(tc, s21_is_greater_or_equal_45);
  tcase_add_test(tc, s21_is_greater_or_equal_46);
  tcase_add_test(tc, s21_is_greater_or_equal_47);
  tcase_add_test(tc, s21_is_greater_or_equal_48);
  tcase_add_test(tc, s21_is_greater_or_equal_49);
  tcase_add_test(tc, s21_is_greater_or_equal_50);

  suite_add_tcase(s, tc);
  return s;
}
