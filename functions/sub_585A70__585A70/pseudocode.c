int __thiscall sub_585A70(_DWORD *this, const char **a2)
{
  int v3; // edi
  int result; // eax

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x585a7b*/
  BSStringT_Set((BSStringT *)(v3 + 8), *a2, 0); /*0x585a89*/
  *(_DWORD *)(v3 + 4) = 0; /*0x585a8e*/
  *(_DWORD *)v3 = *(this + 1); /*0x585a98*/
  result = *(this + 1); /*0x585a9a*/
  if ( result ) /*0x585a9f*/
  {
    *(_DWORD *)(result + 4) = v3; /*0x585aa1*/
    ++*(this + 3); /*0x585aa4*/
  }
  else
  {
    ++*(this + 3); /*0x585ab0*/
    *(this + 2) = v3; /*0x585ab4*/
  }
  *(this + 1) = v3; /*0x585aa8*/
  return result; /*0x585aab*/
}
