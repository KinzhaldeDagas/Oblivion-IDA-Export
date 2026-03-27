int sub_663FC0()
{
  int result; // eax

  result = FormHeapAlloc(0xCu);
  *(_BYTE *)(result + 8) = 0;
  return result;
}
