double __thiscall sub_606140(int this)
{
  int v1; // eax
  double result; // st7
  int v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]

  switch ( *(_DWORD *)(this + 4) )
  {
    case 0:
      if ( *(_DWORD *)(this + 0x14) )
        sub_470520(*(void **)(this + 0x14));
      else
        v1 = *(_DWORD *)(this + 0x18);
      v3 = v1;
      if ( !v1 )
        v3 = 1;
      v4 = (double)v3 * flt_B37698;
      result = v4;
      break;
    case 1:
      v8 = (float)dword_B376A0;
      result = v8;
      break;
    case 2:
      result = (double)dword_B376A8;
      def_60614E(result);
      break;
    case 3:
      v5 = (float)iCrimeGoldAttack;
      result = v5;
      break;
    case 4:
      v7 = (float)dword_B37690;
      result = v7;
      break;
    case 5:
      v6 = (float)dword_B376B0;
      result = v6;
      break;
    default:
      JUMPOUT(0x6061CA);
  }
  return result;
}
