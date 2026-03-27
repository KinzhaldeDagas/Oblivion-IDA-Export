void __thiscall sub_6DF950(_WORD *this, int a2, _DWORD **a3)
{
  __int16 v4; // ax
  __int16 v5; // ax
  int *v6; // edi
  char *v7; // ebp
  void *v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  unsigned int v12; // [esp-4h] [ebp-14h]
  int v13; // [esp+18h] [ebp+8h]

  sub_733850(this, a2, a3);
  v4 = *(this + 6);
  *(_WORD *)(a2 + 0xC) = v4;
  if ( (*(_BYTE *)(this + 6) & 1) != 0 )
    v5 = v4 | 1;
  else
    v5 = v4 & 0xFFFE;
  *(_WORD *)(a2 + 0xC) = v5;
  v12 = *(_DWORD *)(a2 + 0x14);
  *(_WORD *)(a2 + 0xC) ^= (*((_BYTE *)this + 0xC) ^ (unsigned __int8)v5) & 6;
  *(_DWORD *)(a2 + 0x10) = *((_DWORD *)this + 4);
  FormHeapFree(v12);
  *(_DWORD *)(a2 + 0x14) = 0;
  qmemcpy((void *)(a2 + 0x18), this + 0xC, 0x20u);
  v6 = (int *)(a2 + 0x38);
  v7 = (char *)this - a2;
  v13 = 3;
  do
  {
    v8 = *(void **)&v7[(_DWORD)v6];
    if ( v8 )
    {
      v9 = sub_700900(v8);
      v10 = *v6;
      v11 = v9;
      if ( *v6 != v9 )
      {
        if ( v10 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
            (**(void (__thiscall ***)(int, int))v10)(v10, 1);
        }
        *v6 = v11;
        if ( v11 )
          InterlockedIncrement((volatile LONG *)(v11 + 4));
      }
    }
    ++v6;
    --v13;
  }
  while ( v13 );
}
