// Verified pool block ownership 2026-09-30: B0686C currently holds 2048 records per allocation; allocation size is 12*capacity with overflow saturation. First record is a block-chain header linked through global B33EA8, while free nodes begin at block+12. Thus the observed block supplies 2047 payload nodes. Native list reservations must use this pool, not inject separately allocated 12-byte heap objects. Pool block/free/lock addresses are B33EA8/B33EAC/B33F00 with owner/depth B33F78/B33F7C. No renderer resources are allocated here.
_DWORD *NiTListNodePool_Refill()
{
  int v0; // eax
  int v1; // ecx
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  _DWORD *result; // eax

  v0 = FormHeapAlloc(
         (0xC * (unsigned __int64)(unsigned int)g_niListNodeBlockCapacity) >> 0x20 != 0
       ? 0xFFFFFFFF
       : 0xC * g_niListNodeBlockCapacity);
  v1 = 3 * g_niListNodeBlockCapacity; /*0x44d791*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1C] = v0; /*0x44d794*/
  *(_DWORD *)(v0 + 4 * v1 - 0xC) = 0; /*0x44d79c*/
  v2 = 1; /*0x44d7a4*/
  v3 = 0xC; /*0x44d7a9*/
  do /*0x44d7d0*/
  {
    *(_DWORD *)(v3 + *(_DWORD *)&MEMORY[0xB33E90][0x1C]) = v3 + *(_DWORD *)&MEMORY[0xB33E90][0x1C] + 0xC; /*0x44d7ba*/
    v4 = v2++; /*0x44d7c3*/
    v3 += 0xC; /*0x44d7cb*/
  }
  while ( v4 < g_niListNodeBlockCapacity - 2 ); /*0x44d7d0*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x18] ) /*0x44d7d2*/
  {
    **(_DWORD **)&MEMORY[0xB33E90][0x1C] = *(_DWORD *)&MEMORY[0xB33E90][0x18]; /*0x44d7e2*/
    v5 = *(_DWORD *)&MEMORY[0xB33E90][0x1C]; /*0x44d7e4*/
    *(_DWORD *)&MEMORY[0xB33E90][0x18] = *(_DWORD *)&MEMORY[0xB33E90][0x1C]; /*0x44d7e9*/
    result = (_DWORD *)(v5 + 0xC); /*0x44d7ee*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1C] = result; /*0x44d7f1*/
  }
  else
  {
    result = *(_DWORD **)&MEMORY[0xB33E90][0x1C]; /*0x44d7f7*/
    *(_DWORD *)&MEMORY[0xB33E90][0x18] = *(_DWORD *)&MEMORY[0xB33E90][0x1C]; /*0x44d7fc*/
    *result = 0; /*0x44d801*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1C] += 0xC; /*0x44d807*/
  }
  return result; /*0x44d7f6*/
}
