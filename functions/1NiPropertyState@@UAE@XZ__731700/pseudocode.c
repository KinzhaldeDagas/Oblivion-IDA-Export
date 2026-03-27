void __thiscall NiPropertyState::~NiPropertyState(NiPropertyState *this)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // esi

  *(_DWORD *)this = &NiPropertyState::`vftable';
  v2 = (int *)((char *)this + 8);
  v3 = 0xA;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  _LN21((char *)this + 8, 4u, 0xA, (void (__thiscall *)(void *))sub_7016A0);
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
