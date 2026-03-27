// positive sp value has been detected, the output may be wrong!
int __thiscall sub_8BABF0(char *this)
{
  int v2; // ebp
  HANDLE *v3; // esi
  int result; // eax
  int i; // esi
  void *v6; // [esp-8h] [ebp-18h]
  DWORD v7; // [esp-4h] [ebp-14h]

  sub_8BAB60((int)this);
  v2 = 0;
  if ( *((int *)this + 0x41) > 0 )
  {
    v3 = (HANDLE *)(this + 0x24);
    do
    {
      *((_BYTE *)v3 + 0xFFFFFFFC) = 1;
      ReleaseSemaphore_0(v3, 1);
      ++v2;
      v3 += 0xA;
    }
    while ( v2 < *((_DWORD *)this + 0x41) );
  }
  result = *((_DWORD *)this + 0x41);
  for ( i = 0; i < result; ++i )
  {
    WaitForSingleObject_0(v6, v7);
    result = *((_DWORD *)this + 0x41);
  }
  return result;
}
