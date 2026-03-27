int NiT_NewPointerNode()
{
  int result; // eax

  result = FormHeapAlloc(0xCu);
  *(_DWORD *)(result + 8) = 0;
  return result;
}
