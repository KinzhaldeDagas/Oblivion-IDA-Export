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
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v48; // [esp+10h] [ebp-B8h]
  float v49; // [esp+10h] [ebp-B8h]
  Actor *v50; // [esp+28h] [ebp-A0h]
  int v51; // [esp+2Ch] [ebp-9Ch]
  float v52; // [esp+30h] [ebp-98h] BYREF
  int v53; // [esp+34h] [ebp-94h]
  int v54; // [esp+38h] [ebp-90h]
  _DWORD *v55; // [esp+3Ch] [ebp-8Ch]
  int v56; // [esp+40h] [ebp-88h]
  int v57[4]; // [esp+44h] [ebp-84h] BYREF
  _BYTE v58[36]; // [esp+54h] [ebp-74h] BYREF
  __int128 v59; // [esp+78h] [ebp-50h] BYREF
  int v60; // [esp+98h] [ebp-30h]
  int v61; // [esp+A0h] [ebp-28h]
  int v62; // [esp+C4h] [ebp-4h]

  v5 = a5;
  v48 = a5[2].m128_i32[0];
  v56 = (int)a5;
  v7 = 0;
  v8 = sub_8AFCE0(v48);
  if ( v8 )
    v7 = sub_4DC270((int)v8);
  v9 = OblivionDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &MagicProjectile `RTTI Type Descriptor',
         0);
  v10 = 0;
  v55 = v9;
  if ( !v9 )
  {
    v9 = *(_DWORD **)(a1 + 0x1E0);
    v55 = v9;
  }
  LOBYTE(v11) = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v9 + 0x210))(v9, a4);
  if ( (_BYTE)v11 )
  {
    v50 = 0;
    v12 = sub_8AFCE0(a5[2].m128_i32[2]);
    if ( v12 )
    {
      v13 = sub_4DC270((int)v12);
      v50 = (Actor *)v13;
      if ( v13 )
      {
        if ( v13->vtbl->super.super.super.IsActor((TESObjectREFR *)v13) )
          v10 = v50;
      }
    }
    v11 = a5[2].m128_i32[2];
    if ( *(_BYTE *)(v11 + 0x18) != 2
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
      LOBYTE(v11) = (_BYTE)v50;
      if ( !v50 || v50 != (Actor *)TESDataHandler_g_PlayerRef->unk578 )
      {
        if ( !v10 || (LOBYTE(v11) = Actor_IsGhost(v10), !(_BYTE)v11) )
        {
          if ( byte_B15A68 )
          {
            sub_532210(&v59, (int)a5);
            v15 = v60;
            if ( *(_DWORD *)v60 )
              v16 = *(_DWORD *)(*(_DWORD *)v60 + 8);
            else
              v16 = 0;
            if ( v16 )
            {
              v17 = (NiNode *)FormHeapAlloc(0xDCu);
              v18 = 0;
              v62 = 0;
              if ( v17 )
                v18 = NiNode::NiNode(v17, 0);
              v19 = *(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v16 + 0x90);
              v62 = 0xFFFFFFFF;
              v19(v16, v18);
              sub_607740((int)v58, *(__m128 **)(v15 + 8));
              v20 = v60;
              qmemcpy(&v18->members.super.m_localTransform, v58, 0x24u);
              sub_43F3E0(&v52, (__m128 *)(*(_DWORD *)(v20 + 8) + 0x30));
              v21 = v53;
              v22 = *(float *)&v54;
              v18->members.super.m_localTransform.pos.x = v52;
              LODWORD(v18->members.super.m_localTransform.pos.y) = v21;
              v18->members.super.m_localTransform.pos.z = v22;
              v23 = (BSShaderProperty *)sub_4E70B0();
              sub_405680(v18, v23);
              v24 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
              v51 = (int)v24;
              v62 = 1;
              if ( v24 )
                v25 = (BSShaderProperty *)sub_4059D0(v24);
              else
                v25 = 0;
              v25->member.super.flags |= 1u;
              v62 = 0xFFFFFFFF;
              sub_405680(v18, v25);
              a4 = flt_A3D8F0;
              sub_440E60(TES, (int)v18, flt_A3D8F0);
              v5 = (__m128 *)v56;
            }
            v26 = v61;
            if ( *(_DWORD *)v61 )
              v27 = *(_DWORD *)(*(_DWORD *)v61 + 8);
            else
              v27 = 0;
            if ( v27 )
            {
              v28 = (NiNode *)FormHeapAlloc(0xDCu);
              v62 = 2;
              if ( v28 )
                v29 = NiNode::NiNode(v28, 0);
              else
                v29 = 0;
              v30 = *(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v27 + 0x90);
              v62 = 0xFFFFFFFF;
              v30(v27, v29);
              sub_607740((int)v58, *(__m128 **)(v26 + 8));
              v31 = v61;
              qmemcpy(&v29->members.super.m_localTransform, v58, 0x24u);
              sub_43F3E0(&v52, (__m128 *)(*(_DWORD *)(v31 + 8) + 0x30));
              v32 = v53;
              v33 = *(float *)&v54;
              v29->members.super.m_localTransform.pos.x = v52;
              LODWORD(v29->members.super.m_localTransform.pos.y) = v32;
              v29->members.super.m_localTransform.pos.z = v33;
              v34 = (BSShaderProperty *)sub_4E70B0();
              sub_405680(v29, v34);
              v35 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
              v51 = (int)v35;
              v62 = 3;
              if ( v35 )
                v36 = (BSShaderProperty *)sub_4059D0(v35);
              else
                v36 = 0;
              v36->member.super.flags |= 1u;
              v62 = 0xFFFFFFFF;
              sub_405680(v29, v36);
              a4 = flt_A3D8F0;
              sub_440E60(TES, (int)v29, flt_A3D8F0);
              v5 = (__m128 *)v56;
            }
          }
          sub_43F3E0(&v52, v5);
          v37 = v54;
          if ( byte_B15A68 )
          {
            *(float *)v57 = 1.0;
            a3 = 0.0;
            *(float *)&v57[1] = 0.0;
            *(float *)&v57[2] = 0.0;
            *(float *)&v57[3] = 1.0;
            v38 = sub_47FD30(flt_A31E2C, (NiD3DPassVtbl **)v57);
            v39 = (BSShaderProperty *)sub_4E70B0();
            sub_405680((NiNode *)v38, v39);
            a4 = flt_A3D8F0;
            v40 = v53;
            v38->members.m_localTransform.pos.x = v52;
            LODWORD(v38->members.m_localTransform.pos.y) = v40;
            v49 = a4;
            LODWORD(v38->members.m_localTransform.pos.z) = v37;
            sub_440E60(TES, (int)v38, v49);
          }
          v41 = (MagicCaster *)v55[0x1A];
          v42 = 0;
          LOBYTE(v51) = 0;
          if ( v50 )
          {
            if ( v50->vtbl->super.super.IsActor((TESObjectREFR *)v50) )
            {
              v42 = (TESObjectREFR *)v50;
              LOBYTE(v51) = 1;
            }
          }
          if ( v41 )
          {
            ParentActor = (TESObjectREFR *)MagicCaster_GetParentActor(v41);
            if ( ParentActor )
              sub_677760((int)&ActorProcessManager_ptr, v37, a2, a4, a3, ParentActor, v52, v53, v37, v51, v42);
          }
          v44 = *(_DWORD *)(v56 + 0x28);
          if ( *(_BYTE *)(v44 + 0x18) == 1 && (v45 = v44 + *(_DWORD *)(v44 + 0x10)) != 0 )
            v46 = *(_DWORD *)(v45 + 0xC);
          else
            v46 = 0;
          LOBYTE(v11) = (*(char (__thiscall **)(_DWORD *, float, int, int, int, Actor *, _DWORD))(*v55 + 0x208))(
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
  return v11;
}
