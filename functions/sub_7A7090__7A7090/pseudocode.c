void __usercall __noreturn sub_7A7090(int a1@<edi>)
{
  rsize_t v1; // [esp-4h] [ebp-58h]
  int v2; // [esp+4h] [ebp-50h] BYREF
  char v3; // [esp+8h] [ebp-4Ch]
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _BYTE v6[40]; // [esp+20h] [ebp-34h] BYREF
  int v7; // [esp+50h] [ebp-4h]

  LODWORD(v1) = 0x1B;
  v5 = 0xF;
  v4 = 0;
  v3 = 0;
  sub_414500(&v2, a1, "Newran: illegal combination", v1);
  v7 = 0;
  sub_4146E0((std::exception *)v6, &v2);
  ThrowException__((int)v6, &_TI2_AVlogic_error_std__);
}
