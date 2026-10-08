void __thiscall PathHigh::~PathHigh(PathHigh *this)
{
  unsigned int v2; // edi
  int v3; // edi

  *(_DWORD *)this = &PathHigh::`vftable'; /*0x684959*/
  sub_68C6E0((NiDX92DBufferData **)this + 5); /*0x68496a*/
  sub_683C20((unsigned int *)this); /*0x684971*/
  v2 = *((_DWORD *)this + 0xC); /*0x684976*/
  if ( v2 ) /*0x68497b*/
  {
    sub_538B60(*((int **)this + 0xC)); /*0x68497f*/
    FormHeapFree(v2); /*0x684985*/
    *((_DWORD *)this + 0xC) = 0; /*0x68498d*/
  }
  sub_684830((int **)this); /*0x684996*/
  v3 = *((_DWORD *)this + 0xA); /*0x68499b*/
  if ( v3 ) /*0x6849a5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6849ab*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6849c1*/
  }
  PathMiddleHigh::~PathMiddleHigh(this); /*0x6849cd*/
}
