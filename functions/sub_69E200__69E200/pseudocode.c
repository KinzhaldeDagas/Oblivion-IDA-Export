Ni2DBuffer *__thiscall sub_69E200(Ni2DBuffer **this, int a2)
{
  Ni2DBuffer *result; // eax

  result = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2);
  if ( result )
  {
    result = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2);
    if ( *(this + 1) )
    {
      NiSmartPointer_Set__(this, result);
      return (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, _DWORD, int))(*this)->__vftable + 0x21))(
                             *this,
                             *(this + 2),
                             1);
    }
  }
  return result;
}
