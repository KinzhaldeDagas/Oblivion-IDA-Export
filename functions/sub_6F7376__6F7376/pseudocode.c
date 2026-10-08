// positive sp value has been detected, the output may be wrong!
int __userpurge sub_6F7376@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4, int a5)
{
  rsize_t v6; // [esp-20h] [ebp-20h]
  const void *v7; // [esp-18h] [ebp-18h]
  rsize_t v8; // [esp-14h] [ebp-14h]
  int v9; // [esp-4h] [ebp-4h]
  int v10; // [esp-4h] [ebp-4h]

  memcpy_s(**(void ***)(a2 + 0x24), v6, v7, v8); /*0x6f737c*/
  **(_DWORD **)(a2 + 0x34) -= a3; /*0x6f7384*/
  v10 = a3 + v9; /*0x6f7386*/
  **(_DWORD **)(a2 + 0x24) += a3; /*0x6f7394*/
  if ( a1 - a3 > 0 ) /*0x6f73bd*/
    JUMPOUT(0x6F7360); /*0x6f7360*/
  return v10; /*0x6f73c6*/
}
