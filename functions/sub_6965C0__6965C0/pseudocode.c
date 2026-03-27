char __thiscall sub_6965C0(float *this)
{
  int v2; // ecx
  PlayerCharacter *v3; // esi
  PlayerCharacter *v4; // edi
  _DWORD *v5; // esi
  bhkCharacterProxy *CharProxy; // eax
  __m128 *v7; // ecx
  _DWORD *v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // esi
  float *v12; // eax
  void *v13; // ecx
  double v14; // st7
  void *v15; // ecx
  float v17; // [esp+8h] [ebp-5Ch]
  float v18; // [esp+18h] [ebp-4Ch]
  float v19; // [esp+18h] [ebp-4Ch]
  float v20; // [esp+1Ch] [ebp-48h]
  float v21; // [esp+20h] [ebp-44h]
  float v22; // [esp+24h] [ebp-40h]
  float v23[3]; // [esp+28h] [ebp-3Ch] BYREF
  float v24[3]; // [esp+34h] [ebp-30h] BYREF
  float v25[9]; // [esp+40h] [ebp-24h] BYREF

  v2 = *((_DWORD *)this + 0x1A);
  if ( v2
    && (v3 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x20))(v2)) != 0
    && v3->vtbl->super.super.super.IsActor((TESObjectREFR *)v3) )
  {
    v4 = v3;
    v5 = (_DWORD *)((int (__thiscall *)(MagicCasterVtbl **))v3->super.super.magicCaster.vtbl->GetMagicNode)(&v3->super.super.magicCaster.vtbl);
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  v7 = (__m128 *)CharProxy;
  if ( !v5 )
    return 1;
  if ( !CharProxy )
    return 1;
  v8 = *((_DWORD **)this + 0x22);
  if ( !v8 )
    return 1;
  if ( flt_A3D65C > (double)*(this + 0x19)
    && v4 == TESDataHandler_g_PlayerRef
    && !TESDataHandler_g_PlayerRef->isThirdPerson )
  {
    v9 = v5[0x22];
    v10 = v5[0x23];
    v11 = v5[0x24];
    v8[0x15] = v9;
    v8[0x16] = v10;
    v8[0x17] = v11;
  }
  if ( *(this + 0x19) > 0.0 )
  {
    v12 = *((float **)this + 0x22);
    v20 = v12[0x22];
    v21 = v12[0x23];
    v22 = v12[0x24];
    sub_5E1500(v7, v24);
    v23[0] = v24[0] - v20;
    v23[1] = v24[1] - v21;
    v23[2] = 0.0;
    v18 = v24[2] - v22;
    sub_404C90(v23);
    sub_98598A(v13);
    v17 = -v18;
    v14 = v23[0];
    sub_98598A(v15);
    v19 = v14;
    sub_7118E0(v25, v19, 0.0, v17);
    qmemcpy((void *)(*((_DWORD *)this + 0x22) + 0x30), v25, 0x24u);
  }
  NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0x22), 0.0, 0);
  return 0;
}
