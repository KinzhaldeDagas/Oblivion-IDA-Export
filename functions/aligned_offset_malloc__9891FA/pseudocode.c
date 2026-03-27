void *__cdecl _aligned_offset_malloc(size_t Size, size_t Alignment, size_t Offset)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  void *result; // eax
  int v8; // edi
  int v9; // esi
  void *v10; // ecx
  size_t v11; // [esp-10h] [ebp-10h]

  v6 = HIDWORD(Size);
  if ( ((HIDWORD(Size) - 1) & HIDWORD(Size)) != 0 )
  {
    *_errno() = 0x16;
    _invalid_parameter(v3, v4, v5);
    return 0;
  }
  else if ( (_DWORD)Alignment && (unsigned int)Alignment >= (unsigned int)Size )
  {
    *_errno() = 0x16;
    _invalid_parameter(Alignment, v4, 0);
    return 0;
  }
  else
  {
    if ( HIDWORD(Size) <= 4 )
      v6 = 4;
    HIDWORD(v11) = v4;
    v8 = v6 - 1;
    v9 = -(int)Alignment & 3;
    LODWORD(v11) = v9 + Size + v6 - 1 + 4;
    result = malloc(v11);
    v10 = result;
    if ( result )
    {
      result = (void *)((~v8 & ((unsigned int)result + v9 + v8 + Alignment + 4)) - Alignment);
      *(_DWORD *)((char *)result - v9 - 4) = v10;
    }
  }
  return result;
}
