void __thiscall sub_89E110(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x89e11d*/
    v4 = *(_DWORD *)(v3 + 0x18); /*0x89e11f*/
  else
    v4 = 0; /*0x89e124*/
  if ( v4 ) /*0x89e128*/
    v5 = *(_DWORD *)(v4 + 0xC); /*0x89e12a*/
  else
    v5 = 0; /*0x89e12f*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5); /*0x89e13d*/
  sub_89D7B0(this, a2); /*0x89e142*/
}
