_DWORD *__thiscall ContainerEntryExtraData_constr(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax

  *(this + 2) = a2;
  v4 = (_DWORD *)FormHeapAlloc(8u);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    *this = v4;
  }
  else
  {
    *this = 0;
  }
  *(this + 1) = a3;
  return this;
}
