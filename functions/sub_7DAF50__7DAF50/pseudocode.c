unsigned int __userpurge sub_7DAF50@<eax>(unsigned __int16 *this@<ecx>, char *a2, void *Src, size_t Size)
{
  char *v5; // eax
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  size_t v10; // [esp-4h] [ebp-20h]

  v5 = (char *)FormHeapAlloc(0x108u); /*0x7daf7a*/
  if ( v5 ) /*0x7daf90*/
  {
    LODWORD(v10) = Size; /*0x7daf9a*/
    v6 = sub_7DAB00(v5, a2, Src, v10); /*0x7dafa3*/
  }
  else
  {
    v6 = 0; /*0x7dafaa*/
  }
  v7 = *(this + 5); /*0x7dafac*/
  v8 = *(this + 4); /*0x7dafb0*/
  LODWORD(Size) = v6; /*0x7dafbe*/
  if ( v7 >= v8 ) /*0x7dafc2*/
    NiTArray_SetSize(this, v7 + *(this + 7)); /*0x7dafcd*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this, v7, &Size); /*0x7dafdf*/
}
