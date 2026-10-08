__int16 __thiscall sub_51F120(char *this, char a2)
{
  __int16 v5; // [esp+Ch] [ebp+4h]
  __int16 v6; // [esp+Ch] [ebp+4h]

  v5 = TESForm_ModifiedFormSize(a2); /*0x51f135*/
  v6 = sub_46E9F0(this + 0x24, a2) + v5; /*0x51f13e*/
  if ( (a2 & 4) != 0 ) /*0x51f148*/
    ++v6; /*0x51f14a*/
  return v6; /*0x51f143*/
}
