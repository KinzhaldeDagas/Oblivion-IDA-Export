void __userpurge sub_66FF10(
        int a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st7>,
        double st1_0@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        float a11)
{
  int v12; // eax
  int v13; // ecx
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v16; // ebx
  TESForm *v19; // ebx
  int type; // eax
  NiNode *NiNode; // eax
  int v22; // ebp
  NiAVObject *v23; // ebx
  int v24; // esi
  int v25; // esi
  float a2; // [esp+8h] [ebp-20h]
  float a2a; // [esp+8h] [ebp-20h]
  float a2b; // [esp+8h] [ebp-20h]
  float a4; // [esp+Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-8h]
  int v33; // [esp+2Ch] [ebp+4h]

  _ESI = a1;
  if ( *(_DWORD *)(a1 + 0x72C) )
  {
    if ( LOBYTE(a11) )
    {
      sub_579CF0(bp0, a10, a7, a8, a9, a6, a3, st1_0, a5, (const char *)dword_B38BF0, 1, (const char *)sOk, 0);
      v12 = *(_DWORD *)(_ESI + 0x72C);
      if ( v12 )
      {
        v13 = *(unsigned __int8 *)(v12 + 4);
        if ( v13 == 0x30 )
        {
          sub_66EAF0(
            (TESObjectREFR *)_ESI,
            a10,
            a7,
            a8,
            a9,
            a3,
            a6,
            st1_0,
            a5,
            *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))(_ESI + 0x720),
            *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(_ESI + 0x724),
            *(void *(__thiscall **)(NiAVObject *))(_ESI + 0x728),
            *(_DWORD *)(_ESI + 0x20),
            *(_DWORD *)(_ESI + 0x24),
            *(_DWORD *)(_ESI + 0x28),
            (TESObjectCELL *)v12,
            0);
        }
        else if ( v13 == 0x35 )
        {
          sub_66F370(
            a3,
            a6,
            a7,
            a8,
            a9,
            st1_0,
            a10,
            *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))(_ESI + 0x720),
            *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(_ESI + 0x724),
            *(void *(__thiscall **)(NiAVObject *))(_ESI + 0x728),
            *(_DWORD *)(_ESI + 0x20),
            *(_DWORD *)(_ESI + 0x24),
            *(_DWORD *)(_ESI + 0x28),
            (TESWorldSpace *)v12,
            0);
        }
      }
      return;
    }
    _EBP = (MobileObject *)a1;
    if ( *(_DWORD *)(a1 + 0xD4) )
      _EBP = *(MobileObject **)(a1 + 0xD4);
    __asm { fld     dword ptr ds:0A379B4h }
    __asm { fstp    [esp+1Ch+a4]; a4 }
    GameUI_QueueMessage((const char *)dword_B38BF0, 0, 1u, a4);
    CharProxy = MobileObject_GetCharProxy(_EBP);
    v16 = CharProxy;
    if ( CharProxy )
    {
      if ( (*((_DWORD *)CharProxy + 0x7D) & 0x100) == 0 )
      {
        __asm
        {
          fld     dword ptr [ebp+34h]
          fstp    dword ptr [esi+728h]
        }
        *(float *)(_ESI + 0x728) = _ET1;
      }
    }
    _EDI = (float *)(_ESI + 0x720);
    TESObjectREFR_SetPosition(
      (TESObjectREFR *)_EBP,
      *(float *)(_ESI + 0x720),
      *(float *)(_ESI + 0x724),
      *(float *)(_ESI + 0x728));
    if ( v16 )
      sub_452A10(v16, (NiPoint3 *)(_ESI + 0x720));
    v19 = *(TESForm **)(_ESI + 0x72C);
    if ( !v19 )
      goto LABEL_21;
    type = v19->member.type;
    if ( type != 0x30 )
    {
      if ( type != 0x35 )
      {
LABEL_21:
        NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)_ESI);
        v22 = *(_DWORD *)(_ESI + 0x5D0);
        v23 = (NiAVObject *)NiNode;
        NiNode->members.super.m_localTransform.pos.x = *_EDI;
        NiNode->members.super.m_localTransform.pos.y = *(float *)(_ESI + 0x724);
        NiNode->members.super.m_localTransform.pos.z = *(float *)(_ESI + 0x728);
        *(float *)(v22 + 0x54) = *_EDI;
        *(_DWORD *)(v22 + 0x58) = *(_DWORD *)(_ESI + 0x724);
        *(_DWORD *)(v22 + 0x5C) = *(_DWORD *)(_ESI + 0x728);
        sub_897A20((int)NiNode, 1);
        sub_897A20(v22, 1);
        __asm { fldz }
        __asm { fstp    [esp+20h+a2]; a2 }
        NiAVObject_UpdateNiAVObject(v23, a2, 0);
        __asm { fldz }
        __asm { fstp    [esp+20h+a2]; a2 }
        NiAVObject_UpdateNiAVObject((NiAVObject *)v22, a2a, 0);
        v24 = *(_DWORD *)(_ESI + 0xD4);
        if ( v24 )
        {
          v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x154))(v24);
          *(float *)(v25 + 0x54) = *_EDI;
          *(float *)(v25 + 0x58) = _EDI[1];
          *(float *)(v25 + 0x5C) = _EDI[2];
          sub_897A20(v25, 1);
          __asm { fldz }
          __asm { fstp    [esp+20h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v25, a2b, 0);
        }
        return;
      }
      __asm
      {
        fld     dword ptr [edi]
        fstp    [esp+18h+arg_0]
        fld     [esp+18h+arg_0]
        fistp   [esp+18h+var_8]
        fld     dword ptr [esi+724h]
        fstp    [esp+18h+var_4]
        fld     [esp+18h+var_4]
        fistp   [esp+18h+arg_0]
      }
      v19 = sub_447740((TESWorldSpace **)TESDataHandler, v30 >> 0xC, v33 >> 0xC, (TESWorldSpace *)v19, 0);
    }
    if ( v19 )
    {
      ((void (__thiscall *)(MobileObject *, TESForm *))_EBP->vtbl->super.ChangeCell)(_EBP, v19);
      (*(void (__thiscall **)(int, TESForm *))(*(_DWORD *)_ESI + 0x194))(_ESI, v19);
    }
    goto LABEL_21;
  }
}
