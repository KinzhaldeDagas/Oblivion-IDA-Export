bool __thiscall sub_5E30A0(TESObjectREFR *this)
{
  TESPackage *v2; // edi
  PlayerCharacter *v3; // eax
  PlayerCharacter *v4; // ebp
  float *v5; // eax
  float *v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  float *v10; // eax
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  TESObjectREFR *v15; // ecx
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v17; // eax
  TESObjectCELL *v18; // esi
  double v20; // st7
  float *v21; // [esp-Ch] [ebp-44h]
  float *v22; // [esp-Ch] [ebp-44h]
  double v23; // [esp+8h] [ebp-30h] BYREF
  int v24; // [esp+10h] [ebp-28h]
  float v25[3]; // [esp+14h] [ebp-24h] BYREF
  float v26[3]; // [esp+20h] [ebp-18h] BYREF
  float v27[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !*((_DWORD *)this + 0x16) )
    return 0;
  v2 = (TESPackage *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16));
  v3 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16));
  v4 = v3;
  if ( !v2 || v2->members.type != 2 || v3 != TESDataHandler_g_PlayerRef || !v3 )
    return 0;
  v21 = (float *)sub_566B30(v2, (int)v25, (Actor *)this);
  v5 = this->vtbl->GetPos(this);
  v6 = sub_4121A0(v5, v26, v21);
  v7 = *(_DWORD *)v6;
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v23 = COERCE_DOUBLE(__PAIR64__(v8, v7));
  v24 = v9;
  v22 = (float *)sub_566B30(v2, (int)v26, (Actor *)this);
  v10 = v4->vtbl->super.super.super.GetPos((TESObjectREFR *)v4);
  v11 = sub_4121A0(v10, v27, v22);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v25[0] = v12;
  v15 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v25[1] = v13;
  v25[2] = v14;
  if ( TESObjectREFR_GetParentCell(v15) )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    if ( TESObjectCELL_IsInterior(ParentCell) )
    {
      if ( sub_566A40((char **)v2, (Actor *)this) )
      {
        v17 = sub_566A40((char **)v2, (Actor *)this);
        if ( TESObjectCELL_IsInterior(v17) )
        {
          v18 = sub_566A40((char **)v2, (Actor *)this);
          if ( v18 != TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
            return 0;
        }
      }
    }
  }
  v23 = sub_404C90((float *)&v23);
  v20 = sub_404C90(v25);
  return v20 < v23;
}
