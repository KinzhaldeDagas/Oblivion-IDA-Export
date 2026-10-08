int __thiscall sub_8BA0D0(int *this)
{
  int *v2; // esi
  int v3; // edi
  int v4; // ecx
  int result; // eax

  *this = (int)&off_A981DC; /*0x8ba0d5*/
  v2 = this + 2; /*0x8ba0db*/
  v3 = 0xB; /*0x8ba0de*/
  do /*0x8ba10b*/
  {
    v4 = *v2; /*0x8ba0e3*/
    if ( *v2 ) /*0x8ba0e3*/
    {
      if ( *(_WORD *)(v4 + 4) ) /*0x8ba0e9*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x8ba0f4*/
          result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x8ba0ff*/
      }
      *v2 = 0; /*0x8ba101*/
    }
    ++v2; /*0x8ba107*/
    --v3; /*0x8ba10a*/
  }
  while ( v3 ); /*0x8ba10b*/
  *this = (int)&hkBaseObject::`vftable'; /*0x8ba10f*/
  return result; /*0x8ba10d*/
}
