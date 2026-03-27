unsigned __int8 __thiscall sub_6CC5C0(_BYTE *this, int a2, float a3, float a4, float a5)
{
  char v6; // dl
  unsigned __int8 v7; // bl
  int v8; // ecx
  int v10; // ebp
  int v11; // edx
  int v12; // edi
  char v13; // cl
  double v14; // st7
  double v15; // st7

  v6 = *(this + 0xD);
  v7 = 0;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 5);
    do
    {
      if ( !*(_DWORD *)(v8 + 0x18 * v7) )
        break;
      ++v7;
    }
    while ( v7 < *(this + 0xD) );
  }
  if ( v7 == v6 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0xA4))(this) )
    return 0xFF;
  v10 = *((_DWORD *)this + 5) + 0x18 * v7;
  v11 = a2;
  v12 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 != a2 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      v11 = a2;
    }
    *(_DWORD *)v10 = v11;
    if ( v11 )
    {
      InterlockedIncrement((volatile LONG *)(v11 + 4));
      v11 = a2;
    }
  }
  *(float *)(v10 + 4) = a3;
  *(_BYTE *)(v10 + 0xC) = LOBYTE(a4);
  *(float *)(v10 + 0x10) = a5;
  if ( SLOBYTE(a4) > (char)*(this + 0x11) )
  {
    v13 = *(this + 0x10);
    if ( SLOBYTE(a4) <= v13 )
    {
      if ( LOBYTE(a4) != v13 )
        *(this + 0x11) = LOBYTE(a4);
    }
    else
    {
      *(this + 0x11) = v13;
      *(this + 0x10) = LOBYTE(a4);
    }
  }
  if ( ++*(this + 0xE) == 1 )
  {
    *(this + 0xF) = v7;
    *((_DWORD *)this + 6) = v11;
  }
  else
  {
    v14 = flt_A79F00;
    *(this + 0xF) = 0xFF;
    *((float *)this + 8) = v14;
    *((_DWORD *)this + 6) = 0;
  }
  *((float *)this + 9) = -flt_A7DEB4;
  *((float *)this + 0xA) = -flt_A7DEB4;
  v15 = flt_A7DEB4;
  *(this + 0xC) |= 4u;
  *((float *)this + 0xB) = -v15;
  return v7;
}
