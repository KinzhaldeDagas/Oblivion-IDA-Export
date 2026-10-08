char __thiscall sub_4331F0(_DWORD *this, LONG a2, int a3, int a4, int *a5, char a6)
{
  unsigned int v7; // edi
  _DWORD *v8; // edi
  __int64 v9; // rax
  _DWORD *v10; // eax
  LONG v11; // ebp
  int v12; // ebp
  char v14; // [esp+17h] [ebp-19h]

  v14 = 1; /*0x43322a*/
  v7 = 0; /*0x43322f*/
  if ( !sub_432A60(this, a2, a3, a4) ) /*0x433231*/
  {
    do /*0x4332e0*/
    {
      if ( !v7 ) /*0x433240*/
      {
        v8 = (_DWORD *)FormHeapAlloc(0x10u); /*0x433249*/
        if ( v8 ) /*0x43325c*/
        {
          v9 = ((__int64 (__thiscall *)(_DWORD, int, int))*(_DWORD *)(*(_DWORD *)*this + 0x24))(*this, a3, a4); /*0x433270*/
          v10 = sub_432690(v8, v9, SHIDWORD(v9), a5); /*0x433276*/
        }
        else
        {
          v10 = 0; /*0x43327d*/
        }
        v7 = (unsigned int)v10; /*0x433287*/
      }
      v11 = *(this + 5) & 0xFFFFFFFE; /*0x4332a6*/
      *(_DWORD *)(v7 + 0xC) = v11; /*0x4332b1*/
      if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), v7 & 0xFFFFFFFE, v11) == v11 ) /*0x4332ca*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x30))(*this); /*0x433341*/
        goto LABEL_18; /*0x433341*/
      }
    }
    while ( !sub_432A60(this, a2, a3, a4) ); /*0x4332e0*/
    if ( v7 ) /*0x4332e8*/
    {
      v12 = *(_DWORD *)(v7 + 8); /*0x4332ea*/
      if ( v12 ) /*0x4332ef*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 8)) ) /*0x4332f5*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x43330c*/
      }
      FormHeapFree(v7); /*0x43330f*/
    }
  }
  if ( a6 ) /*0x43331c*/
    sub_4348B0((int *)((*(this + 5) & 0xFFFFFFFE) + 8), a5); /*0x43332c*/
  else
    v14 = 0; /*0x433333*/
LABEL_18:
  *(_DWORD *)*(this + 1) = 0; /*0x433343*/
  *(_DWORD *)*(this + 2) = 0; /*0x43334f*/
  *(_DWORD *)*(this + 3) = 0; /*0x433358*/
  return v14; /*0x433362*/
}
