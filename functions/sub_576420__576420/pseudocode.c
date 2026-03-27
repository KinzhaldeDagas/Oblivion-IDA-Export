_DWORD *__thiscall sub_576420(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax

  v2 = (_DWORD *)FormHeapAlloc(0x3Cu);
  if ( v2 )
    v3 = FonrManager_FontInfo_Load(v2, 1, off_B12E1C[0], 1);
  else
    v3 = 0;
  *this = v3;
  v4 = (_DWORD *)FormHeapAlloc(0x3Cu);
  if ( v4 )
    v5 = FonrManager_FontInfo_Load(v4, 2, off_B12E24[0], 1);
  else
    v5 = 0;
  *(this + 1) = v5;
  v6 = (_DWORD *)FormHeapAlloc(0x3Cu);
  if ( v6 )
    v7 = FonrManager_FontInfo_Load(v6, 3, off_B12E2C[0], 1);
  else
    v7 = 0;
  *(this + 2) = v7;
  v8 = (_DWORD *)FormHeapAlloc(0x3Cu);
  if ( v8 )
    v9 = FonrManager_FontInfo_Load(v8, 4, off_B12E34[0], 1);
  else
    v9 = 0;
  *(this + 3) = v9;
  v10 = (_DWORD *)FormHeapAlloc(0x3Cu);
  if ( v10 )
    v11 = FonrManager_FontInfo_Load(v10, 5, off_B12E3C[0], 1);
  else
    v11 = 0;
  *(this + 4) = v11;
  *((_BYTE *)this + 0x14) = 0;
  return this;
}
