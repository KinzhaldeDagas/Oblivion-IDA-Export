void __thiscall sub_728C00(int this, int a2)
{
  _BYTE *v2; // esi
  int v3; // edx
  int v4; // [esp+4h] [ebp-18h] BYREF
  int v5; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 0x3C) ) /*0x728c06*/
  {
    v2 = *(_BYTE **)(this + 0x34); /*0x728c0c*/
    v5 = 0; /*0x728c11*/
    v7 = 0; /*0x728c15*/
    v4 = 0; /*0x728c19*/
    if ( v2 ) /*0x728c1d*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 0x4C))(v2) ) /*0x728c26*/
      {
        if ( (v2[0x2C] & 1) != 0 ) /*0x728c30*/
        {
          v6 = 0; /*0x728c54*/
          sub_726320((int)v2, 1u, &v4, &v9, &v7, &v8, &v6, &v5); /*0x728c58*/
        }
      }
    }
    v3 = v5; /*0x728c65*/
    *(_DWORD *)a2 = v4; /*0x728c69*/
    *(_DWORD *)(a2 + 4) = v3; /*0x728c6b*/
    *(_BYTE *)(a2 + 8) = 0; /*0x728c6e*/
  }
}
