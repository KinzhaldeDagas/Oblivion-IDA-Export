int __thiscall sub_8BAB10(_BYTE *this, int a2, int a3)
{
  int v4; // edx
  int result; // eax
  int v6; // edi
  HANDLE *v7; // ebx

  *(this + 0x10) = 1; /*0x8bab1b*/
  v4 = *(_DWORD *)this; /*0x8bab1f*/
  *((_DWORD *)this + 1) = a3; /*0x8bab21*/
  *((_DWORD *)this + 2) = a2; /*0x8bab24*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 0x10))(*(_DWORD *)(v4 + 8)); /*0x8bab2d*/
  result = *((_DWORD *)this + 0x41); /*0x8bab30*/
  v6 = 0; /*0x8bab36*/
  if ( result > 0 ) /*0x8bab3a*/
  {
    v7 = (HANDLE *)(this + 0x24); /*0x8bab3d*/
    do /*0x8bab55*/
    {
      ReleaseSemaphore_0(v7, 1); /*0x8bab44*/
      result = *((_DWORD *)this + 0x41); /*0x8bab49*/
      ++v6; /*0x8bab4f*/
      v7 += 0xA; /*0x8bab50*/
    }
    while ( v6 < result ); /*0x8bab55*/
  }
  return result; /*0x8bab58*/
}
