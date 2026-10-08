char __cdecl sub_635D60(TESObjectREFR *a1, int a2, int a3, int a4, float a5, NiPoint3 *a6)
{
  TESObjectCELL *DwordAtOffset40; // eax
  float *v7; // eax
  const NiPoint3 *v8; // eax
  bool v9; // zf
  char result; // al
  NiPoint3 v11; // [esp+14h] [ebp-18h] BYREF
  int v12[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a1 ) /*0x635d6e*/
    return 0; /*0x635d6e*/
  sub_62E790(&v11.x, *(float *)&a2, *(float *)&a3, *(float *)&a4, a5, 0.0); /*0x635da0*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x635db0*/
  v7 = Actor_ChoosePathGridSteeringPosition(a1, (float *)v12, v11, DwordAtOffset40, COERCE_FLOAT(1), 0.0, 0); /*0x635dd6*/
  a6->x = *v7; /*0x635de1*/
  a6->y = v7[1]; /*0x635de6*/
  a6->z = v7[2]; /*0x635dec*/
  v8 = (const NiPoint3 *)a1->vtbl->GetPos(a1); /*0x635df9*/
  v9 = !NiPoint3__NotEqual(a6, v8); /*0x635e03*/
  result = 1; /*0x635e05*/
  if ( v9 ) /*0x635e07*/
    return 0; /*0x635e09*/
  return result; /*0x635e0b*/
}
