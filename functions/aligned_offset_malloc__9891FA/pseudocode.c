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

  v6 = HIDWORD(Size); /*0x9891fa*/
  if ( ((HIDWORD(Size) - 1) & HIDWORD(Size)) != 0 ) /*0x989203*/
  {
    *_errno() = 0x16; /*0x98920a*/
    _invalid_parameter(v3, v4, v5); /*0x989217*/
    return 0; /*0x98921f*/
  }
  else if ( (_DWORD)Alignment && (unsigned int)Alignment >= (unsigned int)Size ) /*0x989234*/
  {
    *_errno() = 0x16; /*0x989240*/
    _invalid_parameter(Alignment, v4, 0); /*0x989246*/
    return 0; /*0x98924e*/
  }
  else
  {
    if ( HIDWORD(Size) <= 4 ) /*0x989255*/
      v6 = 4; /*0x989259*/
    HIDWORD(v11) = v4; /*0x98925e*/
    v8 = v6 - 1; /*0x98925f*/
    v9 = -(int)Alignment & 3; /*0x989262*/
    LODWORD(v11) = v9 + Size + v6 - 1 + 4; /*0x98926c*/
    result = malloc(v11); /*0x98926d*/
    v10 = result; /*0x989273*/
    if ( result ) /*0x989277*/
    {
      result = (void *)((~v8 & ((unsigned int)result + v9 + v8 + Alignment + 4)) - Alignment); /*0x989286*/
      *(_DWORD *)((char *)result - v9 - 4) = v10; /*0x98928c*/
    }
  }
  return result; /*0x989221*/
}
