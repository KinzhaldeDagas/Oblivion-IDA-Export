void *__cdecl _recalloc(void *Memory, size_t Count, size_t Size)
{
  int v3; // ebx
  int v4; // edi
  size_t v6; // [esp-4h] [ebp-8h]

  if ( (_DWORD)Count && 0xFFFFFFE0 / (unsigned int)Count < HIDWORD(Count) ) /*0x981a7b*/
  {
    *_errno() = 0xC; /*0x981a87*/
    _invalid_parameter(v3, v4, 0); /*0x981a8d*/
    return 0; /*0x981a95*/
  }
  else
  {
    LODWORD(v6) = HIDWORD(Count) * Count; /*0x981a9e*/
    return realloc(Memory, v6); /*0x981aa3*/
  }
}
