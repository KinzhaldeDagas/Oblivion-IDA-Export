int __thiscall sub_6CF560(char *this, int a2)
{
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  unsigned __int8 v6; // bl
  bool v7; // zf
  char *v8; // esi

  sub_6CD720((NiRenderer *)this, a2); /*0x6cf58b*/
  v3 = (unsigned __int8)*(this + 0xD); /*0x6cf590*/
  v4 = (void *)FormHeapAlloc((0x68 * (unsigned __int64)(unsigned __int8)*(this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v3);
  v5 = v4; /*0x6cf5ac*/
  if ( v4 ) /*0x6cf5bf*/
    sub_401080(v4, 0x68, v3, (void *(__thiscall *)(void *))sub_6C3730); /*0x6cf5ca*/
  else
    v5 = 0; /*0x6cf5d1*/
  v6 = 0; /*0x6cf5d3*/
  v7 = *(this + 0xD) == 0; /*0x6cf5d5*/
  *((_DWORD *)this + 0x14) = v5; /*0x6cf5e0*/
  if ( !v7 ) /*0x6cf5e3*/
  {
    do /*0x6cf60f*/
    {
      v8 = (char *)(*((_DWORD *)this + 0x14) + 0x68 * v6); /*0x6cf5eb*/
      sub_6CB990(v8 + 4, a2); /*0x6cf5f2*/
      sub_6CB990(v8 + 0x24, a2); /*0x6cf5fb*/
      sub_711B90(v8 + 0x44, a2); /*0x6cf604*/
      ++v6; /*0x6cf609*/
    }
    while ( v6 < (unsigned __int8)*(this + 0xD) ); /*0x6cf60f*/
  }
  return sub_6CB990(this + 0x30, a2); /*0x6cf626*/
}
