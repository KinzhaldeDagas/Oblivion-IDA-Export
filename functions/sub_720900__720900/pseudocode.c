void __thiscall sub_720900(NiSourceTexture *this, _DWORD *a2)
{
  NiSourceTexture *v2; // esi
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int a1[6]; // [esp+18h] [ebp-24h] BYREF
  unsigned int v9; // [esp+38h] [ebp-4h]

  v2 = this; /*0x720927*/
  if ( a2[0x36] >= 0xA030006u ) /*0x72093c*/
  {
    sub_702260(this, a2); /*0x720a08*/
  }
  else
  {
    sub_6D7DF0((unsigned __int16 *)this, a2); /*0x720942*/
    ArrayConstructor( /*0x72095a*/
      (char *)a1,
      4u,
      6,
      (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    v3 = 0; /*0x72095f*/
    v9 = 0; /*0x720963*/
    if ( sub_7124D0(a2) == 6 ) /*0x72096f*/
    {
      do /*0x7209ba*/
      {
        v4 = sub_7124A0(a2); /*0x720973*/
        v5 = a1[v3]; /*0x720978*/
        v6 = v4; /*0x72097c*/
        if ( v5 != v4 ) /*0x720980*/
        {
          if ( v5 ) /*0x720984*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x72098a*/
              (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7209a0*/
          }
          a1[v3] = v6; /*0x7209a4*/
          if ( v6 ) /*0x7209a8*/
            InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x7209ae*/
        }
        ++v3; /*0x7209b4*/
      }
      while ( v3 < 6 ); /*0x7209ba*/
      v2 = this; /*0x7209bc*/
    }
    if ( !v2->members.pixelData ) /*0x7209c0*/
      sub_7205A0(v2, a1[0], a1[1], a1[2], a1[3], a1[4], a1[5]); /*0x7209e6*/
    v9 = 0xFFFFFFFF; /*0x7209f9*/
    _LN21((char *)a1, 4u, 6, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x720a01*/
  }
}
