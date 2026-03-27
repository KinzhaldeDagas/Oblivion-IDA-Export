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

  result = a2;
  if ( a3 )
  {
    v5 = (Actor *)TESDataHandler_g_PlayerRef;
    if ( 0.0 != TESDataHandler_g_PlayerRef->gameDifficultyLevel )
    {
      v10 = *(float *)&v5[7].members.super.super.childCell.GetChildCell * fDifficultyDamageMultiplier;
      if ( *(float *)&v5[7].members.super.super.childCell.GetChildCell >= 0.0 )
      {
        v6 = v10 + dbl_A2F928;
      }
      else
      {
        if ( v10 == 1.0 )
          return result;
        v11 = v10 - 1.0;
        v12 = fabs(v11);
        v6 = 1.0 / v12;
      }
      v13 = v6;
      v7 = v13;
      if ( v13 != 0.0 )
      {
        if ( this == v5 )
        {
          if ( result >= 0.0 )
            return (float)(result / v7);
          else
            return (float)(result * v7);
        }
        else if ( a3 == v5 )
        {
          if ( result >= 0.0 )
            return (float)(result * v7);
          else
            return (float)(result / v7);
        }
        else
        {
          return a2;
        }
      }
    }
  }
  return result;
}
