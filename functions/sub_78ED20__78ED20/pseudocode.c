_DWORD *__thiscall sub_78ED20(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  if ( a2 != this )
  {
    *(this + 1) = a2[1];
    *(this + 2) = a2[2];
    *(this + 3) = a2[3];
  }
  return result;
}
