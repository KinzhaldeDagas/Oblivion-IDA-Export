int __thiscall sub_8BEF00(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // ecx
  int result; // eax

  v2 = *(this + 1); /*0x8bef01*/
  if ( v2 ) /*0x8bef06*/
  {
    if ( a2 ) /*0x8bef0f*/
    {
      if ( *(_WORD *)(a2 + 4) ) /*0x8bef11*/
        ++*(_WORD *)(a2 + 6); /*0x8bef18*/
    }
    v3 = *(_DWORD *)(v2 + 0xC); /*0x8bef1d*/
    if ( v3 ) /*0x8bef22*/
    {
      if ( *(_WORD *)(v3 + 4) ) /*0x8bef24*/
      {
        result = (unsigned __int16)--*(_WORD *)(v3 + 6); /*0x8bef30*/
        if ( !(_WORD)result ) /*0x8bef37*/
          result = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x8bef3f*/
      }
    }
    *(_DWORD *)(v2 + 0xC) = a2; /*0x8bef41*/
  }
  return result; /*0x8bef45*/
}
