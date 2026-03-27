int __thiscall sub_8BAB10(_BYTE *this, int a2, int a3)
{
  int v4; // edx
  int result; // eax
  int v6; // edi
  HANDLE *v7; // ebx

  *(this + 0x10) = 1;
  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a2;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 0x10))(*(_DWORD *)(v4 + 8));
  result = *((_DWORD *)this + 0x41);
  v6 = 0;
  if ( result > 0 )
  {
    v7 = (HANDLE *)(this + 0x24);
    do
    {
      ReleaseSemaphore_0(v7, 1);
      result = *((_DWORD *)this + 0x41);
      ++v6;
      v7 += 0xA;
    }
    while ( v6 < result );
  }
  return result;
}
