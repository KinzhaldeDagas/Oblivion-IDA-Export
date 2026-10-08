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

  NiImageConverter::NiImageConverter(this); /*0x71f88d*/
  *(_DWORD *)this = &NiDevImageConverter::`vftable'; /*0x71f89e*/
  sub_734710((char *)this + 0x680); /*0x71f8a4*/
  v2 = (_DWORD *)((char *)this + 0x890); /*0x71f8a9*/
  v2[3] = 0; /*0x71f8af*/
  v2[1] = 0; /*0x71f8b2*/
  v2[2] = 0; /*0x71f8b5*/
  *v2 = &NiTPointerList<NiImageReader *>::`vftable'; /*0x71f8b8*/
  v3 = (char *)FormHeapAlloc(0x180u); /*0x71f8c9*/
  if ( v3 ) /*0x71f8dc*/
    v4 = sub_737750(v3); /*0x71f8e5*/
  else
    v4 = 0; /*0x71f8e9*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x71f8f6*/
  v5[2] = v4; /*0x71f8f8*/
  v5[1] = 0; /*0x71f8fb*/
  *v5 = v2[1]; /*0x71f901*/
  v6 = v2[1]; /*0x71f903*/
  if ( v6 ) /*0x71f908*/
    *(_DWORD *)(v6 + 4) = v5; /*0x71f90a*/
  else
    v2[2] = v5; /*0x71f90f*/
  ++v2[3]; /*0x71f912*/
  v2[1] = v5; /*0x71f91b*/
  v7 = (char *)FormHeapAlloc(0x180u); /*0x71f91e*/
  if ( v7 ) /*0x71f931*/
    v8 = sub_736360(v7); /*0x71f93a*/
  else
    v8 = 0; /*0x71f93e*/
  v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x71f94b*/
  v9[2] = v8; /*0x71f94d*/
  v9[1] = 0; /*0x71f950*/
  *v9 = v2[1]; /*0x71f956*/
  v10 = v2[1]; /*0x71f958*/
  if ( v10 ) /*0x71f95d*/
    *(_DWORD *)(v10 + 4) = v9; /*0x71f95f*/
  else
    v2[2] = v9; /*0x71f964*/
  ++v2[3]; /*0x71f967*/
  v2[1] = v9; /*0x71f970*/
  v11 = (char *)FormHeapAlloc(0x180u); /*0x71f973*/
  if ( v11 ) /*0x71f986*/
    v12 = sub_735990(v11); /*0x71f98f*/
  else
    v12 = 0; /*0x71f993*/
  v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x71f9a0*/
  v13[2] = v12; /*0x71f9a2*/
  v13[1] = 0; /*0x71f9a5*/
  *v13 = v2[1]; /*0x71f9ab*/
  v14 = v2[1]; /*0x71f9ad*/
  if ( v14 ) /*0x71f9b2*/
    *(_DWORD *)(v14 + 4) = v13; /*0x71f9b4*/
  else
    v2[2] = v13; /*0x71f9b9*/
  ++v2[3]; /*0x71f9bc*/
  v2[1] = v13; /*0x71f9c5*/
  v15 = (char *)FormHeapAlloc(0x180u); /*0x71f9c8*/
  if ( v15 ) /*0x71f9db*/
    v16 = sub_734B00(v15); /*0x71f9e4*/
  else
    v16 = 0; /*0x71f9e8*/
  v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x71f9f5*/
  v17[2] = v16; /*0x71f9f7*/
  v17[1] = 0; /*0x71f9fa*/
  *v17 = v2[1]; /*0x71fa00*/
  v18 = v2[1]; /*0x71fa02*/
  if ( v18 ) /*0x71fa07*/
    *(_DWORD *)(v18 + 4) = v17; /*0x71fa09*/
  else
    v2[2] = v17; /*0x71fa0e*/
  ++v2[3]; /*0x71fa11*/
  v2[1] = v17; /*0x71fa1a*/
  v19 = (NiNIFImageReader *)FormHeapAlloc(0x600u); /*0x71fa1d*/
  if ( v19 ) /*0x71fa30*/
    v20 = NiNIFImageReader::NiNIFImageReader(v19); /*0x71fa39*/
  else
    v20 = 0; /*0x71fa3d*/
  v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x71fa4a*/
  v21[2] = v20; /*0x71fa4c*/
  v21[1] = 0; /*0x71fa4f*/
  *v21 = v2[1]; /*0x71fa55*/
  v22 = v2[1]; /*0x71fa57*/
  if ( v22 ) /*0x71fa5c*/
    *(_DWORD *)(v22 + 4) = v21; /*0x71fa5e*/
  else
    v2[2] = v21; /*0x71fa63*/
  ++v2[3]; /*0x71fa66*/
  v2[1] = v21; /*0x71fa6a*/
  return this; /*0x71fa71*/
}
