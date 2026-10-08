char __thiscall sub_64ADA0(Actor *this)
{
  char result; // al

  result = 0; /*0x64ada0*/
  if ( LODWORD(this->members.super.super.pos[2]) ) /*0x64ada2*/
    return (*(char (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(this->members.super.super.pos[2]) + 0x2C))(LODWORD(this->members.super.super.pos[2])); /*0x64adb0*/
  return result; /*0x64adb2*/
}
