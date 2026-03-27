int __thiscall sub_476260(_DWORD **this, _DWORD *a2, int a3)
{
  float v6; // edi
  int v8; // eax

  v6 = *(float *)&a2;
  if ( (_WORD)a2 == 0xFF || !sub_470960(*(this + 0x27), (int)a2, &a2) )
    return 0;
  v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a2 + 0x10))(a2, 0xFFFFFFFF);
  return sub_474530(this, v8, v6, a3);
}
