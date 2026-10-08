char __thiscall sub_6CCCC0(_DWORD *this, int a2)
{
  char result; // al
  unsigned __int8 i; // bl
  int v5; // ecx

  result = sub_6E7270((NiRenderTargetGroup *)this, a2); /*0x6cccc9*/
  if ( result ) /*0x6cccd0*/
  {
    if ( (*(_BYTE *)(this + 3) & 1) == 0 ) /*0x6cccdb*/
    {
      for ( i = 0; i < *((_BYTE *)this + 0xD); ++i ) /*0x6ccce0*/
      {
        v5 = *(_DWORD *)(*(this + 5) + 0x18 * i); /*0x6cccf1*/
        if ( v5 ) /*0x6cccf5*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x6cccfd*/
      }
    }
    return 1; /*0x6ccd09*/
  }
  return result; /*0x6cccd2*/
}
