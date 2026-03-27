unsigned int __thiscall NiTArray_AddItem(int this, LONG *a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // ax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  LONG v9; // eax
  bool v10; // zf

  if ( !*a2 )
    return 0xFFFFFFFF;
  v4 = *(_WORD *)(this + 0xA);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_DWORD *)(this + 4);
    while ( *(_DWORD *)(v6 + 4 * v5) )
    {
      if ( ++v5 >= *(_WORD *)(this + 0xA) )
        goto LABEL_7;
    }
    v7 = v5;
    v8 = *(_DWORD *)(v6 + 4 * v5);
    if ( v8 != *a2 )
    {
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      v9 = *a2;
      v10 = *a2 == 0;
      *(_DWORD *)(v6 + 4 * v7) = *a2;
      if ( !v10 )
        InterlockedIncrement((volatile LONG *)(v9 + 4));
    }
    ++*(_WORD *)(this + 0xC);
    return v7;
  }
  else
  {
LABEL_7:
    if ( v4 >= (unsigned int)*(unsigned __int16 *)(this + 8) )
      sub_523B10((unsigned __int16 *)this, v4 + *(unsigned __int16 *)(this + 0xE));
    sub_4B34E0((_DWORD *)this, v4, a2);
    return v4;
  }
}
