void __thiscall sub_65B750(int *this)
{
  Concurrency::details::SchedulerBase *v2; // eax
  Actor *v3; // edi
  bhkCharacterProxy *CharProxy; // ebx
  int v5; // edx
  double v6; // rt0
  double v7; // st6
  double (__thiscall *v8)(int); // eax
  double v9; // st6
  FreeEntry *v10; // eax
  unsigned __int8 v11; // cl
  bhkCharacterController *v12; // eax
  bhkCharacterController *v13; // edi
  bhkCharacterProxy *v14; // eax
  _DWORD *v15; // ecx
  NiNode *v16; // eax
  _DWORD *v17; // ecx
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v19; // edi
  BSExtraDataVtbl *v20; // eax
  _DWORD v21[8]; // [esp+4h] [ebp-F8h] BYREF
  bool v22; // [esp+27h] [ebp-D5h]
  NiNode *a1; // [esp+28h] [ebp-D4h]
  float v24[33]; // [esp+2Ch] [ebp-D0h] BYREF
  char v25; // [esp+B1h] [ebp-4Bh]
  float Scale; // [esp+C4h] [ebp-38h]
  unsigned int v27; // [esp+F8h] [ebp-4h]
  int savedregs; // [esp+FCh] [ebp+0h] BYREF

  if ( *(this + 0x16) )
  {
    if ( (!(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16))
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16)) == 1)
      && (!TESObjectREFR_GetParentCell((TESObjectREFR *)this)
       || TESObjectREFR_GetParentCell((TESObjectREFR *)this)->members.cellProcessLevel == 6
       || TESObjectREFR_GetParentCell((TESObjectREFR *)this)->members.cellProcessLevel == 5) )
    {
      v2 = (Concurrency::details::SchedulerBase *)OblivionDynamicCast(
                                                    this,
                                                    0,
                                                    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                                    &Actor `RTTI Type Descriptor',
                                                    0);
      v3 = (Actor *)v2;
      v22 = v2
         && (Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v2) == (struct Concurrency::details::ScheduleGroupBase *)2
          || sub_5F0310(v3, 0xFFFFFFFF));
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
      if ( !CharProxy )
      {
        sub_890C00(v24, 1);
        v5 = *this;
        v6 = hkFactor;
        v7 = *((float *)this + 0xB) * v6;
        LODWORD(v24[0x1C]) = *(this + 0xF);
        v8 = *(double (__thiscall **)(int))(v5 + 0x1F4);
        v24[0] = v7;
        v9 = *((float *)this + 0xC);
        v27 = 0;
        v24[0x1E] = 0.0;
        v24[1] = v9 * v6;
        v24[2] = v6 * *((float *)this + 0xD);
        v24[0x1F] = v8((int)this);
        if ( v3 && (*(int (__thiscall **)(int *))(*this + 0x170))(this) && Actor_IsCreature(v3) )
          Scale = TESObjectREFR_GetScale((TESObjectREFR *)this);
        else
          v25 = 1;
        v10 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000003E0uLL, v21[1]);
        v11 = 0x10 - ((unsigned __int8)v10 & 0xF);
        v12 = (bhkCharacterController *)((char *)v10 + v11);
        *((_BYTE *)v12 + 0xFFFFFFFF) = v11;
        LOBYTE(v27) = 1;
        v13 = bhkCharacterController::bhkCharacterController(v12, (int)v24);
        LOBYTE(v27) = 0;
        CharProxy = v13;
        *(float *)&a1 = COERCE_FLOAT(v21);
        v21[0] = v13;
        if ( v13 )
          InterlockedIncrement((volatile LONG *)v13 + 1);
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x190))(*(this + 0x16), v21[0]);
        sub_8910F0(v13, 0x3E8, (int)this);
        *(float *)&a1 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 0xEC))(this);
        *((float *)v13 + 0xCD) = *(float *)&a1;
        if ( byte_B333B8 )
          *((_DWORD *)v13 + 0x7D) |= 0x100000u;
        else
          *((_DWORD *)v13 + 0x7D) &= ~0x100000u;
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x36C))(*(this + 0x16)) )
        {
          (*(void (__thiscall **)(int *, float))(*this + 0x1EC))(this, flt_A2FAAC);
          v14 = MobileObject_GetCharProxy((MobileObject *)this);
          if ( v14 )
            *((_DWORD *)v14 + 0x7D) |= 0x800u;
        }
        v27 = 0xFFFFFFFF;
        sub_890F70(v24);
      }
      v15 = *((_DWORD **)CharProxy + 0xD9);
      if ( v15 )
        v16 = (NiNode *)sub_89F6B0(v15, 0);
      else
        v16 = 0;
      a1 = *((NiNode **)this + 0xF);
      if ( v16 != a1 )
      {
        v17 = *((_DWORD **)CharProxy + 0xD9);
        if ( v17 )
          sub_89F650(v17, (int)a1, 0);
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
        v19 = (ExtraDataList *)ParentCell;
        if ( ParentCell )
        {
          if ( TESObjectCELL_IsInterior(ParentCell) )
            v20 = sub_424180(v19 + 2);
          else
            v20 = (BSExtraDataVtbl *)bhkWorldM;
          if ( v20 )
          {
            if ( BYTE2(v20[3].Destructor) )
              (*(void (__thiscall **)(bhkCharacterProxy *, _DWORD))(*(_DWORD *)CharProxy + 0x88))(CharProxy, 0);
          }
        }
        if ( !v22 )
          sub_88D070(a1, 6, 1, 0);
      }
      (*(void (__thiscall **)(int *, _DWORD))(*this + 0x178))(this, 0);
    }
  }
}
