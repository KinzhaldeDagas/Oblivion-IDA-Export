int __thiscall sub_8CDB00(const void **this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // ecx
  const void **v6; // esi

  result = sub_88D780(this, a2); /*0x8cdb09*/
  if ( !result ) /*0x8cdb10*/
  {
    v4 = (int)*(this + 0x26); /*0x8cdb12*/
    v5 = (int)*(this + 0x25); /*0x8cdb18*/
    v6 = this + 0x24; /*0x8cdb1e*/
    result = v4 & 0x3FFFFFFF; /*0x8cdb24*/
    if ( v5 == result ) /*0x8cdb2b*/
      result = sub_8A6EE0(v6, 4); /*0x8cdb30*/
    *((_DWORD *)*v6 + (_DWORD)v6[1]) = a2; /*0x8cdb3d*/
    v6[1] = (char *)v6[1] + 1; /*0x8cdb40*/
  }
  return result; /*0x8cdb43*/
}
