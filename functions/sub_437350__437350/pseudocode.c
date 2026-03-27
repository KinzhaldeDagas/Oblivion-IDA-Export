IOTask *__thiscall sub_437350(IOTask *this, int arg0, unsigned __int8 a2, int a4, char a5, char a6, char a7)
{
  const char *v8; // eax
  IOTask *result; // eax

  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  this->vtbl = &QueuedModel::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xC) = a4;
  *((_DWORD *)this + 0xB) = arg0;
  *((_BYTE *)this + 0x34) = 0;
  v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 0x14))(arg0);
  sub_434600(this, v8);
  sub_434CB0((int **)this, 0, 1);
  if ( a5 )
    *((_BYTE *)this + 0x34) |= 4u;
  else
    *((_BYTE *)this + 0x34) &= ~4u;
  if ( a6 )
    *((_BYTE *)this + 0x34) |= 1u;
  else
    *((_BYTE *)this + 0x34) &= ~1u;
  result = this;
  if ( a7 )
    *((_BYTE *)this + 0x34) |= 2u;
  else
    *((_BYTE *)this + 0x34) &= ~2u;
  return result;
}
