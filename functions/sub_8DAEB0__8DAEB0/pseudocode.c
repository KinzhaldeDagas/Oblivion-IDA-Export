int __thiscall sub_8DAEB0(int this, _BYTE *a2, int a3, int a4)
{
  int v4; // eax
  void *v6; // edi
  int result; // eax
  _DWORD v8[13]; // [esp+10h] [ebp-34h] BYREF

  v4 = a4;
  *(_BYTE *)(this + 0x1BF5) = 1;
  *(_DWORD *)(this + 0x1BFC) = 0x80;
  *(_DWORD *)(this + 0x1BF8) = 0x200;
  qmemcpy(v8, a2, 0x30u);
  v8[0xC] = 0;
  if ( a3 != a4 && !a2[0x2D] )
  {
    v6 = (void *)(0x34 * *(_DWORD *)(this + 0xE90) + this + 0x1694);
    v8[0xC] = 2;
    qmemcpy(v6, v8, 0x34u);
    sub_8DA580(this, this + 0xE94, *(_DWORD *)(this + 0xE90), a4, a3, a4, a3, *(_DWORD *)(this + 0x1C18), 0);
    if ( LOBYTE(v8[0xB]) )
      sub_8DA580(this, this + 0x1294, *(_DWORD *)(this + 0xE90), a3, a4, a3, a4, *(_DWORD *)(this + 0x1C1C), 0);
    ++*(_DWORD *)(this + 0xE90);
    v4 = a4;
    v8[0xC] = 1;
  }
  qmemcpy((void *)(0x34 * *(_DWORD *)(this + 0xE90) + this + 0x1694), v8, 0x34u);
  sub_8DA580(this, this + 0xE94, *(_DWORD *)(this + 0xE90), a3, v4, a3, v4, *(_DWORD *)(this + 0x1C18), 0);
  if ( LOBYTE(v8[0xB]) )
    sub_8DA580(this, this + 0x1294, *(_DWORD *)(this + 0xE90), a3, a4, a3, a4, *(_DWORD *)(this + 0x1C1C), 0);
  result = *(_DWORD *)(this + 0xE90);
  *(_DWORD *)(this + 0xE90) = result + 1;
  return result;
}
