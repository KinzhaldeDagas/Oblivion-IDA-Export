int __thiscall sub_8A07E0(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  int result; // eax
  int v4; // ecx

  if ( this && (v2 = *(this + 2)) != 0 )
  {
    sub_8A0200(a2, *(_DWORD *)(v2 + 0xC));
    a2[3] = *(_DWORD *)(v2 + 0x10);
    a2[4] = *(_DWORD *)(v2 + 0x14);
    result = *(unsigned __int8 *)(v2 + 0x18);
    a2[2] = result;
  }
  else
  {
    result = a2[1];
    if ( result )
    {
      *(_DWORD *)(result + 8) = 0;
      v4 = a2[1];
      if ( *(_WORD *)(v4 + 4) )
      {
        result = (unsigned __int16)--*(_WORD *)(v4 + 6);
        if ( !(_WORD)result )
          result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
      }
    }
    a2[1] = 0;
    a2[3] = 0;
    a2[4] = 0;
  }
  return result;
}
