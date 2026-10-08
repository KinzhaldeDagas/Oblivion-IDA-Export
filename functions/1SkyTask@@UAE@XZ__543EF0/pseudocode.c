void __thiscall SkyTask::~SkyTask(SkyTask *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *((_DWORD *)this + 0xB); /*0x543f1a*/
  v3 = InterlockedDecrement; /*0x543f1f*/
  if ( v2 ) /*0x543f2d*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x543f33*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x543f45*/
  }
  v4 = *((_DWORD *)this + 0xA); /*0x543f47*/
  if ( v4 ) /*0x543f51*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x543f57*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x543f69*/
  }
  LipTask::~LipTask(this); /*0x543f75*/
}
