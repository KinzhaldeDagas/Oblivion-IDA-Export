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

  do /*0x433a26*/
  {
    v4 = 0; /*0x4339a1*/
    v7[2] = 0; /*0x4339a5*/
    v7[4] = 0; /*0x4339a9*/
    v7[5] = 0; /*0x4339ad*/
    v8 = 0; /*0x4339b1*/
    v7[0] = &BSTaskManagerIterator<__int64>::`vftable'; /*0x4339b5*/
    v9 = 0; /*0x4339bd*/
    do /*0x433a18*/
    {
      v5 = 0; /*0x4339c1*/
      LOBYTE(v9) = 1; /*0x4339d8*/
      v2 = sub_433760(this, (int)v7, &v6, (int *)&v5, 1); /*0x4339dd*/
      v3 = v5; /*0x4339e4*/
      if ( v2 ) /*0x4339e8*/
      {
        IOTask_Cancel(v5); /*0x4339ed*/
        v4 = 1; /*0x4339f2*/
      }
      LOBYTE(v9) = 0; /*0x4339f9*/
      if ( v3 ) /*0x4339fd*/
      {
        if ( !InterlockedDecrement(v3 + 2) ) /*0x433a03*/
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x433a11*/
      }
    }
    while ( (v8 & 2) == 0 ); /*0x433a18*/
    v9 = 0xFFFFFFFF; /*0x433a1e*/
  }
  while ( v4 ); /*0x433a26*/
}
