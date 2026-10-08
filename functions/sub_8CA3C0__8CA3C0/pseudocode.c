int __thiscall sub_8CA3C0(const void **this, const char *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  unsigned int v5; // edi
  signed int *v6; // eax
  int *v7; // edi
  int result; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 4, 0x13); /*0x8ca3d1*/
  v4 = v3; /*0x8ca3d4*/
  if ( v3 ) /*0x8ca3d8*/
  {
    if ( a2 ) /*0x8ca3e1*/
    {
      v5 = sub_8B1860(a2); /*0x8ca3e9*/
      v6 = sub_8B1950(v5); /*0x8ca3ec*/
      *v4 = v6 + 3; /*0x8ca3f8*/
      sub_8B1890(v6 + 3, a2, v5 + 1); /*0x8ca3fa*/
    }
    else
    {
      ++unk_BA7FC0; /*0x8ca405*/
      *v3 = &unk_BA7FC4; /*0x8ca40b*/
    }
  }
  else
  {
    v4 = 0; /*0x8ca414*/
  }
  v7 = (int *)(this + 0x13); /*0x8ca41c*/
  if ( *(this + 0x14) == (const void *)((unsigned int)*(this + 0x15) & 0x3FFFFFFF) ) /*0x8ca427*/
    sub_8A6EE0(this + 0x13, 4); /*0x8ca42c*/
  result = *v7; /*0x8ca437*/
  *(_DWORD *)(*v7 + 4 * (_DWORD)*(this + 0x14)) = v4; /*0x8ca439*/
  *(this + 0x14) = (char *)*(this + 0x14) + 1; /*0x8ca43c*/
  return result; /*0x8ca43f*/
}
