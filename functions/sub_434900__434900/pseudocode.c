char *__cdecl sub_434900(char *Dst, rsize_t SizeInBytes)
{
  strcpy_s(Dst, SizeInBytes, (const char *)HIDWORD(SizeInBytes));
  return Dst;
}
