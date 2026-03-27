void *__thiscall sub_438EB0(void *this, int a2)
{
  void *result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edx

  result = (void *)FormHeapAlloc(0x24u);
  if ( !result )
    return 0;
  v4 = *((_DWORD *)this + 1) + 0xC * a2 + 8;
  v5 = *((_DWORD *)this + 1) + 0xC * a2 + 4;
  v6 = *((_DWORD *)this + 1);
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = 0;
  *((_DWORD *)result + 2) = v5;
  *((_DWORD *)result + 3) = v4;
  *(_DWORD *)result = this;
  *((_DWORD *)result + 1) = 0xC * a2 + v6;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 7) = 0;
  *((_DWORD *)result + 8) = 0;
  return result;
}
