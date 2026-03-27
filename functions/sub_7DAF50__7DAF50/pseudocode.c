unsigned int __userpurge sub_7DAF50@<eax>(unsigned __int16 *this@<ecx>, char *a2, void *Src, size_t Size)
{
  char *v5; // eax
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  size_t v10; // [esp-4h] [ebp-20h]

  v5 = (char *)FormHeapAlloc(0x108u);
  if ( v5 )
  {
    LODWORD(v10) = Size;
    v6 = sub_7DAB00(v5, a2, Src, v10);
  }
  else
  {
    v6 = 0;
  }
  v7 = *(this + 5);
  v8 = *(this + 4);
  LODWORD(Size) = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize(this, v7 + *(this + 7));
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this, v7, &Size);
}
