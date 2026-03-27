int __thiscall sub_6C4390(_WORD *this, int a2, char a3)
{
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // eax
  _DWORD *v8; // ecx

  v4 = 0;
  if ( !*(this + 0x23) )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 0x10) + 4 * v4);
    if ( v5 )
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4));
      if ( !a3 || *(_DWORD *)(v5 + 0x44) )
      {
        v6 = *(_DWORD *)(v5 + 0xC);
        v7 = 0;
        if ( v6 )
          break;
      }
    }
LABEL_10:
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    if ( ++v4 >= (unsigned int)(unsigned __int16)*(this + 0x23) )
      return 0;
  }
  v8 = *(_DWORD **)(v5 + 0x14);
  while ( !*v8 || *v8 != a2 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= v6 )
      goto LABEL_10;
  }
  if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
    (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  return v5;
}
