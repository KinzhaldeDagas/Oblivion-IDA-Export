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

  if ( a3 == 0xB )
  {
    v12 = *(float *)(a1 + 0x230);
    v7 = *(float *)(a1 + 0x350);
    v9 = *(float *)(a1 + 0x47C);
    v5 = sub_4D8FB0((TESObjectREFR *)a1);
    Double_To_SInt32(v5 + v12 + v7 + v9);
  }
  else if ( Actor_GetActorBaseForm((Actor *)a1, 0) )
  {
    v8 = *(float *)(a1 + 4 * a3 + 0x204);
    v11 = *(float *)(a1 + 4 * a3 + 0x324);
    switch ( a3 )
    {
      case 8:
        v6 = *(float *)(a1 + 0x444);
        break;
      case 9:
        v6 = *(float *)(a1 + 0x448);
        break;
      case 0xA:
        v6 = *(float *)(a1 + 0x44C);
        break;
      default:
        v6 = *(float *)(a1 + 4 * a3 + 0x450);
        break;
    }
    v13 = v6;
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, a3);
    Double_To_SInt32((double)BaseCalcAVi + v8 + v11 + v13);
  }
}
