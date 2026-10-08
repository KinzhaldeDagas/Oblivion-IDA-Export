int __thiscall sub_6ECA10(_DWORD *this, signed int a2)
{
  NiTimeController_SaveBinary(this, a2); /*0x6eca19*/
  return (*(int (__thiscall **)(signed int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *(this + 0x10)); /*0x6eca2b*/
}
