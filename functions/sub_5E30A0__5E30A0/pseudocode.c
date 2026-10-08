bool __thiscall sub_5E30A0(TESObjectREFR *this)
{
  int v2; // edi
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
  PlayerCharacter *v15; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v17; // eax
  BSExtraDataVtbl *v18; // esi
  double v20; // st7
  float *v21; // [esp-Ch] [ebp-44h]
  float *v22; // [esp-Ch] [ebp-44h]
  double v23; // [esp+8h] [ebp-30h] BYREF
  int v24; // [esp+10h] [ebp-28h]
  float v25[3]; // [esp+14h] [ebp-24h] BYREF
  float v26[3]; // [esp+20h] [ebp-18h] BYREF
  float v27[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !*((_DWORD *)this + 0x16) ) /*0x5e30a9*/
    return 0; /*0x5e320b*/
  v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16)); /*0x5e30c5*/
  v3 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)); /*0x5e30cf*/
  v4 = v3; /*0x5e30d3*/
  if ( !v2 || *(_BYTE *)(v2 + 0x20) != 2 || v3 != reference || !v3 ) /*0x5e30f3*/
    return 0; /*0x5e30f3*/
  v21 = sub_566B30((TESPackage *)v2, v25, (Actor *)this); /*0x5e3108*/
  v5 = this->vtbl->GetPos(this); /*0x5e3116*/
  v6 = sub_4121A0(v5, v26, v21); /*0x5e311a*/
  v7 = *(_DWORD *)v6; /*0x5e311f*/
  v8 = *((_DWORD *)v6 + 1); /*0x5e3121*/
  v9 = *((_DWORD *)v6 + 2); /*0x5e3124*/
  v23 = COERCE_DOUBLE(__PAIR64__(v8, v7)); /*0x5e3127*/
  v24 = v9; /*0x5e3137*/
  v22 = sub_566B30((TESPackage *)v2, v26, (Actor *)this); /*0x5e3140*/
  v10 = v4->vtbl->super.super.super.GetPos((TESObjectREFR *)v4); /*0x5e3151*/
  v11 = sub_4121A0(v10, v27, v22); /*0x5e3155*/
  v12 = *v11; /*0x5e315a*/
  v13 = v11[1]; /*0x5e315c*/
  v14 = v11[2]; /*0x5e315f*/
  v25[0] = v12; /*0x5e3162*/
  v15 = reference; /*0x5e3166*/
  v25[1] = v13; /*0x5e316c*/
  v25[2] = v14; /*0x5e3170*/
  if ( Shared_GetDwordAtOffset40(v15) ) /*0x5e3174*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x5e3183*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5e318a*/
    {
      if ( sub_566A40((char **)v2, (Actor *)this) ) /*0x5e3196*/
      {
        v17 = (TESObjectCELL *)sub_566A40((char **)v2, (Actor *)this); /*0x5e31a2*/
        if ( TESObjectCELL_IsInterior(v17) ) /*0x5e31a9*/
        {
          v18 = sub_566A40((char **)v2, (Actor *)this); /*0x5e31c0*/
          if ( v18 != (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(reference) ) /*0x5e31c9*/
            return 0; /*0x5e31d4*/
        }
      }
    }
  }
  v23 = NiPoint3_Length((float *)&v23); /*0x5e31de*/
  v20 = NiPoint3_Length(v25); /*0x5e31e6*/
  return v20 < v23; /*0x5e31f9*/
}
