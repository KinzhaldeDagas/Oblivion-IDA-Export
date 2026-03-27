void __thiscall ToggleBody(PlayerCharacter *a1, char a3)
{
  NiNode *NiNode; // eax
  NiNode *firstPersonNiNode; // eax
  NiAVObject *v5; // ebx
  double v6; // st7
  ActorAnimData *AnimData; // eax
  ActorAnimData *firstPersonAnimData; // esi
  _DWORD *p_unk00; // ebx
  int v10; // eax
  unsigned __int16 *v11; // edi
  BSExtraDataVtbl *v12; // eax
  int v13; // eax
  int v14; // ebx
  unsigned int i; // esi
  NiNode *v16; // eax
  _DWORD *p_vtbl; // esi
  float v18; // [esp+4h] [ebp-70h]
  int v19; // [esp+1Ch] [ebp-58h] BYREF
  float v20[9]; // [esp+20h] [ebp-54h] BYREF
  float v21[9]; // [esp+44h] [ebp-30h] BYREF
  unsigned int v22; // [esp+70h] [ebp-4h]

  if ( a1->firstPersonNiNode && TESObjectREFR::GetNiNode((TESObjectREFR *)a1) )
  {
    if ( a3 )
    {
      if ( (a1->firstPersonNiNode->members.super.m_flags & 1) == 0
        || a1->vtbl->super.super.super.IsDead((TESObjectREFR *)a1, 0)
        || a1->DisableFading )
      {
        return;
      }
    }
    else if ( (TESObjectREFR::GetNiNode((TESObjectREFR *)a1)->members.super.m_flags & 1) == 0 )
    {
      return;
    }
    NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)a1);
    if ( a3 )
      NiNode->members.super.m_flags |= 1u;
    else
      NiNode->members.super.m_flags &= ~1u;
    firstPersonNiNode = a1->firstPersonNiNode;
    if ( a3 )
    {
      firstPersonNiNode->members.super.m_flags &= ~1u;
      v5 = (NiAVObject *)TESObjectREFR::GetNiNode((TESObjectREFR *)a1);
      v5->members.m_localTransform.pos = *(NiPoint3 *)a1->vtbl->super.super.super.GetPos(a1);
      v6 = ((double (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.GetZRotation)(a1);
      v18 = v6;
      NiMatrix33_InitRotationTransform(v20, v18);
      qmemcpy(&v5->members.m_localTransform, sub_4D7C50(a1, v21, v20, 0), 0x24u);
      flt_B14E50 = 1.0;
      sub_5EE1B0((Actor *)a1, v6);
      AnimData = (ActorAnimData *)TESObjectREFR_GetAnimData((Actor *)a1);
      if ( AnimData )
        sub_474510(AnimData, (TESObjectREFR *)a1);
      else
        NiAVObject_UpdateNiAVObject(v5, 0.0, 0);
    }
    else
    {
      firstPersonNiNode->members.super.m_flags |= 1u;
    }
    if ( sub_5E5480((int *)a1) )
    {
      if ( a3 )
      {
        v12 = TESObjectREFR_GetAnimData((Actor *)a1);
        p_unk00 = &a1->firstPersonAnimData->unk00;
        firstPersonAnimData = (ActorAnimData *)v12;
      }
      else
      {
        firstPersonAnimData = a1->firstPersonAnimData;
        p_unk00 = TESObjectREFR_GetAnimData((Actor *)a1);
      }
      v10 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)firstPersonAnimData->manager + 0x1F) + 0x4C))(
              *((_DWORD *)firstPersonAnimData->manager + 0x1F),
              "magicNode");
      if ( v10 )
        v11 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      else
        v11 = 0;
      v13 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(p_unk00[0x26] + 0x7C) + 0x4C))(
              *(_DWORD *)(p_unk00[0x26] + 0x7C),
              "magicNode");
      if ( v13 )
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
      else
        v14 = 0;
      if ( v11 )
      {
        if ( v14 )
        {
          for ( i = 0; i < v11[0x5B]; ++i )
          {
            (*(void (__thiscall **)(unsigned __int16 *, int *, unsigned int))(*(_DWORD *)v11 + 0x8C))(v11, &v19, i);
            v22 = 0;
            if ( v19 )
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x84))(v14, v19, 1);
            v22 = 0xFFFFFFFF;
            sub_7016A0((NiD3DVertexShader *)&v19);
          }
        }
      }
    }
    v16 = a1->vtbl->super.super.super.GetNiNode(a1);
    p_vtbl = &v16->vtbl;
    if ( a3 )
    {
      if ( v16->members.children.end )
        p_vtbl = v16->members.children.data->vtbl;
      else
        p_vtbl = 0;
    }
    sub_6637C0(a1);
    sub_5EA1A0((int)a1, (int)a1, p_vtbl);
    ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, int, _DWORD))a1->super.super.super.process->Unk_10A)(
      a1->super.super.super.process,
      a1,
      1,
      1,
      0);
  }
}
