int __thiscall FormComponentList_ClearReferences(_DWORD **this)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < 0x1A; ++i )
  {
    if ( *(this + i) )
      result = (*(int (__thiscall **)(_DWORD))(**(this + i) + 4))(*(this + i));
  }
  return result;
}
