// AVU decode: choose target magic-item resistance AV. Uses ResistPoison (0x43) for poison path/flag, otherwise ResistMagic (0x40) when the magic item type check allows it.
int __usercall Actor_MagicTarget_CalcResFactor_::GetTargetMagicItemResistance@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        double a3@<st0>,
        int a4@<ebp>,
        int a5@<esi>,
        int a6,
        float a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // eax
  int v13; // ebx
  int v15; // [esp+10h] [ebp+10h]

  if ( (_BYTE)a11 || (v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18))(a1), v13 = 0x40, v12 == 5) ) /*0x5e5358*/
    v13 = 0x43; /*0x5e535a*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x288))(a2, v13); /*0x5e536a*/
  *(float *)&v15 = a3; /*0x5e536c*/
  return Actor_MagicTarget_CalcResFactor_::GetTargetEffectItemResistance(
           v13,
           a2,
           a4,
           a5,
           a6,
           a7,
           a8,
           v15,
           a10,
           a11,
           a12);                                // Ordinary hostile magic uses actor value 0x40 ResistMagic as the item-level resistance bucket; poison uses 0x43 instead.
}
