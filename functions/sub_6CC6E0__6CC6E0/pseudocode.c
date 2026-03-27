_DWORD *__thiscall sub_6CC6E0(_DWORD *this, _DWORD *a2, unsigned __int8 a3)
{
  int v4; // edi
  int v5; // eax
  bool v6; // zf
  int v7; // ebp
  char v8; // bl
  unsigned __int8 v9; // bl
  int v10; // edi
  int v11; // eax
  char v12; // cl
  char v13; // dl
  char v14; // al
  char v15; // cl
  unsigned __int8 v16; // al
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  double v21; // st7
  double v23; // st7

  v4 = *(this + 5) + 0x18 * a3;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)v4 == 0;
  *a2 = *(_DWORD *)v4;
  if ( !v6 )
    InterlockedIncrement((volatile LONG *)(v5 + 4));
  v7 = *(_DWORD *)v4;
  v8 = *(_BYTE *)(v4 + 0xC);
  if ( *(_DWORD *)v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
    {
      if ( v7 )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *(_DWORD *)v4 = 0;
  }
  *(_BYTE *)(v4 + 0xC) = 0;
  *(float *)(v4 + 4) = 0.0;
  *(float *)(v4 + 8) = 0.0;
  *(float *)(v4 + 0x10) = 0.0;
  *(float *)(v4 + 0x14) = flt_A79F00;
  if ( v8 == *((_BYTE *)this + 0x10) || v8 == *((_BYTE *)this + 0x11) )
  {
    v9 = 0;
    v6 = *((_BYTE *)this + 0xD) == 0;
    *((_BYTE *)this + 0x11) = 0x80;
    *((_BYTE *)this + 0x10) = 0x80;
    if ( !v6 )
    {
      v10 = *(this + 5);
      do
      {
        v11 = v10 + 0x18 * v9;
        if ( *(_DWORD *)v11 )
        {
          v12 = *(_BYTE *)(v11 + 0xC);
          if ( v12 > *((char *)this + 0x11) )
          {
            v13 = *((_BYTE *)this + 0x10);
            if ( v12 <= v13 )
            {
              if ( v12 < v13 )
                *((_BYTE *)this + 0x11) = v12;
            }
            else
            {
              *((_BYTE *)this + 0x11) = v13;
              *((_BYTE *)this + 0x10) = *(_BYTE *)(v11 + 0xC);
            }
          }
        }
        ++v9;
      }
      while ( v9 < *((_BYTE *)this + 0xD) );
    }
  }
  v14 = --*((_BYTE *)this + 0xE);
  if ( v14 == 1 )
  {
    v15 = *((_BYTE *)this + 0xD);
    if ( v15 == 2 )
    {
      *((_BYTE *)this + 0xF) = a3 == 0;
    }
    else
    {
      v16 = 0;
      if ( v15 )
      {
        v17 = *(this + 5);
        do
        {
          if ( *(_DWORD *)(v17 + 0x18 * v16) )
            *((_BYTE *)this + 0xF) = v16;
          ++v16;
        }
        while ( v16 < *((_BYTE *)this + 0xD) );
      }
    }
    v18 = *(this + 5);
    v19 = *(_DWORD *)(v18 + 0x18 * *((unsigned __int8 *)this + 0xF));
    v20 = v18 + 0x18 * *((unsigned __int8 *)this + 0xF);
    *(this + 6) = v19;
    v21 = *(float *)(v20 + 0x14);
    goto LABEL_30;
  }
  if ( !v14 )
  {
    v21 = flt_A79F00;
    *((_BYTE *)this + 0xF) = 0xFF;
    *(this + 6) = 0;
LABEL_30:
    *((float *)this + 8) = v21;
  }
  *((float *)this + 9) = -flt_A7DEB4;
  *((float *)this + 0xA) = -flt_A7DEB4;
  v23 = flt_A7DEB4;
  *((_BYTE *)this + 0xC) |= 4u;
  *((float *)this + 0xB) = -v23;
  return a2;
}
