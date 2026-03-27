_DWORD *__thiscall sub_577840(_DWORD *this, _DWORD *a2, signed int a3)
{
  signed int v4; // eax
  int v5; // ebx
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebx
  signed int v10; // ebp
  int v11; // ebp
  _DWORD *Singleton; // eax
  _DWORD *v13; // ebp
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v18; // eax

  v4 = a3;
  v5 = 0;
  if ( a3 > 1 )
  {
    v4 = 1;
    v5 = (a3 - 1) * *(this + 8);
  }
  if ( !*(this + 3) || v4 )
  {
    v8 = (_DWORD *)FormHeapAlloc(0x34u);
    a3 = (signed int)v8;
    v6 = (int)a2;
    if ( v8 )
      v7 = sub_577710(v8, (int)this, (int)a2, v5, *(this + 6));
    else
      v7 = 0;
  }
  else
  {
    v6 = (int)a2;
    v7 = sub_5772A0(*(_DWORD **)(*(this + 2) + 8), (int)a2, 0);
  }
  v9 = v7;
  a2 = v7;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 0x1C) || !**(_BYTE **)(v6 + 0x1C) )
    {
      v10 = *(_DWORD *)v6;
      v11 = *(_DWORD *)(FontManager_GetSingleton()[v10] + 0x38) + 0x38 * *(unsigned __int8 *)(v6 + 4) + 0x128;
      a3 = *(_DWORD *)v6;
      Singleton = FontManager_GetSingleton();
      *(this + 8) = Double_To_SInt32(*(float *)(v11 + 0x28) - *(float *)(v11 + 0x34) + **(float **)(Singleton[a3] + 0x38));
    }
  }
  if ( v9 )
  {
    v13 = this;
    if ( v9[8] + *(this + 5) + v9[6] <= *(this + 7) )
    {
      sub_5B1E20((BSTextureManager *)this, (void **)&a2);
      *(this + 5) += v9[8] + v9[6];
    }
    else
    {
      v9[8] = 0;
      v14 = (_DWORD *)FormHeapAlloc(0x3Cu);
      a2 = v14;
      if ( v14 )
      {
        v15 = sub_5765B0(v14, *(this + 0xE), v9, *(this + 6), *(this + 7));
        v15[5] = v9[6];
        v13 = v15;
        v9[0xC] = v15;
      }
      else
      {
        *(_DWORD *)0x14 = v9[6];
        v13 = 0;
        v9[0xC] = 0;
      }
    }
    v16 = *(_BYTE **)(v6 + 0x1C);
    if ( !v16 || !*v16 )
      ++v13[*(_DWORD *)v6 + 9];
    if ( v13 != this )
      return v13;
  }
  else if ( v6 )
  {
    v18 = *(_BYTE **)(v6 + 0x1C);
    if ( !v18 || !*v18 )
      ++*(this + *(_DWORD *)v6 + 9);
  }
  return 0;
}
