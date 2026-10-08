int __thiscall sub_43C530(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // esi
  int v5[4]; // [esp-4h] [ebp-10h] BYREF

  v2 = *(this + 6); /*0x43c538*/
  v5[3] = (int)v5; /*0x43c545*/
  v5[0] = a2; /*0x43c549*/
  if ( a2 ) /*0x43c54b*/
    InterlockedIncrement((volatile LONG *)(a2 + 8)); /*0x43c551*/
  sub_43A5F0(*(_DWORD **)(v2 + 0x28), v5[0]); /*0x43c556*/
  result = *(_DWORD *)(v2 + 0xC); /*0x43c55b*/
  v4 = v2 + 0xC; /*0x43c55e*/
  if ( !result ) /*0x43c563*/
  {
    InterlockedIncrement((volatile LONG *)v4); /*0x43c566*/
    return ReleaseSemaphore(*(HANDLE *)(v4 + 8), 1, 0); /*0x43c570*/
  }
  return result; /*0x43c578*/
}
