int __thiscall SummonCreatureEffect_GetSaveSize(_DWORD *this, int a2)
{
  int result; // eax

  result = (unsigned __int16)(AssociatedItemEffect_GetSaveSize(a2) + 5);
  if ( !*(this + 0xF) )
    result += 0x1C;
  return result;
}
