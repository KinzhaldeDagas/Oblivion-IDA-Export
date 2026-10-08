int __thiscall FormComponentList_Initialize(int (****this)(void))
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < 0x1A; ++i ) /*0x466d84*/
  {
    if ( *(this + i) ) /*0x466d86*/
      result = ((int (__thiscall *)(_DWORD))***(this + i))(*(this + i)); /*0x466d93*/
  }
  return result; /*0x466d9d*/
}
