char __cdecl sub_684B30(TESObjectREFR *a1, float *a2, float a3, char a4)
{
  float *v4; // eax
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v6; // ebp
  double v7; // st4
  bool v8; // cc
  char result; // al
  float v10; // [esp+14h] [ebp-1Ch]
  float v11; // [esp+1Ch] [ebp-14h]
  float v12; // [esp+20h] [ebp-10h]
  int v13[2]; // [esp+24h] [ebp-Ch] BYREF
  float v14; // [esp+2Ch] [ebp-4h]
  float ScaledCollisionHeight; // [esp+34h] [ebp+4h]
  float v16; // [esp+34h] [ebp+4h]
  float v17; // [esp+34h] [ebp+4h]
  float v18; // [esp+34h] [ebp+4h]

  if ( !a1 ) /*0x684b3d*/
    return 0; /*0x684b3d*/
  v4 = a1->vtbl->GetPos(a1); /*0x684b4f*/
  v11 = v4[1]; /*0x684b67*/
  v12 = v4[2]; /*0x684b6b*/
  *(float *)v13 = *v4 - *a2; /*0x684b71*/
  *(float *)&v13[1] = v11 - a2[1]; /*0x684b7c*/
  v14 = v12 - a2[2]; /*0x684b87*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x684b8b*/
  v6 = CharProxy; /*0x684b90*/
  if ( !CharProxy ) /*0x684b94*/
    goto LABEL_5; /*0x684b94*/
  if ( hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) ) /*0x684b9c*/
  {
    v14 = 0.0; /*0x684ba7*/
  }
  else
  {
LABEL_5:
    ScaledCollisionHeight = Actor_GetScaledCollisionHeight(a1); /*0x684bb4*/
    if ( 0.0 == ScaledCollisionHeight ) /*0x684bc3*/
      ScaledCollisionHeight = flt_A2FFE8; /*0x684bcb*/
    v7 = dbl_A3AA50; /*0x684be0*/
    v10 = v12 - v7; /*0x684be2*/
    if ( v10 < (double)a2[2] ) /*0x684bf3*/
    {
      v16 = v7 + v12 + ScaledCollisionHeight; /*0x684c04*/
      if ( v16 > (double)a2[2] ) /*0x684c13*/
        v14 = 0.0; /*0x684c15*/
    }
  }
  v17 = a3; /*0x684c2a*/
  if ( a4 ) /*0x684c2e*/
  {
    v18 = flt_A427E4; /*0x684c38*/
    if ( v6 ) /*0x684c3c*/
    {
      v18 = bhkCharacterController_GetRadius((float *)v6) * dbl_A372E0; /*0x684c52*/
      if ( (*((_BYTE *)v6 + 0x1F4) & 1) != 0 ) /*0x684c56*/
        v18 = v18 + v18; /*0x684c5e*/
      if ( flt_A427E4 > (double)v18 ) /*0x684c71*/
        v18 = flt_A427E4; /*0x684c73*/
    }
    v17 = v18 + a3; /*0x684c83*/
  }
  v8 = sub_47F6F0((float *)v13, v17) <= 0; /*0x684c9d*/
  result = 1; /*0x684ca0*/
  if ( !v8 ) /*0x684ca2*/
    return 0; /*0x684ca4*/
  return result; /*0x684ca6*/
}
