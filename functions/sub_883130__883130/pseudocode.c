unsigned int __cdecl sub_883130(unsigned int a1)
{
  char v1; // cl
  unsigned int v2; // esi
  unsigned int *v3; // eax
  unsigned int v4; // edi

  v1 = 0; /*0x883135*/
  if ( a1 > 0x80 ) /*0x883142*/
  {
    v2 = 0; /*0x883151*/
    a1 = 0; /*0x883153*/
    v3 = &a1; /*0x883157*/
    v1 = 1; /*0x88315b*/
  }
  else
  {
    v2 = a1; /*0x883144*/
    v3 = (unsigned int *)(4 * a1 + 0xB45088); /*0x883148*/
  }
  v4 = *v3; /*0x883163*/
  if ( (v1 & 1) != 0 ) /*0x883165*/
  {
    if ( v2 ) /*0x883169*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x88316f*/
        (**(void (__thiscall ***)(unsigned int, int))v2)(v2, 1); /*0x883181*/
    }
  }
  return v4; /*0x883188*/
}
