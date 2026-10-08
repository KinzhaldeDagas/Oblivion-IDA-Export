// positive sp value has been detected, the output may be wrong!
int __thiscall sub_8BABF0(char *this)
{
  int v2; // ebp
  HANDLE *v3; // esi
  int result; // eax
  int i; // esi
  void *v6; // [esp-8h] [ebp-18h]
  DWORD v7; // [esp-4h] [ebp-14h]

  sub_8BAB60((int)this); /*0x8babf6*/
  v2 = 0; /*0x8bac01*/
  if ( *((int *)this + 0x41) > 0 ) /*0x8bac05*/
  {
    v3 = (HANDLE *)(this + 0x24); /*0x8bac07*/
    do /*0x8bac27*/
    {
      *((_BYTE *)v3 + 0xFFFFFFFC) = 1; /*0x8bac13*/
      ReleaseSemaphore_0(v3, 1); /*0x8bac16*/
      ++v2; /*0x8bac21*/
      v3 += 0xA; /*0x8bac22*/
    }
    while ( v2 < *((_DWORD *)this + 0x41) ); /*0x8bac27*/
  }
  result = *((_DWORD *)this + 0x41); /*0x8bac29*/
  for ( i = 0; i < result; ++i ) /*0x8bac33*/
  {
    WaitForSingleObject_0(v6, v7); /*0x8bac3a*/
    result = *((_DWORD *)this + 0x41); /*0x8bac3f*/
  }
  return result; /*0x8bac4a*/
}
