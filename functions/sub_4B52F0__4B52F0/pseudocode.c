__int16 __stdcall sub_4B52F0(char a1)
{
  __int16 v3; // [esp+Ch] [ebp+4h]
  __int16 v4; // [esp+Ch] [ebp+4h]

  v3 = TESForm_ModifiedFormSize(a1);
  v4 = TESValueForm_ModifiedSize(a1) + v3;
  if ( (a1 & 4) != 0 )
    ++v4;
  return v4;
}
