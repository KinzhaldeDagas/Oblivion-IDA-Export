void __thiscall sub_648120(_DWORD *this, int a2, int a3)
{
  bool v4; // sf
  int v5; // edi
  int v6; // ebx
  int v7; // ebx

  v4 = a3 + *(this + 1) < 0; /*0x648127*/
  *(this + 1) += a3; /*0x648127*/
  v5 = *(this + 2); /*0x64812b*/
  if ( v4 ) /*0x64812e*/
    *(this + 1) = 0; /*0x648130*/
  if ( v5 ) /*0x648139*/
  {
    v6 = sub_673980(*(_DWORD *)(v5 + 0x18)); /*0x648147*/
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x180))(this) >= v6 ) /*0x648158*/
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x17C))(this, v6 - 1); /*0x648168*/
      v7 = *(_DWORD *)(v5 + 0x18); /*0x648172*/
      if ( *(_DWORD *)(*(_DWORD *)(4 * v7 + 0xB152B0) + 4 * (*(int (__thiscall **)(_DWORD *))(*this + 0x180))(this)) == 0x2C ) /*0x648184*/
        Script_AddEventToExtraScript(v5, a2 + 0x44, 0x400); /*0x648194*/
    }
  }
}
