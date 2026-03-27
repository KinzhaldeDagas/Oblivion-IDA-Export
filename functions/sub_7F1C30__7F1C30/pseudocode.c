__int16 __thiscall sub_7F1C30(char **this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax

  sub_7ECB10(this, a2, a3);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x7C))(a2, *(this + 0x27));
  v4 = *(_DWORD *)(a2 + 0xA8);
  if ( (char *)v4 == *(this + 0x2A) )
  {
    LOWORD(v5) = *((_WORD *)this + 0x56);
    *(_WORD *)(a2 + 0xAC) = v5;
  }
  else
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = (int)*(this + 0x2A);
    *(_DWORD *)(a2 + 0xA8) = v5;
    if ( v5 )
      LOWORD(v5) = InterlockedIncrement((volatile LONG *)(v5 + 4));
    *(_WORD *)(a2 + 0xAC) = *((_WORD *)this + 0x56);
  }
  return v5;
}
