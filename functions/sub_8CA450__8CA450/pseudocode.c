int __thiscall sub_8CA450(const void **this, int a2, int a3, int a4)
{
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int result; // eax
  int i; // edi
  int v10; // [esp-8h] [ebp-18h]

  v5 = this + 9;
  if ( *(this + 0xA) == (const void *)((unsigned int)*(this + 0xB) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 9, 8);
  v6 = (int)*(this + 0xA);
  v7 = (_DWORD *)(*v5 + 8 * v6);
  *(this + 0xA) = (const void *)(v6 + 1);
  *v7 = a2;
  v7[1] = a3;
  result = (int)*(this + 0xD);
  for ( i = 0; i < result; ++i )
  {
    v10 = 4 * i;
    LOBYTE(v10) = 1;
    (*((void (__cdecl **)(int, int, int, _DWORD))*(this + 0xC) + i))(a2, a3, v10, *((_DWORD *)*(this + 0xF) + i));
    result = (int)*(this + 0xD);
  }
  return result;
}
