int __thiscall TESActorBase_PreLoadModified(_DWORD *this, int a2)
{
  int result; // eax

  if ( (a2 & 0x10000000) != 0 )
    return AVCollection_Clear(this + 0x34);
  return result;
}
