int __thiscall sub_9573A0(_DWORD *this, int a2, unsigned int **a3)
{
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int v8; // [esp+14h] [ebp-4h]

  v4 = *(this + 7) - 1;
  v8 = *(this + 6);
  *(this + 6) = *(_DWORD *)v8;
  *(this + 7) = v4;
  sub_956980((_DWORD *)v8);
  *(_BYTE *)(v8 + 4) = 1;
  *(_DWORD *)v8 = a2;
  *(_DWORD *)(v8 + 0xB8) = *a3;
  sub_956DD0((_DWORD **)this, a3, (_DWORD *)v8);
  v5 = 0;
  v6 = v8 + 0xC;
  do
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD, unsigned int *, int, int))(*(_DWORD *)*(this + 0xA) + 0x14))(
      *(this + 0xA),
      v5 + *(this + 0xD),
      *a3,
      a3[1],
      v6,
      v6 + 4);
    v5 += 0x20;
    v6 += 8;
  }
  while ( v5 < 0x60 );
  return v8;
}
