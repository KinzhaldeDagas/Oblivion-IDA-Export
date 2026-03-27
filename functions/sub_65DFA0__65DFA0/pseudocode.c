float *__userpurge sub_65DFA0@<eax>(int a1@<ecx>, double a2@<st0>, float *a3, float *a4)
{
  double v5; // st7
  float v7; // [esp+4h] [ebp-14h]
  float BaseEncumberance; // [esp+8h] [ebp-10h]
  float v9; // [esp+14h] [ebp-4h]

  BaseEncumberance = Actor_GetBaseEncumberance(a1, a2);
  v7 = sub_4D8FB0((TESObjectREFR *)a1);
  v9 = *(float *)(a1 + 0x350) + *(float *)(a1 + 0x230) + *(float *)(a1 + 0x47C);
  v5 = v9;
  if ( v9 < 0.0 )
  {
    *a3 = v7;
    *a4 = BaseEncumberance - v5;
    return a4;
  }
  else
  {
    *a3 = v5 + v7;
    *a4 = BaseEncumberance;
    return a3;
  }
}
