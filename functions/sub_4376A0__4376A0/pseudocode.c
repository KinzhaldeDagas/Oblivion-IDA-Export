_DWORD *__thiscall sub_4376A0(_DWORD *this, int arg0, int a3, unsigned __int8 a2, int a5)
{
  int v6; // edi
  const char *v7; // eax

  if ( a3 )
    v6 = a3 + 0x24;
  else
    v6 = 0;
  sub_436500((IOTask *)this, a2);
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *this = &QueuedModel::`vftable';
  *(this + 0xA) = 0;
  *(this + 0xC) = a5;
  *(this + 0xB) = v6;
  *((_BYTE *)this + 0x34) = 0;
  v7 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x14))(v6);
  sub_434600(this, v7);
  sub_434CB0((int **)this, 0, 1);
  *((_BYTE *)this + 0x34) = *(_BYTE *)(this + 0xD) & 0xF8 | 1;
  *this = &QueuedTreeModel::`vftable';
  *(this + 0xE) = arg0;
  *(this + 0xF) = a3;
  return this;
}
