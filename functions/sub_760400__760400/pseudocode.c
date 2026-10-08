NiD3DPass **__thiscall sub_760400(NiD3DPass **this, int a2)
{
  NiD3DPass *v2; // edi
  unsigned int v4; // ecx
  int v5; // eax

  v2 = 0; /*0x760407*/
  *(this + 1) = (NiD3DPass *)a2; /*0x76040d*/
  *(this + 2) = 0; /*0x760410*/
  if ( a2 )
  {
    v4 = (0x64 * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x64 * a2;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x76043e*/
    {
      v2 = (NiD3DPass *)(v5 + 4); /*0x760446*/
      *(_DWORD *)v5 = a2; /*0x76044c*/
      sub_401080((void *)(v5 + 4), 0x64, a2, (void *(__thiscall *)(void *))NiD3DPass_NiD3DPass); /*0x76044e*/
    }
  }
  *this = v2; /*0x760453*/
  return this; /*0x760456*/
}
