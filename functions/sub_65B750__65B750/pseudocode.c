void __thiscall MobileObject_EnsureActorCharacterController(int *this)
{
  Actor *v2; // eax
  Actor *v3; // edi
  bhkCharacterProxy *CharProxy; // ebx
  int v5; // edx
  double v6; // rt0
  double v7; // st6
  double (__thiscall *v8)(int *); // eax
  double v9; // st6
  FreeEntry *v10; // eax
  unsigned __int8 v11; // cl
  bhkCharacterController *v12; // eax
  bhkCharacterController *v13; // edi
  bhkCharacterProxy *v14; // eax
  int **v15; // ecx
  NiNode *v16; // eax
  _DWORD *v17; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v19; // edi
  BSExtraDataVtbl *v20; // eax
  _DWORD v21[8]; // [esp+4h] [ebp-F8h] BYREF
  bool v22; // [esp+27h] [ebp-D5h]
  NiNode *a1; // [esp+28h] [ebp-D4h]
  hkVector4 v24[7]; // [esp+2Ch] [ebp-D0h] BYREF
  int v25; // [esp+9Ch] [ebp-60h]
  int v26; // [esp+A4h] [ebp-58h]
  float v27; // [esp+A8h] [ebp-54h]
  char v28; // [esp+B1h] [ebp-4Bh]
  float Scale; // [esp+C4h] [ebp-38h]
  unsigned int v30; // [esp+F8h] [ebp-4h]
  int savedregs; // [esp+FCh] [ebp+0h] BYREF

  if ( *(this + 0x16) ) /*0x65b792*/
  {
    if ( (!(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16)) /*0x65b7e0*/
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16)) == 1)
      && (!Shared_GetDwordAtOffset40(this)
       || *(_BYTE *)(Shared_GetDwordAtOffset40(this) + 0x26) == 6
       || *(_BYTE *)(Shared_GetDwordAtOffset40(this) + 0x26) == 5) )
    {
      v2 = (Actor *)OblivionDynamicCast( /*0x65b7f5*/
                      this,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);                       // TES4 authoritative actor validation pattern: OblivionDynamicCast from MobileObject RTTI to Actor RTTI before actor-specific setup.
      v3 = v2; /*0x65b7fa*/
      v22 = v2 && (Actor::GetDeadState(v2) == 2 || sub_5F0310(v3, 0xFFFFFFFF)); /*0x65b81c*/
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this);// Actor controller creation first checks existing MobileObject_GetCharProxy(this). If absent it allocates bhkCharacterController and stores it into process vfunc +0x190 at 0x65B92F. /*0x65b82f*/
      if ( !CharProxy ) /*0x65b833*/
      {
        sub_890C00(v24, 1); /*0x65b83f*/
        v5 = *this; /*0x65b850*/
        v6 = hkFactor; /*0x65b854*/
        v7 = *((float *)this + 0xB) * v6; /*0x65b854*/
        v25 = *(this + 0xF); /*0x65b856*/
        v8 = *(double (__thiscall **)(int *))(v5 + 0x1F4); /*0x65b85d*/
        v24[0].x = v7; /*0x65b863*/
        v9 = *((float *)this + 0xC); /*0x65b869*/
        v30 = 0; /*0x65b86c*/
        v26 = 0; /*0x65b875*/
        v24[0].y = v9 * v6; /*0x65b87c*/
        v24[0].z = v6 * *((float *)this + 0xD); /*0x65b883*/
        v27 = v8(this); /*0x65b88b*/
        if ( v3 && (*(int (__thiscall **)(int *))(*this + 0x170))(this) && Actor_IsCreature(v3) ) /*0x65b8a6*/
          Scale = TESObjectREFR_GetScale((TESObjectREFR *)this); /*0x65b8b6*/
        else
          v28 = 1; /*0x65b8bf*/
        v10 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003E0uLL, v21[1]); /*0x65b8d3*/
        v11 = 0x10 - ((unsigned __int8)v10 & 0xF); /*0x65b8df*/
        v12 = (bhkCharacterController *)((char *)v10 + v11); /*0x65b8e4*/
        *((_BYTE *)v12 + 0xFFFFFFFF) = v11; /*0x65b8e6*/
        LOBYTE(v30) = 1; /*0x65b8f4*/
        v13 = bhkCharacterController::bhkCharacterController(v12, (int)v24); /*0x65b901*/
        LOBYTE(v30) = 0; /*0x65b908*/
        CharProxy = v13; /*0x65b910*/
        *(float *)&a1 = COERCE_FLOAT(v21); /*0x65b912*/
        v21[0] = v13; /*0x65b916*/
        if ( v13 ) /*0x65b918*/
          InterlockedIncrement((volatile LONG *)v13 + 1); /*0x65b91e*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x190))(*(this + 0x16), v21[0]);// Process vfunc +0x190 receives the newly allocated bhkCharacterController smart pointer; this is where actor process stores the char proxy before 0x3E8 owner metadata is added. /*0x65b92f*/
        sub_8910F0(v13, 0x3E8, (int)this);      // TES4 authoritative: actor controller setup stores this MobileObject under proxy metadata key 0x3E8. This key is not actor-proof by itself because other object setup paths also use it. /*0x65b939*/
        *(float *)&a1 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 0xEC))(this); /*0x65b94a*/
        *((float *)v13 + 0xCD) = *(float *)&a1; /*0x65b952*/
        if ( unk_B333B8 ) /*0x65b958*/
          *((_DWORD *)v13 + 0x7D) |= 0x100000u; /*0x65b961*/
        else
          *((_DWORD *)v13 + 0x7D) &= ~0x100000u; /*0x65b96d*/
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x36C))(*(this + 0x16)) )// TES4 authoritative: process GetSitSleepState (+0x36C) controls the proxy-side special flag setup; any nonzero sit/sleep state enters this path. /*0x65b982*/
        {
          (*(void (__thiscall **)(int *, float))(*this + 0x1EC))(this, kFaceEarNormalMatchRadius); /*0x65b99c*/
          v14 = MobileObject_GetCharProxy((MobileObject *)this); /*0x65b9a0*/
          if ( v14 ) /*0x65b9a7*/
            *((_DWORD *)v14 + 0x7D) |= 0x800u;  // TES4 authoritative: sets proxy +0x1F4 bit 0x800 for sit/sleep special controller handling. This is not Actor_IsSwimming's process movement flag bit 0x800. /*0x65b9a9*/
        }
        v30 = 0xFFFFFFFF; /*0x65b9b7*/
        sub_890F70(v24); /*0x65b9c2*/
      }
      v15 = *((int ***)CharProxy + 0xD9); /*0x65b9c7*/
      if ( v15 ) /*0x65b9cf*/
        v16 = (NiNode *)sub_89F6B0(v15, 0); /*0x65b9d3*/
      else
        v16 = 0; /*0x65b9da*/
      a1 = *((NiNode **)this + 0xF); /*0x65b9e1*/
      if ( v16 != a1 ) /*0x65b9e5*/
      {
        v17 = *((_DWORD **)CharProxy + 0xD9); /*0x65b9e7*/
        if ( v17 ) /*0x65b9ef*/
          sub_89F650(v17, (int)a1, 0); /*0x65b9f4*/
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x65b9fb*/
        v19 = (ExtraDataList *)DwordAtOffset40; /*0x65ba00*/
        if ( DwordAtOffset40 ) /*0x65ba04*/
        {
          if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x65ba08*/
            v20 = sub_424180(v19 + 2); /*0x65ba14*/
          else
            v20 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x65ba1b*/
          if ( v20 ) /*0x65ba22*/
          {
            if ( BYTE2(v20[3].Destructor) ) /*0x65ba24*/
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0); /*0x65ba36*/
          }
        }
        if ( !v22 ) /*0x65ba3d*/
          sub_88D070(a1, 6, 1, 0); /*0x65ba4a*/
      }
      (*(void (__thiscall **)(int *, _DWORD))(*this + 0x178))(this, 0); /*0x65ba5e*/
    }
  }
}
