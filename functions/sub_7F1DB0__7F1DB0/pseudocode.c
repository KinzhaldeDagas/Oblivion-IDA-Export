unsigned __int16 *__thiscall sub_7F1DB0(void *this, int a2)
{
  int v3; // ebx
  NiObject *v4; // eax
  unsigned __int16 *v5; // esi
  void *v6; // eax

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x70))(this);
  v4 = (NiObject *)FormHeapAlloc(0x2Cu);
  if ( v4 )
    v5 = (unsigned __int16 *)sub_7E3AE0(v4, v3, 1);
  else
    v5 = 0;
  sub_7263B0(v5, 1u);
  v6 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x6C))(this);
  sub_7260B0((int)v5, (int)this, 0, v6, (_DWORD *)(0x10 * v3), 0);
  sub_7262A0((int)v5, 0, 0, 0, 4, v3, 0x10, 0x10);
  return v5;
}
