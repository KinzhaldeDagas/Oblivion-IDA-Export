char *__thiscall sub_70E3D0(char *this, int a2)
{
  bool v3; // zf
  _BYTE *v4; // eax
  Ni2DBuffer *v5; // eax
  int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // edi
  int v10; // esi
  size_t v12; // [esp-28h] [ebp-110h]
  size_t v13; // [esp-1Ch] [ebp-104h]
  size_t v14; // [esp-10h] [ebp-F8h]
  int v15; // [esp-8h] [ebp-F0h]
  size_t v16; // [esp-4h] [ebp-ECh]
  int v17[16]; // [esp+1Ch] [ebp-CCh] BYREF
  _BYTE Src[64]; // [esp+5Ch] [ebp-8Ch] BYREF
  _BYTE v19[64]; // [esp+9Ch] [ebp-4Ch] BYREF
  int v20; // [esp+E4h] [ebp-4h]

  NiObject_constr((NiObject *)this);
  v20 = 0;
  *(_DWORD *)this = &NiPixelData::`vftable';
  InitSurfacEData((NiSurfaceData *)(this + 8));
  *((_DWORD *)this + 0x13) = 0;
  qmemcpy(this + 8, (const void *)(a2 + 8), 0x44u);
  v3 = *(_DWORD *)(a2 + 0x4C) == 0;
  LOBYTE(v20) = 1;
  if ( !v3 )
  {
    v4 = (_BYTE *)FormHeapAlloc(0x24u);
    LOBYTE(v20) = 2;
    if ( v4 )
      v5 = (Ni2DBuffer *)sub_732690(v4, *(_DWORD *)(a2 + 0x4C));
    else
      v5 = 0;
    LOBYTE(v20) = 1;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x13, v5);
  }
  v6 = *(_DWORD *)(a2 + 0x60);
  *((_DWORD *)this + 0x18) = v6;
  *((_DWORD *)this + 0x1B) = *(_DWORD *)(a2 + 0x6C);
  *((_DWORD *)this + 0x19) = *(_DWORD *)(a2 + 0x64);
  v7 = v6;
  if ( v6 )
  {
    v8 = 4 * v6;
    qmemcpy(v17, *(const void **)(a2 + 0x5C), 4 * (v8 >> 2));
    qmemcpy(v19, *(const void **)(a2 + 0x58), 4 * (v8 >> 2));
    qmemcpy(Src, *(const void **)(a2 + 0x54), 4 * (v8 >> 2));
  }
  v9 = *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * v7);
  v15 = *((_DWORD *)this + 0x1B);
  v17[v7] = v9;
  sub_732280(this, v7, v15, v9);
  v10 = 4 * *((_DWORD *)this + 0x18);
  LODWORD(v16) = v10;
  memcpy(*((void **)this + 0x15), Src, v16);
  LODWORD(v14) = v10;
  memcpy(*((void **)this + 0x16), v19, v14);
  LODWORD(v13) = 4 * *((_DWORD *)this + 0x18) + 4;
  memcpy(*((void **)this + 0x17), v17, v13);
  LODWORD(v12) = v9;
  memcpy(*((void **)this + 0x14), *(const void **)(a2 + 0x50), v12);
  *((_DWORD *)this + 0x1A) = 1;
  return this;
}
