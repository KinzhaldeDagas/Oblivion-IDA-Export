int __thiscall sub_9461B0(void **this)
{
  int v2; // edi
  int result; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  void **v6; // esi

  sub_918440(*(this + 3), 0xD); /*0x9461ba*/
  sub_9181B0((_DWORD **)*(this + 3), 0x20); /*0x9461c4*/
  sub_918460(*(this + 3), (char)unk_BA8788, 0); /*0x9461d3*/
  sub_9181B0((_DWORD **)*(this + 3), dword_B2FDE4); /*0x9461e3*/
  sub_9181B0((_DWORD **)*(this + 3), BYTE1(dword_B2FDE4)); /*0x9461f4*/
  sub_9181B0((_DWORD **)*(this + 3), BYTE2(dword_B2FDE4)); /*0x946205*/
  sub_9181B0((_DWORD **)*(this + 3), HIBYTE(dword_B2FDE4)); /*0x946215*/
  v2 = (int)*(this + 9); /*0x94621a*/
  result = *(_DWORD *)(v2 + 0x28); /*0x94621d*/
  v4 = (_DWORD *)(v2 + 0x24); /*0x946220*/
  v5 = 0; /*0x946223*/
  if ( result > 0 ) /*0x946227*/
  {
    v6 = this + 0xFFFFFFFE; /*0x946229*/
    do /*0x94624a*/
    {
      sub_946130(v6, *(_DWORD *)(*v4 + 8 * v5), *(_DWORD **)(*v4 + 8 * v5 + 4)); /*0x94623f*/
      result = v4[1]; /*0x946244*/
      ++v5; /*0x946247*/
    }
    while ( v5 < result ); /*0x94624a*/
  }
  return result; /*0x94624c*/
}
