void __thiscall sub_5499E0(_DWORD *this, int a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( (unsigned int)(a2 + 1) <= 0xE && a3 >= 0.0 && a3 <= 1.0 )
  {
    v4 = *(this + 3);
    if ( v4 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x20))(v4, 1);
    }
    else
    {
      v5 = FormHeapAlloc(0x14u);
      if ( v5 )
        v6 = sub_54EA00(v5, 1, 0xDu);
      else
        v6 = 0;
      *(this + 3) = v6;
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x38))(v6);
    }
    if ( a2 != 0xFFFFFFFF && a3 != 0.0 )
    {
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(a2, LODWORD(a3));
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*(this + 4) + 0x2C))(this + 4, *(this + 3)) )
        (*(void (__thiscall **)(_DWORD *))(*this + 0xD4))(this);
    }
  }
}
