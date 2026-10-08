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
  double v13; // st7
  __int16 v14; // fps
  double v15; // st7
  __int16 v16; // fps
  float v18; // [esp+8h] [ebp-5Ch]
  float v19; // [esp+18h] [ebp-4Ch]
  float v20; // [esp+18h] [ebp-4Ch]
  float v21; // [esp+1Ch] [ebp-48h]
  float v22; // [esp+20h] [ebp-44h]
  float v23; // [esp+24h] [ebp-40h]
  float v24; // [esp+28h] [ebp-3Ch] BYREF
  float v25; // [esp+2Ch] [ebp-38h]
  float v26; // [esp+30h] [ebp-34h]
  float v27[3]; // [esp+34h] [ebp-30h] BYREF
  float v28[9]; // [esp+40h] [ebp-24h] BYREF

  v2 = *((_DWORD *)this + 0x1A); /*0x6965c6*/
  if ( v2 /*0x6965e6*/
    && (v3 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x20))(v2)) != 0
    && v3->vtbl->super.super.super.IsActor((TESObjectREFR *)v3) )
  {
    v4 = v3; /*0x6965f5*/
    v5 = (_DWORD *)((int (__thiscall *)(MagicCasterVtbl **))v3->super.super.magicCaster.vtbl->GetMagicNode)(&v3->super.super.magicCaster.vtbl); /*0x6965f9*/
  }
  else
  {
    v4 = 0; /*0x6965fd*/
    v5 = 0; /*0x6965ff*/
  }
  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x696603*/
  v7 = (__m128 *)CharProxy; /*0x69660a*/
  if ( !v5 ) /*0x69660c*/
    return 1; /*0x69660c*/
  if ( !CharProxy ) /*0x696614*/
    return 1; /*0x696614*/
  v8 = *((_DWORD **)this + 0x22); /*0x69661a*/
  if ( !v8 ) /*0x696622*/
    return 1; /*0x696753*/
  if ( kHeadBodyNormalMatchRadius > (double)*(this + 0x19) && v4 == reference && !reference->isThirdPerson ) /*0x696641*/
  {
    v9 = v5[0x22]; /*0x69664a*/
    v10 = v5[0x23]; /*0x696650*/
    v11 = v5[0x24]; /*0x696656*/
    v8[0x15] = v9; /*0x69665c*/
    v8[0x16] = v10; /*0x69665f*/
    v8[0x17] = v11; /*0x696662*/
  }
  if ( *(this + 0x19) > 0.0 ) /*0x69666f*/
  {
    v12 = *((float **)this + 0x22); /*0x696675*/
    v21 = v12[0x22]; /*0x696681*/
    v22 = v12[0x23]; /*0x696691*/
    v23 = v12[0x24]; /*0x69669a*/
    sub_5E1500(v7, v27); /*0x69669e*/
    v24 = v27[0] - v21; /*0x6966af*/
    v25 = v27[1] - v22; /*0x6966bb*/
    v26 = 0.0; /*0x6966c1*/
    v19 = v27[2] - v23; /*0x6966cd*/
    v13 = NiPoint3_Length(&v24); /*0x6966d9*/
    sub_98598A(v13, v19, v14); /*0x6966e4*/
    v18 = -v19; /*0x6966f6*/
    v15 = v24; /*0x6966ff*/
    sub_98598A(v25, v24, v16); /*0x696707*/
    v20 = v15; /*0x69670c*/
    sub_7118E0(v28, v20, 0.0, v18); /*0x69671c*/
    qmemcpy((void *)(*((_DWORD *)this + 0x22) + 0x30), v28, 0x24u); /*0x696733*/
  }
  NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0x22), 0.0, 0); /*0x696743*/
  return 0; /*0x696748*/
}
