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

  QueryPerformanceCounter(&PerformanceCount);
  v2 = dword_B048E4;
  if ( this->members.unk38 != 6 )
    v2 = dword_B048EC;
  PerformanceCount.QuadPart += (unsigned int)v2 * Frequency.QuadPart / 0x3E8;
  sub_43D3F0((_DWORD **)ModelLoaderPtr);
  result = (volatile LONG **)IOManager_43C030((IOManager *)this->members.taskQueue, (int)&a2);
  v4 = a2;
  v15 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      (*(void (__thiscall **)(volatile LONG *))(*v4 + 0x14))(v4);
      TESTexture::ClearComponentReferences(ModelLoaderPtr);
      result = (volatile LONG **)QueryPerformanceCounter(&v14);
      if ( v14.HighPart > PerformanceCount.HighPart )
        break;
      if ( v14.HighPart >= PerformanceCount.HighPart )
      {
        result = (volatile LONG **)v14.LowPart;
        if ( v14.LowPart >= PerformanceCount.LowPart )
          break;
      }
      result = (volatile LONG **)IOManager_43C030((IOManager *)this->members.taskQueue, (int)&v12);
      v5 = result;
      v4 = a2;
      v6 = a2 == *result;
      LOBYTE(v15) = 1;
      if ( !v6 )
      {
        if ( a2 )
        {
          v7 = a2;
          result = (volatile LONG **)InterlockedDecrement(a2 + 2);
          if ( !result )
            result = (volatile LONG **)(**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
        }
        v4 = *v5;
        a2 = *v5;
        if ( a2 )
        {
          result = (volatile LONG **)InterlockedIncrement(v4 + 2);
          v4 = a2;
        }
      }
      v8 = (int (__thiscall ***)(_DWORD, int))v12;
      LOBYTE(v15) = 0;
      if ( v12 )
      {
        result = (volatile LONG **)InterlockedDecrement((volatile LONG *)(v12 + 8));
        if ( !result )
        {
          if ( v8 )
            result = (volatile LONG **)(**v8)(v8, 1);
        }
        v4 = a2;
      }
      if ( !v4 )
        goto LABEL_24;
    }
    v4 = a2;
    if ( a2 )
    {
      v9 = a2;
      result = (volatile LONG **)InterlockedDecrement(a2 + 2);
      if ( !result )
        result = (volatile LONG **)(**(int (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
      v4 = 0;
      a2 = 0;
    }
  }
LABEL_24:
  v15 = 0xFFFFFFFF;
  if ( v4 )
  {
    v10 = v4;
    result = (volatile LONG **)InterlockedDecrement(v4 + 2);
    if ( !result )
      return (**(volatile LONG **(__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
  }
  return result;
}
