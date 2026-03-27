void *__cdecl calloc(size_t NumOfElements, size_t SizeOfElements)
{
  int v2; // ebx
  int v3; // esi

  return (void *)_calloc_impl(v2, v3, NumOfElements, HIDWORD(NumOfElements));
}
