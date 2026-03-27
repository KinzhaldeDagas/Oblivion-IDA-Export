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

  if ( this->RootNode && this->AccumNode && this->unk00 )
  {
    v3 = a2;
    v4 = a2 == (Actor *)TESDataHandler_g_PlayerRef;
    LOBYTE(a2) = a2 != (Actor *)TESDataHandler_g_PlayerRef;
    if ( !v4
      && (Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v3) == (struct Concurrency::details::ScheduleGroupBase *)1
       || v3->vtbl->IsInCombat(v3, 1))
      || ((v5 = (int)v3->vtbl->super.super.GetNiNode((TESObjectREFR *)v3),
           !NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v5))
       || (v28[0] = *(float *)(v5 + 0xE8), v28[0] > 0.0))
      && (!(_BYTE)a2 || sub_47F7B0(&this->RootNode->vtbl, (int)g_worldScenegraph->camera)) )
    {
      sub_5E1370(v3, 1, 1);
      inited = InitBSShaderAccumulator();
      if ( inited && sub_7AA3C0((int)inited, v3->members.super.super.super.refID, 0) )
        sub_5E1370(v3, 0, 2);
      else
        sub_5E1370(v3, 1, 2);
      v7 = (NiObject *)v3->vtbl->super.super.GetNiNode((TESObjectREFR *)v3);
      v8 = NiRTTI_Cast((BSStringT *)dword_B35288, v7);
      if ( v8 && (a2 = (Actor *)v8[0x1D].__vftable, flt_A3C778 > (double)*(float *)&a2) )
        sub_5E1370(v3, 0, 4);
      else
        sub_5E1370(v3, 1, 4);
      v9 = 0;
      v10 = 0;
      if ( ((int (__thiscall *)(Actor *))v3->vtbl->Unk_9F)(v3) )
        v10 = (int)v3;
      else
        v9 = (int)v3;
      baseForm = 0;
      a2 = 0;
      v34 = 0;
      if ( v9 )
      {
        if ( v10 )
          goto LABEL_29;
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x388))(v9);
      }
      else
      {
        if ( !v10 )
          goto LABEL_34;
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x380))(v10);
      }
      if ( !v9 )
      {
LABEL_32:
        if ( v10 )
          byte_B3CBD0 = 1;
        goto LABEL_34;
      }
      if ( v10 )
      {
LABEL_29:
        v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x168))(v10);
        if ( v12 )
        {
          v13 = (Ni2DBuffer *)sub_478180(v12);
          NiSmartPointer_Set__((Ni2DBuffer **)&a2, v13);
          if ( a2 )
          {
            baseForm = a2->members.super.super.baseForm;
            ((void (__thiscall *)(TESForm *, float *, Actor *))baseForm->vtbl->Unk_22)(baseForm, v28, a2);
            sub_7016A0((NiD3DVertexShader *)v28);
          }
        }
        goto LABEL_32;
      }
LABEL_34:
      sub_47CA30(this->RootNode, COERCE_NINODE_(this->unk94), this->AccumNode);
      byte_B3CBD0 = 0;
      if ( baseForm )
      {
        if ( a2 )
          ((void (__thiscall *)(TESForm *, Actor *, int))baseForm->vtbl->Unk_21)(baseForm, a2, 1);
      }
      this->unk00 = 0;
      v34 = 0xFFFFFFFF;
      sub_7016A0((NiD3DVertexShader *)&a2);
      return;
    }
    sub_5E1370(v3, 0, 1);
    RootNode = this->RootNode;
    x = RootNode->members.super.m_kWorldBound.Center.x;
    y = RootNode->members.super.m_kWorldBound.Center.y;
    RootNode = (NiNode *)((char *)RootNode + 0x20);
    v30 = x;
    m_pcName = RootNode->members.super.super.m_pcName;
    v31 = y;
    m_controller = (Actor *)RootNode->members.super.super.m_controller;
    vtbl = v3->vtbl;
    v32 = m_pcName;
    v33 = m_controller;
    v20 = (int)vtbl->super.super.GetPos((TESObjectREFR *)v3);
    v21 = *(float *)v20;
    v22 = *(float *)(v20 + 4);
    v23 = v3->vtbl;
    v29 = *(float *)(v20 + 8);
    v24 = v23->super.super.GetBaseForm((TESObjectREFR *)v3);
    v25 = sub_46D5C0(v24);
    *(float *)&a2 = v25 + v25;
    v29 = dbl_A3C770 * *(float *)&a2 + v29;
    v26 = v29;
    if ( *(float *)&v33 < (double)*(float *)&a2 )
      v33 = a2;
    p_m_kWorldBound = &this->RootNode->members.super.m_kWorldBound;
    p_m_kWorldBound->Center.x = v21;
    p_m_kWorldBound->Center.y = v22;
    p_m_kWorldBound->Center.z = v26;
    p_m_kWorldBound->Radius = *(float *)&v33;
    this->unk00 = 0;
  }
}
