LONG __thiscall sub_73A220(char **this, int a2, _DWORD **a3)
{
  int v4; // edi
  unsigned int v5; // ebx
  volatile LONG *v6; // esi
  int v7; // edi
  LONG result; // eax
  unsigned int v9; // ebx
  volatile LONG *v10; // esi
  int v11; // edi
  LONG v12; // [esp+14h] [ebp-14h] BYREF
  volatile LONG *v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]
  _DWORD *v15; // [esp+2Ch] [ebp+4h]

  v4 = a2;
  sub_70D050(this, a2, a3);
  sub_6C4510((unsigned __int16 *)(a2 + 0x124), *((unsigned __int16 *)this + 0x97));
  v5 = 0;
  for ( *(_WORD *)(a2 + 0x132) = *((_WORD *)this + 0x99); v5 < *((unsigned __int16 *)this + 0x97); ++v5 )
  {
    v6 = *(volatile LONG **)&(*(this + 0x4A))[4 * v5];
    v13 = v6;
    if ( v6 )
      InterlockedIncrement(v6 + 1);
    v14 = 0;
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(volatile LONG *, _DWORD **))(*v6 + 0x18))(v6, a3);
      v12 = v7;
      if ( v7 )
        InterlockedIncrement((volatile LONG *)(v7 + 4));
      LOBYTE(v14) = 1;
      sub_739810((_DWORD *)(a2 + 0x124), v5, &v12);
      LOBYTE(v14) = 0;
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      v4 = a2;
    }
    else
    {
      v12 = 0;
      LOBYTE(v14) = 2;
      sub_739810((_DWORD *)(v4 + 0x124), v5, &v12);
    }
    v14 = 0xFFFFFFFF;
    if ( v6 )
    {
      if ( !InterlockedDecrement(v6 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
  }
  v15 = (_DWORD *)(v4 + 0x134);
  sub_6C4510((unsigned __int16 *)(v4 + 0x134), *((unsigned __int16 *)this + 0x9F));
  result = *((unsigned __int16 *)this + 0xA1);
  v9 = 0;
  for ( *(_WORD *)(v4 + 0x142) = result; v9 < *((unsigned __int16 *)this + 0x9F); ++v9 )
  {
    v10 = *(volatile LONG **)&(*(this + 0x4E))[4 * v9];
    v13 = v10;
    if ( v10 )
      InterlockedIncrement(v10 + 1);
    v14 = 3;
    if ( v10 )
    {
      v11 = (*(int (__thiscall **)(volatile LONG *, _DWORD **))(*v10 + 0x18))(v10, a3);
      v12 = v11;
      if ( v11 )
        InterlockedIncrement((volatile LONG *)(v11 + 4));
      LOBYTE(v14) = 4;
      result = sub_7395A0(v15, v9, &v12);
      LOBYTE(v14) = 3;
      if ( v11 )
      {
        result = InterlockedDecrement((volatile LONG *)(v11 + 4));
        if ( !result )
          result = (**(int (__thiscall ***)(int, int))v11)(v11, 1);
      }
    }
    else
    {
      v12 = 0;
      LOBYTE(v14) = 5;
      result = sub_7395A0(v15, v9, &v12);
    }
    v14 = 0xFFFFFFFF;
    if ( v10 )
    {
      result = InterlockedDecrement(v10 + 1);
      if ( !result )
        result = (**(int (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
    }
  }
  return result;
}
