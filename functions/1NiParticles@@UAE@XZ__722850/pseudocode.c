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

  this->vtbl = (NiAVObjectVtbl *)&NiGeometry::`vftable'; /*0x72287b*/
  sub_738420((int)this); /*0x72288a*/
  EnterCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB3F9B0][0x14]); /*0x722897*/
  CurrentThreadId = GetCurrentThreadId(); /*0x72289d*/
  ++LODWORD(MEMORY[0xB3F9B0][0x33]); /*0x7228a3*/
  v3 = InterlockedDecrement; /*0x7228aa*/
  LODWORD(MEMORY[0xB3F9B0][0x32]) = CurrentThreadId; /*0x7228b0*/
  v4 = *((_DWORD *)this + 0x2B); /*0x7228b5*/
  if ( v4 ) /*0x7228bf*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7228c5*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7228d7*/
    *((_DWORD *)this + 0x2B) = 0; /*0x7228d9*/
  }
  if ( LODWORD(MEMORY[0xB3F9B0][0x33])-- == 1 ) /*0x7228df*/
    MEMORY[0xB3F9B0][0x32] = 0.0; /*0x7228e8*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB3F9B0][0x14]); /*0x7228f3*/
  v6 = *((_DWORD *)this + 0x2D); /*0x7228f9*/
  if ( v6 ) /*0x722901*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x722907*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x722919*/
    *((_DWORD *)this + 0x2D) = 0; /*0x72291b*/
  }
  v7 = *((_DWORD *)this + 0x2F); /*0x722921*/
  if ( v7 ) /*0x72292e*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x722934*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x722946*/
  }
  v8 = *((_DWORD *)this + 0x2E); /*0x722948*/
  if ( v8 ) /*0x722955*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x72295b*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x72296d*/
  }
  v9 = *((_DWORD *)this + 0x2D); /*0x72296f*/
  if ( v9 ) /*0x72297c*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x722982*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x722994*/
  }
  v10 = *((_DWORD *)this + 0x2C); /*0x722996*/
  if ( v10 ) /*0x7229a3*/
  {
    if ( !v3((volatile LONG *)(v10 + 4)) ) /*0x7229a9*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7229bb*/
  }
  v11 = *((_DWORD *)this + 0x2B); /*0x7229bd*/
  if ( v11 ) /*0x7229c9*/
  {
    if ( !v3((volatile LONG *)(v11 + 4)) ) /*0x7229cf*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7229e1*/
  }
  NiAVObject::~NiAVObject(this); /*0x7229ed*/
}
