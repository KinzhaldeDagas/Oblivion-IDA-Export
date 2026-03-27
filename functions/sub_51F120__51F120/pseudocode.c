__int16 __thiscall sub_51F120(char *this, char a2)
{
  __int16 v6; // [esp+Ch] [ebp+4h]
  __int16 v7; // [esp+Ch] [ebp+4h]

  v6 = TESForm_ModifiedFormSize(a2);
  v7 = sub_46E9F0(this + 0x24, a2) + v6;
  if ( (a2 & 4) != 0 )
    ++v7;
  return v7;
}
