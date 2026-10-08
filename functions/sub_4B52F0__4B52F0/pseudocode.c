__int16 __stdcall sub_4B52F0(char a1)
{
  __int16 v3; // [esp+Ch] [ebp+4h]
  __int16 v4; // [esp+Ch] [ebp+4h]

  v3 = TESForm_ModifiedFormSize(a1); /*0x4b5305*/
  v4 = TESValueForm_ModifiedSize(a1) + v3; /*0x4b530e*/
  if ( (a1 & 4) != 0 ) /*0x4b5318*/
    ++v4; /*0x4b531a*/
  return v4; /*0x4b5313*/
}
