double __thiscall sub_68A300(const TravelPathNode **this, TESObjectREFR *arg0, float a3)
{
  _DWORD *v5; // eax
  const TravelPathNode *v6; // ecx
  NiPoint3 *Position; // edi
  float *v8; // eax
  double v9; // st5
  double v10; // st6
  const TravelPathNode *v11; // ecx
  NiPoint3 *v12; // eax
  double v13; // st7
  float z; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v16; // eax
  double v17; // st7
  TESObjectCELL *DwordAtOffset40; // eax
  TESForm *v19; // ebp
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *CurrentWorldspace; // edi
  float *v22; // eax
  TESWorldSpace *v23; // eax
  TESObjectREFR *v24; // edi
  double v25; // st7
  TESObjectCELL **v26; // eax
  TESObjectCELL **v27; // eax
  float radians; // [esp+Ch] [ebp-44h]
  float v30; // [esp+20h] [ebp-30h]
  int v31; // [esp+24h] [ebp-2Ch]
  float v32; // [esp+28h] [ebp-28h]
  int a2; // [esp+2Ch] [ebp-24h] BYREF
  float y; // [esp+30h] [ebp-20h]
  float v35; // [esp+34h] [ebp-1Ch]
  float v36; // [esp+38h] [ebp-18h] BYREF
  float v37; // [esp+3Ch] [ebp-14h]
  float v38; // [esp+40h] [ebp-10h]
  int v39; // [esp+44h] [ebp-Ch] BYREF
  float v40; // [esp+48h] [ebp-8h]
  float v41; // [esp+4Ch] [ebp-4h]
  float v42; // [esp+54h] [ebp+4h]
  float v43; // [esp+54h] [ebp+4h]
  float v44; // [esp+54h] [ebp+4h]
  int v45; // [esp+54h] [ebp+4h]

  if ( !arg0 ) /*0x68a30f*/
    return 0.0; /*0x68a30f*/
  if ( a3 <= 0.0 ) /*0x68a320*/
    return 0.0; /*0x68a320*/
  if ( !IsWeaponReady(arg0) ) /*0x68a328*/
    return 0.0; /*0x68a328*/
  if ( ((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0) ) /*0x68a33f*/
  {
    v5 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0); /*0x68a34f*/
    if ( !IsWeaponReady(v5) ) /*0x68a353*/
      return 0.0; /*0x68a6ca*/
  }
  v6 = *(this + 1); /*0x68a360*/
  if ( v6 ) /*0x68a365*/
    Position = TravelPathNode_GetPosition(v6); /*0x68a36c*/
  else
    Position = &g_zeroNiPoint3; /*0x68a370*/
  v8 = arg0->vtbl->GetPos(arg0); /*0x68a37f*/
  v36 = Position->x - *v8; /*0x68a387*/
  v37 = Position->y - v8[1]; /*0x68a391*/
  v38 = Position->z - v8[2]; /*0x68a39b*/
  v30 = sub_5E65B0(arg0) * unk_B3A4C8;          // AI world/path movement uses sub_5E65B0(actor) * scalar for segment speed; absence of run/swim/fly flags falls through to walk speed. /*0x68a3aa*/
  v9 = v36 * v36; /*0x68a3c2*/
  v42 = v37 * v37 + v9 + v38 * v38; /*0x68a3ca*/
  v43 = sqrt(v42); /*0x68a3d7*/
  v44 = v43 / v30; /*0x68a3e3*/
  v10 = v44; /*0x68a3eb*/
  if ( v44 >= (double)a3 ) /*0x68a3f6*/
  {
    Vector3_NormalizeInPlace(&v36); /*0x68a42c*/
    GetPos = arg0->vtbl->GetPos; /*0x68a43d*/
    *(float *)&v39 = v36 * v30; /*0x68a44b*/
    v40 = v37 * v30; /*0x68a455*/
    v41 = v30 * v38; /*0x68a45d*/
    v9 = a3; /*0x68a469*/
    v36 = *(float *)&v39 * a3; /*0x68a46f*/
    v10 = v40 * a3; /*0x68a477*/
    v37 = v10; /*0x68a479*/
    v38 = a3 * v41; /*0x68a481*/
    v16 = GetPos(arg0); /*0x68a485*/
    *(float *)&v39 = v36 + *v16; /*0x68a48d*/
    v40 = v16[1] + v37; /*0x68a49c*/
    v17 = v16[2]; /*0x68a4a4*/
    a2 = v39; /*0x68a4a7*/
    y = v40; /*0x68a4af*/
    v41 = v17 + v38; /*0x68a4b3*/
    z = v41; /*0x68a4b7*/
    v13 = 0.0; /*0x68a4bb*/
  }
  else
  {
    v11 = *(this + 1); /*0x68a3f8*/
    if ( v11 ) /*0x68a3fd*/
      v12 = TravelPathNode_GetPosition(v11); /*0x68a3ff*/
    else
      v12 = &g_zeroNiPoint3; /*0x68a406*/
    v13 = a3 - v44; /*0x68a411*/
    a2 = SLODWORD(v12->x); /*0x68a415*/
    y = v12->y; /*0x68a41c*/
    z = v12->z; /*0x68a420*/
  }
  v32 = v13; /*0x68a4bf*/
  v35 = z; /*0x68a4c3*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x68a4c7*/
  v19 = (TESForm *)DwordAtOffset40; /*0x68a4cc*/
  if ( !DwordAtOffset40 || !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x68a4d4*/
  {
    LOBYTE(this) = 0; /*0x68a4eb*/
    v45 = (int)*arg0->vtbl->GetPos(arg0); /*0x68a4f9*/
    v31 = (int)arg0->vtbl->GetPos(arg0)[1]; /*0x68a51c*/
    LODWORD(v30) = (int)y; /*0x68a524*/
    if ( ((v45 ^ (int)*(float *)&a2) & 0xFFFFF000) != 0 || ((v31 ^ LODWORD(v30)) & 0xFFFFF000) != 0 ) /*0x68a546*/
      LOBYTE(this) = 1; /*0x68a548*/
    if ( !v19 ) /*0x68a54c*/
    {
      WorldSpace = TESObjectREFR_GetWorldSpace(arg0); /*0x68a551*/
      v19 = sub_44A270((TESWorldSpace **)g_TESDataHandler, *(float *)&a2, y, WorldSpace, 0); /*0x68a574*/
    }
    if ( (_BYTE)this ) /*0x68a578*/
    {
      if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x68a584*/
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x68a595*/
        if ( CurrentWorldspace == TESObjectREFR_GetWorldSpace(arg0) ) /*0x68a59e*/
        {
          radians = flt_A427E4; /*0x68a5a9*/
          v22 = arg0->vtbl->GetPos(arg0); /*0x68a5be*/
          if ( sub_43F7C0((int *)MEMORY[0xB333A0], v22, (float *)&a2, (float *)&v39, radians) ) /*0x68a5c7*/
          {
            v23 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x68a5d8*/
            v19 = sub_44A270((TESWorldSpace **)g_TESDataHandler, *(float *)&v39, v40, v23, 0); /*0x68a603*/
            a2 = v39; /*0x68a609*/
            y = v40; /*0x68a60d*/
            v35 = v41; /*0x68a611*/
          }
        }
      }
    }
  }
  v24 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0); /*0x68a62c*/
  TESObjectREFR_SetPosition(arg0, *(float *)&a2, y, v35); /*0x68a63e*/
  v25 = flt_A32048; /*0x68a643*/
  TESObjectREFR_SetRotationX(arg0, flt_A32048); /*0x68a64f*/
  if ( v24 ) /*0x68a656*/
  {
    TESObjectREFR_SetPosition(v24, v32, *(float *)&a2, y); /*0x68a673*/
    v25 = flt_A32048; /*0x68a678*/
    TESObjectREFR_SetRotationX(v24, flt_A32048); /*0x68a684*/
  }
  if ( v19 != (TESForm *)Shared_GetDwordAtOffset40(arg0) ) /*0x68a692*/
  {
    if ( v24 ) /*0x68a696*/
    {
      v26 = (TESObjectCELL **)TESObjectREFR_GetWorldSpace(v24); /*0x68a69a*/
      sub_4DD4B0((int)this, v9, v10, v25, (Actor *)v24, (TESObjectCELL *)v19, v26); /*0x68a6a2*/
    }
    v27 = (TESObjectCELL **)TESObjectREFR_GetWorldSpace(arg0); /*0x68a6ac*/
    sub_4DD4B0((int)this, v9, v10, v25, (Actor *)arg0, (TESObjectCELL *)v19, v27); /*0x68a6b4*/
  }
  return v30; /*0x68a6c0*/
}
