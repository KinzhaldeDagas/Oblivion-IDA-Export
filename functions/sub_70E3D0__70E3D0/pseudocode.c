char *__thiscall sub_70E3D0(char *this, int a2)
{
  bool v3; // zf
  NiObject *v4; // eax
  Ni2DBuffer *v5; // eax
  int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // esi
  int v12; // [esp-8h] [ebp-F0h]
  int v13[16]; // [esp+1Ch] [ebp-CCh] BYREF
  _BYTE Src[64]; // [esp+5Ch] [ebp-8Ch] BYREF
  _BYTE source[64]; // [esp+9Ch] [ebp-4Ch] BYREF
  int v16; // [esp+E4h] [ebp-4h]

  NiObject_constr((NiObject *)this); /*0x70e403*/
  v16 = 0; /*0x70e40d*/
  *(_DWORD *)this = &NiPixelData::`vftable'; /*0x70e418*/
  InitSurfacEData((NiSurfaceData *)(this + 8)); /*0x70e41f*/
  *((_DWORD *)this + 0x13) = 0; /*0x70e424*/
  qmemcpy(this + 8, (const void *)(a2 + 8), 0x44u); /*0x70e43a*/
  v3 = *(_DWORD *)(a2 + 0x4C) == 0; /*0x70e43c*/
  LOBYTE(v16) = 1; /*0x70e440*/
  if ( !v3 ) /*0x70e448*/
  {
    v4 = (NiObject *)FormHeapAlloc(0x24u); /*0x70e44c*/
    LOBYTE(v16) = 2; /*0x70e45a*/
    if ( v4 ) /*0x70e462*/
      v5 = (Ni2DBuffer *)sub_732690(v4, *(_DWORD *)(a2 + 0x4C)); /*0x70e46a*/
    else
      v5 = 0; /*0x70e471*/
    LOBYTE(v16) = 1; /*0x70e477*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x13, v5); /*0x70e47f*/
  }
  v6 = *(_DWORD *)(a2 + 0x60); /*0x70e484*/
  *((_DWORD *)this + 0x18) = v6; /*0x70e487*/
  *((_DWORD *)this + 0x1B) = *(_DWORD *)(a2 + 0x6C); /*0x70e48d*/
  *((_DWORD *)this + 0x19) = *(_DWORD *)(a2 + 0x64); /*0x70e493*/
  v7 = v6; /*0x70e496*/
  if ( v6 ) /*0x70e49a*/
  {
    v8 = 4 * v6; /*0x70e4a1*/
    qmemcpy(v13, *(const void **)(a2 + 0x5C), 4 * (v8 >> 2)); /*0x70e4ac*/
    qmemcpy(source, *(const void **)(a2 + 0x58), 4 * (v8 >> 2)); /*0x70e4bd*/
    qmemcpy(Src, *(const void **)(a2 + 0x54), 4 * (v8 >> 2)); /*0x70e4cb*/
  }
  v9 = *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * v7); /*0x70e4d0*/
  v12 = *((_DWORD *)this + 0x1B); /*0x70e4d7*/
  v13[v7] = v9; /*0x70e4db*/
  sub_732280(this, v7, v12, v9); /*0x70e4df*/
  v10 = 4 * *((_DWORD *)this + 0x18); /*0x70e4ec*/
  memcpy(*((void **)this + 0x15), Src, v10); /*0x70e4f5*/
  memcpy(*((void **)this + 0x16), source, v10); /*0x70e507*/
  memcpy(*((void **)this + 0x17), v13, 4 * *((_DWORD *)this + 0x18) + 4); /*0x70e520*/
  memcpy(*((void **)this + 0x14), *(const void **)(a2 + 0x50), v9); /*0x70e52e*/
  *((_DWORD *)this + 0x1A) = 1; /*0x70e536*/
  return this; /*0x70e53f*/
}
