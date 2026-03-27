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

  if ( !*a2 )
    return 0xFFFFFFFF;
  v4 = *(_WORD *)(this + 0xA);
  if ( *(_WORD *)(this + 0xC) >= v4 )
    goto LABEL_17;
  v5 = v4 - 1;
  for ( i = *(_WORD *)(this + 0xA); v5 >= 0; --v5 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v5) )
    {
      if ( i != v4 )
        break;
    }
    else
    {
      i = v5;
    }
  }
  v7 = i;
  if ( i == v4 )
  {
LABEL_17:
    v13 = v4;
    if ( v4 >= (unsigned int)*(unsigned __int16 *)(this + 8) )
      sub_6C4510((unsigned __int16 *)this, v4 + *(unsigned __int16 *)(this + 0xE));
    sub_6C4940((_DWORD *)this, v13, a2);
    return v13;
  }
  else
  {
    v8 = *(_DWORD *)(this + 4);
    v9 = *(_DWORD *)(v8 + 4 * i);
    v10 = (_DWORD *)(v8 + 4 * v7);
    if ( v9 != *a2 )
    {
      if ( v9 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
          (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      }
      v11 = *a2;
      v12 = *a2 == 0;
      *v10 = *a2;
      if ( !v12 )
        InterlockedIncrement((volatile LONG *)(v11 + 4));
    }
    ++*(_WORD *)(this + 0xC);
    return v7;
  }
}
