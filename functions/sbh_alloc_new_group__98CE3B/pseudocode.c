unsigned int __cdecl __sbh_alloc_new_group(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // edi
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  DWORD v12; // [esp+0h] [ebp-14h]

  v1 = a1[2]; /*0x98ce43*/
  v2 = a1[4]; /*0x98ce48*/
  v3 = 0; /*0x98ce4c*/
  while ( v1 >= 0 ) /*0x98ce55*/
  {
    v1 *= 2; /*0x98ce50*/
    ++v3; /*0x98ce52*/
  }
  v4 = 0x204 * v3 + v2 + 0x144; /*0x98ce5f*/
  v5 = 0x3F; /*0x98ce6b*/
  do /*0x98ce76*/
  {
    *(_DWORD *)(v4 + 8) = v4; /*0x98ce6c*/
    *(_DWORD *)(v4 + 4) = v4; /*0x98ce6f*/
    v4 += 8; /*0x98ce72*/
    --v5; /*0x98ce75*/
  }
  while ( v5 ); /*0x98ce76*/
  v6 = (_DWORD *)(a1[3] + (v3 << 0xF)); /*0x98ce84*/
  if ( !VirtualAlloc(v6, 0x100000008000uLL, 4u, v12) ) /*0x98ce8d*/
    return 0xFFFFFFFF; /*0x98ce97*/
  v8 = v6 + 0x1C00; /*0x98ce9f*/
  if ( v6 < v6 + 0x1C00 ) /*0x98ceaa*/
  {
    v9 = v6 + 4; /*0x98ceb3*/
    v10 = 8; /*0x98ceb6*/
    do /*0x98ceea*/
    {
      v9[0xFFFFFFFE] = 0xFFFFFFFF; /*0x98ceb7*/
      v9[0x3FB] = 0xFFFFFFFF; /*0x98cebb*/
      *v9 = v9 + 0x3FF; /*0x98cec8*/
      v9[0xFFFFFFFF] = 0xFF0; /*0x98ced0*/
      v9[1] = v9 + 0xFFFFFBFF; /*0x98ced7*/
      v9[0x3FA] = 0xFF0; /*0x98ceda*/
      v9 += 0x400; /*0x98cee4*/
      --v10; /*0x98cee9*/
    }
    while ( v10 ); /*0x98ceea*/
    v8 = v6 + 0x1C00; /*0x98ceec*/
  }
  *(_DWORD *)(0x204 * v3 + v2 + 0x340) = v6 + 3; /*0x98cefa*/
  v6[5] = 0x204 * v3 + v2 + 0x33C; /*0x98cefd*/
  *(_DWORD *)(0x204 * v3 + v2 + 0x344) = v8 + 3; /*0x98cf03*/
  v8[4] = 0x204 * v3 + v2 + 0x33C; /*0x98cf06*/
  *(_DWORD *)(v2 + 4 * v3 + 0x44) = 0; /*0x98cf09*/
  *(_DWORD *)(v2 + 4 * v3 + 0xC4) = 1; /*0x98cf11*/
  if ( (*(_BYTE *)(v2 + 0x43))++ == 0 ) /*0x98cf1f*/
    a1[1] |= 1u; /*0x98cf29*/
  a1[2] &= ~(0x80000000 >> v3); /*0x98cf37*/
  return v3; /*0x98cf3c*/
}
