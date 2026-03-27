int __thiscall sub_4781A0(int (__stdcall ****this)(signed int))
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (int (__thiscall ***)(_DWORD, int))*this;
  if ( v2 )
    result = (**v2)(v2, 1);
  v4 = (int (__thiscall ***)(_DWORD, int))*(this + 1);
  if ( v4 )
    return (**v4)(v4, 1);
  return result;
}
