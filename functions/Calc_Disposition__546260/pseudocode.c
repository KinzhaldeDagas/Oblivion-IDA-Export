double __cdecl Calc_Disposition(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13)
{
  char v13; // bl
  int v14; // esi
  int v15; // ebp
  int v16; // edi
  int v17; // eax
  double v18; // st6
  double v19; // st6
  int v20; // eax
  int v21; // eax
  double result; // st7
  int v23; // [esp+8h] [ebp+8h]
  int v24; // [esp+1Ch] [ebp+1Ch]
  int v25; // [esp+20h] [ebp+20h]
  int v26; // [esp+24h] [ebp+24h]
  int v27; // [esp+28h] [ebp+28h]
  float v28; // [esp+34h] [ebp+34h]

  v13 = LOBYTE(a13);
  v14 = 0;
  v15 = Double_To_SInt32(
          ((double)a2 * fDispTargetPerMult + fDispTargetPerBase + (double)a1 * fDispActorPerMult + fDispActorPerBase)
        * dbl_A2FAA0);
  if ( !LOBYTE(a13) )
    v14 = Double_To_SInt32((double)a4 * fDispTargetFameMult);
  v28 = 0.0;
  if ( !v13 )
    v28 = ((double)a3 * fDispActorInfamyMult + fDispTargetInfamyMult) * (fDispTargetInfamyMult * (double)a5);
  v16 = 0;
  v23 = 0;
  if ( !v13 )
  {
    v16 = Double_To_SInt32(((double)a3 * fDispActorBountyMult + fDispActorBountyBase) * ((double)a6
                                                                                       * fDispTargetBountyMult));
    v23 = v16;
  }
  v24 = Double_To_SInt32((double)a7 * fDispTargetRaceMult);
  v26 = Double_To_SInt32(((double)a9 * fDispTargetFactionMult + fDispTargetFactionRankBase) * (fDispTargetFactionMult
                                                                                             * (double)a8));
  v25 = Double_To_SInt32((double)a10 * fDispTargetWeaponBase);
  v17 = Double_To_SInt32((double)a11 * fDispTargetDiseaseBase);
  v18 = fDispInfamyMax;
  v27 = v17;
  if ( v18 >= v28 )
  {
    v19 = v18 * dbl_A3D360;
    if ( v19 > v28 )
      v28 = v19;
  }
  else
  {
    v28 = fDispInfamyMax;
  }
  v20 = iDispFameMax;
  if ( v14 > iDispFameMax || (v20 = -v20, v14 < v20) )
    v14 = v20;
  v21 = iDispBountyMax;
  if ( v16 > iDispBountyMax || (v21 = -v21, v16 < v21) )
    v23 = v21;
  result = (double)(v15 + v14) + v28 + (double)v23 + (double)v24 + (double)v26 + (double)v25 + (double)v27 + (double)a12;
  Double_To_SInt32(result);
  return result;
}
