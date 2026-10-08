char __thiscall sub_40C180(_BYTE *this, char *a2)
{
  char result; // al
  char v4; // bl

  result = sub_4040A0(this, a2, 1); /*0x40c18a*/
  if ( result ) /*0x40c191*/
  {
    v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x1C))(this); /*0x40c19f*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x18))(this); /*0x40c1a6*/
    return v4; /*0x40c1a8*/
  }
  return result; /*0x40c1ab*/
}
