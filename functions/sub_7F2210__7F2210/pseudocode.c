unsigned __int16 *__thiscall sub_7F2210(_DWORD *this, int a2)
{
  unsigned __int16 v3; // di
  int v4; // edi
  NiObject *v5; // eax
  unsigned __int16 *v6; // esi
  void *v7; // eax

  if ( !a2 )
    return 0;
  v3 = *(_WORD *)(*(_DWORD *)(a2 + 0xB4) + 8);
  if ( v3 > (*(unsigned __int16 (__thiscall **)(_DWORD *))(*this + 0xA8))(this) )
    return 0;
  v4 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8);
  v5 = (NiObject *)FormHeapAlloc(0x2Cu);
  if ( v5 )
    v6 = (unsigned __int16 *)sub_7E3AE0(v5, v4, 3);
  else
    v6 = 0;
  sub_7263B0(v6, 3u);
  sub_7260B0((int)v6, v4, 0, *(void **)(*(this + 0x35) + 0xC), (_DWORD *)(0xC * v4), 0);
  sub_7262A0((int)v6, 0, 0, 0, 3, v4, 0xC, 0xC);
  sub_7260B0((int)v6, v4, 1u, *(void **)(*(this + 0x35) + 0x10), (_DWORD *)(0xC * v4), 0);
  sub_7262A0((int)v6, 1u, 1u, 0, 3, v4, 0xC, 0xC);
  v7 = (void *)(*(int (__thiscall **)(_DWORD *))(*this + 0xA4))(this);
  sub_7260B0((int)v6, v4, 2u, v7, (_DWORD *)(0x10 * v4), 0);
  sub_7262A0((int)v6, 2u, 2u, 0, 4, v4, 0x10, 0x10);
  return v6;
}
