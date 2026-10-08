int __thiscall sub_45BAB0(_DWORD *this, int a2, int a3, int a4)
{
  int (__cdecl *v5)(int, int, int, int *, int); // ecx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x45bab0*/
  if ( (*(this + 6) & 0x200) != 0 ) /*0x45bab9*/
  {
    *(this + 0x24) += a4; /*0x45babf*/
    return a4; /*0x45babb*/
  }
  else
  {
    v5 = *(int (__cdecl **)(int, int, int, int *, int))(a2 + 8); /*0x45bade*/
    v6 = 1; /*0x45bae2*/
    return v5(a2, a3, a4, &v6, 1); /*0x45baea*/
  }
}
