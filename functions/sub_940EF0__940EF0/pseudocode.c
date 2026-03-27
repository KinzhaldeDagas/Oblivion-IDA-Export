const char *__thiscall sub_940EF0(int *this, const char *a2)
{
  const char *v2; // edi
  char **v4; // ebx
  char *v5; // edi
  int v6; // ecx
  int v7; // eax
  int *v8; // esi

  v2 = a2;
  v4 = (char **)(this + 0xB);
  if ( sub_942B00(this + 0xB, a2, &a2) )
  {
    v5 = sub_8B18F0(v2);
    a2 = (const char *)*(this + 9);
    sub_9429D0(v4, v5, (int)a2);
    v6 = *(this + 0xA);
    v7 = *(this + 9);
    v8 = this + 8;
    if ( v7 == (v6 & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v8, 4);
    *(_DWORD *)(*v8 + 4 * v8[1]++) = v5;
  }
  return a2;
}
