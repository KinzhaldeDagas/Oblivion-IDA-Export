int __userpurge sub_77C450@<eax>(_DWORD *this@<ecx>, va_list a2@<edi>, char *ArgList, int a4)
{
  char v5; // al
  size_t v7; // [esp-10h] [ebp-120h]
  int v8; // [esp+4h] [ebp-10Ch] BYREF
  char DstBuf[260]; // [esp+8h] [ebp-108h] BYREF

  HIDWORD(v7) = "%s%d"; /*0x77c477*/
  LODWORD(v7) = 0x104; /*0x77c480*/
  v8 = 0; /*0x77c486*/
  sub_6C5D40(a2, DstBuf, v7, ArgList, a4); /*0x77c48e*/
  v5 = NiTMap_GetAt((_DWORD *)*(this + 6), (int)DstBuf, &v8); /*0x77c4a3*/
  return v5 != 0 ? v8 : 0;
}
