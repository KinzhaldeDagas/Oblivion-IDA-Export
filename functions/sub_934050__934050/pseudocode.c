char *__thiscall sub_934050(char *this, int a2)
{
  char *result; // eax
  char *v3; // ecx
  int v4; // edi

  result = this;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10);
  *((_WORD *)this + 0x10) = *(_WORD *)(a2 + 0x20);
  v3 = this + 0x22;
  v4 = 0xE;
  do
  {
    *v3 = v3[a2 - (_DWORD)result];
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
