int __thiscall sub_8DB2A0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edx
  int v10; // eax
  int v11; // esi
  _DWORD v13[7]; // [esp+8h] [ebp-28h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  _DWORD *v15; // [esp+28h] [ebp-8h]
  int v16; // [esp+2Ch] [ebp-4h]

  v13[0] = a2; /*0x8db2b3*/
  v13[1] = a3; /*0x8db2bd*/
  v13[4] = a5; /*0x8db2c5*/
  *(_WORD *)(a8 + 4) = 0; /*0x8db2c9*/
  *(_BYTE *)(a8 + 6) = 0; /*0x8db2cd*/
  *(_BYTE *)(a8 + 7) = 1; /*0x8db2d0*/
  v13[6] = a7; /*0x8db2d8*/
  v9 = *(this + 2); /*0x8db2dc*/
  v13[5] = a8; /*0x8db2df*/
  v13[2] = 0; /*0x8db2e9*/
  v15 = this; /*0x8db2ed*/
  v14 = 0; /*0x8db2f1*/
  v16 = a6; /*0x8db2f5*/
  sub_8DC800(a6, v9, (int)v13); /*0x8db2f9*/
  v10 = *(this + 3); /*0x8db2fe*/
  if ( *(_DWORD *)(v10 + 0x98) ) /*0x8db301*/
    v10 = sub_8DBF80(v10, v10, (int)v13); /*0x8db314*/
  v11 = *(this + 4); /*0x8db31c*/
  if ( *(_DWORD *)(v11 + 0x98) ) /*0x8db31f*/
    sub_8DBF80(v10, v11, (int)v13); /*0x8db32d*/
  return v14; /*0x8db339*/
}
