_DWORD *__thiscall sub_577840(_DWORD *this, signed int *a2, signed int a3)
{
  signed int v4; // eax
  int v5; // ebx
  signed int *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebx
  signed int v10; // ebp
  int v11; // ebp
  _DWORD *Singleton; // eax
  _DWORD *v13; // ebp
  signed int *v14; // eax
  _DWORD *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v18; // eax

  v4 = a3; /*0x577866*/
  v5 = 0; /*0x57786a*/
  if ( a3 > 1 ) /*0x57786f*/
  {
    v4 = 1; /*0x577877*/
    v5 = (a3 - 1) * *(this + 8); /*0x577879*/
  }
  if ( !*(this + 3) || v4 ) /*0x577884*/
  {
    v8 = (_DWORD *)FormHeapAlloc(0x34u); /*0x57789f*/
    a3 = (signed int)v8; /*0x5778a7*/
    v6 = a2; /*0x5778ad*/
    if ( v8 ) /*0x5778b9*/
      v7 = sub_577710(v8, (int)this, (int)a2, v5, *(this + 6)); /*0x5778c4*/
    else
      v7 = 0; /*0x5778cb*/
  }
  else
  {
    v6 = a2; /*0x577889*/
    v7 = sub_5772A0(*(_DWORD **)(*(this + 2) + 8), (int)a2, 0); /*0x577896*/
  }
  v9 = v7; /*0x5778d7*/
  a2 = v7; /*0x5778d9*/
  if ( v6 ) /*0x5778dd*/
  {
    if ( !v6[7] || !*(_BYTE *)v6[7] ) /*0x5778e8*/
    {
      v10 = *v6; /*0x5778ed*/
      v11 = *(_DWORD *)(FontManager_GetSingleton()[v10] + 0x38) + 0x38 * *((unsigned __int8 *)v6 + 4) + 0x128; /*0x577909*/
      a3 = *v6; /*0x577910*/
      Singleton = FontManager_GetSingleton(); /*0x577914*/
      *(this + 8) = Double_To_SInt32(*(float *)(v11 + 0x28) - *(float *)(v11 + 0x34) + **(float **)(Singleton[a3] + 0x38)); /*0x577930*/
    }
  }
  if ( v9 ) /*0x577935*/
  {
    v13 = this; /*0x577941*/
    if ( v9[8] + *(this + 5) + v9[6] <= *(this + 7) ) /*0x577949*/
    {
      NiTPointerList__AddTail((BSTextureManager *)this, (void **)&a2); /*0x5779a3*/
      *(this + 5) += v9[8] + v9[6]; /*0x5779ae*/
    }
    else
    {
      v9[8] = 0; /*0x57794d*/
      v14 = (signed int *)FormHeapAlloc(0x3Cu); /*0x577954*/
      a2 = v14; /*0x57795c*/
      if ( v14 ) /*0x57796a*/
      {
        v15 = sub_5765B0(v14, *(this + 0xE), v9, *(this + 6), *(this + 7)); /*0x57797b*/
        v15[5] = v9[6]; /*0x577983*/
        v13 = v15; /*0x577986*/
        v9[0xC] = v15; /*0x577988*/
      }
      else
      {
        *(_DWORD *)0x14 = v9[6]; /*0x577992*/
        v13 = 0; /*0x577995*/
        v9[0xC] = 0; /*0x577997*/
      }
    }
    v16 = (_BYTE *)v6[7]; /*0x5779b1*/
    if ( !v16 || !*v16 ) /*0x5779b8*/
      ++v13[*v6 + 9]; /*0x5779bf*/
    if ( v13 != this ) /*0x5779ca*/
      return v13; /*0x5779ce*/
  }
  else if ( v6 ) /*0x5779d2*/
  {
    v18 = (_BYTE *)v6[7]; /*0x5779d4*/
    if ( !v18 || !*v18 ) /*0x5779db*/
      ++*(this + *v6 + 9); /*0x5779e2*/
  }
  return 0; /*0x5779ed*/
}
