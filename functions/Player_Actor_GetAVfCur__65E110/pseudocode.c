double __userpurge Player_Actor_GetAVfCur@<st0>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  double v6; // st7
  float v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+0h] [ebp-8h]
  float v10; // [esp+4h] [ebp-4h]
  float v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+Ch] [ebp+4h]
  float v14; // [esp+Ch] [ebp+4h]

  if ( a5 == 0xB )
  {
    v12 = *(float *)(a1 + 0x230);
    v8 = *(float *)(a1 + 0x350);
    v10 = *(float *)(a1 + 0x47C);
    return (float)(sub_4D8FB0((TESObjectREFR *)a1) + v12 + v8 + v10);
  }
  else
  {
    v11 = *(float *)(a1 + 4 * a5 + 0x204);
    v9 = *(float *)(a1 + 4 * a5 + 0x324);
    switch ( a5 )
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
        v6 = *(float *)(a1 + 4 * a5 + 0x450);
        break;
    }
    v14 = v6;
    return (float)(Actor_GetBaseCalcAVf((int *)a1, a2, a3, a4, a5) + v11 + v9 + v14);
  }
}
