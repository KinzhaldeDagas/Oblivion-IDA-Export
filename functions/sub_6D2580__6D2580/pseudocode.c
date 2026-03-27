char __thiscall sub_6D2580(int this, float a2, int a3, float *a4)
{
  int v6; // ecx

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
    a2 = *(float *)(this + 0x20);
  if ( flt_A79F00 == a2 )
    return 0;
  v6 = *(_DWORD *)(this + 0x18);
  if ( v6 && (*(unsigned __int8 (__stdcall **)(_DWORD, int, int))(*(_DWORD *)v6 + 0x5C))(LODWORD(a2), a3, this + 0x30) )
  {
    *a4 = *(float *)(this + 0x30);
    return 1;
  }
  else
  {
    *(float *)(this + 0x30) = flt_A7C6B0;
    *a4 = flt_A7C6B0;
    return 0;
  }
}
