void __stdcall NiT_DeletePointerNode(unsigned int a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  FormHeapFree(a1);
}
