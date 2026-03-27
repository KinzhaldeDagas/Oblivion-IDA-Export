char __thiscall sub_7ABD00(_DWORD *this, int a2, int a3, float a4)
{
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  float v14; // [esp+18h] [ebp+Ch]

  v5 = (_DWORD *)*(this + 0x88C);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = v5[2];
      v5 = (_DWORD *)*v5;
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 0x10) == a2 )
          break;
      }
      if ( !v5 )
        goto LABEL_5;
    }
    *(_DWORD *)v6 = *(_DWORD *)a3;
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(a3 + 4);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a3 + 8);
    *(float *)(v6 + 0xC) = *(float *)(a3 + 0xC);
    *(_BYTE *)(v6 + 0x1A) = LOBYTE(a4);
    LOBYTE(v11) = LOBYTE(a4);
  }
  else
  {
LABEL_5:
    v7 = FormHeapAlloc(0x20u);
    if ( v7 )
    {
      v8 = *(float *)(a3 + 0xC);
      *(_DWORD *)v7 = *(_DWORD *)a3;
      v14 = v8;
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a3 + 4);
      v9 = *(_DWORD *)(a3 + 8);
      *(float *)(v7 + 0xC) = v14;
      *(_DWORD *)(v7 + 8) = v9;
      *(_DWORD *)(v7 + 0x10) = a2;
      *(_DWORD *)(v7 + 0x14) = 0;
      *(_BYTE *)(v7 + 0x18) = 0;
      *(_BYTE *)(v7 + 0x19) = 0;
      *(_BYTE *)(v7 + 0x1A) = 1;
      *(_DWORD *)(v7 + 0x1C) = 0;
      v10 = v7;
    }
    else
    {
      v10 = 0;
    }
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x88B) + 4))(this + 0x88B);
    v11[2] = v10;
    v11[1] = 0;
    *v11 = *(this + 0x88C);
    v12 = *(this + 0x88C);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 4) = v11;
      ++*(this + 0x88E);
    }
    else
    {
      ++*(this + 0x88E);
      *(this + 0x88D) = v11;
    }
    *(this + 0x88C) = v11;
  }
  return (char)v11;
}
