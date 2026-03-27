QueuedDistantLOD *__thiscall QueuedDistantLOD::QueuedDistantLOD(
        QueuedDistantLOD *this,
        const char *arg0,
        unsigned __int8 a2,
        int a4)
{
  char v5; // dl

  sub_436500((IOTask *)this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &QueuedModel::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_BYTE *)this + 0x34) = 0;
  sub_434600(this, arg0);
  sub_434CB0((int **)this, 0, 1);
  v5 = *((_BYTE *)this + 0x34) & 0xF8 | 1;
  *((_DWORD *)this + 0xE) = a4;
  *((_BYTE *)this + 0x34) = v5;
  *(_DWORD *)this = &QueuedDistantLOD::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  return this;
}
