void __thiscall ToggleBody(PlayerCharacter *a1, char a3)
{
  NiNode *NiNode; // eax
  NiNode *firstPersonNiNode; // eax
  NiAVObject *v5; // ebx
  double v6; // st7
  ActorAnimData *AnimData; // eax
  ActorAnimData *v8; // esi
  ActorAnimData *firstPersonAnimData; // ebx
  int v10; // eax
  unsigned __int16 *v11; // edi
  ActorAnimData *v12; // eax
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

  if ( a1->firstPersonNiNode && TESObjectREFR::GetNiNode((TESObjectREFR *)a1) ) /*0x664fa7*/
  {
    if ( a3 ) /*0x664fba*/
    {
      if ( (a1->firstPersonNiNode->members.super.m_flags & 1) == 0 /*0x664fe3*/
        || a1->vtbl->super.super.super.IsDead((TESObjectREFR *)a1, 0)
        || a1->DisableFading )
      {
        return; /*0x664fe9*/
      }
    }
    else if ( (TESObjectREFR::GetNiNode((TESObjectREFR *)a1)->members.super.m_flags & 1) == 0 ) /*0x664ffb*/
    {
      return; /*0x664ffb*/
    }
    NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)a1); /*0x665003*/
    if ( a3 ) /*0x66500f*/
      NiNode->members.super.m_flags |= 1u; /*0x665011*/
    else
      NiNode->members.super.m_flags &= ~1u; /*0x665018*/
    firstPersonNiNode = a1->firstPersonNiNode; /*0x66501e*/
    if ( a3 ) /*0x665024*/
    {
      firstPersonNiNode->members.super.m_flags &= ~1u; /*0x665030*/
      v5 = (NiAVObject *)TESObjectREFR::GetNiNode((TESObjectREFR *)a1); /*0x66503b*/
      v5->members.m_localTransform.pos = *(NiPoint3 *)a1->vtbl->super.super.super.GetPos(a1); /*0x66504c*/
      v6 = ((double (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.GetZRotation)(a1); /*0x665066*/
      v18 = v6; /*0x66506d*/
      NiMatrix33_InitRotationZ(v20, v18); /*0x665070*/
      qmemcpy(&v5->members.m_localTransform, sub_4D7C50(a1, v21, v20, 0), 0x24u); /*0x665094*/
      flt_B14E50 = 1.0; /*0x665096*/
      sub_5EE1B0((Actor *)a1, v6); /*0x66509e*/
      AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)a1); /*0x6650a5*/
      if ( AnimData ) /*0x6650ac*/
        ActorAnimData_ApplyToActor(AnimData, (TESObjectREFR *)a1); /*0x6650b1*/
      else
        NiAVObject_UpdateNiAVObject(v5, 0.0, 0); /*0x6650c2*/
    }
    else
    {
      firstPersonNiNode->members.super.m_flags |= 1u; /*0x665026*/
    }
    if ( sub_5E5480((int *)a1) ) /*0x6650c9*/
    {
      if ( a3 ) /*0x6650db*/
      {
        v12 = TESObjectREFR_GetAnimData((TESObjectREFR *)a1); /*0x665114*/
        firstPersonAnimData = a1->firstPersonAnimData; /*0x665119*/
        v8 = v12; /*0x66511f*/
      }
      else
      {
        v8 = a1->firstPersonAnimData; /*0x6650dd*/
        firstPersonAnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)a1); /*0x6650ea*/
      }
      v10 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v8->manager + 0x1F) + 0x4C))( /*0x6650ff*/
              *((_DWORD *)v8->manager + 0x1F),
              "magicNode");
      if ( v10 ) /*0x665103*/
        v11 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x66510e*/
      else
        v11 = 0; /*0x665123*/
      v13 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)firstPersonAnimData->manager + 0x1F) + 0x4C))( /*0x665138*/
              *((_DWORD *)firstPersonAnimData->manager + 0x1F),
              "magicNode");
      if ( v13 ) /*0x66513c*/
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13); /*0x665147*/
      else
        v14 = 0; /*0x66514b*/
      if ( v11 ) /*0x66514f*/
      {
        if ( v14 ) /*0x665153*/
        {
          for ( i = 0; i < v11[0x5B]; ++i ) /*0x665157*/
          {
            (*(void (__thiscall **)(unsigned __int16 *, int *, unsigned int))(*(_DWORD *)v11 + 0x8C))(v11, &v19, i); /*0x665170*/
            v22 = 0; /*0x665178*/
            if ( v19 ) /*0x665180*/
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x84))(v14, v19, 1); /*0x66518f*/
            v22 = 0xFFFFFFFF; /*0x665195*/
            NiPointerSlot_Release((NiD3DVertexShader *)&v19); /*0x66519d*/
          }
        }
      }
    }
    v16 = a1->vtbl->super.super.super.GetNiNode(a1); /*0x6651bb*/
    p_vtbl = &v16->vtbl; /*0x6651c2*/
    if ( a3 ) /*0x6651c4*/
    {
      if ( v16->members.children.end ) /*0x6651c6*/
        p_vtbl = v16->members.children.data->vtbl; /*0x6651da*/
      else
        p_vtbl = 0; /*0x6651d0*/
    }
    sub_6637C0(a1); /*0x6651de*/
    sub_5EA1A0((int)a1, (int)a1, p_vtbl); /*0x6651e6*/
    ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, int, _DWORD))a1->super.super.super.process->Unk_10A)( /*0x6651fd*/
      a1->super.super.super.process,
      a1,
      1,
      1,
      0);
  }
}
