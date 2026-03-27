NiSurfaceData *__thiscall sub_764770(_DWORD **this, int a2, unsigned int a3, int a4)
{
  int v6; // eax
  int v7; // edi
  signed int v8; // eax
  D3DFORMAT v9; // eax

  if ( a2
    && (v6 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 0x21E) + 0x80))(*(this + 0x21E), 0),
        v7 = sub_497DD0((int)&unk_B4265C, v6),
        v8 = sub_76BEF0(a2),
        (v9 = sub_775280(*(this + 0x174), *(_DWORD *)(v7 + 0x1C), v8, a3, a4)) != D3DFMT_UNKNOWN) )
  {
    return CreateSurfaceData(v9);
  }
  else
  {
    return 0;
  }
}
