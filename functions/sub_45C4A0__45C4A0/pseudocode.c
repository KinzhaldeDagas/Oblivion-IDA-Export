int __thiscall sub_45C4A0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int (__cdecl *v5)(int, int, int, int *, int); // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x45c4a0*/
  result = *(this + 6) >> 9; /*0x45c4a4*/
  if ( (*(this + 6) & 0x200) != 0 ) /*0x45c4a9*/
  {
    *(this + 0x24) += a4; /*0x45c4af*/
  }
  else
  {
    v5 = *(int (__cdecl **)(int, int, int, int *, int))(a2 + 8); /*0x45c4cf*/
    v6 = 1; /*0x45c4d2*/
    return v5(a2, a3, a4, &v6, 1); /*0x45c4da*/
  }
  return result; /*0x45c4b6*/
}
