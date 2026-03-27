void *__cdecl _recalloc(void *Memory, size_t Count, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-8h]

  if ( (_DWORD)Count && 0xFFFFFFE0 / (unsigned int)Count < HIDWORD(Count) )
  {
    *_errno() = 0xC;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0;
  }
  else
  {
    LODWORD(v4) = HIDWORD(Count) * Count;
    return realloc(Memory, v4);
  }
}
