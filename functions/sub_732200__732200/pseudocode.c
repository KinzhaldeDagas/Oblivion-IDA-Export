// MoonSugarEffect decode: visible-array grow helper. Resizes pointer array and preserves current count; OnVisible grows capacity by capacity+grow field.
void __thiscall sub_732200(const void **this, unsigned int a3)
{
  int v2; // edi
  const void *v4; // edi
  void *v5; // eax
  int v6; // esi
  size_t v7; // [esp-8h] [ebp-Ch]

  if ( (const void *)a3 != *(this + 2) )
  {
    if ( a3 < (unsigned int)*(this + 1) ) /*0x73220f*/
      *(this + 1) = (const void *)a3; /*0x732211*/
    HIDWORD(v7) = v2; /*0x732216*/
    v4 = *this; /*0x732217*/
    *(this + 2) = (const void *)a3; /*0x732219*/
    if ( a3 )
    {
      v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
      *this = v5; /*0x732234*/
      v6 = (int)*(this + 1); /*0x732236*/
      if ( v6 ) /*0x73223e*/
      {
        LODWORD(v7) = 4 * v6; /*0x732247*/
        memcpy(v5, v4, v7); /*0x73224a*/
        FormHeapFree((unsigned int)v4); /*0x732253*/
        return; /*0x73225d*/
      }
    }
    else
    {
      *this = 0; /*0x732260*/
    }
    FormHeapFree((unsigned int)v4); /*0x732267*/
  }
}
