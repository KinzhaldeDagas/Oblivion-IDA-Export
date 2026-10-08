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

  v3 = a3; /*0x433a6b*/
  if ( a2 <= (int)a3 ) /*0x433a73*/
    return; /*0x433a73*/
  if ( sub_4322B0(this) ) /*0x433a79*/
  {
    v4 = *((_DWORD *)MEMORY[0xB33A1C] + 6); /*0x433a87*/
    v5 = *(_DWORD *)(v4 + 8); /*0x433a8a*/
    if ( v5 != GetCurrentThreadId() ) /*0x433a95*/
      sub_431F50((volatile LONG *)v4); /*0x433a99*/
  }
  v12 = 0; /*0x433aa0*/
  v13 = 0; /*0x433aa4*/
  v14 = 0; /*0x433aa8*/
  v15 = 0; /*0x433aac*/
  v11[0] = &BSTaskManagerIterator<__int64>::`vftable'; /*0x433ab0*/
  v16 = 0; /*0x433abe*/
  BSTaskManagerIterator<__int64>::`vftable'(v11, 0, 0); /*0x433ac2*/
  v13 = 0; /*0x433ad4*/
  v14 = 0; /*0x433ad8*/
  v12 = 3 * (_DWORD)v3 + 3; /*0x433adc*/
  v15 &= 0xFCu; /*0x433ae0*/
  while ( 1 ) /*0x433af0*/
  {
    v10 = 0; /*0x433af0*/
    a3 = 0; /*0x433af8*/
    LOBYTE(v16) = 1; /*0x433b11*/
    v6 = sub_433760(this, (int)v11, &v10, (int *)&a3, 1); /*0x433b16*/
    v7 = a3; /*0x433b1d*/
    if ( v6 ) /*0x433b21*/
      break; /*0x433b21*/
LABEL_9:
    LOBYTE(v16) = 0; /*0x433b45*/
    if ( v7 ) /*0x433b4b*/
    {
      if ( !InterlockedDecrement(v7 + 2) ) /*0x433b51*/
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x433b5f*/
    }
    if ( (v15 & 2) != 0 ) /*0x433b66*/
      goto LABEL_17; /*0x433b66*/
  }
  if ( BYTE2(v10) <= a2 ) /*0x433b39*/
  {
    (*(void (__thiscall **)(volatile LONG *, volatile LONG *))(*a3 + 0x1C))(a3, v3); /*0x433b43*/
    goto LABEL_9; /*0x433b43*/
  }
  v8 = a3; /*0x433b6a*/
  LOBYTE(v16) = 0; /*0x433b70*/
  if ( a3 ) /*0x433b74*/
  {
    if ( !InterlockedDecrement(a3 + 2) ) /*0x433b7a*/
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x433b88*/
  }
LABEL_17:
  if ( sub_432350(this) ) /*0x433b8e*/
    sub_431FA0(*((volatile LONG **)MEMORY[0xB33A1C] + 6)); /*0x433ba0*/
}
