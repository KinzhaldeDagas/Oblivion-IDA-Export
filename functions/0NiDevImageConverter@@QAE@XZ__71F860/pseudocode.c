NiDevImageConverter *__thiscall NiDevImageConverter::NiDevImageConverter(NiDevImageConverter *this)
{
  _DWORD *v2; // esi
  char *v3; // eax
  char *v4; // ebp
  _DWORD *v5; // eax
  int v6; // ecx
  char *v7; // eax
  char *v8; // ebp
  _DWORD *v9; // eax
  int v10; // ecx
  char *v11; // eax
  char *v12; // ebp
  _DWORD *v13; // eax
  int v14; // ecx
  char *v15; // eax
  char *v16; // ebp
  _DWORD *v17; // eax
  int v18; // ecx
  NiNIFImageReader *v19; // eax
  NiNIFImageReader *v20; // ebp
  _DWORD *v21; // eax
  int v22; // ecx

  NiImageConverter::NiImageConverter(this);
  *(_DWORD *)this = &NiDevImageConverter::`vftable';
  sub_734710((_DWORD *)this + 0x1A0);
  v2 = (_DWORD *)((char *)this + 0x890);
  v2[3] = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &NiTPointerList<NiImageReader *>::`vftable';
  v3 = (char *)FormHeapAlloc(0x180u);
  if ( v3 )
    v4 = sub_737750(v3);
  else
    v4 = 0;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
  v5[2] = v4;
  v5[1] = 0;
  *v5 = v2[1];
  v6 = v2[1];
  if ( v6 )
    *(_DWORD *)(v6 + 4) = v5;
  else
    v2[2] = v5;
  ++v2[3];
  v2[1] = v5;
  v7 = (char *)FormHeapAlloc(0x180u);
  if ( v7 )
    v8 = sub_736360(v7);
  else
    v8 = 0;
  v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
  v9[2] = v8;
  v9[1] = 0;
  *v9 = v2[1];
  v10 = v2[1];
  if ( v10 )
    *(_DWORD *)(v10 + 4) = v9;
  else
    v2[2] = v9;
  ++v2[3];
  v2[1] = v9;
  v11 = (char *)FormHeapAlloc(0x180u);
  if ( v11 )
    v12 = sub_735990(v11);
  else
    v12 = 0;
  v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
  v13[2] = v12;
  v13[1] = 0;
  *v13 = v2[1];
  v14 = v2[1];
  if ( v14 )
    *(_DWORD *)(v14 + 4) = v13;
  else
    v2[2] = v13;
  ++v2[3];
  v2[1] = v13;
  v15 = (char *)FormHeapAlloc(0x180u);
  if ( v15 )
    v16 = sub_734B00(v15);
  else
    v16 = 0;
  v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
  v17[2] = v16;
  v17[1] = 0;
  *v17 = v2[1];
  v18 = v2[1];
  if ( v18 )
    *(_DWORD *)(v18 + 4) = v17;
  else
    v2[2] = v17;
  ++v2[3];
  v2[1] = v17;
  v19 = (NiNIFImageReader *)FormHeapAlloc(0x600u);
  if ( v19 )
    v20 = NiNIFImageReader::NiNIFImageReader(v19);
  else
    v20 = 0;
  v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
  v21[2] = v20;
  v21[1] = 0;
  *v21 = v2[1];
  v22 = v2[1];
  if ( v22 )
    *(_DWORD *)(v22 + 4) = v21;
  else
    v2[2] = v21;
  ++v2[3];
  v2[1] = v21;
  return this;
}
