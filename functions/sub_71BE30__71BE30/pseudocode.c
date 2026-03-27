int __thiscall sub_71BE30(void *this, int a2, int a3, int a4, int a5)
{
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // edi
  NiPixelData *v11; // edi
  NiPixelData *v12; // [esp+3Ch] [ebp+Ch]

  v7 = a4 + 8;
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)this + 0x38))(this, a2, a3, a4 + 8, a5);
  v9 = (int)v8;
  if ( v8 == (_DWORD *)(a4 + 8) )
    return a4;
  if ( !v8 )
    return 0;
  if ( sub_71AD40(v8, v7) )
    return a4;
  if ( !(*(unsigned __int8 (__thiscall **)(void *, int, int))(*(_DWORD *)this + 0xC))(this, v7, v9) )
    return 0;
  v12 = (NiPixelData *)FormHeapAlloc(0x70u);
  if ( v12 )
    v11 = NiPixelData::NiPixelData(
            v12,
            **(_DWORD **)(a4 + 0x54),
            **(_DWORD **)(a4 + 0x58),
            v9,
            *(_DWORD *)(a4 + 0x60),
            *(_DWORD *)(a4 + 0x6C));
  else
    v11 = 0;
  return (*(unsigned __int8 (__thiscall **)(void *, NiPixelData *, int, unsigned int))(*(_DWORD *)this + 0x2C))(
           this,
           v11,
           a4,
           0xFFFFFFFF) != 0
       ? (unsigned int)v11
       : 0;
}
