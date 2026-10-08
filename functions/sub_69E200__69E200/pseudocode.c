Ni2DBuffer *__thiscall sub_69E200(Ni2DBuffer **this, int a2)
{
  Ni2DBuffer *result; // eax

  result = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2); /*0x69e212*/
  if ( result ) /*0x69e216*/
  {
    result = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2); /*0x69e222*/
    if ( *(this + 1) ) /*0x69e224*/
    {
      NiSmartPointer_Set__(this, result); /*0x69e22d*/
      return (*((Ni2DBuffer *(__thiscall **)(_DWORD, _DWORD, int))(*this)->__vftable + 0x21))(*this, *(this + 2), 1); /*0x69e242*/
    }
  }
  return result; /*0x69e244*/
}
