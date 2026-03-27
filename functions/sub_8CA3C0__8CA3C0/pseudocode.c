int __thiscall sub_8CA3C0(const void **this, const char *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  unsigned int v5; // edi
  signed int *v6; // eax
  int *v7; // edi
  int result; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 4, 0x13);
  v4 = v3;
  if ( v3 )
  {
    if ( a2 )
    {
      v5 = sub_8B1860(a2);
      v6 = sub_8B1950(v5);
      *v4 = v6 + 3;
      sub_8B1890(v6 + 3, a2, v5 + 1);
    }
    else
    {
      ++dword_BA7FC0;
      *v3 = &unk_BA7FC4;
    }
  }
  else
  {
    v4 = 0;
  }
  v7 = (int *)(this + 0x13);
  if ( *(this + 0x14) == (const void *)((unsigned int)*(this + 0x15) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 0x13, 4);
  result = *v7;
  *(_DWORD *)(*v7 + 4 * (_DWORD)*(this + 0x14)) = v4;
  *(this + 0x14) = (char *)*(this + 0x14) + 1;
  return result;
}
