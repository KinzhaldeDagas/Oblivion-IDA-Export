unsigned int __thiscall sub_453A00(void *this, int a2)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD v8[6]; // [esp+10h] [ebp-18h]

  v3 = 0;
  v4 = 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x168))(a2);
  if ( v5 )
  {
    v8[0] = 0;
    v8[1] = 1;
    v8[2] = 2;
    v8[3] = 3;
    v8[4] = 4;
    v8[5] = 5;
    do
    {
      if ( 0x10 * v8[v3] + v5 != 0xFFFFFFB4 )
      {
        v6 = *(_DWORD *)(0x10 * v8[v3] + v5 + 0x4C);
        if ( v6 )
          v4 = sub_4521D0((int)this, *(_DWORD *)(v6 + 0xC)) + 0x1003F * v4;
      }
      ++v3;
    }
    while ( v3 < 6 );
  }
  return v4;
}
