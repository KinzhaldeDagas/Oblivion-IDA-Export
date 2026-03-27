// positive sp value has been detected, the output may be wrong!
int __userpurge sub_6F7376@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4, int a5)
{
  rsize_t v6; // [esp-20h] [ebp-20h]
  const void *v7; // [esp-18h] [ebp-18h]
  rsize_t v8; // [esp-14h] [ebp-14h]
  int v9; // [esp-4h] [ebp-4h]
  int v10; // [esp-4h] [ebp-4h]

  memcpy_s(**(void ***)(a2 + 0x24), v6, v7, v8);
  **(_DWORD **)(a2 + 0x34) -= a3;
  v10 = a3 + v9;
  **(_DWORD **)(a2 + 0x24) += a3;
  if ( a1 - a3 > 0 )
    JUMPOUT(0x6F7360);
  return v10;
}
