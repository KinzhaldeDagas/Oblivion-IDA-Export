void __thiscall sub_433970(_DWORD *this)
{
  unsigned __int8 v2; // al
  volatile LONG *v3; // esi
  char v4; // [esp+17h] [ebp-39h]
  volatile LONG *v5; // [esp+18h] [ebp-38h] BYREF
  int v6; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v7[6]; // [esp+24h] [ebp-2Ch] BYREF
  char v8; // [esp+3Ch] [ebp-14h]
  unsigned int v9; // [esp+4Ch] [ebp-4h]

  do
  {
    v4 = 0;
    v7[2] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v8 = 0;
    v7[0] = &BSTaskManagerIterator<__int64>::`vftable';
    v9 = 0;
    do
    {
      v5 = 0;
      LOBYTE(v9) = 1;
      v2 = sub_433760(this, (int)v7, &v6, (int *)&v5, 1);
      v3 = v5;
      if ( v2 )
      {
        sub_432130(v5);
        v4 = 1;
      }
      LOBYTE(v9) = 0;
      if ( v3 )
      {
        if ( !InterlockedDecrement(v3 + 2) )
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
      }
    }
    while ( (v8 & 2) == 0 );
    v9 = 0xFFFFFFFF;
  }
  while ( v4 );
}
