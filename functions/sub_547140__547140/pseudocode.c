double __cdecl sub_547140(_DWORD *a1, int a2, float a3, int a4, int a5, int a6, float a7, float a8)
{
  double result; // st7
  int v9; // ecx
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]
  float v12; // [esp+1Ch] [ebp-4h]
  int v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]

  result = 0.0;
  v10 = 0.0;
  if ( a1 )
  {
    if ( TESHealthForm_GetHealthForForm(a1) )
    {
      v9 = (*(unsigned __int16 (__thiscall **)(_DWORD *))(a1[0x22] + 0x10))(a1 + 0x22);
      if ( a8 != flt_A30634 )
        v9 = Double_To_SInt32(a8);
      v11 = Calc_WeaponDamage(a4, a5, a6, a7, v9, a3, 1.0, 0.0);
      *(float *)&v13 = 0.0;
      if ( a2 )
      {
        if ( EffectItemList_HasHostile((_DWORD *)(a2 + 0xC)) )
        {
          v14 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(a2 + 0xC))(a2 + 0xC, 0);
          *(float *)&v13 = flt_B36D20 * v14;
        }
      }
      v12 = fAIMeleeWeaponMult * v11;
      return (float)(v12 + *(float *)&v13);
    }
    return v10;
  }
  return result;
}
