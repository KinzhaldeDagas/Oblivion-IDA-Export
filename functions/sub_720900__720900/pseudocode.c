void __thiscall sub_720900(unsigned __int16 *this, _DWORD *a2)
{
  NiSourceTexture *v2; // esi
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int a1[6]; // [esp+18h] [ebp-24h] BYREF
  unsigned int v9; // [esp+38h] [ebp-4h]

  v2 = (NiSourceTexture *)this;
  if ( a2[0x36] >= 0xA030006u )
  {
    sub_702260(this, a2);
  }
  else
  {
    sub_6D7DF0(this, a2);
    ArrayConstructor(
      a1,
      4u,
      6,
      (int)Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))sub_7016A0);
    v3 = 0;
    v9 = 0;
    if ( sub_7124D0(a2) == 6 )
    {
      do
      {
        v4 = sub_7124A0(a2);
        v5 = a1[v3];
        v6 = v4;
        if ( v5 != v4 )
        {
          if ( v5 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
              (**(void (__thiscall ***)(int, int))v5)(v5, 1);
          }
          a1[v3] = v6;
          if ( v6 )
            InterlockedIncrement((volatile LONG *)(v6 + 4));
        }
        ++v3;
      }
      while ( v3 < 6 );
      v2 = (NiSourceTexture *)this;
    }
    if ( !v2->members.pixelData )
      sub_7205A0(v2, a1[0], a1[1], a1[2], a1[3], a1[4], a1[5]);
    v9 = 0xFFFFFFFF;
    _LN21(a1, 4u, 6, (void (__thiscall *)(void *))sub_7016A0);
  }
}
