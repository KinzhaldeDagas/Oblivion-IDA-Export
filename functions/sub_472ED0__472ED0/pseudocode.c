void __thiscall sub_472ED0(void *this, int **a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  _WORD *v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned __int16 *v9; // edi
  int v10; // eax
  volatile LONG *v11; // edi
  int *v12; // edi
  int Magicka; // [esp+14h] [ebp-18h]
  volatile LONG *v14; // [esp+18h] [ebp-14h] BYREF
  int v15; // [esp+1Ch] [ebp-10h]
  unsigned int v16; // [esp+28h] [ebp-4h]

  v3 = (*a2)[2];
  v4 = 0;
  v5 = 0;
  v14 = 0;
  Magicka = 0xFF;
  v15 = 0;
  v16 = 0;
  if ( v3 )
  {
    v6 = *(_WORD **)(v3 + 8);
    if ( v6 )
    {
      Magicka = (unsigned __int16)TESActorBaseData_GetMagicka(v6);
      sub_470960(*((_DWORD **)this + 0x27), Magicka, &v14);
      v5 = (int)v14;
      if ( v14 )
      {
        v7 = (*a2)[4];
        if ( (*(int (__thiscall **)(volatile LONG *, unsigned int))(*v14 + 0x10))(v14, 0xFFFFFFFF) == v7 )
          goto LABEL_9;
        v5 = 0;
      }
    }
  }
  v8 = (*a2)[4];
  if ( v8 )
  {
    v4 = (*a2)[4];
    v15 = v4;
    InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  if ( !v5 )
  {
    if ( v4 )
    {
      sub_6C4A10(*((unsigned __int16 **)this + 0x26), (int *)&v14, v4);
      if ( v14 )
      {
        v11 = v14;
        if ( !InterlockedDecrement(v14 + 1) )
          goto LABEL_15;
      }
    }
    goto LABEL_16;
  }
LABEL_9:
  v9 = *((unsigned __int16 **)this + 0x26);
  v10 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v5 + 0x10))(v5, 0xFFFFFFFF);
  sub_6C4A10(v9, (int *)&v14, v10);
  if ( v14 )
  {
    v11 = v14;
    if ( !InterlockedDecrement(v14 + 1) )
LABEL_15:
      (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1);
  }
LABEL_16:
  v12 = *a2;
  if ( *a2 )
  {
    sub_4729F0(*a2);
    FormHeapFree((unsigned int)v12);
  }
  *a2 = 0;
  if ( v5 )
  {
    sub_4708B0(*((_DWORD **)this + 0x27), Magicka);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 4))(v5, 0);
    (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  if ( !v4 )
    sub_4708B0(*((_DWORD **)this + 0x27), Magicka);
  v16 = 0xFFFFFFFF;
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
}
