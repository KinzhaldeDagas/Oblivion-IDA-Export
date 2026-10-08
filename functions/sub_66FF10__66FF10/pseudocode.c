// Queued worldspace move processor. It consumes PlayerCharacter queued position/worldspace fields at +0x720/+0x72C for queued moves, separate from the synchronous world-map fast-travel relocation at 0x66FAFA.
void __userpurge PlayerCharacter_ProcessQueuedWorldspaceMove(
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

  _ESI = a1; /*0x66ff16*/
  if ( *(_DWORD *)(a1 + 0x72C) ) /*0x66ff18*/
  {
    if ( LOBYTE(a11) ) /*0x66ff2b*/
    {
      sub_579CF0( /*0x66ff42*/
        bp0,
        a10,
        a7,
        a8,
        a9,
        a6,
        a3,
        st1_0,
        a5,
        (char *)stru_B38BF0.value,
        1,
        (char *)MEMORY[0xB38CF0].value,
        0);
      v12 = *(_DWORD *)(_ESI + 0x72C); /*0x66ff47*/
      if ( v12 ) /*0x66ff52*/
      {
        v13 = *(unsigned __int8 *)(v12 + 4); /*0x66ff58*/
        if ( v13 == 0x30 ) /*0x66ff5f*/
        {
          PlayerCharacter_ChangeCellAndPosition( /*0x66ffed*/
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
        else if ( v13 == 0x35 ) /*0x66ff64*/
        {
          PlayerCharacter_RelocateToFastTravelTarget( /*0x66ffa4*/
            a6,
            a7,
            a8,
            a9,
            st1_0,
            a10,
            a5,
            *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))(_ESI + 0x720),
            *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(_ESI + 0x724),
            *(void *(__thiscall **)(NiAVObject *))(_ESI + 0x728),
            *(_DWORD *)(_ESI + 0x20),
            *(_DWORD *)(_ESI + 0x24),
            *(_DWORD *)(_ESI + 0x28),
            (TESWorldSpace *)v12,
            0);                                 // Direct relocation helper call from queued PlayerCharacter position/worldspace state at +0x720/+0x72C. Not the world-map fast-travel core call at 0x66FAFA.
        }
      }
      return; /*0x66ffb0*/
    }
    _EBP = (MobileObject *)a1; /*0x670004*/
    if ( *(_DWORD *)(a1 + 0xD4) ) /*0x66fffc*/
      _EBP = *(MobileObject **)(a1 + 0xD4); /*0x670008*/
    __asm { fld     dword ptr ds:0A379B4h } /*0x67000a*/
    __asm { fstp    [esp+1Ch+a4]; a4 }
    GameUI_QueueMessage(stru_B38BF0.value, 0, 1u, a4); /*0x67001f*/
    CharProxy = MobileObject_GetCharProxy(_EBP); /*0x670029*/
    v16 = CharProxy; /*0x67002e*/
    if ( CharProxy ) /*0x670032*/
    {
      if ( (*((_DWORD *)CharProxy + 0x7D) & 0x100) == 0 ) /*0x67003f*/
      {
        __asm /*0x670041*/
        {
          fld     dword ptr [ebp+34h]
          fstp    dword ptr [esi+728h]
        }
        *(float *)(_ESI + 0x728) = _ET1; /*0x670044*/
      }
    }
    _EDI = (float *)(_ESI + 0x720); /*0x670056*/
    TESObjectREFR_SetPosition( /*0x67006e*/
      (TESObjectREFR *)_EBP,
      *(float *)(_ESI + 0x720),
      *(float *)(_ESI + 0x724),
      *(float *)(_ESI + 0x728));
    if ( v16 ) /*0x670075*/
      sub_452A10(v16, (NiPoint3 *)(_ESI + 0x720)); /*0x67007a*/
    v19 = *(TESForm **)(_ESI + 0x72C); /*0x67007f*/
    if ( !v19 ) /*0x670087*/
      goto LABEL_21; /*0x670087*/
    type = v19->member.type; /*0x670089*/
    if ( type != 0x30 ) /*0x670090*/
    {
      if ( type != 0x35 ) /*0x670095*/
      {
LABEL_21:
        NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)_ESI); /*0x6700f6*/
        v22 = *(_DWORD *)(_ESI + 0x5D0); /*0x6700ff*/
        v23 = (NiAVObject *)NiNode; /*0x670105*/
        NiNode->members.super.m_localTransform.pos.x = *_EDI; /*0x670107*/
        NiNode->members.super.m_localTransform.pos.y = *(float *)(_ESI + 0x724); /*0x67010d*/
        NiNode->members.super.m_localTransform.pos.z = *(float *)(_ESI + 0x728); /*0x670113*/
        *(float *)(v22 + 0x54) = *_EDI; /*0x670118*/
        *(_DWORD *)(v22 + 0x58) = *(_DWORD *)(_ESI + 0x724); /*0x67011e*/
        *(_DWORD *)(v22 + 0x5C) = *(_DWORD *)(_ESI + 0x728); /*0x670127*/
        sub_897A20((int)NiNode, 1); /*0x67012a*/
        sub_897A20(v22, 1); /*0x670132*/
        __asm { fldz } /*0x670137*/
        __asm { fstp    [esp+20h+a2]; a2 }
        NiAVObject_UpdateNiAVObject(v23, a2, 0); /*0x670144*/
        __asm { fldz } /*0x670149*/
        __asm { fstp    [esp+20h+a2]; a2 }
        NiAVObject_UpdateNiAVObject((NiAVObject *)v22, a2a, 0); /*0x670153*/
        v24 = *(_DWORD *)(_ESI + 0xD4); /*0x670158*/
        if ( v24 ) /*0x670160*/
        {
          v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x154))(v24); /*0x670170*/
          *(float *)(v25 + 0x54) = *_EDI; /*0x670172*/
          *(float *)(v25 + 0x58) = _EDI[1]; /*0x670178*/
          *(float *)(v25 + 0x5C) = _EDI[2]; /*0x670181*/
          sub_897A20(v25, 1); /*0x670184*/
          __asm { fldz } /*0x670189*/
          __asm { fstp    [esp+20h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v25, a2b, 0); /*0x670196*/
        }
        return; /*0x670196*/
      }
      __asm /*0x670097*/
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
      v19 = sub_447740((TESWorldSpace **)g_TESDataHandler, v30 >> 0xC, v33 >> 0xC, (TESWorldSpace *)v19, 0); /*0x6700d5*/
    }
    if ( v19 ) /*0x6700d9*/
    {
      ((void (__thiscall *)(MobileObject *, TESForm *))_EBP->vtbl->super.ChangeCell)(_EBP, v19); /*0x6700e7*/
      (*(void (__thiscall **)(int, TESForm *))(*(_DWORD *)_ESI + 0x194))(_ESI, v19); /*0x6700f4*/
    }
    goto LABEL_21; /*0x6700f4*/
  }
}
