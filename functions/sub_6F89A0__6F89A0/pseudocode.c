int __thiscall sub_6F89A0(_DWORD *this, char a2, char a3)
{
  int result; // eax
  int v4; // ecx
  OB_std_runtime_error_010201A0 v5; // [esp+4h] [ebp-94h] BYREF
  OB_stString28_010201A0 message; // [esp+2Ch] [ebp-6Ch] BYREF
  OB_std_runtime_error_010201A0 v7; // [esp+48h] [ebp-50h] BYREF
  OB_stString28_010201A0 v8; // [esp+70h] [ebp-28h] BYREF
  int v9; // [esp+94h] [ebp-4h]

  result = a2 & 0x17; /*0x6f89d0*/
  *(this + 2) = result; /*0x6f89d3*/
  v4 = result & *(this + 3); /*0x6f89d9*/
  if ( v4 ) /*0x6f89db*/
  {
    if ( a3 ) /*0x6f89e9*/
      ThrowException__(0, 0); /*0x6f89ef*/
    if ( (v4 & 4) != 0 ) /*0x6f89f7*/
    {
      sub_414750(&message, "ios_base::badbit set"); /*0x6f8a02*/
      v9 = 0; /*0x6f8a10*/
      OB_std_runtime_error_CtorFromString_010201A0(&v5, &message); /*0x6f8a1b*/
      *(_DWORD *)v5.exceptionBase = &std::ios_base::failure::`vftable'; /*0x6f8a2a*/
      ThrowException__((DWORD)&v5, &_TI3_AVfailure_ios_base_std__); /*0x6f8a32*/
    }
    if ( (v4 & 2) != 0 ) /*0x6f8a3a*/
    {
      sub_414750(&message, "ios_base::failbit set"); /*0x6f8a45*/
      v9 = 1; /*0x6f8a53*/
      OB_std_runtime_error_CtorFromString_010201A0(&v5, &message); /*0x6f8a5e*/
      *(_DWORD *)v5.exceptionBase = &std::ios_base::failure::`vftable'; /*0x6f8a6d*/
      ThrowException__((DWORD)&v5, &_TI3_AVfailure_ios_base_std__); /*0x6f8a75*/
    }
    sub_414750(&v8, "ios_base::eofbit set"); /*0x6f8a83*/
    v9 = 2; /*0x6f8a91*/
    OB_std_runtime_error_CtorFromString_010201A0(&v7, &v8); /*0x6f8a9c*/
    *(_DWORD *)v7.exceptionBase = &std::ios_base::failure::`vftable'; /*0x6f8aab*/
    ThrowException__((DWORD)&v7, &_TI3_AVfailure_ios_base_std__); /*0x6f8ab3*/
  }
  return result; /*0x6f8ab8*/
}
