void __thiscall NiParticles::~NiParticles(NiAVObject *this)
{
  DWORD CurrentThreadId; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi

  this->vtbl = (NiAVObjectVtbl *)&NiGeometry::`vftable';
  sub_738420((int)this);
  EnterCriticalSection(&stru_B3FA00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3FA7C;
  v3 = InterlockedDecrement;
  dword_B3FA78 = CurrentThreadId;
  v4 = *((_DWORD *)this + 0x2B);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x2B) = 0;
  }
  if ( dword_B3FA7C-- == 1 )
    dword_B3FA78 = 0;
  LeaveCriticalSection(&stru_B3FA00);
  v6 = *((_DWORD *)this + 0x2D);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x2D) = 0;
  }
  v7 = *((_DWORD *)this + 0x2F);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *((_DWORD *)this + 0x2E);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *((_DWORD *)this + 0x2D);
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *((_DWORD *)this + 0x2C);
  if ( v10 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *((_DWORD *)this + 0x2B);
  if ( v11 )
  {
    if ( !v3((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  NiAVObject::~NiAVObject(this);
}
