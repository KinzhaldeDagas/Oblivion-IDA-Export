BOOL __cdecl _callnewh(int a1)
{
  int (__cdecl *v1)(int); // eax

  v1 = (int (__cdecl *)(int))_decode_pointer((void *)dword_BAA5C4);
  return v1 && v1(a1);
}
