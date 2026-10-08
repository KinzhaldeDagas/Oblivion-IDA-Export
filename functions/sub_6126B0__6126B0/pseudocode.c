char __stdcall sub_6126B0(int a1)
{
  char result; // al

  result = 0; /*0x6126b4*/
  if ( a1 ) /*0x6126b8*/
    return EffectItemList_HasEffectCodes(a1 + 0xC, 0x15); /*0x612729*/
  return result; /*0x612731*/
}
