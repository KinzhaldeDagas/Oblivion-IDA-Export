BOOL __thiscall sub_494F30(unsigned int *this)
{
  BOOL (__stdcall *v2)(HWND); // edi
  BOOL result; // eax

  FormHeapFree(*(this + 7)); /*0x494f38*/
  SendMessageA((HWND)*(this + 3), 0x1101, 0, 0xFFFF0000); /*0x494f50*/
  ImageList_Destroy((HIMAGELIST)*(this + 5)); /*0x494f5a*/
  v2 = DestroyWindow; /*0x494f63*/
  DestroyWindow((HWND)*(this + 3)); /*0x494f6a*/
  result = v2((HWND)*(this + 2)); /*0x494f70*/
  unk_B3CC34 = 0; /*0x494f73*/
  unk_B3CC30 = 0; /*0x494f7d*/
  return result; /*0x494f72*/
}
