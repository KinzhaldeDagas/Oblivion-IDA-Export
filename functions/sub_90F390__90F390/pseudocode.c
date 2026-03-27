char __thiscall sub_90F390(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  _DWORD v6[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *(_DWORD **)(*(this + 2) + 0x74);
  v4 = *(this + 0x49) - 1;
  v6[0] = *v3;
  v6[1] = v3[1];
  v6[2] = v3[2];
  for ( v6[3] = v3[3]; v4 >= 0; --v4 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, int))(**(_DWORD **)(*(this + 0x48) + 8 * v4) + 8))(
      *(_DWORD *)(*(this + 0x48) + 8 * v4),
      this + 5,
      *(_DWORD *)(*(this + 0x48) + 8 * v4 + 4),
      v6,
      a2);
    LOBYTE(v3) = *(_BYTE *)(a2 + 4);
    if ( (_BYTE)v3 )
      break;
  }
  return (char)v3;
}
