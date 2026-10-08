RaceSexMenu *__thiscall RaceSexMenu::RaceSexMenu(RaceSexMenu *this)
{
  float z; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int *v9; // ecx

  Menu::Menu((Menu *)this); /*0x5c4e6c*/
  *(_DWORD *)this = &RaceSexMenu::`vftable'; /*0x5c4e8c*/
  ArrayConstructor( /*0x5c4e92*/
    (char *)this + 0x930,
    8u,
    0x10,
    (void (__thiscall *)(char *))BSStringT_constr,
    (void (__thiscall *)(void *))BSStringT_Clear);
  *((_DWORD *)this + 0xA) = 0; /*0x5c4e99*/
  *((_DWORD *)this + 0xB) = 0; /*0x5c4e9c*/
  *((_DWORD *)this + 0xC) = 0; /*0x5c4e9f*/
  *((_DWORD *)this + 0xF) = 0; /*0x5c4ea2*/
  memset((char *)this + 0x94, 0, 0x7D0u); /*0x5c4eb2*/
  *((float *)this + 0x226) = 0.0; /*0x5c4eb4*/
  *((float *)this + 0x228) = 0.0; /*0x5c4eba*/
  *((_BYTE *)this + 0x894) = 0; /*0x5c4ec0*/
  *((_DWORD *)this + 0x229) = LODWORD(g_zeroNiPoint3.x); /*0x5c4ecc*/
  *((_DWORD *)this + 0x22A) = LODWORD(g_zeroNiPoint3.y); /*0x5c4ed8*/
  *((_DWORD *)this + 0x22B) = LODWORD(g_zeroNiPoint3.z); /*0x5c4ee3*/
  *((_DWORD *)this + 0x22C) = 0; /*0x5c4ee9*/
  *((_DWORD *)this + 0x22D) = LODWORD(g_zeroNiPoint3.x); /*0x5c4ef5*/
  *((_DWORD *)this + 0x22E) = LODWORD(g_zeroNiPoint3.y); /*0x5c4f01*/
  *((_DWORD *)this + 0x22F) = LODWORD(g_zeroNiPoint3.z); /*0x5c4f0c*/
  *((_DWORD *)this + 0x230) = LODWORD(g_zeroNiPoint3.x); /*0x5c4f18*/
  *((_DWORD *)this + 0x231) = LODWORD(g_zeroNiPoint3.y); /*0x5c4f24*/
  z = g_zeroNiPoint3.z; /*0x5c4f2a*/
  *((float *)this + 0x233) = 0.0; /*0x5c4f31*/
  unk_B3B5D4 = 0xC8; /*0x5c4f3c*/
  *((float *)this + 0x232) = z; /*0x5c4f46*/
  *((_BYTE *)this + 0x8D0) = 0; /*0x5c4f4c*/
  v3 = FormHeapAlloc(0x64u); /*0x5c4f52*/
  if ( v3 ) /*0x5c4f65*/
  {
    v4 = v3 + 4; /*0x5c4f73*/
    *(_DWORD *)v3 = 4; /*0x5c4f79*/
    ArrayConstructor( /*0x5c4f7f*/
      (char *)(v3 + 4),
      0x18u,
      4,
      (void (__thiscall *)(char *))FaceGenMatrix_Construct,
      (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  }
  else
  {
    v4 = 0; /*0x5c4f86*/
  }
  *((_DWORD *)this + 0x235) = v4; /*0x5c4f8f*/
  v5 = FormHeapAlloc(0x64u); /*0x5c4f95*/
  if ( v5 ) /*0x5c4fa8*/
  {
    v6 = v5 + 4; /*0x5c4fb6*/
    *(_DWORD *)v5 = 4; /*0x5c4fbc*/
    ArrayConstructor( /*0x5c4fc2*/
      (char *)(v5 + 4),
      0x18u,
      4,
      (void (__thiscall *)(char *))FaceGenMatrix_Construct,
      (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  }
  else
  {
    v6 = 0; /*0x5c4fc9*/
  }
  *((float *)this + 0x237) = 0.0; /*0x5c4fcf*/
  *((float *)this + 0x238) = 0.0; /*0x5c4fda*/
  *((_DWORD *)this + 0x236) = v6; /*0x5c4fe0*/
  *((float *)this + 0x21D) = 0.0; /*0x5c4fe6*/
  *((_BYTE *)this + 0x868) = 1; /*0x5c4fec*/
  *((float *)this + 0x220) = 0.0; /*0x5c4ff3*/
  *((_DWORD *)this + 0x21B) = 0; /*0x5c4ff9*/
  *((float *)this + 0x221) = 0.0; /*0x5c4fff*/
  *((_DWORD *)this + 0x21C) = 0; /*0x5c5005*/
  *((_DWORD *)this + 0x21E) = 0; /*0x5c500b*/
  *((_DWORD *)this + 0x21F) = 0; /*0x5c5011*/
  v7 = (_DWORD *)FormHeapAlloc(0x28u); /*0x5c5017*/
  if ( v7 ) /*0x5c502a*/
    v8 = sub_57FE70(v7); /*0x5c502e*/
  else
    v8 = 0; /*0x5c5035*/
  *((_DWORD *)this + 0x23B) = v8; /*0x5c503b*/
  *((_DWORD *)this + 0x219) = 0; /*0x5c5041*/
  v9 = (int *)MEMORY[0xB33A1C]; /*0x5c5047*/
  unk_B3B4C9 = 0; /*0x5c5057*/
  unk_B3B4C8 = 0; /*0x5c505d*/
  unk_B3B5D8 = 0; /*0x5c5063*/
  ModelLoader_LoadModelData(v9, "Characters\\_Male\\Skeleton.nif", 0, 0, 1); /*0x5c5069*/
  ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], "Characters\\_Male\\SkeletonBeast.nif", 0, 0, 1); /*0x5c507d*/
  return this; /*0x5c5084*/
}
