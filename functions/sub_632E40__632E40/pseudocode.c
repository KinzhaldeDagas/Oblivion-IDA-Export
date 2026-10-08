TESForm::ModReferenceList *__thiscall sub_632E40(TESPackage **this, int a2, void *a3)
{
  unsigned int resetSelector; // eax
  double v5; // st6
  int v6; // eax
  float *v7; // ecx
  _DWORD *v8; // edi
  int v9; // ebp
  TESForm::ModReferenceList *result; // eax
  void *v11; // [esp+Ch] [ebp-4h]

  v11 = 0; /*0x632e4e*/
  if ( a3 ) /*0x632e52*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x632e5e*/
      v11 = a3; /*0x632e64*/
  }
  sub_651880(this, a2, a3); /*0x632e70*/
  resetSelector = g_TESSaveLoadGame->resetSelector; /*0x632e7b*/
  if ( resetSelector == 0x1FFFF000 || resetSelector == 0x7FFFF000 ) /*0x632e8a*/
  {
    *((float *)this + 0xA5) = kTerrainLODQuadRayDirectionZ; /*0x632e99*/
    *(this + 0xA6) = (TESPackage *)0xFFFFFFFF; /*0x632e9f*/
    *(this + 0xA7) = (TESPackage *)0xFFFFFFFF; /*0x632ea7*/
    *((float *)this + 0x76) = 0.0; /*0x632ead*/
    *(this + 0xA8) = (TESPackage *)0xFFFFFFFF; /*0x632eb3*/
    *((float *)this + 0x87) = 0.0; /*0x632eb9*/
    *(this + 0x24) = (TESPackage *)0xFFFFFFFF; /*0x632ebf*/
    *((float *)this + 0x8B) = 0.0; /*0x632ec5*/
    *((_BYTE *)this + 0x24C) = 0; /*0x632ecb*/
    *((float *)this + 0x92) = 0.0; /*0x632ed1*/
    *((_BYTE *)this + 0x1D0) = 0; /*0x632ed7*/
    *((float *)this + 0x8D) = 0.0; /*0x632edd*/
    *((_BYTE *)this + 0x228) = 0; /*0x632ee3*/
    *((float *)this + 0x7A) = 0.0; /*0x632ee9*/
    *((_BYTE *)this + 0x23C) = 1; /*0x632eef*/
    *((float *)this + 0x6D) = 0.0; /*0x632ef6*/
    *((_BYTE *)this + 0x244) = 0; /*0x632efc*/
    *((float *)this + 0x6C) = 0.0; /*0x632f02*/
    *(this + 0x94) = 0; /*0x632f08*/
    v5 = flt_A417B4; /*0x632f0e*/
    *((_BYTE *)this + 0x25C) = 0; /*0x632f14*/
    *((float *)this + 0x8E) = v5; /*0x632f1a*/
    *(this + 0x73) = 0; /*0x632f20*/
    *((_BYTE *)this + 0x1E4) = 0; /*0x632f26*/
    *((_BYTE *)this + 0x25D) = 0; /*0x632f2c*/
    *((float *)this + 0x6A) = 0.0; /*0x632f32*/
    *(this + 0x9D) = 0; /*0x632f38*/
    *((float *)this + 0x78) = 0.0; /*0x632f3e*/
    *((_BYTE *)this + 0x278) = 0; /*0x632f44*/
    *((float *)this + 0x90) = 0.0; /*0x632f4a*/
    *((_BYTE *)this + 0x290) = 0; /*0x632f50*/
    *((float *)this + 0x6E) = 0.0; /*0x632f56*/
    *((_BYTE *)this + 0x2A8) = 0; /*0x632f5c*/
    *((float *)this + 0x98) = 0.0; /*0x632f62*/
    *((_BYTE *)this + 0x2A9) = 0; /*0x632f68*/
    *((float *)this + 0x99) = 0.0; /*0x632f6e*/
    *((_BYTE *)this + 0x2B8) = 0; /*0x632f74*/
    *(this + 0xAD) = 0; /*0x632f7c*/
    *((float *)this + 0x9B) = 1.0; /*0x632f82*/
    *((_BYTE *)this + 0x2B9) = 0; /*0x632f88*/
    *((float *)this + 0x9C) = 0.0; /*0x632f8e*/
    *((float *)this + 0xA3) = 0.0; /*0x632f94*/
    *(this + 0x9F) = (TESPackage *)LODWORD(g_zeroNiPoint3.x); /*0x632fa0*/
    *(this + 0xA0) = (TESPackage *)LODWORD(g_zeroNiPoint3.y); /*0x632fab*/
    *(this + 0xA1) = (TESPackage *)LODWORD(g_zeroNiPoint3.z); /*0x632fb7*/
    v6 = 0; /*0x632fbd*/
    v7 = (float *)(this + 0xB2); /*0x632fbf*/
    do /*0x632fd7*/
    {
      *v7 = 0.0; /*0x632fc5*/
      *((_BYTE *)this + v6++ + 0x2DC) = 0; /*0x632fc7*/
      ++v7; /*0x632fd1*/
    }
    while ( v6 < 5 ); /*0x632fd7*/
    v8 = *(this + 0xA9); /*0x632fd9*/
    *((float *)this + 0xAB) = 0.0; /*0x632fdf*/
    *((float *)this + 0xAC) = 0.0; /*0x632fe7*/
    *(this + 0xB9) = 0; /*0x632fed*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x632ff3*/
    if ( v8 ) /*0x632ff9*/
    {
      if ( v8[1] ) /*0x632ffb*/
      {
        do /*0x633015*/
        {
          v9 = *(_DWORD *)(v8[1] + 4); /*0x633004*/
          FormHeapFree(v8[1]); /*0x633008*/
          v8[1] = v9; /*0x633012*/
        }
        while ( v9 ); /*0x633015*/
      }
      *v8 = 0; /*0x633018*/
      *(this + 0xA9) = 0; /*0x63301a*/
    }
    *(this + 0x6F) = 0; /*0x633026*/
    *(this + 0x70) = 0; /*0x63302c*/
    *(this + 0x71) = 0; /*0x633032*/
    *(this + 0x72) = 0; /*0x633038*/
    if ( v11 ) /*0x63303e*/
      ((void (__thiscall *)(TESPackage **, void *))(*this)[0x17].members.time.duration)(this, v11); /*0x63304b*/
  }
  result = (TESForm::ModReferenceList *)g_TESSaveLoadGame->resetSelector; /*0x633053*/
  if ( result == (TESForm::ModReferenceList *)0x60000000 || result == (TESForm::ModReferenceList *)0x7FFFF000 ) /*0x633062*/
    *((_BYTE *)this + 0xD0) = 0; /*0x633064*/
  return result; /*0x63306a*/
}
