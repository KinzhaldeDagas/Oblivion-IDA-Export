unsigned int __thiscall sub_461FA0(unsigned int **this, int a2)
{
  unsigned int result; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // esi
  unsigned int *v6; // esi
  unsigned int v7; // edi

  result = (unsigned int)*(this + 6) >> 0xC; /*0x461fc9*/
  if ( ((unsigned int)*(this + 6) & 0x1000) != 0 ) /*0x461fce*/
  {
    if ( !*(this + 0x2B) ) /*0x461fd6*/
    {
      v4 = (unsigned int *)FormHeapAlloc(0x18u); /*0x461fe0*/
      v5 = v4; /*0x461fe5*/
      if ( v4 ) /*0x461ff4*/
      {
        v4[2] = 0x4E20; /*0x461ffd*/
        *v4 = (unsigned int)&NiTLargeArray<TESForm *>::`vftable'; /*0x46200a*/
        v4[5] = 0x7D0; /*0x462010*/
        v4[3] = 0; /*0x462017*/
        v4[4] = 0; /*0x46201a*/
        v4[1] = FormHeapAlloc(0x13880u); /*0x46202a*/
      }
      else
      {
        v5 = 0; /*0x46202f*/
      }
      *(this + 0x2B) = v5; /*0x462039*/
    }
    v6 = *(this + 0x2B); /*0x46203f*/
    v7 = v6[3]; /*0x462045*/
    if ( v7 >= v6[2] ) /*0x46204b*/
      NiTLargeArray_Resize32(v6, v7 + v6[5]); /*0x462055*/
    return sub_446C50(v6, v7, &a2); /*0x462062*/
  }
  return result; /*0x462067*/
}
