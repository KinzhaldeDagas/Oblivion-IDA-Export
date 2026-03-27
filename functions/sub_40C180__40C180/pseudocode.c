char __thiscall sub_40C180(_BYTE *this, char *a2)
{
  char result; // al
  char v4; // bl

  result = sub_4040A0(this, a2, 1);
  if ( result )
  {
    v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x1C))(this);
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x18))(this);
    return v4;
  }
  return result;
}
