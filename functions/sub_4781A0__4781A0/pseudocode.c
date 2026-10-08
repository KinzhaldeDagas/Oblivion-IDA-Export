int __thiscall sub_4781A0(int (__stdcall ****this)(signed int))
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (int (__thiscall ***)(_DWORD, int))*this; /*0x4781a3*/
  if ( v2 ) /*0x4781a7*/
    result = (**v2)(v2, 1); /*0x4781af*/
  v4 = (int (__thiscall ***)(_DWORD, int))*(this + 1); /*0x4781b1*/
  if ( v4 ) /*0x4781b7*/
    return (**v4)(v4, 1); /*0x4781bf*/
  return result; /*0x4781b6*/
}
