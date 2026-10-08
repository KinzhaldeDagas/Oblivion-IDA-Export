int __thiscall sub_8A07E0(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  int result; // eax
  int v4; // ecx

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8a07ed*/
  {
    sub_8A0200(a2, *(_DWORD *)(v2 + 0xC)); /*0x8a07f9*/
    a2[3] = *(_DWORD *)(v2 + 0x10); /*0x8a0801*/
    a2[4] = *(_DWORD *)(v2 + 0x14); /*0x8a0807*/
    result = *(unsigned __int8 *)(v2 + 0x18); /*0x8a080a*/
    a2[2] = result; /*0x8a080e*/
  }
  else
  {
    result = a2[1]; /*0x8a081a*/
    if ( result ) /*0x8a081f*/
    {
      *(_DWORD *)(result + 8) = 0; /*0x8a0821*/
      v4 = a2[1]; /*0x8a0824*/
      if ( *(_WORD *)(v4 + 4) ) /*0x8a0827*/
      {
        result = (unsigned __int16)--*(_WORD *)(v4 + 6); /*0x8a0832*/
        if ( !(_WORD)result ) /*0x8a0839*/
          result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x8a0841*/
      }
    }
    a2[1] = 0; /*0x8a0843*/
    a2[3] = 0; /*0x8a0846*/
    a2[4] = 0; /*0x8a0849*/
  }
  return result; /*0x8a0811*/
}
