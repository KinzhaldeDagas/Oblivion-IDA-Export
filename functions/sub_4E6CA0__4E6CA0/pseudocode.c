void __thiscall sub_4E6CA0(_DWORD *this)
{
  signed int v2; // edi
  DWORD CurrentThreadId; // eax
  int v4; // eax
  signed int v5; // ebp
  int v6; // edx
  unsigned int v7; // ebx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  if ( *(this + 9) )
  {
    EnterCriticalSection(&stru_B36000);
    CurrentThreadId = GetCurrentThreadId();
    ++dword_B3607C;
    dword_B36078 = CurrentThreadId;
    sub_4E4F20(this);
    sub_4E5040(this);
    v4 = *(this + 9);
    v5 = *(unsigned __int16 *)(v4 + 0xA);
    if ( *(_WORD *)(v4 + 0xA) )
    {
      v10 = 0;
      do
      {
        v6 = *(_DWORD *)(*(this + 9) + 4);
        v7 = *(_DWORD *)(v6 + 4 * v2);
        if ( v7 )
        {
          sub_4E8200(*(_DWORD **)(v6 + 4 * v2));
          FormHeapFree(v7);
        }
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)*(this + 9), v2++, &v10);
      }
      while ( v2 < v5 );
    }
    v8 = (void (__thiscall ***)(_DWORD, int))*(this + 9);
    if ( v8 )
      (**v8)(v8, 1);
    *(this + 9) = 0;
    if ( dword_B3607C-- == 1 )
      dword_B36078 = 0;
    LeaveCriticalSection(&stru_B36000);
  }
}
