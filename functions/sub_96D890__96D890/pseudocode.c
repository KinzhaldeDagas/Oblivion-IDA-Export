void __thiscall sub_96D890(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  v3 = *(this + 0xB); /*0x96d893*/
  if ( v3 ) /*0x96d898*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 1); /*0x96d8a1*/
  v4 = *(this + 0xC); /*0x96d8a3*/
  if ( v4 ) /*0x96d8a8*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, 1); /*0x96d8b1*/
  *(this + 0xB) = a2; /*0x96d8b9*/
  if ( a2 ) /*0x96d8bc*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2); /*0x96d8c3*/
    v6 = *(this + 2); /*0x96d8c5*/
    *(this + 0xC) = v5; /*0x96d8ca*/
    if ( v6 ) /*0x96d8cd*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 0x14))(v5, *(this + 0xB), v6 + 0x64); /*0x96d8de*/
  }
  else
  {
    *(this + 0xC) = 0; /*0x96d8e4*/
  }
}
