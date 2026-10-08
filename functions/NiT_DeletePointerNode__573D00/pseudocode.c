void __stdcall NiT_DeletePointerNode(unsigned int a1)
{
  *(_DWORD *)(a1 + 8) = 0; /*0x573d05*/
  FormHeapFree(a1); /*0x573d0c*/
}
