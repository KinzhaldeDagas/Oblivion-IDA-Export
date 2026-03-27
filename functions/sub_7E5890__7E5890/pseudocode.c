_DWORD *__thiscall sub_7E5890(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( !*(this + 0xD) )
  {
    v6 = FormHeapAlloc(0x10u);
    if ( v6 )
      v7 = sub_7E2370(v6, a2, 0x17E, 1, 0, 0);
    else
      v7 = 0;
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0xA) + 4))(this + 0xA);
    v8[2] = v7;
    v8[1] = 0;
    *v8 = *(this + 0xB);
    v9 = *(this + 0xB);
    if ( v9 )
      *(_DWORD *)(v9 + 4) = v8;
    else
      *(this + 0xC) = v8;
    ++*(this + 0xD);
    *(this + 0xB) = v8;
  }
  return this + 0xA;
}
