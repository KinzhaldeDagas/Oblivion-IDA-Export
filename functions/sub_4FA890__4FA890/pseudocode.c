int __thiscall sub_4FA890(int *this, unsigned int a2)
{
  int *v2; // esi
  int *v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  bool v7; // bl
  int *v8; // eax
  int v9; // edx
  _BYTE *v10; // esi

  v2 = this + 0x12; /*0x4fa892*/
  v3 = this + 0x12; /*0x4fa895*/
  v4 = 0; /*0x4fa897*/
  if ( this != (int *)0xFFFFFFB8 ) /*0x4fa89c*/
  {
    do /*0x4fa8b4*/
    {
      v5 = *v3; /*0x4fa8a0*/
      if ( !*v3 ) /*0x4fa8a0*/
        break; /*0x4fa8a4*/
      v3 = (int *)v3[1]; /*0x4fa8aa*/
      if ( *(_BYTE *)(v5 + 0x10) ) /*0x4fa8a6*/
        ++v4; /*0x4fa8af*/
    }
    while ( v3 ); /*0x4fa8b4*/
  }
  v6 = a2; /*0x4fa8b6*/
  v7 = a2 >= v4; /*0x4fa8bc*/
  if ( a2 >= v4 ) /*0x4fa8c1*/
    v6 = a2 - v4; /*0x4fa8c3*/
  v8 = v2; /*0x4fa8c5*/
  v9 = 0; /*0x4fa8c7*/
  while ( v8 ) /*0x4fa8cb*/
  {
    v10 = (_BYTE *)*v8; /*0x4fa8d0*/
    if ( !*v8 ) /*0x4fa8d4*/
      return 0; /*0x4fa8d4*/
    v8 = (int *)v8[1]; /*0x4fa8db*/
    if ( v10[0x10] ) /*0x4fa8d6*/
    {
      if ( v7 ) /*0x4fa8e2*/
        continue; /*0x4fa8e2*/
    }
    else if ( !v7 ) /*0x4fa8ea*/
    {
      continue; /*0x4fa8ea*/
    }
    if ( v9 == v6 ) /*0x4fa8ee*/
      return *(_DWORD *)v10; /*0x4fa8ff*/
    ++v9; /*0x4fa8f0*/
  }
  return 0; /*0x4fa8f7*/
}
