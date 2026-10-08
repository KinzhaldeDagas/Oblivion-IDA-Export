int sub_585F00()
{
  int v0; // eax
  int v1; // esi

  v0 = FormHeapAlloc(0x10u); /*0x585f04*/
  if ( v0 ) /*0x585f10*/
  {
    *(_DWORD *)(v0 + 8) = 0; /*0x585f12*/
    *(_WORD *)(v0 + 0xC) = 0; /*0x585f15*/
    *(_WORD *)(v0 + 0xE) = 0; /*0x585f19*/
    v1 = v0; /*0x585f1d*/
  }
  else
  {
    v1 = 0; /*0x585f21*/
  }
  FormHeapFree(*(_DWORD *)(v1 + 8)); /*0x585f27*/
  *(_DWORD *)(v1 + 8) = 0; /*0x585f2f*/
  *(_WORD *)(v1 + 0xE) = 0; /*0x585f32*/
  *(_WORD *)(v1 + 0xC) = 0; /*0x585f36*/
  return v1; /*0x585f3a*/
}
