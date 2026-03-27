int __thiscall sub_6D3AF0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0xB);
  if ( v4 )
  {
    *a2 = *(unsigned __int16 *)(v4 + 0xC);
    *a3 = *(_DWORD *)(v4 + 0x18);
    *a4 = *(_BYTE *)(v4 + 0x1E);
    return *(_DWORD *)(v4 + 0x28);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    *a4 = 0;
    return 0;
  }
}
