// positive sp value has been detected, the output may be wrong!
double __userpurge Player_MagicCaster_GetCastingEffectiveness_::ArmorFactor@<st0>(_BYTE *a1@<esi>, float a2, char a3)
{
  signed int ArmorCoverage; // eax
  SInt32 v4; // eax
  signed int v6; // [esp-1Ch] [ebp-1Ch]
  signed int v7; // [esp-18h] [ebp-18h]
  float v8; // [esp+8h] [ebp+8h]

  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x284))(a1, 7); /*0x65db95*/
  ArmorCoverage = Actor_GetArmorCoverage(a1, 1); /*0x65db9c*/
  v7 = (*(int (__thiscall **)(_BYTE *, int, signed int))(*(_DWORD *)a1 + 0x284))(a1, 0x12, ArmorCoverage); /*0x65dbb0*/
  v6 = Actor_GetArmorCoverage(a1, 0); /*0x65dbbc*/
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x284))(a1); /*0x65dbc7*/
  v8 = Calc_ArmorSpellEffectiveness(v4, 0x1B, v6, v7); /*0x65dbcf*/
  if ( LOBYTE(a2) ) /*0x65dbdc*/
    return v8; /*0x65dbde*/
  else
    return Player_MagicCaster_GetCastingEffectiveness_::MultiplyFactors(a2, v8); /*0x65dbdc*/
}
