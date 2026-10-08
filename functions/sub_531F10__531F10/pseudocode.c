int __thiscall sub_531F10(int *this)
{
  int v1; // ecx
  int result; // eax
  int v3; // eax

  v1 = *this; /*0x531f10*/
  result = 0; /*0x531f12*/
  if ( v1 ) /*0x531f16*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x58))(v1); /*0x531f1d*/
    if ( v3 ) /*0x531f21*/
      return *(_DWORD *)(v3 + 0x2B0); /*0x531f23*/
    else
      return 0; /*0x531f2a*/
  }
  return result; /*0x531f29*/
}
