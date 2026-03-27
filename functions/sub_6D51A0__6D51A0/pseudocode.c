int __thiscall sub_6D51A0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x14);
  if ( v4 )
  {
    *a2 = *(_DWORD *)(v4 + 0x2C);
    *a3 = *(_DWORD *)(v4 + 0x34);
    *a4 = *(_BYTE *)(v4 + 0x4B);
    return *(_DWORD *)(v4 + 0x30);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    *a4 = 0;
    return 0;
  }
}
