char __thiscall sub_6EB570(int this, float a2, int a3, _BYTE *a4)
{
  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
    a2 = *(float *)(this + 0x20);
  if ( flt_A79F00 == a2 )
    return 0;
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(this + 0x18) + 0x60))(LODWORD(a2), a3, a4) )
  {
    *(_BYTE *)(this + 0x30) = *a4;
    return 1;
  }
  else
  {
    *a4 = 0;
    *(_BYTE *)(this + 0x30) = byte_A7C6AC;
    return 0;
  }
}
