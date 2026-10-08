void __thiscall sub_5499E0(_DWORD *this, int a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( (unsigned int)(a2 + 1) <= 0xE && a3 >= 0.0 && a3 <= 1.0 ) /*0x549a32*/
  {
    v4 = *(this + 3); /*0x549a38*/
    if ( v4 ) /*0x549a3d*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x20))(v4, 1); /*0x549a46*/
    }
    else
    {
      v5 = FormHeapAlloc(0x14u); /*0x549a4c*/
      if ( v5 ) /*0x549a62*/
        v6 = sub_54EA00(v5, 1, 0xDu); /*0x549a6a*/
      else
        v6 = 0; /*0x549a71*/
      *(this + 3) = v6; /*0x549a73*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x38))(v6); /*0x549a85*/
    }
    if ( a2 != 0xFFFFFFFF && a3 != 0.0 ) /*0x549a9b*/
    {
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(a2, LODWORD(a3)); /*0x549aaa*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*(this + 4) + 0x2C))(this + 4, *(this + 3)) ) /*0x549ab9*/
        (*(void (__thiscall **)(_DWORD *))(*this + 0xD4))(this); /*0x549ac9*/
    }
  }
}
