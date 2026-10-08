void __userpurge Player_Actor_GetAViCur(int a1@<ecx>, int a2@<ebx>, int a3)
{
  double v5; // st7
  double v6; // st7
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-Ch]
  float v9; // [esp+Ch] [ebp-8h]
  int BaseCalcAVi; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+18h] [ebp+4h]
  float v13; // [esp+18h] [ebp+4h]

  if ( a3 == 0xB ) /*0x65e03e*/
  {
    v12 = *(float *)(a1 + 0x230); /*0x65e046*/
    v7 = *(float *)(a1 + 0x350); /*0x65e050*/
    v9 = *(float *)(a1 + 0x47C); /*0x65e05a*/
    v5 = sub_4D8FB0((TESObjectREFR *)a1); /*0x65e05e*/
    Double_To_SInt32(v5 + v12 + v7 + v9); /*0x65e06f*/
  }
  else if ( Actor_GetActorBaseForm((Actor *)a1, 0) ) /*0x65e07e*/
  {
    v8 = *(float *)(a1 + 4 * a3 + 0x204); /*0x65e093*/
    v11 = *(float *)(a1 + 4 * a3 + 0x324); /*0x65e09e*/
    switch ( a3 ) /*0x65e0a2*/
    {
      case 8: /*0x65e0a2*/
        v6 = *(float *)(a1 + 0x444); /*0x65e0c7*/
        break;
      case 9: /*0x65e0a2*/
        v6 = *(float *)(a1 + 0x448); /*0x65e0bf*/
        break;
      case 0xA: /*0x65e0a2*/
        v6 = *(float *)(a1 + 0x44C); /*0x65e0b7*/
        break;
      default:
        v6 = *(float *)(a1 + 4 * a3 + 0x450); /*0x65e0ae*/
        break;
    }
    v13 = v6; /*0x65e0ce*/
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, a3); /*0x65e0d9*/
    Double_To_SInt32((double)BaseCalcAVi + v8 + v11 + v13); /*0x65e0ed*/
  }
}
