// positive sp value has been detected, the output may be wrong!
double __userpurge Player_MagicCaster_GetCastingEffectiveness_::ArmorFactor@<st0>(_BYTE *a1@<esi>, int a2, char a3)
{
  signed int ArmorCoverage; // eax
  signed int v4; // eax
  double result; // st7
  signed int v6; // [esp-1Ch] [ebp-1Ch]
  signed int v7; // [esp-18h] [ebp-18h]
  float v8; // [esp+8h] [ebp+8h]

  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x284))(a1, 7);
  ArmorCoverage = Actor_GetArmorCoverage(a1, 1);
  v7 = (*(int (__thiscall **)(_BYTE *, int, signed int))(*(_DWORD *)a1 + 0x284))(a1, 0x12, ArmorCoverage);
  v6 = Actor_GetArmorCoverage(a1, 0);
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x284))(a1);
  result = Calc_ArmorSpellEffectiveness(v4, 0x1B, v6, v7);
  v8 = result;
  if ( (_BYTE)a2 )
    return v8;
  ((void (__stdcall *)(int, _DWORD))Player_MagicCaster_GetCastingEffectiveness_::MultiplyFactors)(a2, LODWORD(v8));
  return result;
}
