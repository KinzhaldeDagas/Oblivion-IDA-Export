int __thiscall sub_8D87E0(char *this)
{
  int result; // eax
  int v3; // ecx

  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x10)); /*0x8d87e7*/
  result = *((_DWORD *)this + 2); /*0x8d87ed*/
  if ( result >= 0 ) /*0x8d87f2*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8d8804*/
    if ( !v3 ) /*0x8d880c*/
      v3 = unk_BA7D9C; /*0x8d880e*/
    return sub_8A75D0(v3, *(_DWORD **)this, 0x14 * (result & 0x3FFFFFFF), 0x14); /*0x8d8825*/
  }
  return result; /*0x8d882a*/
}
