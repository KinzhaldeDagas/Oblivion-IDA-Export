IOTask *__thiscall IOTask::CreateSkyTask(IOTask *this, UInt32 a2, const char *a3, void *a4, char a5)
{
  int v6; // eax

  sub_436FA0(this, 3u);
  this->vtbl = &SkyTask::`vftable';
  *((_DWORD *)this + 0xA) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  *((_DWORD *)this + 0xB) = 0;
  *((_BYTE *)this + 0x34) = a5;
  sub_434600(this, a3);
  sub_434CB0((int **)this, 1, 0);
  v6 = *((_DWORD *)this + 0xA);
  *((_DWORD *)this + 0xC) = a4;
  if ( v6 )
  {
    if ( *((_BYTE *)this + 0x34) )
      *(_WORD *)(v6 + 0x18) |= 1u;
  }
  return this;
}
