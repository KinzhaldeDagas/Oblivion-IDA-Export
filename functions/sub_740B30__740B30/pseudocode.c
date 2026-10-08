unsigned int *__thiscall sub_740B30(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x740b57*/
  v4 = (unsigned int *)v3; /*0x740b5c*/
  if ( v3 ) /*0x740b6f*/
  {
    sub_721350(v3); /*0x740b73*/
    *v4 = (unsigned int)&NiIntegersExtraData::`vftable'; /*0x740b78*/
    v4[4] = 0; /*0x740b7e*/
    v4[3] = 0; /*0x740b85*/
  }
  else
  {
    v4 = 0; /*0x740b8e*/
  }
  sub_740990(this, v4, a2); /*0x740ba0*/
  return v4; /*0x740ba7*/
}
