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

  EnterCriticalSection(&unk_B39C00); /*0x55147e*/
  CurrentThreadId = GetCurrentThreadId(); /*0x551484*/
  ++unk_B39C7C; /*0x55148f*/
  v5 = 0; /*0x551495*/
  unk_B39C78 = CurrentThreadId; /*0x551497*/
  if ( a2 ) /*0x5514a8*/
  {
    v7 = (_DWORD *)FormHeapAlloc(0x10u); /*0x5514d7*/
    v8 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x5514dc*/
    v9 = v7; /*0x5514e2*/
    if ( v7 ) /*0x5514e9*/
    {
      *v7 = &NiRefObject::`vftable'; /*0x5514f3*/
      lpAddend = v7 + 1; /*0x5514f9*/
      v7[1] = 0; /*0x5514fd*/
      v8(&MEMORY[0xB3FD64]); /*0x551503*/
      *v9 = &BSFaceGenModelMap::Entry::`vftable'; /*0x551509*/
      v5 = (int)v9; /*0x55150f*/
      v9[2] = 0; /*0x551512*/
      v8(lpAddend); /*0x55151d*/
    }
    NiSmartPointer_Set__((Ni2DBuffer **)(v5 + 8), a2); /*0x551527*/
    *(_DWORD *)(v5 + 0xC) = GetTickCount(); /*0x551533*/
    v8((volatile LONG *)(v5 + 4)); /*0x551542*/
    sub_4A1B10((int)(this + 4), arg0, v5, v10); /*0x55154c*/
    sub_5506B0(this, v5); /*0x551554*/
    v6 = unk_B39C7C-- == 1; /*0x551559*/
    if ( v6 ) /*0x551560*/
      unk_B39C78 = 0; /*0x551562*/
    LeaveCriticalSection(&unk_B39C00); /*0x551571*/
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x551580*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x551592*/
  }
  else
  {
    NiTMap_RemoveAt((_DWORD *)this + 1, arg0); /*0x5514b2*/
    v6 = unk_B39C7C-- == 1; /*0x5514b7*/
    if ( v6 ) /*0x5514bd*/
      unk_B39C78 = 0; /*0x5514bf*/
    LeaveCriticalSection(&unk_B39C00); /*0x5514ca*/
  }
}
