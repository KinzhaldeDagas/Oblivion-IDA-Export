void __thiscall sub_433A40(volatile LONG *this, signed int a2, volatile LONG *a3)
{
  volatile LONG *v3; // ebp
  int v4; // esi
  int v5; // edi
  unsigned __int8 v6; // al
  volatile LONG *v7; // esi
  volatile LONG *v8; // esi
  __int64 v10; // [esp+18h] [ebp-34h] BYREF
  _DWORD v11[2]; // [esp+20h] [ebp-2Ch] BYREF
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+30h] [ebp-1Ch]
  int v14; // [esp+34h] [ebp-18h]
  char v15; // [esp+38h] [ebp-14h]
  int v16; // [esp+48h] [ebp-4h]

  v3 = a3;
  if ( a2 <= (int)a3 )
    return;
  if ( sub_4322B0(this) )
  {
    v4 = *((_DWORD *)ModelLoaderPtr + 6);
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 != GetCurrentThreadId() )
      sub_431F50((volatile LONG *)v4);
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v11[0] = &BSTaskManagerIterator<__int64>::`vftable';
  v16 = 0;
  BSTaskManagerIterator<__int64>::`vftable'(v11, 0, 0);
  v13 = 0;
  v14 = 0;
  v12 = 3 * (_DWORD)v3 + 3;
  v15 &= 0xFCu;
  while ( 1 )
  {
    v10 = 0;
    a3 = 0;
    LOBYTE(v16) = 1;
    v6 = sub_433760(this, (int)v11, &v10, (int *)&a3, 1);
    v7 = a3;
    if ( v6 )
      break;
LABEL_9:
    LOBYTE(v16) = 0;
    if ( v7 )
    {
      if ( !InterlockedDecrement(v7 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
    }
    if ( (v15 & 2) != 0 )
      goto LABEL_17;
  }
  if ( BYTE2(v10) <= a2 )
  {
    (*(void (__thiscall **)(volatile LONG *, volatile LONG *))(*a3 + 0x1C))(a3, v3);
    goto LABEL_9;
  }
  v8 = a3;
  LOBYTE(v16) = 0;
  if ( a3 )
  {
    if ( !InterlockedDecrement(a3 + 2) )
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
  }
LABEL_17:
  if ( sub_432350(this) )
    sub_431FA0(*((volatile LONG **)ModelLoaderPtr + 6));
}
