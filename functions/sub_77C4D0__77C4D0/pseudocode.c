char __userpurge sub_77C4D0@<al>(_DWORD **this@<ecx>, va_list a2@<edi>, char *ArgList, int a4)
{
  size_t v6; // [esp-10h] [ebp-11Ch]
  char DstBuf[260]; // [esp+4h] [ebp-108h] BYREF

  HIDWORD(v6) = "%s%d";
  LODWORD(v6) = 0x104;
  sub_6C5D40(a2, DstBuf, v6, ArgList, a4);
  return NiTMap_RemoveAt(*(this + 6), (int)DstBuf);
}
