int __thiscall sub_8CE720(_DWORD *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < *(this + 0x6A); ++i )
    result = sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0x69) + 4 * i));
  *(this + 0x6A) = 0;
  *(this + 0x70) = 0;
  *(this + 0x6D) = 0;
  return result;
}
