int __thiscall FormComponentList_ClearReferences(_DWORD **this)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < 0x1A; ++i ) /*0x466da4*/
  {
    if ( *(this + i) ) /*0x466da6*/
      result = (*(int (__thiscall **)(_DWORD))(**(this + i) + 4))(*(this + i)); /*0x466db4*/
  }
  return result; /*0x466dbe*/
}
