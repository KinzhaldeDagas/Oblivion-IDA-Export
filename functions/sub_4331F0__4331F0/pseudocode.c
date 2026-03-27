char __thiscall sub_4331F0(_DWORD *this, LONG a2, int a3, int a4, int *a5, char a6)
{
  unsigned int v7; // edi
  _DWORD *v8; // edi
  __int64 v9; // rax
  _DWORD *v10; // eax
  LONG v11; // ebp
  int v12; // ebp
  char v14; // [esp+17h] [ebp-19h]

  v14 = 1;
  v7 = 0;
  if ( !sub_432A60(this, a2, a3, a4) )
  {
    do
    {
      if ( !v7 )
      {
        v8 = (_DWORD *)FormHeapAlloc(0x10u);
        if ( v8 )
        {
          v9 = ((__int64 (__thiscall *)(_DWORD, int, int))*(_DWORD *)(*(_DWORD *)*this + 0x24))(*this, a3, a4);
          v10 = sub_432690(v8, v9, SHIDWORD(v9), a5);
        }
        else
        {
          v10 = 0;
        }
        v7 = (unsigned int)v10;
      }
      v11 = *(this + 5) & 0xFFFFFFFE;
      *(_DWORD *)(v7 + 0xC) = v11;
      if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), v7 & 0xFFFFFFFE, v11) == v11 )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x30))(*this);
        goto LABEL_18;
      }
    }
    while ( !sub_432A60(this, a2, a3, a4) );
    if ( v7 )
    {
      v12 = *(_DWORD *)(v7 + 8);
      if ( v12 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 8)) )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      FormHeapFree(v7);
    }
  }
  if ( a6 )
    sub_4348B0((int *)((*(this + 5) & 0xFFFFFFFE) + 8), a5);
  else
    v14 = 0;
LABEL_18:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return v14;
}
