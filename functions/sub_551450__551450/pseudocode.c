void __thiscall sub_551450(char *this, int arg0, Ni2DBuffer *a2)
{
  DWORD CurrentThreadId; // eax
  int v5; // esi
  bool v6; // zf
  _DWORD *v7; // eax
  void (__stdcall *v8)(volatile LONG *); // ebp
  _DWORD *v9; // edi
  int v10; // [esp+0h] [ebp-28h]
  volatile LONG *lpAddend; // [esp+18h] [ebp-10h]

  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  v5 = 0;
  dword_B39C78 = CurrentThreadId;
  if ( a2 )
  {
    v7 = (_DWORD *)FormHeapAlloc(0x10u);
    v8 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    v9 = v7;
    if ( v7 )
    {
      *v7 = &NiRefObject::`vftable';
      lpAddend = v7 + 1;
      v7[1] = 0;
      v8(&NiRefObject_objcount);
      *v9 = &BSFaceGenModelMap::Entry::`vftable';
      v5 = (int)v9;
      v9[2] = 0;
      v8(lpAddend);
    }
    NiSmartPointer_Set__((Ni2DBuffer **)(v5 + 8), a2);
    *(_DWORD *)(v5 + 0xC) = GetTickCount();
    v8((volatile LONG *)(v5 + 4));
    sub_4A1B10((int)(this + 4), arg0, v5, v10);
    sub_5506B0(this, v5);
    v6 = dword_B39C7C-- == 1;
    if ( v6 )
      dword_B39C78 = 0;
    LeaveCriticalSection(&stru_B39C00);
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  else
  {
    NiTMap_RemoveAt((_DWORD *)this + 1, arg0);
    v6 = dword_B39C7C-- == 1;
    if ( v6 )
      dword_B39C78 = 0;
    LeaveCriticalSection(&stru_B39C00);
  }
}
