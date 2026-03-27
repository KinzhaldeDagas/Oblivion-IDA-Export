void __usercall __noreturn sub_6F1780(int a1@<edi>, int a2, int a3)
{
  rsize_t v3; // [esp-4h] [ebp-58h]
  int v4; // [esp+4h] [ebp-50h] BYREF
  char v5; // [esp+8h] [ebp-4Ch]
  int v6; // [esp+18h] [ebp-3Ch]
  int v7; // [esp+1Ch] [ebp-38h]
  _DWORD v8[13]; // [esp+20h] [ebp-34h] BYREF

  LODWORD(v3) = 0x12;
  v7 = 0xF;
  v6 = 0;
  v5 = 0;
  sub_414500(&v4, a1, "vector<T> too long", v3);
  v8[0xC] = 0;
  sub_4146E0((std::exception *)v8, &v4);
  v8[0] = &std::length_error::`vftable';
  ThrowException__((int)v8, &_TI3_AVlength_error_std__);
}
