int __userpurge sub_6F72A0@<eax>(_DWORD **this@<ecx>, int a2@<ebx>, char *Dst, rsize_t DstSize, int a5)
{
  int v5; // ebp
  int v6; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  rsize_t v13; // [esp-10h] [ebp-20h]
  rsize_t v14; // [esp-4h] [ebp-14h]
  int v15; // [esp+Ch] [ebp-4h]

  v5 = HIDWORD(DstSize); /*0x6f72a2*/
  v6 = 0; /*0x6f72a7*/
  v15 = 0; /*0x6f72ae*/
  if ( SHIDWORD(DstSize) <= 0 ) /*0x6f72b2*/
    return 0; /*0x6f732c*/
  LODWORD(v14) = a2; /*0x6f72b4*/
  do /*0x6f731f*/
  {
    v9 = sub_6F6F00(this); /*0x6f72c2*/
    if ( v9 <= 0 ) /*0x6f72c9*/
    {
      v11 = ((int (__thiscall *)(_DWORD **))(*this)[5])(this); /*0x6f7307*/
      if ( v11 == 0xFFFFFFFF ) /*0x6f730c*/
        return v6; /*0x6f730c*/
      ++v6; /*0x6f730e*/
      *Dst++ = v11; /*0x6f7311*/
      v15 = v6; /*0x6f7316*/
      --v5; /*0x6f731a*/
    }
    else
    {
      v10 = v9; /*0x6f72cd*/
      if ( v5 < v9 ) /*0x6f72cf*/
        v10 = v5; /*0x6f72d1*/
      HIDWORD(v13) = **(this + 8); /*0x6f72dd*/
      LODWORD(v13) = DstSize; /*0x6f72de*/
      memcpy_s(Dst, v13, (const void *)v10, v14); /*0x6f72e0*/
      **(this + 0xC) -= v10; /*0x6f72e8*/
      v15 += v10; /*0x6f72ea*/
      Dst += v10; /*0x6f72f1*/
      v5 -= v10; /*0x6f72f3*/
      **(this + 8) += v10; /*0x6f72f8*/
      v6 = v15; /*0x6f72fa*/
    }
  }
  while ( v5 > 0 ); /*0x6f731f*/
  return v6; /*0x6f7322*/
}
