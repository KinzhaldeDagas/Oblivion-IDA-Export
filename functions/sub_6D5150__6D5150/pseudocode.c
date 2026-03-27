int __thiscall sub_6D5150(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x14);
  if ( v4 )
  {
    *a2 = *(_DWORD *)(v4 + 0x20);
    *a3 = *(_DWORD *)(v4 + 0x28);
    *a4 = *(_BYTE *)(v4 + 0x4A);
    return *(_DWORD *)(v4 + 0x24);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    *a4 = 0;
    return 0;
  }
}
