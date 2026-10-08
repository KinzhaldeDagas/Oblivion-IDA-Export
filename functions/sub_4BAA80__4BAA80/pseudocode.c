// Verified Oblivion TREE override ignores the rotationAnglesXYZ and cellLODBuffer parameters, then forwards its scalePercent array into the local billboard descriptor. Fallout's AddDistantLOD uses a four-float instance record (position XYZ + fScaleColor) and its own DistantLODGroup shader path; do not transplant Oblivion .lod record layout or world offsets.
void __thiscall TESObjectTREE_UpdateDistantBillboard(
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this,
        NiPoint3 *positions,
        NiPoint3 *rotationAnglesXYZ,
        float *scalePercent,
        unsigned int recordCount,
        unsigned int cellChunk,
        unsigned int packedCellLabel,
        NiNode *instancedLODNode,
        Ni2DBuffer *cellLODBuffer)
{
  NiObjectNET *v10; // edi
  int v11; // eax
  DistantTreeBillboardContext *v12; // eax
  DistantTreeBillboardContext *v13; // eax
  void *slot; // [esp+14h] [ebp-230h] BYREF
  float *scalesOrAngles; // [esp+18h] [ebp-22Ch]
  NiAVObject *v16; // [esp+1Ch] [ebp-228h] BYREF
  NiObjectNET *v17; // [esp+20h] [ebp-224h]
  int v18; // [esp+24h] [ebp-220h]
  DistantTreeBillboardContext *v19; // [esp+28h] [ebp-21Ch]
  int v20[65]; // [esp+2Ch] [ebp-218h] BYREF
  char Str1[260]; // [esp+130h] [ebp-114h] BYREF
  unsigned int v22; // [esp+240h] [ebp-4h]

  scalesOrAngles = scalePercent; /*0x4baad4*/
  if ( instancedLODNode /*0x4bab09*/
    && positions
    && scalePercent
    && recordCount
    && bEnableTrees_SpeedTree.value
    && TESObjectTREE_IsLargeEnoughForDistantLOD(this) )
  {
    v10 = 0; /*0x4bab1a*/
    if ( !sub_7B2A00(*(_DWORD *)&this->prefix_000_047[0xC]) ) /*0x4bab1c*/
    {
      OB_TESObjectTREE_BuildBillboardTexturePath_010201A0((TESObjectTREE_BillboardTail *)this, Str1); /*0x4bab36*/
      sub_47D8F0(Str1, (char *)v20); /*0x4bab48*/
      v11 = (*(int (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)unk_B35300 + 4))(unk_B35300, v20, 0); /*0x4bab61*/
      sub_405070(&slot, v11); /*0x4bab68*/
      v22 = 0; /*0x4bab71*/
      if ( !slot ) /*0x4bab78*/
      {
        v12 = (DistantTreeBillboardContext *)FormHeapAlloc(0x1Cu); /*0x4bab7c*/
        v19 = v12; /*0x4bab84*/
        LOBYTE(v22) = 1; /*0x4bab8a*/
        if ( v12 ) /*0x4bab92*/
          v13 = DistantTreeBillboardContext_ctor( /*0x4babb6*/
                  v12,
                  (TESObjectTREE_BillboardTail *)this,
                  cellChunk,
                  packedCellLabel,
                  instancedLODNode,
                  recordCount,
                  positions,
                  scalesOrAngles);
        else
          v13 = 0; /*0x4babbd*/
        LOBYTE(v22) = 0; /*0x4babcb*/
        QueuedTreeBillboard::QueuedTreeBillboard((const char *)v20, v13); /*0x4babd3*/
        v22 = 0xFFFFFFFF; /*0x4babdc*/
        NiPointerSlot_Release(&slot); /*0x4babe7*/
        return; /*0x4babec*/
      }
      v10 = sub_4BA780((TESObjectTREE_BillboardTail *)this, 1); /*0x4babfb*/
      v22 = 0xFFFFFFFF; /*0x4babfd*/
      NiPointerSlot_Release(&slot); /*0x4bac08*/
      if ( !v10 ) /*0x4bac0f*/
        return; /*0x4bac0f*/
    }
    sub_7B20B0(&v16); /*0x4bac15*/
    v18 = *(_DWORD *)&this->prefix_000_047[0xC]; /*0x4bac39*/
    v17 = v10; /*0x4bac45*/
    v16 = 0; /*0x4bac49*/
    sub_7B4010( /*0x4bac51*/
      cellChunk,
      (void *)packedCellLabel,
      (int)instancedLODNode,
      &v16,
      (int)positions,
      (int)scalesOrAngles,
      recordCount);
    if ( v17 ) /*0x4bac5f*/
      ((void (__thiscall *)(NiObjectNET *, int))*v17->vtbl)(v17, 1); /*0x4bac67*/
  }
}
