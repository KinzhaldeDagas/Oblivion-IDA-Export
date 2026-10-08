double __thiscall Actor_AdjustDmgByDifficulty(Actor *this, float a2, Actor *a3)
{
  double result; // st7
  Actor *v5; // edx
  double v6; // st5
  double v7; // st6
  float v10; // [esp+8h] [ebp+8h]
  float v11; // [esp+8h] [ebp+8h]
  float v12; // [esp+8h] [ebp+8h]
  float v13; // [esp+8h] [ebp+8h]

  result = a2; /*0x5e2560*/
  if ( a3 ) /*0x5e2572*/
  {
    v5 = (Actor *)reference; /*0x5e2576*/
    if ( 0.0 != reference->gameDifficultyLevel ) /*0x5e2587*/
    {
      v10 = *(float *)&v5[7].members.super.super.childCell.GetChildCell * MEMORY[0xB37A58][0x4C]; /*0x5e25bb*/
      if ( *(float *)&v5[7].members.super.super.childCell.GetChildCell >= 0.0 ) /*0x5e25bf*/
      {
        v6 = v10 + dbl_A2F928; /*0x5e25f9*/
      }
      else
      {
        if ( v10 == 1.0 ) /*0x5e25d0*/
          return result; /*0x5e25d0*/
        v11 = v10 - 1.0; /*0x5e25e1*/
        v12 = fabs(v11); /*0x5e25eb*/
        v6 = 1.0 / v12; /*0x5e25ef*/
      }
      v13 = v6; /*0x5e25ff*/
      v7 = v13; /*0x5e260b*/
      if ( v13 != 0.0 ) /*0x5e2610*/
      {
        if ( this == v5 ) /*0x5e2614*/
        {
          if ( result >= 0.0 ) /*0x5e2618*/
            return (float)(result / v7); /*0x5e262d*/
          else
            return (float)(result * v7); /*0x5e261e*/
        }
        else if ( a3 == v5 ) /*0x5e263a*/
        {
          if ( result >= 0.0 ) /*0x5e263e*/
            return (float)(result * v7); /*0x5e2653*/
          else
            return (float)(result / v7); /*0x5e2644*/
        }
        else
        {
          return a2; /*0x5e2664*/
        }
      }
    }
  }
  return result; /*0x5e25d8*/
}
