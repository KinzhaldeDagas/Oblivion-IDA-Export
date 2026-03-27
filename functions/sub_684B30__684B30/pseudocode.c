char __cdecl sub_684B30(MobileObject *a1, float *a2, float a3, char a4)
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
  float v15; // [esp+34h] [ebp+4h]
  float v16; // [esp+34h] [ebp+4h]
  float v17; // [esp+34h] [ebp+4h]
  float v18; // [esp+34h] [ebp+4h]

  if ( !a1 )
    return 0;
  v4 = a1->vtbl->super.GetPos((TESObjectREFR *)a1);
  v11 = v4[1];
  v12 = v4[2];
  *(float *)v13 = *v4 - *a2;
  *(float *)&v13[1] = v11 - a2[1];
  v14 = v12 - a2[2];
  CharProxy = MobileObject_GetCharProxy(a1);
  v6 = CharProxy;
  if ( !CharProxy )
    goto LABEL_5;
  if ( sub_88D370((_DWORD *)CharProxy + 0x78) )
  {
    v14 = 0.0;
  }
  else
  {
LABEL_5:
    v15 = sub_5E0660(a1);
    if ( 0.0 == v15 )
      v15 = flt_A2FFE8;
    v7 = dbl_A3AA50;
    v10 = v12 - v7;
    if ( v10 < (double)a2[2] )
    {
      v16 = v7 + v12 + v15;
      if ( v16 > (double)a2[2] )
        v14 = 0.0;
    }
  }
  v17 = a3;
  if ( a4 )
  {
    v18 = flt_A427E4;
    if ( v6 )
    {
      v18 = sub_8913C0((float *)v6) * dbl_A372E0;
      if ( (*((_BYTE *)v6 + 0x1F4) & 1) != 0 )
        v18 = v18 + v18;
      if ( flt_A427E4 > (double)v18 )
        v18 = flt_A427E4;
    }
    v17 = v18 + a3;
  }
  v8 = sub_47F6F0((float *)v13, v17) <= 0;
  result = 1;
  if ( !v8 )
    return 0;
  return result;
}
