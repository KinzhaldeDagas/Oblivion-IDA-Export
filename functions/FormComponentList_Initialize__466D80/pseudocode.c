int __thiscall FormComponentList_Initialize(int (****this)(void))
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < 0x1A; ++i )
  {
    if ( *(this + i) )
      result = ((int (__thiscall *)(_DWORD))***(this + i))(*(this + i));
  }
  return result;
}
