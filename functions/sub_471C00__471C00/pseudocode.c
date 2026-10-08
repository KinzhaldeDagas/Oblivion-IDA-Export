void __thiscall sub_471C00(ActorAnimData *this, Actor *a2)
{
  Actor *v3; // esi
  bool v4; // zf
  int v5; // edi
  BSShaderAccumulator *inited; // eax
  NiObject *v7; // eax
  NiObject *v8; // eax
  int v9; // ebp
  int v10; // edi
  TESForm *baseForm; // esi
  _DWORD *v12; // eax
  Ni2DBuffer *v13; // eax
  NiNode *RootNode; // eax
  float x; // ecx
  float y; // edx
  const char *m_pcName; // ecx
  Actor *m_controller; // edx
  ActorVtbl *vtbl; // eax
  int v20; // eax
  float v21; // edi
  float v22; // ebp
  ActorVtbl *v23; // edx
  TESForm *v24; // eax
  double v25; // st7
  float v26; // ecx
  NiBound *p_m_kWorldBound; // eax
  float v28[3]; // [esp+28h] [ebp-2Ch] BYREF
  float v29; // [esp+34h] [ebp-20h]
  float v30; // [esp+38h] [ebp-1Ch]
  float v31; // [esp+3Ch] [ebp-18h]
  const char *v32; // [esp+40h] [ebp-14h]
  Actor *v33; // [esp+44h] [ebp-10h]
  unsigned int v34; // [esp+50h] [ebp-4h]

  if ( this->RootNode && this->AccumNode && this->unk00 ) /*0x471c3d*/
  {
    v3 = a2; /*0x471c46*/
    v4 = a2 == (Actor *)reference; /*0x471c53*/
    LOBYTE(a2) = a2 != (Actor *)reference; /*0x471c55*/
    if ( !v4 /*0x471ccb*/
      && (Actor::GetDeadState((Concurrency::details::SchedulerBase *)v3) == (struct Concurrency::details::ScheduleGroupBase *)1
       || v3->vtbl->IsInCombat(v3, 1))
      || ((v5 = (int)v3->vtbl->super.super.GetNiNode((TESObjectREFR *)v3),
           !NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v5))
       || (v28[0] = *(float *)(v5 + 0xE8), v28[0] > 0.0))
      && (!(_BYTE)a2 || sub_47F7B0((float *)this->RootNode, (int)g_WorldSceneReceiverRoot->camera)) )
    {
      sub_5E1370(v3, 1, 1); /*0x471ce1*/
      inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x471ce6*/
      if ( inited && sub_7AA3C0((int)inited, v3->members.super.super.super.refID, 0) ) /*0x471cf7*/
        sub_5E1370(v3, 0, 2); /*0x471d04*/
      else
        sub_5E1370(v3, 1, 2); /*0x471d0c*/
      v7 = (NiObject *)v3->vtbl->super.super.GetNiNode((TESObjectREFR *)v3); /*0x471d1b*/
      v8 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB33E90][0x13F8], v7); /*0x471d23*/
      if ( v8 && (a2 = (Actor *)v8[0x1D].__vftable, flt_A3C778 > (double)*(float *)&a2) ) /*0x471d48*/
        sub_5E1370(v3, 0, 4); /*0x471d4e*/
      else
        sub_5E1370(v3, 1, 4); /*0x471d56*/
      v9 = 0; /*0x471d65*/
      v10 = 0; /*0x471d67*/
      if ( ((int (__thiscall *)(Actor *))v3->vtbl->Unk_9F)(v3) ) /*0x471d69*/
        v10 = (int)v3; /*0x471d6f*/
      else
        v9 = (int)v3; /*0x471d73*/
      baseForm = 0; /*0x471d75*/
      a2 = 0; /*0x471d77*/
      v34 = 0; /*0x471d7d*/
      if ( v9 ) /*0x471d81*/
      {
        if ( v10 ) /*0x471d85*/
          goto LABEL_29; /*0x471d85*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x388))(v9); /*0x471d94*/
      }
      else
      {
        if ( !v10 ) /*0x471d9a*/
          goto LABEL_34; /*0x471d9a*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x380))(v10); /*0x471da8*/
      }
      if ( !v9 ) /*0x471dac*/
      {
LABEL_32:
        if ( v10 ) /*0x471dfb*/
          unk_B3CBD0 = 1; /*0x471dfd*/
        goto LABEL_34; /*0x471dfd*/
      }
      if ( v10 ) /*0x471db0*/
      {
LABEL_29:
        v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x168))(v10); /*0x471db2*/
        if ( v12 ) /*0x471dc0*/
        {
          v13 = (Ni2DBuffer *)sub_478180(v12); /*0x471dc4*/
          NiSmartPointer_Set__((Ni2DBuffer **)&a2, v13); /*0x471dce*/
          if ( a2 ) /*0x471dd9*/
          {
            baseForm = a2->members.super.super.baseForm; /*0x471ddb*/
            ((void (__thiscall *)(TESForm *, float *, Actor *))baseForm->vtbl->Unk_22)(baseForm, v28, a2); /*0x471dee*/
            NiPointerSlot_Release((NiD3DVertexShader *)v28); /*0x471df4*/
          }
        }
        goto LABEL_32; /*0x471df4*/
      }
LABEL_34:
      sub_47CA30(this->RootNode, COERCE_NINODE_(this->unk94), this->AccumNode); /*0x471e04*/
      unk_B3CBD0 = 0; /*0x471e1c*/
      if ( baseForm ) /*0x471e23*/
      {
        if ( a2 ) /*0x471e2b*/
          ((void (__thiscall *)(TESForm *, Actor *, int))baseForm->vtbl->Unk_21)(baseForm, a2, 1); /*0x471e3a*/
      }
      this->unk00 = 0; /*0x471e40*/
      v34 = 0xFFFFFFFF; /*0x471e46*/
      NiPointerSlot_Release((NiD3DVertexShader *)&a2); /*0x471e4e*/
      return; /*0x471e53*/
    }
    sub_5E1370(v3, 0, 1); /*0x471e5e*/
    RootNode = this->RootNode; /*0x471e63*/
    x = RootNode->members.super.m_kWorldBound.Center.x; /*0x471e66*/
    y = RootNode->members.super.m_kWorldBound.Center.y; /*0x471e69*/
    RootNode = (NiNode *)((char *)RootNode + 0x20); /*0x471e6c*/
    v30 = x; /*0x471e6f*/
    m_pcName = RootNode->members.super.super.m_pcName; /*0x471e73*/
    v31 = y; /*0x471e76*/
    m_controller = (Actor *)RootNode->members.super.super.m_controller; /*0x471e7a*/
    vtbl = v3->vtbl; /*0x471e7d*/
    v32 = m_pcName; /*0x471e7f*/
    v33 = m_controller; /*0x471e83*/
    v20 = (int)vtbl->super.super.GetPos((TESObjectREFR *)v3); /*0x471e8f*/
    v21 = *(float *)v20; /*0x471e91*/
    v22 = *(float *)(v20 + 4); /*0x471e93*/
    v23 = v3->vtbl; /*0x471e99*/
    v29 = *(float *)(v20 + 8); /*0x471e9b*/
    v24 = v23->super.super.GetBaseForm((TESObjectREFR *)v3); /*0x471ea7*/
    v25 = sub_46D5C0(v24); /*0x471eaa*/
    *(float *)&a2 = v25 + v25; /*0x471eb4*/
    v29 = dbl_A3C770 * *(float *)&a2 + v29; /*0x471ec8*/
    v26 = v29; /*0x471ecc*/
    if ( *(float *)&v33 < (double)*(float *)&a2 ) /*0x471edb*/
      v33 = a2; /*0x471edd*/
    p_m_kWorldBound = &this->RootNode->members.super.m_kWorldBound; /*0x471ee8*/
    p_m_kWorldBound->Center.x = v21; /*0x471eeb*/
    p_m_kWorldBound->Center.y = v22; /*0x471eed*/
    p_m_kWorldBound->Center.z = v26; /*0x471ef0*/
    p_m_kWorldBound->Radius = *(float *)&v33; /*0x471ef7*/
    this->unk00 = 0; /*0x471efa*/
  }
}
