int __thiscall sub_77FE50(_DWORD *this)
{
  int result; // eax
  int *v3; // ecx
  int *v4; // esi
  int v5; // edx

  result = dword_B29FB8[0];
  v3 = dword_B29FB8;
  if ( dword_B29FB8[0] != 0xFFFFFFFF )
  {
    v4 = dword_B29FB8;
    do
    {
      v5 = v3[1];
      *(this + 2 * result + 0x48) = v5;
      *(this + 2 * result + 0x49) = v5;
      (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0x3FE) + 0xE4))(*(this + 0x3FE), *v3, v3[1]);
      result = v4[2];
      v4 += 2;
      v3 = v4;
    }
    while ( result != 0xFFFFFFFF );
  }
  return result;
}
