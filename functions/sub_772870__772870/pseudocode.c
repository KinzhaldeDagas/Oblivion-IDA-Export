int *__thiscall sub_772870(int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v2 = 0; /*0x772877*/
  *(this + 1) = a2; /*0x77287d*/
  *(this + 2) = 0; /*0x772880*/
  if ( a2 )
  {
    v4 = (0x14 * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x7728ae*/
    {
      v2 = (int)(v5 + 1); /*0x7728b6*/
      *v5 = a2; /*0x7728bc*/
      sub_401080(v5 + 1, 0x14, a2, (void *(__thiscall *)(void *))NiD3DRenderStateGroup_InitializeEmpty); /*0x7728be*/
    }
  }
  *this = v2; /*0x7728c3*/
  return this; /*0x7728c6*/
}
