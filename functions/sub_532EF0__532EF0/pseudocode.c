void __thiscall sub_532EF0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  unsigned int i; // esi
  int v6; // ecx

  if ( *(_WORD *)(this + 0x14) ) /*0x532ef3*/
  {
    v2 = **(_DWORD **)(this + 0xC); /*0x532efd*/
    if ( v2 ) /*0x532f01*/
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x58))(v2); /*0x532f08*/
      if ( v3 ) /*0x532f0c*/
        v4 = *(_DWORD *)(v3 + 0x2B0); /*0x532f0e*/
      else
        v4 = 0; /*0x532f16*/
      if ( v4 ) /*0x532f1a*/
      {
        for ( i = 0; i < *(unsigned __int16 *)(this + 0x14); ++i ) /*0x532f1f*/
        {
          v6 = *(_DWORD *)(*(_DWORD *)(this + 0xC) + 4 * i); /*0x532f28*/
          if ( v6 ) /*0x532f2d*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x60))(v6); /*0x532f34*/
        }
      }
    }
  }
}
