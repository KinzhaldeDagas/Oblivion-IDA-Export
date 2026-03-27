volatile LONG *__thiscall sub_6C5860(int **this, int a2, int a3)
{
  int v4; // esi
  _DWORD *v5; // ebp
  int v6; // eax
  volatile LONG *v7; // edi
  volatile LONG *v8; // eax
  volatile LONG *v9; // esi
  volatile LONG *v10; // edi
  unsigned int v12; // [esp+14h] [ebp-14h]
  volatile LONG *v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  if ( a3 )
    v12 = *(_DWORD *)(a3 + 0xC);
  else
    v12 = *(_DWORD *)(a2 + 0xC);
  v4 = 0;
  if ( !*(this + 0x1E) )
  {
LABEL_13:
    v8 = (volatile LONG *)FormHeapAlloc(0x68u);
    v13 = v8;
    v14 = 0;
    if ( v8 )
      v9 = (volatile LONG *)sub_6C7FB0((void *)v8, "__TempBlendSequence__", v12, 0xC, 0);
    else
      v9 = 0;
    v13 = v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
    v14 = 1;
    sub_6C4790(this + 0x1C, (LONG *)&v13);
    v14 = 0xFFFFFFFF;
    if ( v9 )
    {
      if ( !InterlockedDecrement(v9 + 1) )
        (**(void (__thiscall ***)(void *, int))v9)((void *)v9, 1);
    }
    goto LABEL_18;
  }
  v5 = this + 0x1C;
  while ( 1 )
  {
    v6 = *(_DWORD *)(*v5 + 4 * v4);
    if ( !*(_DWORD *)(v6 + 0x44) )
      break;
LABEL_12:
    if ( ++v4 >= (unsigned int)*(this + 0x1E) )
      goto LABEL_13;
  }
  if ( *(_DWORD *)(v6 + 0xC) < v12 )
  {
    sub_6C4A10((unsigned __int16 *)this, (int *)&v13, *(_DWORD *)(*v5 + 4 * v4));
    v7 = v13;
    if ( v13 )
    {
      if ( !InterlockedDecrement(v13 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
    }
    sub_6C4810((int *)this + 0x1C, v4--);
    goto LABEL_12;
  }
  v9 = *(volatile LONG **)(*v5 + 4 * v4);
  sub_6C4A10((unsigned __int16 *)this, (int *)&v13, (int)v9);
  v10 = v13;
  if ( v13 )
  {
    if ( !InterlockedDecrement(v13 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
  }
LABEL_18:
  sub_6C9F10((float *)a2, (int)v9, v12, a3);
  sub_6C78B0(v9);
  sub_6C5760(this, (int)v9, 0, 0);
  return v9;
}
