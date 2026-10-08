// Refreshes ClassMenu details from the displayed TESClass. Loops exactly seven majorSkills entries and writes seven names plus seven actor values to tile traits; specialization and two attributes are written separately.
void __thiscall ClassMenu_RefreshClassDetails(TESChildCELL **this, TESChildCELL *arg0)
{
  TESChildCELL *v2; // esi
  int i; // ebx
  unsigned int v5; // eax
  char *v6; // eax
  _DWORD *v7; // ebx
  TESObjectCELL *ParentCell; // eax
  char *v9; // eax
  Tile *v10; // ebx
  _DWORD *v11; // ebx
  UInt32 AV; // eax
  char *v13; // eax
  Tile *v14; // ebx
  _DWORD *v15; // ebx
  void *NiNode; // eax
  char *v17; // eax
  Tile *v18; // ebx
  char *vtbl; // esi
  _DWORD *v20; // ebx
  Tile *v21; // esi
  InterfaceManager *Singleton; // eax
  double v23; // st7
  float a2; // [esp+0h] [ebp-18h]
  float a2a; // [esp+0h] [ebp-18h]
  float a2b; // [esp+0h] [ebp-18h]
  float a2c; // [esp+0h] [ebp-18h]
  float v28; // [esp+4h] [ebp-14h]
  Tile *v29; // [esp+14h] [ebp-4h]
  TESChildCELL *v30; // [esp+1Ch] [ebp+4h]

  v2 = arg0; /*0x596cf3*/
  if ( !arg0 ) /*0x596cfc*/
    v2 = *(this + 0xF); /*0x596cfe*/
  for ( i = 0; i < 7; ++i ) /*0x596d01*/
  {
    v30 = *(this + 1); /*0x596d0a*/
    v5 = TESClass_GetMajorSkillAV(v2, i);       // Class menu renders exactly seven major skill names in stored slot order. /*0x596d14*/
    v6 = (char *)ActorValue_GetSkillNameChecked(v5); /*0x596d1a*/
    Tile_SetString(v30, (_DWORD *)(i + 0xFAF), v6); /*0x596d2b*/
    v29 = (Tile *)*(this + 1); /*0x596d36*/
    a2 = (float)TESClass_GetMajorSkillAV(v2, i);// Class menu also writes each stored major SkillActorValue to its corresponding tile value. /*0x596d4c*/
    Tile_SetFloat(v29, (_DWORD *)(i + 0xFB9), a2); /*0x596d50*/
  }
  v7 = *(this + 1); /*0x596d5d*/
  ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)v2); /*0x596d62*/
  v9 = (char *)ActorValue_GetSpecializationName((unsigned int)ParentCell); /*0x596d68*/
  Tile_SetString(v7, (_DWORD *)0xFB6, v9); /*0x596d78*/
  v10 = (Tile *)*(this + 1); /*0x596d7d*/
  a2a = (float)(int)Shared_GetDwordAtOffset40((TESObjectREFR *)v2); /*0x596d92*/
  Tile_SetFloat(v10, (_DWORD *)0xFC0, a2a); /*0x596d9a*/
  v11 = *(this + 1); /*0x596d9f*/
  AV = Shared_GetDwordAtOffset38((HighProcess *)v2); /*0x596da4*/
  v13 = (char *)ActorValue_GetAttributeNameChecked(AV); /*0x596daa*/
  Tile_SetString(v11, (_DWORD *)0xFB7, v13); /*0x596dba*/
  v14 = (Tile *)*(this + 1); /*0x596dbf*/
  a2b = (float)(int)Shared_GetDwordAtOffset38((HighProcess *)v2); /*0x596dd4*/
  Tile_SetFloat(v14, (_DWORD *)0xFC1, a2b); /*0x596ddc*/
  v15 = *(this + 1); /*0x596de1*/
  NiNode = Shared_GetDwordAtOffset3C((TESObjectREFR *)v2); /*0x596de6*/
  v17 = (char *)ActorValue_GetAttributeNameChecked((unsigned int)NiNode); /*0x596dec*/
  Tile_SetString(v15, (_DWORD *)0xFB8, v17); /*0x596dfc*/
  v18 = (Tile *)*(this + 1); /*0x596e01*/
  a2c = (float)(int)Shared_GetDwordAtOffset3C((TESObjectREFR *)v2); /*0x596e16*/
  Tile_SetFloat(v18, (_DWORD *)0xFC2, a2c); /*0x596e1e*/
  vtbl = (char *)v2[0xC].vtbl; /*0x596e23*/
  if ( !vtbl ) /*0x596e29*/
    vtbl = EmptyString; /*0x596e2b*/
  Tile_SetString(*(this + 1), (_DWORD *)0xFC3, vtbl); /*0x596e39*/
  v20 = (*(this + 0xA))[0xD].vtbl; /*0x596e41*/
  while ( v20 ) /*0x596e46*/
  {
    v21 = (Tile *)v20[2]; /*0x596e50*/
    v20 = (_DWORD *)*v20; /*0x596e56*/
    if ( (double)(int)*(this + 0x11) == Tile_GetFloat(v21, 0xFAA) ) /*0x596e71*/
    {
      Tile_SetFloat(v21, (_DWORD *)0xFB0, fConstant_2); /*0x596e81*/
      InterfaceManager_GetSingleton(0, 1); /*0x596e8a*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x596e93*/
      v23 = (double)(int)++Singleton->unk08C; /*0x596e9f*/
      if ( (int)Singleton->unk08C < 0 ) /*0x596eb2*/
        v23 = v23 + flt_A2FC78; /*0x596eb4*/
      v28 = v23; /*0x596ebd*/
      Tile_SetFloat(v21, (_DWORD *)0xFF0, v28); /*0x596ec7*/
    }
    else
    {
      Tile_SetFloat(v21, (_DWORD *)0xFB0, 1.0); /*0x596ed3*/
    }
  }
}
