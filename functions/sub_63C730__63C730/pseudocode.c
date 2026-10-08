// MorrowindMovements: process vtable +0x2CC movement-vector handoff shared by actor process movement; reads +0x2C0 flags before MobileObject::Move.
void __userpurge sub_63C730(_WORD *this@<ecx>, double st6_0@<st1>, float arg0, int a2, float a5, float a3)
{
  float v7; // esi
  float x; // edx
  float y; // eax
  PlayerCharacter *v10; // ecx
  bool v11; // zf
  ActorAnimData *AnimDataByPerspective; // edi
  float v13; // eax
  unsigned __int16 AnimGroupFromField8Value; // bp
  int v15; // edi
  float v16; // ecx
  float v17; // edx
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  double v21; // st7
  int v22; // edi
  char v23; // al
  int v24; // ebp
  float v25; // edi
  float v26; // ecx
  int v27; // eax
  float *v28; // eax
  TES *v29; // ecx
  int v30; // edi
  unsigned __int16 v31; // ax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v33; // edi
  int (__thiscall *v34)(_DWORD); // edx
  int v35; // eax
  TESObjectLAND *v36; // eax
  double v37; // st5
  int v38; // ebp
  int v39; // ebx
  int v40; // ecx
  float v41; // edx
  float v42; // eax
  float v43; // ecx
  double v44; // st7
  float *v45; // eax
  float *v46; // eax
  float v47; // [esp+24h] [ebp-5Ch]
  double v48; // [esp+28h] [ebp-58h] BYREF
  float v49; // [esp+30h] [ebp-50h]
  unsigned __int64 v50; // [esp+34h] [ebp-4Ch] BYREF
  float z; // [esp+3Ch] [ebp-44h]
  int v52[3]; // [esp+40h] [ebp-40h] BYREF
  int v53[2]; // [esp+4Ch] [ebp-34h] BYREF
  float v54; // [esp+54h] [ebp-2Ch]
  float v55; // [esp+58h] [ebp-28h]
  NiMatrix33 v56; // [esp+5Ch] [ebp-24h] BYREF
  NiPoint3 v57; // 0:^4.12
  NiPoint3 v58; // 0:^4.12

  if ( sub_45A500(g_TESSaveLoadGame) || (g_TESSaveLoadGame->flags & 0x2000) != 0 && sub_572EA0(2) > *(float *)&SrcStr ) /*0x63c774*/
    return; /*0x63c774*/
  v7 = arg0; /*0x63c786*/
  v47 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x63c78a*/
  x = g_zeroNiPoint3.x; /*0x63c78e*/
  y = g_zeroNiPoint3.y; /*0x63c794*/
  z = g_zeroNiPoint3.z; /*0x63c799*/
  v10 = reference; /*0x63c79d*/
  v11 = LODWORD(arg0) == (_DWORD)reference; /*0x63c7a3*/
  v50 = __PAIR64__(LODWORD(y), LODWORD(x)); /*0x63c7a5*/
  if ( v11 ) /*0x63c7ad*/
  {
    AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(v10, 0); /*0x63c7c3*/
    if ( reference->isThirdPerson ) /*0x63c7bc*/
      goto LABEL_11; /*0x63c7c5*/
    v13 = COERCE_FLOAT(PlayerCharacter_GetAnimDataByPerspective(reference, 1));// Player movement handoff calls Player_GetAnimData(player, 1) when third-person animation data may be needed. /*0x63c7c9*/
    arg0 = v13; /*0x63c7d0*/
    if ( AnimDataByPerspective ) /*0x63c7d4*/
    {
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value((ActorAnimData *)LODWORD(v13), 0); /*0x63c7e3*/
      if ( AnimGroupFromField8Value != ActorAnimData_GetAnimGroupFromField8Value(AnimDataByPerspective, 0) ) /*0x63c7ee*/
        goto LABEL_11; /*0x63c7ee*/
      v13 = arg0; /*0x63c7f0*/
    }
  }
  else
  {
    v13 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(arg0) + 0x164))(LODWORD(arg0)));// Non-player movement handoff obtains ActorAnimData through actor vtable +0x164 before calling 0x4723A0. /*0x63c800*/
  }
  AnimDataByPerspective = (ActorAnimData *)LODWORD(v13); /*0x63c802*/
LABEL_11:
  if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x19C))(COERCE_FLOAT(LODWORD(v7))) /*0x63c83f*/
    && (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x2E4))(this) != 6
    || (*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(v7) + 0x198))(COERCE_FLOAT(LODWORD(v7)), 0)
    || *((_BYTE *)this + 0x2A9) )
  {
    v22 = *(_DWORD *)(LODWORD(v7) + 0x3C); /*0x63c9f6*/
    v23 = (*(int (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(v7) + 0x198))(COERCE_FLOAT(LODWORD(v7)), 0); /*0x63c9fd*/
    sub_88F700(v22, (float *)&v50, v23 == 0); /*0x63ca0b*/
    v24 = *(_DWORD *)(*(int (__thiscall **)(_WORD *, float *))(*(_DWORD *)this + 0x18C))(this, &arg0); /*0x63ca24*/
    if ( arg0 != 0.0 ) /*0x63ca2c*/
    {
      v25 = arg0; /*0x63ca2e*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(arg0) + 4)) ) /*0x63ca34*/
        (**(void (__thiscall ***)(float, int))LODWORD(v25))(COERCE_FLOAT(LODWORD(v25)), 1); /*0x63ca4a*/
    }
    if ( v24 ) /*0x63ca4e*/
      *(_DWORD *)(v24 + 0x1F4) |= 0x1000u; /*0x63ca50*/
    v26 = *(float *)(LODWORD(v7) + 0x24); /*0x63ca5a*/
    v27 = *(int *)(LODWORD(v7) + 0x20); /*0x63ca60*/
    a3 = *(float *)(LODWORD(v7) + 0x28); /*0x63ca63*/
    a5 = v26; /*0x63ca6c*/
    a2 = v27; /*0x63ca77*/
    NiMatrix33_InitRotationZ(&v56, a3); /*0x63ca7b*/
    v28 = NiPoint3_MultiplyMatrix3((float *)&a2, (float *)&v50, (float *)&v56); /*0x63ca8f*/
    v50 = *(_QWORD *)v28; /*0x63ca96*/
    z = v28[2]; /*0x63caa7*/
  }
  else
  {
    if ( AnimDataByPerspective ) /*0x63c84d*/
    {
      if ( (*(_DWORD *)(LODWORD(v7) + 8) & 0x10) != 0 ) /*0x63c85a*/
        ActorAnimData_GetMovementVector( /*0x63c866*/
          (float *)&AnimDataByPerspective->unk00,
          st6_0,
          (float *)&v50,
          (Actor *)LODWORD(v7),
          1,
          0);
      else
        ActorAnimData_GetMovementVector( /*0x63c872*/
          (float *)&AnimDataByPerspective->unk00,
          st6_0,
          (float *)&v50,
          (Actor *)LODWORD(v7),
          0,
          1);                                   // Movement handoff calls ActorAnimData movement-vector extraction. MorrowindMovements hooks this call to apply a transient +0xBC/+0xC0 root-motion clamp scale only during 0x4723A0, then restores before playback/save state can observe it.
    }
    v15 = *(_DWORD *)(*(int (__thiscall **)(_WORD *, float *))(*(_DWORD *)this + 0x18C))(this, &arg0); /*0x63c888*/
    NiPointerSlot_Release((void **)&arg0); /*0x63c88e*/
    if ( v15 ) /*0x63c895*/
    {
      if ( v15 != 0xFFFFFE10 ) /*0x63c89f*/
      {
        if ( sub_628E70(v15 + 0x1F0) ) /*0x63c8a1*/
        {
          v16 = g_zeroNiPoint3.y; /*0x63c8af*/
          v17 = g_zeroNiPoint3.z; /*0x63c8b5*/
          *(float *)&v50 = g_zeroNiPoint3.x; /*0x63c8bb*/
          *((float *)&v50 + 1) = v16; /*0x63c8bf*/
          z = v17; /*0x63c8c3*/
        }
      }
    }
    v18 = *(this + 0xFE); /*0x63c8c7*/
    if ( (v18 & 3) != 0 /*0x63c8e8*/
      && (v18 & 0xC) != 0
      && !(*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x1F8))(COERCE_FLOAT(LODWORD(v7))) )
    {
      v19 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x2D0))(this); /*0x63c8fc*/
      if ( (v19 < 0xB || v19 > 0xC) && *((float *)&v50 + 1) != 0.0 ) /*0x63c91b*/
      {
        v20 = *(this + 0xFE); /*0x63c927*/
        arg0 = *(float *)&MEMORY[0xB33E90][0xC] * *(float *)&a2; /*0x63c934*/
        arg0 = arg0 / *((float *)&v50 + 1) * dbl_A4D918; /*0x63c942*/
        v21 = arg0; /*0x63c946*/
        if ( (v20 & 4) != 0 ) /*0x63c94a*/
        {
          v48 = *(float *)&v50; /*0x63c950*/
          *(float *)&a2 = dbl_A6E740 - v21; /*0x63c95a*/
          *(float *)&a2 = cos(*(float *)&a2); /*0x63c967*/
          *(float *)&a2 = *(float *)&a2 * *((float *)&v50 + 1); /*0x63c973*/
          *(float *)&a2 = fabs(*(float *)&a2); /*0x63c97d*/
          *(float *)&v50 = *(float *)&v50 - *(float *)&a2; /*0x63c989*/
        }
        else if ( (v20 & 8) != 0 ) /*0x63c991*/
        {
          *(float *)&a2 = dbl_A6E740 - v21; /*0x63c999*/
          *(float *)&a2 = cos(*(float *)&a2); /*0x63c9a6*/
          *(float *)&a2 = *(float *)&a2 * *((float *)&v50 + 1); /*0x63c9b2*/
          *(float *)&a2 = fabs(*(float *)&a2); /*0x63c9bc*/
          *(float *)&v50 = *(float *)&a2 + *(float *)&v50; /*0x63c9c8*/
        }
        arg0 = cos(arg0); /*0x63c9d9*/
        *((float *)&v50 + 1) = arg0 * *((float *)&v50 + 1); /*0x63c9e5*/
      }
    }
  }
  if ( (*(_DWORD *)(LODWORD(v7) + 8) & 0x10) != 0 ) /*0x63cab8*/
  {
    v29 = MEMORY[0xB333A0]; /*0x63cabd*/
    *(float *)&a2 = *(float *)(LODWORD(v7) + 0x2C) + *(float *)&v50; /*0x63cac7*/
    a5 = *(float *)(LODWORD(v7) + 0x30) + *((float *)&v50 + 1); /*0x63cad2*/
    a3 = *(float *)(LODWORD(v7) + 0x34) + z; /*0x63cadd*/
    if ( !v29->currentInteriorCell && (PlayerCharacter *)LODWORD(v7) != reference ) /*0x63caed*/
      GetTerrainHeight(v29, (float *)&a2, &a3); /*0x63caf9*/
    (*(void (__thiscall **)(float, int *))(*(_DWORD *)LODWORD(v7) + 0x1CC))(COERCE_FLOAT(LODWORD(v7)), &a2); /*0x63cb0d*/
    return; /*0x63cb16*/
  }
  v30 = *(_DWORD *)LODWORD(v7); /*0x63cb21*/
  v31 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x2C0))(this); /*0x63cb25*/
  (*(void (__thiscall **)(float, float, unsigned __int64 *, _DWORD))(v30 + 0x1B4))( /*0x63cb40*/
    COERCE_FLOAT(LODWORD(v7)),
    COERCE_FLOAT(LODWORD(v47)),
    &v50,
    v31);
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)LODWORD(v7)); /*0x63cb44*/
  v33 = DwordAtOffset40; /*0x63cb49*/
  if ( !DwordAtOffset40 ) /*0x63cb4d*/
    return; /*0x63cb4d*/
  if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x63cb55*/
  {
    v38 = sub_441800(v33, 0, 2u); /*0x63cbf6*/
    if ( v38 ) /*0x63cbfa*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x190))(COERCE_FLOAT(LODWORD(v7))) ) /*0x63cc0a*/
      {
        v39 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x174))(COERCE_FLOAT(LODWORD(v7))); /*0x63cc20*/
        v40 = *(_DWORD *)(v39 + 4); /*0x63cc24*/
        v41 = *(float *)(v39 + 8); /*0x63cc27*/
        LODWORD(v48) = *(_DWORD *)v39; /*0x63cc2a*/
        v53[0] = *(_DWORD *)(v38 + 0x20); /*0x63cc31*/
        v42 = *(float *)(v38 + 0x2C); /*0x63cc3d*/
        HIDWORD(v48) = v40; /*0x63cc40*/
        v43 = *(float *)(v38 + 0x24); /*0x63cc44*/
        *(float *)&a2 = *(float *)v53 - *(float *)&v48; /*0x63cc47*/
        *(float *)&v53[1] = v43; /*0x63cc4b*/
        v49 = v41; /*0x63cc53*/
        v54 = *(float *)(v38 + 0x28); /*0x63cc5e*/
        a5 = v43 - *((float *)&v48 + 1); /*0x63cc66*/
        v55 = v42; /*0x63cc6a*/
        a3 = v54 - v41; /*0x63cc76*/
        v44 = NiPoint3_Length((float *)&a2); /*0x63cc7a*/
        if ( v55 < v44 ) /*0x63cc8a*/
        {
          Actor_ChoosePathGridSteeringPosition( /*0x63ccb6*/
            (TESObjectREFR *)LODWORD(v7),
            (float *)&a2,
            *(NiPoint3 *)v39,
            v33,
            0.0,
            0.0,
            0);
          if ( sub_8AA350((float *)&a2, (float *)&v48) ) /*0x63ccc4*/
          {
            if ( sub_5E0260((_DWORD *)LODWORD(v7)) && (TESObjectCELL *)sub_5E1F60((_DWORD *)LODWORD(v7)) == v33 ) /*0x63cce5*/
            {
              v57 = *(NiPoint3 *)sub_628E40((_DWORD *)LODWORD(v7), v52); /*0x63cd01*/
              v45 = Actor_ChoosePathGridSteeringPosition( /*0x63cd16*/
                      (TESObjectREFR *)LODWORD(v7),
                      (float *)v53,
                      v57,
                      v33,
                      0.0,
                      0.0,
                      0);
              a2 = *(int *)v45; /*0x63cd1d*/
              a5 = v45[1]; /*0x63cd24*/
              a3 = v45[2]; /*0x63cd2b*/
            }
            if ( sub_8AA350((float *)&a2, (float *)&v48) ) /*0x63cd38*/
            {
              if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(reference) == v33 ) /*0x63cd52*/
              {
                v58 = *(NiPoint3 *)reference->vtbl->super.super.super.GetPos(reference); /*0x63cd76*/
                v46 = Actor_ChoosePathGridSteeringPosition( /*0x63cd8b*/
                        (TESObjectREFR *)LODWORD(v7),
                        (float *)v53,
                        v58,
                        v33,
                        0.0,
                        0.0,
                        0);
                a2 = *(int *)v46; /*0x63cd92*/
                a5 = v46[1]; /*0x63cd99*/
                a3 = v46[2]; /*0x63cda0*/
              }
            }
          }
          goto LABEL_50; /*0x63cda4*/
        }
      }
    }
  }
  else
  {
    v34 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v7) + 0x174); /*0x63cb66*/
    arg0 = 0.0; /*0x63cb6c*/
    v35 = v34(LODWORD(v7)); /*0x63cb72*/
    a2 = *(int *)v35; /*0x63cb76*/
    a5 = *(float *)(v35 + 4); /*0x63cb7d*/
    a3 = *(float *)(v35 + 8); /*0x63cb90*/
    v36 = sub_4CE3C0(v33); /*0x63cb97*/
    if ( sub_4C5B50(v36, (float *)&a2, &arg0) ) /*0x63cb9e*/
    {
      v37 = dbl_A46970; /*0x63cbb5*/
      if ( v37 < arg0 - a3 ) /*0x63cbc4*/
      {
        a3 = arg0 + v37; /*0x63cbcc*/
LABEL_50:
        (*(void (__thiscall **)(float, int *))(*(_DWORD *)LODWORD(v7) + 0x1CC))(COERCE_FLOAT(LODWORD(v7)), &a2); /*0x63cbd0*/
      }
    }
  }
}
