BOOL __cdecl _callnewh(int a1)
{
  int (__cdecl *v1)(int); // eax

  v1 = (int (__cdecl *)(int))_decode_pointer((void *)dword_BA9E10[0x1ED]); /*0x98d7a1*/
  return v1 && v1(a1); /*0x98d7b9*/
}
