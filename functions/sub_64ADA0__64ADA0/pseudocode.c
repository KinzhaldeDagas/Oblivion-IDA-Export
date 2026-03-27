char __thiscall sub_64ADA0(Actor *this)
{
  char result; // al

  result = 0;
  if ( LODWORD(this->members.super.super.pos[2]) )
    return (*(char (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(this->members.super.super.pos[2]) + 0x2C))(LODWORD(this->members.super.super.pos[2]));
  return result;
}
