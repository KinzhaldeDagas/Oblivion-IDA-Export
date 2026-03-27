__int16 __thiscall ActorAnimData_GetAnimGroupFromField8Value(_WORD *this, int a2)
{
  if ( a2 == 5 )
    return *(this + 0x1E);
  if ( a2 == 6 )
    return *(this + 0x21);
  return *(this + a2 + 0x1E);
}
