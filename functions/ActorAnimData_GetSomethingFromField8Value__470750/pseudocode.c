int __thiscall ActorAnimData_GetSomethingFromField8Value(_DWORD *this, int a2)
{
  if ( a2 == 5 )
    return *(this + 0x12);
  if ( a2 == 6 )
    return *(this + 0x15);
  return *(this + a2 + 0x12);
}
