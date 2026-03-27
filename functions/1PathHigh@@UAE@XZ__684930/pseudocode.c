void __thiscall PathHigh::~PathHigh(PathHigh *this)
{
  unsigned int v2; // edi
  int v3; // edi

  *(_DWORD *)this = &PathHigh::`vftable';
  sub_68C6E0((_DWORD *)this + 5);
  sub_683C20((unsigned int *)this);
  v2 = *((_DWORD *)this + 0xC);
  if ( v2 )
  {
    sub_538B60(*((int **)this + 0xC));
    FormHeapFree(v2);
    *((_DWORD *)this + 0xC) = 0;
  }
  sub_684830((int **)this);
  v3 = *((_DWORD *)this + 0xA);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  PathMiddleHigh::~PathMiddleHigh(this);
}
