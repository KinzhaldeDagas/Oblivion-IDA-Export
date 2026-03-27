int __thiscall sub_4E71A0(TESObjectREFR *this)
{
  TESObjectREFR *v1; // ebx
  NiNode *v2; // eax
  NiNode *v3; // edi
  NiNode *baseForm; // esi
  int v5; // esi
  _DWORD *v6; // ecx
  float scale; // ecx
  unsigned int v8; // eax
  _DWORD *niNode; // edx
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // eax
  float v15; // edx
  unsigned int v16; // eax
  _DWORD *v17; // ecx
  NiAVObject *v18; // ebp
  char *v19; // ebp
  _DWORD *v20; // eax
  NiAVObject *v21; // eax
  NiAVObject *v22; // esi
  NiObjectNET *v23; // eax
  BSShaderProperty *v24; // ebx
  char *v25; // eax
  char *a2; // [esp+20h] [ebp-48h]
  _DWORD *v28; // [esp+3Ch] [ebp-2Ch]
  int v30; // [esp+44h] [ebp-24h]
  int v31[4]; // [esp+4Ch] [ebp-1Ch] BYREF
  int v32; // [esp+64h] [ebp-4h]

  v1 = this;
  if ( this->member.baseForm )
    sub_4E5400((int)this);
  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  v32 = 0;
  if ( v2 )
    v3 = NiNode::NiNode(v2, 0);
  else
    v3 = 0;
  baseForm = (NiNode *)v1->member.baseForm;
  v32 = 0xFFFFFFFF;
  if ( baseForm != v3 )
  {
    if ( baseForm )
    {
      if ( !InterlockedDecrement((volatile LONG *)&baseForm->members) )
        baseForm->vtbl->super.super.super.Destructor((NiRefObject *)baseForm, 1);
    }
    v1->member.baseForm = (TESForm *)v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)&v3->members);
  }
  v5 = 0;
  if ( LOWORD(v1->member.pos[1]) )
  {
    do
    {
      v6 = *(_DWORD **)(*(_DWORD *)(LODWORD(v1->member.rot.y) + 4) + 4 * v5);
      if ( v6 )
        sub_4E82E0(v6, v1, 1);
      ++v5;
    }
    while ( v5 < LOWORD(v1->member.pos[1]) );
  }
  scale = v1->member.scale;
  v8 = 0;
  if ( scale == 0.0 )
  {
LABEL_20:
    v10 = 0;
  }
  else
  {
    niNode = v1->member.niNode;
    while ( !*niNode )
    {
      ++v8;
      ++niNode;
      if ( v8 >= LODWORD(scale) )
        goto LABEL_20;
    }
    v10 = *((_DWORD **)v1->member.niNode + v8);
  }
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = v10[1];
      v12 = v10[2];
      v13 = (_DWORD *)*v10;
      v30 = v11;
      if ( v13 )
      {
        v28 = v13;
      }
      else
      {
        v14 = (*(int (__thiscall **)(float *, int))(LODWORD(v1->member.pos[2]) + 4))(&v1->member.pos[2], v11);
        v15 = v1->member.scale;
        v16 = v14 + 1;
        if ( v16 >= LODWORD(v15) )
        {
LABEL_31:
          v28 = 0;
        }
        else
        {
          v17 = (char *)v1->member.niNode + 4 * v16;
          while ( !*v17 )
          {
            ++v16;
            ++v17;
            if ( v16 >= LODWORD(v15) )
              goto LABEL_31;
          }
          v28 = (_DWORD *)*v17;
        }
      }
      if ( v11 )
      {
        *(float *)v31 = 1.0;
        *(float *)&v31[1] = 0.0;
        *(float *)&v31[3] = 0.0;
        *(float *)&v31[2] = 1.0;
        v18 = sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)v31);
        v18->members.m_localTransform.pos = *(NiPoint3 *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11);
        ((void (__thiscall *)(TESForm *, NiAVObject *, int))v1->member.baseForm->vtbl->Unk_21)(
          v1->member.baseForm,
          v18,
          1);
        if ( v12 )
        {
          while ( *(_DWORD *)(v12 + 4) || *(_DWORD *)v12 )
          {
            v19 = *(char **)v12;
            a2 = sub_4BEF40(*(char **)v12);
            v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11);
            v21 = sub_47F070(v20, v31, a2, v31);
            ((void (__thiscall *)(TESForm *, NiAVObject *, int))v1->member.baseForm->vtbl->Unk_21)(
              v1->member.baseForm,
              v21,
              1);
            v22 = sub_47EA60(flt_A47800, flt_A47800, flt_A47800, v31);
            v23 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
            v24 = (BSShaderProperty *)v23;
            v32 = 1;
            if ( v23 )
            {
              NiObjectNET::NiObjectNET(v23);
              v24->vtbl = &NiWireframeProperty::`vftable';
              v24->member.super.flags = 0;
            }
            else
            {
              v24 = 0;
            }
            v24->member.super.flags |= 1u;
            v32 = 0xFFFFFFFF;
            sub_405680((NiNode *)v22, v24);
            ((void (__thiscall *)(TESForm *, NiAVObject *, int))this->member.baseForm->vtbl->Unk_21)(
              this->member.baseForm,
              v22,
              1);
            v25 = sub_4BEF40(v19);
            v1 = this;
            v22->members.m_localTransform.pos.x = *(float *)v25;
            v22->members.m_localTransform.pos.y = *((float *)v25 + 1);
            v22->members.m_localTransform.pos.z = *((float *)v25 + 2);
            v12 = *(_DWORD *)(v12 + 4);
            if ( !v12 )
              break;
            v11 = v30;
          }
        }
      }
      if ( !v28 )
        break;
      v10 = v28;
    }
  }
  NiAVObject_InitializePropertyState((NiAVObject *)v1->member.baseForm);
  (*(void (__thiscall **)(UInt32, TESForm *, int))(*(_DWORD *)dword_B35F88 + 0x84))(
    dword_B35F88,
    v1->member.baseForm,
    1);
  NiAVObject_InitializePropertyState((NiAVObject *)dword_B35F88);
  return NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B35F88, 0.0, 0);
}
