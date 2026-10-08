// BSShaderAccumulator constructor. Constructs 0x1A3 selector-indexed BSTPersistentList<...,BSShaderProperty::RenderPass *> elements at this+0x104 with stride 0x14, covering selectors 0x000..0x1A2. Bucket(selector) = this + 0x104 + 0x14*uint16(selector).
BSShaderAccumulator *__thiscall BSShaderAccumulator::BSShaderAccumulator(BSShaderAccumulator *this)
{
  bool v2; // zf
  _DWORD *v3; // eax
  int i; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  float *v11; // eax
  int v12; // ecx
  int *v13; // eax
  int *v14; // eax
  _DWORD *v16; // [esp+14h] [ebp-18h]
  int v17; // [esp+18h] [ebp-14h]
  _DWORD *v18; // [esp+18h] [ebp-14h]

  NiAlphaAccumulator_Constructor(this); /*0x7abe5d*/
  *(_DWORD *)this = &BSShaderAccumulator::`vftable'; /*0x7abe67*/
  *((_DWORD *)this + 0x12) = 0; /*0x7abe71*/
  *((_DWORD *)this + 0x10) = 0; /*0x7abe74*/
  *((_DWORD *)this + 0x11) = 0; /*0x7abe77*/
  *((_DWORD *)this + 0xF) = &NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7abe7a*/
  *((_DWORD *)this + 0x16) = 0; /*0x7abe81*/
  *((_DWORD *)this + 0x14) = 0; /*0x7abe84*/
  *((_DWORD *)this + 0x15) = 0; /*0x7abe87*/
  *((_DWORD *)this + 0x13) = &NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7abe8a*/
  *((_DWORD *)this + 0x1C) = 0; /*0x7abe91*/
  *((_DWORD *)this + 0x1A) = 0; /*0x7abe94*/
  *((_DWORD *)this + 0x1B) = 0; /*0x7abe97*/
  *((_DWORD *)this + 0x19) = &NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'; /*0x7abe9a*/
  *((_DWORD *)this + 0x1F) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7abea1*/
  *((_DWORD *)this + 0x20) = 0; /*0x7abea8*/
  *((_DWORD *)this + 0x21) = 0; /*0x7abeae*/
  *((_DWORD *)this + 0x22) = 0; /*0x7abeb4*/
  *((_DWORD *)this + 0x24) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7abeba*/
  *((_DWORD *)this + 0x25) = 0; /*0x7abec4*/
  *((_DWORD *)this + 0x26) = 0; /*0x7abeca*/
  *((_DWORD *)this + 0x27) = 0; /*0x7abed0*/
  *((_DWORD *)this + 0x29) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7abed6*/
  *((_DWORD *)this + 0x2A) = 0; /*0x7abee0*/
  *((_DWORD *)this + 0x2B) = 0; /*0x7abee6*/
  *((_DWORD *)this + 0x2C) = 0; /*0x7abeec*/
  *((float *)this + 0x34) = 0.0; /*0x7abef9*/
  *((float *)this + 0x39) = 0.0; /*0x7abf04*/
  *((float *)this + 0x3E) = 0.0; /*0x7abf0f*/
  *((_DWORD *)this + 0x32) = 0; /*0x7abf23*/
  *((_BYTE *)this + 0xCC) = 0; /*0x7abf29*/
  *((_DWORD *)this + 0x35) = 0; /*0x7abf2f*/
  *((_DWORD *)this + 0x36) = 0; /*0x7abf35*/
  *((_DWORD *)this + 0x37) = 0; /*0x7abf3b*/
  *((_BYTE *)this + 0xE0) = 0; /*0x7abf41*/
  *((_DWORD *)this + 0x3A) = 0; /*0x7abf47*/
  *((_DWORD *)this + 0x3B) = 0; /*0x7abf4d*/
  *((_DWORD *)this + 0x3C) = 0; /*0x7abf53*/
  *((_BYTE *)this + 0xF4) = 0; /*0x7abf59*/
  *((_DWORD *)this + 0x3F) = 0; /*0x7abf5f*/
  *((_DWORD *)this + 0x40) = 0; /*0x7abf65*/
  ArrayConstructor( /*0x7abf6b*/
    (char *)this + 0x104,
    0x14u,
    0x1A3,
    (void (__thiscall *)(char *))BSTPersistentRenderPassList_Constructor,
    (void (__thiscall *)(void *))BSTPersistentRenderPassList_Destructor);
  *((_DWORD *)this + 0x873) = 0; /*0x7abf70*/
  *((_DWORD *)this + 0x871) = 0; /*0x7abf76*/
  *((_DWORD *)this + 0x872) = 0; /*0x7abf7c*/
  *((_DWORD *)this + 0x870) = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'; /*0x7abf82*/
  *((_DWORD *)this + 0x877) = 0; /*0x7abf92*/
  *((_DWORD *)this + 0x875) = 0; /*0x7abf95*/
  *((_DWORD *)this + 0x876) = 0; /*0x7abf98*/
  *((_DWORD *)this + 0x874) = &NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'; /*0x7abf9b*/
  *((_DWORD *)this + 0x87B) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7abfa1*/
  *((_DWORD *)this + 0x87C) = 0; /*0x7abfab*/
  *((_DWORD *)this + 0x87D) = 0; /*0x7abfb1*/
  *((_DWORD *)this + 0x87E) = 0; /*0x7abfb7*/
  *((_DWORD *)this + 0x880) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7abfbd*/
  *((_DWORD *)this + 0x881) = 0; /*0x7abfc7*/
  *((_DWORD *)this + 0x882) = 0; /*0x7abfcd*/
  *((_DWORD *)this + 0x883) = 0; /*0x7abfd3*/
  *((_DWORD *)this + 0x885) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7abfd9*/
  *((_DWORD *)this + 0x886) = 0; /*0x7abfe3*/
  *((_DWORD *)this + 0x887) = 0; /*0x7abfe9*/
  *((_DWORD *)this + 0x888) = 0; /*0x7abfef*/
  *((_DWORD *)this + 0x88A) = 0; /*0x7abff5*/
  *((_DWORD *)this + 0x88E) = 0; /*0x7abffb*/
  *((_DWORD *)this + 0x88C) = 0; /*0x7ac001*/
  *((_DWORD *)this + 0x88D) = 0; /*0x7ac007*/
  *((_DWORD *)this + 0x88B) = &NiTPointerList<ReferenceVolume *>::`vftable'; /*0x7ac00d*/
  *((_DWORD *)this + 0x894) = 0; /*0x7ac01c*/
  *((_DWORD *)this + 0x892) = 0; /*0x7ac022*/
  *((_DWORD *)this + 0x893) = 0; /*0x7ac028*/
  *((_DWORD *)this + 0x891) = &NiTPointerList<NiGeometry *>::`vftable'; /*0x7ac02e*/
  *((_DWORD *)this + 0x898) = 0; /*0x7ac034*/
  *((_DWORD *)this + 0x896) = 0; /*0x7ac03a*/
  *((_DWORD *)this + 0x897) = 0; /*0x7ac040*/
  *((_DWORD *)this + 0x895) = &NiTPointerList<NiGeometry *>::`vftable'; /*0x7ac046*/
  *((_BYTE *)this + 0x21E0) = 1; /*0x7ac052*/
  *((_BYTE *)this + 0x21E1) = 0; /*0x7ac059*/
  *((_BYTE *)this + 0x21E2) = 0; /*0x7ac05f*/
  *((_BYTE *)this + 0x21E3) = 1; /*0x7ac065*/
  unk_B42CDD = 0; /*0x7ac071*/
  v16 = (_DWORD *)((char *)this + 0x108); /*0x7ac077*/
  v17 = 0x1A3; /*0x7ac07b*/
  do /*0x7ac0ac*/
  {
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)(v16 + 0xFFFFFFFF)); /*0x7ac08a*/
    v16[2] = *v16; /*0x7ac095*/
    *v16 = 0; /*0x7ac098*/
    v16[1] = 0; /*0x7ac09a*/
    v16[3] = 0; /*0x7ac09d*/
    v2 = v17-- == 1; /*0x7ac0a3*/
    v16 += 5; /*0x7ac0a8*/
  }
  while ( !v2 ); /*0x7ac0ac*/
  v3 = *((_DWORD **)this + 0x875); /*0x7ac0ae*/
  if ( v3 ) /*0x7ac0b3*/
  {
    while ( 1 ) /*0x7ac0bf*/
    {
      v18 = (_DWORD *)*v3; /*0x7ac0bf*/
      (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x874) + 8))((char *)this + 0x21D0, v3); /*0x7ac0c9*/
      if ( !v18 ) /*0x7ac0cf*/
        break; /*0x7ac0cf*/
      v3 = v18; /*0x7ac0b7*/
    }
  }
  *((_DWORD *)this + 0x877) = 0; /*0x7ac0d6*/
  *((_DWORD *)this + 0x875) = 0; /*0x7ac0d9*/
  *((_DWORD *)this + 0x876) = 0; /*0x7ac0dc*/
  *((_DWORD *)this + 0x87A) = FormHeapAlloc(0xC8u); /*0x7ac0e7*/
  *((_WORD *)this + 0x10F2) = 0; /*0x7ac0ed*/
  *((_WORD *)this + 0x10F3) = 0x32; /*0x7ac0f4*/
  for ( i = 0; i < 0xC8; i += 4 ) /*0x7ac0fd*/
    *(_DWORD *)(i + *((_DWORD *)this + 0x87A)) = 0; /*0x7ac106*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x21EC); /*0x7ac11b*/
  *((_DWORD *)this + 0x87E) = *((_DWORD *)this + 0x87C); /*0x7ac123*/
  *((_DWORD *)this + 0x87C) = 0; /*0x7ac126*/
  *((_DWORD *)this + 0x87D) = 0; /*0x7ac129*/
  *((_DWORD *)this + 0x87F) = 0; /*0x7ac12c*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x2200); /*0x7ac137*/
  *((_DWORD *)this + 0x883) = *((_DWORD *)this + 0x881); /*0x7ac13f*/
  *((_DWORD *)this + 0x881) = 0; /*0x7ac142*/
  *((_DWORD *)this + 0x882) = 0; /*0x7ac145*/
  *((_DWORD *)this + 0x884) = 0; /*0x7ac148*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x2214); /*0x7ac153*/
  *((_DWORD *)this + 0x888) = *((_DWORD *)this + 0x886); /*0x7ac15b*/
  *((_DWORD *)this + 0x886) = 0; /*0x7ac15e*/
  *((_DWORD *)this + 0x887) = 0; /*0x7ac161*/
  *((_DWORD *)this + 0x889) = 0; /*0x7ac164*/
  v5 = *((_DWORD **)this + 0x10); /*0x7ac167*/
  while ( v5 ) /*0x7ac16c*/
  {
    v6 = v5; /*0x7ac173*/
    v5 = (_DWORD *)*v5; /*0x7ac175*/
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0xF) + 8))((char *)this + 0x3C, v6); /*0x7ac17d*/
  }
  *((_DWORD *)this + 0x12) = 0; /*0x7ac189*/
  *((_DWORD *)this + 0x10) = 0; /*0x7ac18c*/
  *((_DWORD *)this + 0x11) = 0; /*0x7ac18f*/
  *((_DWORD *)this + 0x1E) = 0; /*0x7ac194*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x90); /*0x7ac197*/
  *((_DWORD *)this + 0x27) = *((_DWORD *)this + 0x25); /*0x7ac19f*/
  *((_DWORD *)this + 0x25) = 0; /*0x7ac1a2*/
  *((_DWORD *)this + 0x26) = 0; /*0x7ac1a5*/
  *((_DWORD *)this + 0x28) = 0; /*0x7ac1a8*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x7C); /*0x7ac1b0*/
  *((_DWORD *)this + 0x22) = *((_DWORD *)this + 0x20); /*0x7ac1bb*/
  *((_DWORD *)this + 0x20) = 0; /*0x7ac1be*/
  *((_DWORD *)this + 0x21) = 0; /*0x7ac1c1*/
  *((_DWORD *)this + 0x23) = 0; /*0x7ac1c4*/
  v7 = *((_DWORD **)this + 0x14); /*0x7ac1c7*/
  while ( v7 ) /*0x7ac1cc*/
  {
    v8 = v7; /*0x7ac1d3*/
    v7 = (_DWORD *)*v7; /*0x7ac1d5*/
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x13) + 8))((char *)this + 0x4C, v8); /*0x7ac1dd*/
  }
  *((_DWORD *)this + 0x16) = 0; /*0x7ac1e3*/
  *((_DWORD *)this + 0x14) = 0; /*0x7ac1e6*/
  *((_DWORD *)this + 0x15) = 0; /*0x7ac1e9*/
  *((_DWORD *)this + 0x17) = 0; /*0x7ac1ef*/
  *((_DWORD *)this + 0x18) = 0; /*0x7ac1f2*/
  v9 = *((_DWORD **)this + 0x1A); /*0x7ac1f5*/
  while ( v9 ) /*0x7ac1fa*/
  {
    v10 = v9; /*0x7ac203*/
    v9 = (_DWORD *)*v9; /*0x7ac205*/
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x19) + 8))((char *)this + 0x64, v10); /*0x7ac20d*/
  }
  *((_DWORD *)this + 0x1C) = 0; /*0x7ac215*/
  *((_DWORD *)this + 0x1A) = 0; /*0x7ac218*/
  *((_DWORD *)this + 0x1B) = 0; /*0x7ac21b*/
  *((_DWORD *)this + 0x1D) = 0; /*0x7ac21e*/
  *((float *)this + 0x31) = 1.0; /*0x7ac221*/
  *((_BYTE *)this + 0xC0) = 0; /*0x7ac229*/
  *((_DWORD *)this + 0x2F) = 0; /*0x7ac22f*/
  v11 = (float *)((char *)this + 0xCC); /*0x7ac235*/
  v12 = 3; /*0x7ac23b*/
  do /*0x7ac254*/
  {
    v11[1] = 0.0; /*0x7ac240*/
    v11[0xFFFFFFFF] = 0.0; /*0x7ac243*/
    *(_BYTE *)v11 = 0; /*0x7ac246*/
    v11[2] = 0.0; /*0x7ac248*/
    v11[3] = 0.0; /*0x7ac24b*/
    v11 += 5; /*0x7ac24e*/
    --v12; /*0x7ac251*/
  }
  while ( v12 ); /*0x7ac254*/
  *((_DWORD *)this + 0x88F) = 0; /*0x7ac25a*/
  *((_BYTE *)this + 0x2240) = 0; /*0x7ac260*/
  v13 = (int *)FormHeapAlloc(4u); /*0x7ac266*/
  if ( v13 ) /*0x7ac279*/
    v14 = sub_7F5B50(v13); /*0x7ac27d*/
  else
    v14 = 0; /*0x7ac284*/
  *((_DWORD *)this + 0x899) = v14; /*0x7ac286*/
  *((_BYTE *)this + 0x2268) = 0; /*0x7ac28c*/
  return this; /*0x7ac294*/
}
