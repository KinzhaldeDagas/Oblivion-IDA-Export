BSShaderProperty *__thiscall sub_85BCE0(BSShaderProperty *this, int a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0x88u); /*0x85bd0a*/
  v4 = 0; /*0x85bd16*/
  if ( v3 ) /*0x85bd1e*/
    v4 = sub_85BBE0(v3); /*0x85bd27*/
  sub_85BC40(this, (int)v4, a2); /*0x85bd39*/
  return v4; /*0x85bd40*/
}
