unsigned int __thiscall sub_6C5240(int this, LONG *a2)
{
  unsigned __int16 v4; // dx
  __int16 v5; // ax
  __int16 i; // si
  int v7; // ebp
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // ebx
  LONG v11; // eax
  bool v12; // zf
  unsigned int v13; // esi

  if ( !*a2 ) /*0x6c5244*/
    return 0xFFFFFFFF; /*0x6c5252*/
  v4 = *(_WORD *)(this + 0xA); /*0x6c5259*/
  if ( *(_WORD *)(this + 0xC) >= v4 ) /*0x6c5264*/
    goto LABEL_17; /*0x6c5264*/
  v5 = v4 - 1; /*0x6c526d*/
  for ( i = *(_WORD *)(this + 0xA); v5 >= 0; --v5 ) /*0x6c5276*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v5) ) /*0x6c5283*/
    {
      if ( i != v4 ) /*0x6c529c*/
        break; /*0x6c529c*/
    }
    else
    {
      i = v5; /*0x6c528f*/
    }
  }
  v7 = i; /*0x6c52a6*/
  if ( i == v4 ) /*0x6c52ae*/
  {
LABEL_17:
    v13 = v4; /*0x6c5305*/
    if ( v4 >= (unsigned int)*(unsigned __int16 *)(this + 8) ) /*0x6c530e*/
      sub_6C4510((unsigned __int16 *)this, v4 + *(unsigned __int16 *)(this + 0xE)); /*0x6c5319*/
    sub_6C4940((_DWORD *)this, v13, a2); /*0x6c5326*/
    return v13; /*0x6c532b*/
  }
  else
  {
    v8 = *(_DWORD *)(this + 4); /*0x6c52b0*/
    v9 = *(_DWORD *)(v8 + 4 * i); /*0x6c52b3*/
    v10 = (_DWORD *)(v8 + 4 * v7); /*0x6c52bc*/
    if ( v9 != *a2 ) /*0x6c52bf*/
    {
      if ( v9 ) /*0x6c52c3*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x6c52c9*/
          (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x6c52df*/
      }
      v11 = *a2; /*0x6c52e5*/
      v12 = *a2 == 0; /*0x6c52e7*/
      *v10 = *a2; /*0x6c52e9*/
      if ( !v12 ) /*0x6c52eb*/
        InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x6c52f1*/
    }
    ++*(_WORD *)(this + 0xC); /*0x6c52f7*/
    return v7; /*0x6c52fd*/
  }
}
