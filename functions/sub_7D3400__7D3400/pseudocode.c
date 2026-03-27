char __thiscall sub_7D3400(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax

  v3 = *(this + 0x40);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(this + 0x40) = a2;
    if ( !a2 )
      goto LABEL_11;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  if ( !a2 || (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2)) == 0 )
  {
LABEL_11:
    LOBYTE(v5) = 0;
    goto LABEL_12;
  }
  while ( (char *)v4 != dword_B3FD80 )
  {
    v4 = *(_DWORD *)(v4 + 4);
    if ( !v4 )
      goto LABEL_11;
  }
  LOBYTE(v5) = 1;
LABEL_12:
  *((_BYTE *)this + 0xFC) = v5;
  if ( (_BYTE)v5 )
  {
    if ( *((_BYTE *)this + 0x104) )
    {
      *(this + 0x42) = *(_DWORD *)(a2 + 0x88);
      *(this + 0x43) = *(_DWORD *)(a2 + 0x8C);
      v5 = *(_DWORD *)(a2 + 0x90);
      *(this + 0x44) = v5;
    }
  }
  else
  {
    *((float *)this + 0x35) = 1.0;
  }
  return v5;
}
