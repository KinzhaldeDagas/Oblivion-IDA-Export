// SpeedTreeOBSE 2026-06-01 hook-truth correction: base resource builder still calls branch 0x5616F0, fixed-card leaf 0x5622B0, then simple STBB 0x562E20. No generic mesh-leaf/resource sidecar consumer is present; optional 0x563741 hook state now gates leafMesh log-only classification.
void __thiscall BSTreeModel_CreateGeometry(
        BSTreeModel_OblivionLayout_058 *this,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree)
{
  bhkRefObject *collisionShape; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // kr00_4
  int v8; // ecx
  int v9; // eax
  __int16 v10; // dx
  int v11; // ecx
  unsigned int v12; // eax
  char *v13; // edi
  char *v15; // eax
  char v17; // dl
  NiObject *v18; // eax
  int v19; // eax
  Ni2DBuffer *v20; // eax
  bhkRefObject *TrunkCapsuleShape; // eax
  float radius; // [esp+20h] [ebp-6ACh]
  _DWORD v23[291]; // [esp+24h] [ebp-6A8h] BYREF
  int v24; // [esp+4B0h] [ebp-21Ch] BYREF
  char Src[4]; // [esp+4B4h] [ebp-218h] BYREF
  int v26; // [esp+4B8h] [ebp-214h]
  int v27; // [esp+4BCh] [ebp-210h]
  int v28; // [esp+4C0h] [ebp-20Ch]
  __int16 v29; // [esp+4C4h] [ebp-208h]
  char v30[4]; // [esp+5B4h] [ebp-118h]
  char v31[260]; // [esp+5B8h] [ebp-114h] BYREF
  unsigned int v32; // [esp+6C8h] [ebp-4h]

  if ( this->speedTree ) /*0x563726*/
  {
    if ( this->modelState_0_uninit_1_base_2_instance != 2 ) /*0x563733*/
    {
      BSTreeModel_CreateBranchGeometry(this); /*0x563739*/
      BSTreeModel_CreateLeafGeometry(this, tree);// Build fixed-card leaf geometry/resources for all leaf LODs via 0x5622B0. /*0x563741*/
      BSTreeModel_CreateBillboardGeometry(this, tree);// SpeedTreeOBSE 2026-05-31 absolute texture path enablement: branch-normal map-bank writer remains narrow index0 only; retained map-bank texture paths now normalize absolute source-library strings to safe local candidates; no generic sidecar mutation. /*0x563749*/
      collisionShape = this->collisionShape; /*0x56374e*/
      if ( collisionShape ) /*0x563753*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&collisionShape->members) ) /*0x563759*/
          collisionShape->__vftable->super.Destructor((NiRefObject *)collisionShape, 1); /*0x56376f*/
        this->collisionShape = 0; /*0x563771*/
      }
      v4 = (char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)&tree->prefix_000_047[0x24] + 0x14))(&tree->prefix_000_047[0x24]); /*0x56377d*/
      v5 = v31; /*0x56377f*/
      do /*0x563792*/
      {
        v6 = *v4; /*0x563786*/
        *v5++ = *v4++; /*0x563788*/
      }
      while ( v6 ); /*0x563792*/
      v7 = strlen(v31); /*0x563794*/
      if ( v7 > 4 ) /*0x5637ae*/
        v30[v7] = 0; /*0x5637b0*/
      NiStream::NiStream((NiStream *)v23); /*0x5637bb*/
      v23[0] = &BSStream::`vftable'; /*0x5637c0*/
      v24 = 0; /*0x5637c8*/
      v23[0x122] = 0; /*0x5637cf*/
      v8 = dword_A6552C; /*0x5637dc*/
      v9 = dword_A65534; /*0x5637e2*/
      v26 = dword_A65530; /*0x5637e7*/
      v10 = word_A6553C; /*0x5637ee*/
      *(_DWORD *)Src = v8; /*0x5637f5*/
      v11 = dword_A65538; /*0x5637fc*/
      v27 = v9; /*0x563802*/
      v29 = v10; /*0x563810*/
      v32 = 0; /*0x563818*/
      v28 = v11; /*0x56381f*/
      v12 = strlen(v31) + 1; /*0x56382f*/
      v13 = (char *)&v24 + 3; /*0x56383a*/
      while ( *++v13 ) /*0x563848*/
        ; /*0x563840*/
      qmemcpy(v13, v31, v12); /*0x563851*/
      v15 = (char *)&v24 + 3; /*0x563861*/
      while ( *++v15 ) /*0x56386c*/
        ; /*0x563864*/
      v17 = byte_A65528; /*0x563874*/
      *(_DWORD *)v15 = dword_A65524; /*0x56387a*/
      v15[4] = v17; /*0x56387c*/
      if ( sub_6F9980((char *)v23, Src, 0) ) /*0x56388c*/
      {
        if ( v23[0x84] == 1 ) /*0x56389d*/
        {
          v18 = NiRTTI_Cast((BSStringT *)&stru_B3FA80, *(NiObject **)v23[0x82]); /*0x5638ae*/
          v19 = sub_4A05E0((int)v18); /*0x5638b4*/
          if ( v19 ) /*0x5638be*/
          {
            v20 = *(Ni2DBuffer **)(v19 + 0x10); /*0x5638c0*/
            if ( v20 ) /*0x5638c5*/
              NiSmartPointer_Set__((Ni2DBuffer **)&this->collisionShape, v20); /*0x5638cb*/
          }
        }
      }
      if ( !this->collisionShape && flt_A56670 < (double)this->trunkLength )// Verified: if no collision shape was loaded from the tree model and BSTreeModel.trunkLength exceeds 64.0 (flt_A56670), CreateGeometry builds a fallback trunk capsule. /*0x5638e6*/
      {
        radius = this->trunkWidth * dbl_A2FAA0; // Verified capsule radius input is BSTreeModel.trunkWidth * 0.5. /*0x5638f4*/
        TrunkCapsuleShape = BSTreeModel_CreateTrunkCapsuleShape(this->trunkLength, radius);// Verified calls BSTreeModel_CreateTrunkCapsuleShape(trunkLength, trunkWidth*0.5) and stores the returned Havok object at BSTreeModel.collisionShape (+0x40). /*0x563906*/
        NiSmartPointer_Set__((Ni2DBuffer **)&this->collisionShape, (Ni2DBuffer *)TrunkCapsuleShape); /*0x563911*/
      }
      v32 = 0xFFFFFFFF; /*0x56391a*/
      BSStream::~BSStream((BSStream *)v23); /*0x563925*/
    }
  }
}
