BOOL __thiscall sub_494F30(unsigned int *this)
{
  BOOL (__stdcall *v2)(HWND); // edi
  BOOL result; // eax

  FormHeapFree(*(this + 7));
  SendMessageA((HWND)*(this + 3), 0x1101, 0, 0xFFFF0000);
  ImageList_Destroy((HIMAGELIST)*(this + 5));
  v2 = DestroyWindow;
  DestroyWindow((HWND)*(this + 3));
  result = v2((HWND)*(this + 2));
  dword_B3CC34 = 0;
  dword_B3CC30 = 0;
  return result;
}
