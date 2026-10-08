// RadiantAI: package hour-window test used by central package chooser. Handles start+duration and midnight wrap when testing current game hour.
bool __cdecl sub_568EB0(int a1, int a2, float a3)
{
  int v3; // esi
  float v5; // [esp+Ch] [ebp+Ch]

  v3 = Double_To_SInt32(a3); /*0x568ebf*/
  if ( v3 == a1 ) /*0x568ece*/
    return 1; /*0x568ece*/
  v5 = (float)(a1 + a2); /*0x568ed4*/
  if ( v5 <= (double)flt_A675E4 ) /*0x568eeb*/
  {
    if ( v3 <= a1 ) /*0x568f11*/
      return 0; /*0x568f11*/
  }
  else if ( v3 <= a1 && v3 >= Double_To_SInt32(v5 - dbl_A2F920) ) /*0x568efe*/
  {
    return 0; /*0x568efe*/
  }
  return v3 < a1 + a2; /*0x568f0c*/
}
