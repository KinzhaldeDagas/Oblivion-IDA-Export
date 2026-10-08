// MEF data-streaming pass: IOManager post-process pump uses QPC deadline and configured millisecond budget. Left unchanged; budget tuning needs runtime profiling and is not an IDA-proven engine bug.
volatile LONG **__thiscall IOManager_ProcessThreads(IOManager *this)
{
  int v2; // eax
  volatile LONG **result; // eax
  volatile LONG *v4; // ecx
  volatile LONG **v5; // edi
  bool v6; // zf
  volatile LONG *v7; // esi
  int (__thiscall ***v8)(_DWORD, int); // esi
  volatile LONG *v9; // esi
  volatile LONG *v10; // esi
  volatile LONG *a2; // [esp+14h] [ebp-24h] BYREF
  int v12; // [esp+18h] [ebp-20h] BYREF
  LARGE_INTEGER PerformanceCount; // [esp+1Ch] [ebp-1Ch] BYREF
  LARGE_INTEGER v14; // [esp+24h] [ebp-14h] BYREF
  unsigned int v15; // [esp+34h] [ebp-4h]

  QueryPerformanceCounter(&PerformanceCount);   // MEF candidate verification 2026-05-30: IOManager uses QPC with 64-bit budget conversion and deadline compare; no IDA-proven timer arithmetic bug here. /*0x4335be*/
  v2 = dword_B048E4; /*0x4335d4*/
  if ( this->members.unk38 != 6 ) /*0x4335dd*/
    v2 = dword_B048EC; /*0x4335df*/
  PerformanceCount.QuadPart += (unsigned int)v2 * MEMORY[0xB33A08].QuadPart / 0x3E8; /*0x4335f8*/
  sub_43D3F0((_DWORD **)MEMORY[0xB33A1C]); /*0x433606*/
  result = (volatile LONG **)IOManager_43C030((IOManager *)this->members.taskQueue, (int)&a2); /*0x433613*/
  v4 = a2; /*0x433618*/
  v15 = 0; /*0x433624*/
  if ( a2 ) /*0x43362c*/
  {
    while ( 1 ) /*0x433632*/
    {
      (*(void (__thiscall **)(volatile LONG *))(*v4 + 0x14))(v4); /*0x433637*/
      Shared_NoOpVirtual_60D0A0(MEMORY[0xB33A1C]); /*0x43363f*/
      result = (volatile LONG **)QueryPerformanceCounter(&v14); /*0x433649*/
      if ( v14.HighPart > PerformanceCount.HighPart ) /*0x433657*/
        break; /*0x433657*/
      if ( v14.HighPart >= PerformanceCount.HighPart ) /*0x43365d*/
      {
        result = (volatile LONG **)v14.LowPart; /*0x43365f*/
        if ( v14.LowPart >= PerformanceCount.LowPart ) /*0x433667*/
          break; /*0x433667*/
      }
      result = (volatile LONG **)IOManager_43C030((IOManager *)this->members.taskQueue, (int)&v12); /*0x433675*/
      v5 = result; /*0x43367a*/
      v4 = a2; /*0x43367c*/
      v6 = a2 == *result; /*0x433680*/
      LOBYTE(v15) = 1; /*0x433682*/
      if ( !v6 ) /*0x433687*/
      {
        if ( a2 ) /*0x43368b*/
        {
          v7 = a2; /*0x43368d*/
          result = (volatile LONG **)InterlockedDecrement(a2 + 2); /*0x433693*/
          if ( !result ) /*0x433697*/
            result = (volatile LONG **)(**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x4336a5*/
        }
        v4 = *v5; /*0x4336a7*/
        a2 = *v5; /*0x4336ab*/
        if ( a2 ) /*0x4336af*/
        {
          result = (volatile LONG **)InterlockedIncrement(v4 + 2); /*0x4336b5*/
          v4 = a2; /*0x4336bb*/
        }
      }
      v8 = (int (__thiscall ***)(_DWORD, int))v12; /*0x4336bf*/
      LOBYTE(v15) = 0; /*0x4336c5*/
      if ( v12 ) /*0x4336ca*/
      {
        result = (volatile LONG **)InterlockedDecrement((volatile LONG *)(v12 + 8)); /*0x4336d0*/
        if ( !result ) /*0x4336d4*/
        {
          if ( v8 ) /*0x4336d8*/
            result = (volatile LONG **)(**v8)(v8, 1); /*0x4336e2*/
        }
        v4 = a2; /*0x4336e4*/
      }
      if ( !v4 ) /*0x4336ea*/
        goto LABEL_24; /*0x4336ea*/
    }
    v4 = a2; /*0x4336f2*/
    if ( a2 ) /*0x4336f8*/
    {
      v9 = a2; /*0x4336fa*/
      result = (volatile LONG **)InterlockedDecrement(a2 + 2); /*0x433700*/
      if ( !result ) /*0x433704*/
        result = (volatile LONG **)(**(int (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x433712*/
      v4 = 0; /*0x433714*/
      a2 = 0; /*0x433716*/
    }
  }
LABEL_24:
  v15 = 0xFFFFFFFF; /*0x43371a*/
  if ( v4 ) /*0x433724*/
  {
    v10 = v4; /*0x433726*/
    result = (volatile LONG **)InterlockedDecrement(v4 + 2); /*0x43372c*/
    if ( !result ) /*0x433730*/
      return (**(volatile LONG **(__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x43373e*/
  }
  return result; /*0x433740*/
}
