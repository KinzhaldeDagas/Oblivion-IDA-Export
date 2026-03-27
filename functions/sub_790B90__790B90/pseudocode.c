void __usercall __noreturn sub_790B90(int a1@<edi>)
{
  rsize_t v1; // [esp-4h] [ebp-58h]
  int v2; // [esp+4h] [ebp-50h] BYREF
  char v3; // [esp+8h] [ebp-4Ch]
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD v6[13]; // [esp+20h] [ebp-34h] BYREF

  LODWORD(v1) = 0x12;
  v5 = 0xF;
  v4 = 0;
  v3 = 0;
  sub_414500(&v2, a1, "vector<T> too long", v1);
  v6[0xC] = 0;
  sub_4146E0((std::exception *)v6, &v2);
  v6[0] = &std::length_error::`vftable';
  ThrowException__((int)v6, &_TI3_AVlength_error_std__);
}
