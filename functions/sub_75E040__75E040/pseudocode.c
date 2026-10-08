int __thiscall sub_75E040(float *this)
{
  int v2; // ecx
  int v3; // edi

  v2 = *((_DWORD *)this + 3); /*0x75e043*/
  if ( v2 ) /*0x75e048*/
  {                                             // 3DTheft decode 2026-05-16: NiPSysUpdateTask::Run gates particle-system update on byte_B3F944 before invoking the target vfunc +0x9C.
    if ( !bNiParallelWaitFallback_0B3F944 ) /*0x75e04a*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 0x9C))(*(this + 4)); /*0x75e063*/
      v3 = *((_DWORD *)this + 3); /*0x75e065*/
      if ( v3 ) /*0x75e06a*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x75e070*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x75e086*/
        *(this + 3) = 0.0; /*0x75e088*/
      }
    }
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x54))(this);
}
