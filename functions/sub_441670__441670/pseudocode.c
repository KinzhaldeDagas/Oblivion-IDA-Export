void __thiscall sub_441670(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  if ( a2 ) /*0x44167a*/
  {
    v3 = (_DWORD *)*(this + 0x22); /*0x44167c*/
    if ( v3 ) /*0x441684*/
    {
      v5 = (_DWORD *)*(this + 0x22); /*0x4416b5*/
      while ( *v5 != a2 ) /*0x4416b9*/
      {
        v5 = (_DWORD *)v5[1]; /*0x4416bb*/
        if ( !v5 ) /*0x4416c0*/
        {
          BSSimpleList_PushFront(v3, a2); /*0x4416c3*/
          return; /*0x4416c3*/
        }
      }
    }
    else
    {
      v4 = (_DWORD *)FormHeapAlloc(8u); /*0x441688*/
      if ( v4 ) /*0x441692*/
      {
        *v4 = a2; /*0x441694*/
        v4[1] = 0; /*0x441696*/
        *(this + 0x22) = v4; /*0x44169d*/
      }
      else
      {
        *(this + 0x22) = 0; /*0x4416aa*/
      }
    }
  }
}
