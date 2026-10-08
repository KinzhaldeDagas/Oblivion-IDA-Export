float *__userpurge sub_65DFA0@<eax>(int a1@<ecx>, double a2@<st0>, float *a3, float *a4)
{
  double v5; // st7
  float v7; // [esp+4h] [ebp-14h]
  float BaseEncumberance; // [esp+8h] [ebp-10h]
  float v9; // [esp+14h] [ebp-4h]

  BaseEncumberance = Actor_GetBaseEncumberance(a1, a2); /*0x65dfab*/
  v7 = sub_4D8FB0((TESObjectREFR *)a1); /*0x65dfb6*/
  v9 = *(float *)(a1 + 0x350) + *(float *)(a1 + 0x230) + *(float *)(a1 + 0x47C); /*0x65dfe5*/
  v5 = v9; /*0x65dff3*/
  if ( v9 < 0.0 ) /*0x65dff8*/
  {
    *a3 = v7; /*0x65e01e*/
    *a4 = BaseEncumberance - v5; /*0x65e026*/
    return a4; /*0x65e01a*/
  }
  else
  {
    *a3 = v5 + v7; /*0x65e005*/
    *a4 = BaseEncumberance; /*0x65e00b*/
    return a3; /*0x65dffd*/
  }
}
