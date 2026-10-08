char __userpurge sub_68F450@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, __m128 *a5)
{
  __m128 *v5; // ebx
  PlayerCharacter *v7; // esi
  NiAVObject *v8; // eax
  _DWORD *v9; // eax
  Actor *v10; // esi
  int v11; // eax
  NiAVObject *v12; // eax
  PlayerCharacter *v13; // eax
  LowProcess *process; // ecx
  int v15; // edi
  int v16; // esi
  NiNode *v17; // eax
  NiNode *v18; // ebx
  void (__thiscall *v19)(int, NiNode *); // eax
  int v20; // edx
  int v21; // edx
  float v22; // eax
  BSShaderProperty *v23; // eax
  NiObjectNET *v24; // eax
  BSShaderProperty *v25; // eax
  int v26; // edi
  int v27; // esi
  NiNode *v28; // eax
  NiNode *v29; // ebx
  void (__thiscall *v30)(int, NiNode *); // eax
  int v31; // edx
  int v32; // edx
  float v33; // eax
  BSShaderProperty *v34; // eax
  NiObjectNET *v35; // eax
  BSShaderProperty *v36; // eax
  int v37; // ebx
  NiAVObject *v38; // esi
  BSShaderProperty *v39; // eax
  int v40; // ecx
  MagicCaster *v41; // edi
  TESObjectREFR *v42; // esi
  TESObjectREFR *ParentActor; // eax
  __int32 v44; // ecx
  __int32 v45; // eax
  int v46; // eax
  int v48; // [esp+10h] [ebp-B8h]
  float v49; // [esp+10h] [ebp-B8h]
  Actor *v50; // [esp+28h] [ebp-A0h]
  int v51; // [esp+2Ch] [ebp-9Ch]
  float v52; // [esp+30h] [ebp-98h] BYREF
  int v53; // [esp+34h] [ebp-94h]
  int v54; // [esp+38h] [ebp-90h]
  _DWORD *v55; // [esp+3Ch] [ebp-8Ch]
  __m128 *v56; // [esp+40h] [ebp-88h]
  int v57[4]; // [esp+44h] [ebp-84h] BYREF
  _BYTE v58[36]; // [esp+54h] [ebp-74h] BYREF
  __int128 v59; // [esp+78h] [ebp-50h] BYREF
  int v60; // [esp+98h] [ebp-30h]
  int v61; // [esp+A0h] [ebp-28h]
  int v62; // [esp+C4h] [ebp-4h]

  v5 = a5; /*0x68f490*/
  v48 = a5[2].m128_i32[0]; /*0x68f496*/
  v56 = a5; /*0x68f499*/
  v7 = 0; /*0x68f49d*/
  v8 = bhkCollidable_ResolveNiAVObject(v48); /*0x68f49f*/
  if ( v8 ) /*0x68f4a9*/
    v7 = sub_4DC270((int)v8); /*0x68f4b4*/
  v9 = OblivionDynamicCast( /*0x68f4c5*/
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &MagicProjectile `RTTI Type Descriptor',
         0);
  v10 = 0; /*0x68f4ca*/
  v55 = v9; /*0x68f4d1*/
  if ( !v9 ) /*0x68f4d5*/
  {
    v9 = *(_DWORD **)(a1 + 0x1E0); /*0x68f4d7*/
    v55 = v9; /*0x68f4dd*/
  }
  LOBYTE(v11) = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*v9 + 0x210))( /*0x68f4eb*/
                  v9,
                  a4,
                  a3,
                  a2);
  if ( (_BYTE)v11 ) /*0x68f4ef*/
  {
    v50 = 0; /*0x68f4f9*/
    v12 = bhkCollidable_ResolveNiAVObject(a5[2].m128_i32[2]); /*0x68f4fd*/
    if ( v12 ) /*0x68f507*/
    {
      v13 = sub_4DC270((int)v12); /*0x68f50a*/
      v50 = (Actor *)v13; /*0x68f514*/
      if ( v13 ) /*0x68f518*/
      {
        if ( v13->vtbl->super.super.super.IsActor((TESObjectREFR *)v13) ) /*0x68f524*/
          v10 = v50; /*0x68f52a*/
      }
    }
    v11 = a5[2].m128_i32[2]; /*0x68f52e*/
    if ( *(_BYTE *)(v11 + 0x18) != 2 /*0x68f5ab*/
      || !(v11 + *(_DWORD *)(v11 + 0x10))
      || v10
      && (LOBYTE(v11) = v10->vtbl->super.super.IsDead((TESObjectREFR *)v10, 0), !(_BYTE)v11)
      && ((process = v10->members.super.process) == 0
       || !((int (__thiscall *)(LowProcess *))process->GetKnockedState)(process)
       || (v11 = ((int (__thiscall *)(LowProcess *))v10->members.super.process->GetKnockedState)(v10->members.super.process),
           v11 == 6))
      && (v11 = v10->vtbl->super.super.GetSleepState((TESObjectREFR *)v10), v11 != 4)
      && (v11 = v10->vtbl->super.super.GetSleepState((TESObjectREFR *)v10), v11 != 9) )
    {
      LOBYTE(v11) = (_BYTE)v50; /*0x68f5b1*/
      if ( !v50 || v50 != (Actor *)reference->unk578 ) /*0x68f5c5*/
      {
        if ( !v10 || (LOBYTE(v11) = Actor_IsGhost(v10), !(_BYTE)v11) ) /*0x68f5d8*/
        {
          if ( byte_B15A68 ) /*0x68f5de*/
          {
            hkpCdPoint_CopyHitEntry30(&v59, (int)a5); /*0x68f5f0*/
            v15 = v60; /*0x68f5f5*/
            if ( *(_DWORD *)v60 ) /*0x68f5fc*/
              v16 = *(_DWORD *)(*(_DWORD *)v60 + 8); /*0x68f602*/
            else
              v16 = 0; /*0x68f607*/
            if ( v16 ) /*0x68f60b*/
            {
              v17 = (NiNode *)FormHeapAlloc(0xDCu); /*0x68f616*/
              v18 = 0; /*0x68f622*/
              v62 = 0; /*0x68f626*/
              if ( v17 ) /*0x68f62d*/
                v18 = NiNode::NiNode(v17, 0); /*0x68f637*/
              v19 = *(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v16 + 0x90); /*0x68f63b*/
              v62 = 0xFFFFFFFF; /*0x68f644*/
              v19(v16, v18); /*0x68f64f*/
              sub_607740((int)v58, *(__m128 **)(v15 + 8)); /*0x68f65a*/
              v20 = v60; /*0x68f65f*/
              qmemcpy(&v18->members.super.m_localTransform, v58, 0x24u); /*0x68f672*/
              HavokVector_ToWorldVector(&v52, (__m128 *)(*(_DWORD *)(v20 + 8) + 0x30)); /*0x68f680*/
              v21 = v53; /*0x68f689*/
              v22 = *(float *)&v54; /*0x68f68d*/
              v18->members.super.m_localTransform.pos.x = v52; /*0x68f691*/
              LODWORD(v18->members.super.m_localTransform.pos.y) = v21; /*0x68f694*/
              v18->members.super.m_localTransform.pos.z = v22; /*0x68f69a*/
              v23 = (BSShaderProperty *)sub_4E70B0(); /*0x68f69d*/
              sub_405680(v18, v23); /*0x68f6a5*/
              v24 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x68f6ac*/
              v51 = (int)v24; /*0x68f6b4*/
              v62 = 1; /*0x68f6bf*/
              if ( v24 ) /*0x68f6c6*/
                v25 = (BSShaderProperty *)sub_4059D0(v24); /*0x68f6ca*/
              else
                v25 = 0; /*0x68f6d1*/
              v25->member.super.flags |= 1u; /*0x68f6d3*/
              v62 = 0xFFFFFFFF; /*0x68f6da*/
              sub_405680(v18, v25); /*0x68f6e5*/
              a4 = flt_A3D8F0; /*0x68f6ea*/
              sub_440E60(MEMORY[0xB333A0], (int)v18, flt_A3D8F0); /*0x68f6fb*/
              v5 = v56; /*0x68f700*/
            }
            v26 = v61; /*0x68f704*/
            if ( *(_DWORD *)v61 ) /*0x68f70b*/
              v27 = *(_DWORD *)(*(_DWORD *)v61 + 8); /*0x68f711*/
            else
              v27 = 0; /*0x68f716*/
            if ( v27 ) /*0x68f71a*/
            {
              v28 = (NiNode *)FormHeapAlloc(0xDCu); /*0x68f725*/
              v62 = 2; /*0x68f733*/
              if ( v28 ) /*0x68f73e*/
                v29 = NiNode::NiNode(v28, 0); /*0x68f749*/
              else
                v29 = 0; /*0x68f74d*/
              v30 = *(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v27 + 0x90); /*0x68f751*/
              v62 = 0xFFFFFFFF; /*0x68f75a*/
              v30(v27, v29); /*0x68f765*/
              sub_607740((int)v58, *(__m128 **)(v26 + 8)); /*0x68f770*/
              v31 = v61; /*0x68f775*/
              qmemcpy(&v29->members.super.m_localTransform, v58, 0x24u); /*0x68f788*/
              HavokVector_ToWorldVector(&v52, (__m128 *)(*(_DWORD *)(v31 + 8) + 0x30)); /*0x68f796*/
              v32 = v53; /*0x68f79f*/
              v33 = *(float *)&v54; /*0x68f7a3*/
              v29->members.super.m_localTransform.pos.x = v52; /*0x68f7a7*/
              LODWORD(v29->members.super.m_localTransform.pos.y) = v32; /*0x68f7aa*/
              v29->members.super.m_localTransform.pos.z = v33; /*0x68f7b0*/
              v34 = (BSShaderProperty *)sub_4E70B0(); /*0x68f7b3*/
              sub_405680(v29, v34); /*0x68f7bb*/
              v35 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x68f7c2*/
              v51 = (int)v35; /*0x68f7ca*/
              v62 = 3; /*0x68f7d0*/
              if ( v35 ) /*0x68f7db*/
                v36 = (BSShaderProperty *)sub_4059D0(v35); /*0x68f7df*/
              else
                v36 = 0; /*0x68f7e6*/
              v36->member.super.flags |= 1u; /*0x68f7e8*/
              v62 = 0xFFFFFFFF; /*0x68f7f0*/
              sub_405680(v29, v36); /*0x68f7fb*/
              a4 = flt_A3D8F0; /*0x68f800*/
              sub_440E60(MEMORY[0xB333A0], (int)v29, flt_A3D8F0); /*0x68f811*/
              v5 = v56; /*0x68f816*/
            }
          }
          HavokVector_ToWorldVector(&v52, v5); /*0x68f820*/
          v37 = v54; /*0x68f825*/
          if ( byte_B15A68 ) /*0x68f82c*/
          {
            *(float *)v57 = 1.0; /*0x68f83b*/
            a3 = 0.0; /*0x68f840*/
            *(float *)&v57[1] = 0.0; /*0x68f843*/
            *(float *)&v57[2] = 0.0; /*0x68f847*/
            *(float *)&v57[3] = 1.0; /*0x68f84b*/
            v38 = sub_47FD30(flt_A31E2C, (NiD3DPassVtbl **)v57); /*0x68f860*/
            v39 = (BSShaderProperty *)sub_4E70B0(); /*0x68f862*/
            sub_405680((NiNode *)v38, v39); /*0x68f86a*/
            a4 = flt_A3D8F0; /*0x68f86f*/
            v40 = v53; /*0x68f875*/
            v38->members.m_localTransform.pos.x = v52; /*0x68f87d*/
            LODWORD(v38->members.m_localTransform.pos.y) = v40; /*0x68f881*/
            v49 = a4; /*0x68f884*/
            LODWORD(v38->members.m_localTransform.pos.z) = v37; /*0x68f887*/
            sub_440E60(MEMORY[0xB333A0], (int)v38, v49); /*0x68f891*/
          }
          v41 = (MagicCaster *)v55[0x1A]; /*0x68f89e*/
          v42 = 0; /*0x68f8a1*/
          LOBYTE(v51) = 0; /*0x68f8a5*/
          if ( v50 ) /*0x68f8aa*/
          {
            if ( v50->vtbl->super.super.IsActor((TESObjectREFR *)v50) ) /*0x68f8b4*/
            {
              v42 = (TESObjectREFR *)v50; /*0x68f8ba*/
              LOBYTE(v51) = 1; /*0x68f8be*/
            }
          }
          if ( v41 ) /*0x68f8c5*/
          {
            ParentActor = (TESObjectREFR *)MagicCaster_GetParentActor(v41); /*0x68f8c9*/
            if ( ParentActor ) /*0x68f8d0*/
              sub_677760((int)&qword_B3BB2C[0x75], v37, a2, a4, a3, ParentActor, v52, v53, v37, v51, v42); /*0x68f8f3*/
          }
          v44 = v56[2].m128_i32[2]; /*0x68f8fc*/
          if ( *(_BYTE *)(v44 + 0x18) == 1 && (v45 = v44 + *(_DWORD *)(v44 + 0x10)) != 0 ) /*0x68f90a*/
            v46 = *(_DWORD *)(v45 + 0xC); /*0x68f90c*/
          else
            v46 = 0; /*0x68f911*/
          LOBYTE(v11) = (*(char (__thiscall **)(_DWORD *, float, int, int, int, Actor *, _DWORD))(*v55 + 0x208))( /*0x68f93c*/
                          v55,
                          COERCE_FLOAT(LODWORD(v52)),
                          v53,
                          v37,
                          v46,
                          v50,
                          0);
        }
      }
    }
  }
  return v11; /*0x68f93e*/
}
