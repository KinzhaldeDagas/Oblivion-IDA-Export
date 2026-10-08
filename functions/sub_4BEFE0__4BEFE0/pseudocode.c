void __thiscall sub_4BEFE0(char *this, char *a2)
{
  char *v2; // esi
  char *v4; // eax
  char *v5; // eax

  v2 = a2; /*0x4befe1*/
  if ( a2 ) /*0x4befea*/
  {
    while ( v2 != this ) /*0x4beff2*/
    {
      v4 = this + 0x20; /*0x4beff7*/
      if ( this != (char *)0xFFFFFFE0 ) /*0x4beffb*/
      {
        while ( *(char **)v4 != v2 ) /*0x4bf002*/
        {
          v4 = *((char **)v4 + 1); /*0x4bf004*/
          if ( !v4 ) /*0x4bf009*/
            goto LABEL_6; /*0x4bf009*/
        }
        return; /*0x4bf002*/
      }
LABEL_6:
      BSSimpleList_PushFront((_DWORD *)this + 8, (int)v2); /*0x4bf00b*/
      v5 = this; /*0x4bf011*/
      this = v2; /*0x4bf013*/
      v2 = v5; /*0x4bf015*/
      if ( !v5 ) /*0x4bf019*/
        return; /*0x4bf019*/
    }
  }
}
