void __cdecl sub_5ACB40()
{
  void (__thiscall ***v0)(_DWORD, int); // ecx

  if ( (unsigned __int16)word_B1397A > 0x1Au ) /*0x5acb48*/
  {
    v0 = *(void (__thiscall ****)(_DWORD, int))(dword_B13974 + 0x68); /*0x5acb4f*/
    if ( v0 ) /*0x5acb54*/
      (**v0)(v0, 1); /*0x5acb5c*/
  }
}
