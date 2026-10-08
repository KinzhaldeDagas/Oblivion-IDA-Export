unsigned int __thiscall sub_453A00(void *this, int a2)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD v8[6]; // [esp+10h] [ebp-18h]

  v3 = 0; /*0x453a15*/
  v4 = 0; /*0x453a17*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x168))(a2); /*0x453a1b*/
  if ( v5 ) /*0x453a1f*/
  {
    v8[0] = 0; /*0x453a21*/
    v8[1] = 1; /*0x453a25*/
    v8[2] = 2; /*0x453a2d*/
    v8[3] = 3; /*0x453a35*/
    v8[4] = 4; /*0x453a3d*/
    v8[5] = 5; /*0x453a45*/
    do /*0x453a7e*/
    {
      if ( 0x10 * v8[v3] + v5 != 0xFFFFFFB4 ) /*0x453a5d*/
      {
        v6 = *(_DWORD *)(0x10 * v8[v3] + v5 + 0x4C); /*0x453a5f*/
        if ( v6 ) /*0x453a63*/
          v4 = sub_4521D0((int)this, *(_DWORD *)(v6 + 0xC)) + 0x1003F * v4; /*0x453a76*/
      }
      ++v3; /*0x453a78*/
    }
    while ( v3 < 6 ); /*0x453a7e*/
  }
  return v4; /*0x453a82*/
}
