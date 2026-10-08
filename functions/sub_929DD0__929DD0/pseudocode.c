_WORD *__thiscall sub_929DD0(_WORD *this, int a2)
{
  _WORD *result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  char v6; // bl
  _BYTE *v7; // ecx

  result = this; /*0x929dd0*/
  *(this + 3) = 1; /*0x929dd8*/
  *(_DWORD *)this = &off_AA1A84; /*0x929dde*/
  if ( a2 ) /*0x929de4*/
  {
    v3 = 0; /*0x929dea*/
    if ( *((int *)this + 0xA) > 0 ) /*0x929dee*/
    {
      v4 = 0; /*0x929df0*/
      do /*0x929e0e*/
      {
        v5 = *((_DWORD *)result + 9); /*0x929df3*/
        v6 = *(_BYTE *)(v4 + v5 + 0x11); /*0x929df6*/
        v7 = (_BYTE *)(v4 + v5 + 0x11); /*0x929dfc*/
        if ( !v6 ) /*0x929e00*/
          *v7 = 1; /*0x929e02*/
        ++v3; /*0x929e08*/
        v4 += 0x30; /*0x929e09*/
      }
      while ( v3 < *((_DWORD *)result + 0xA) ); /*0x929e0e*/
    }
  }
  return result; /*0x929e12*/
}
