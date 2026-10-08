int __thiscall SummonCreatureEffect_GetSaveSize(_DWORD *this, int a2)
{
  int result; // eax

  result = (unsigned __int16)(AssociatedItemEffect_GetSaveSize(a2) + 5); /*0x6a50d5*/
  if ( !*(this + 0xF) ) /*0x6a50d1*/
    result += 0x1C; /*0x6a50db*/
  return result; /*0x6a50d8*/
}
