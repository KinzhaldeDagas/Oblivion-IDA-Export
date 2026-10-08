int __cdecl _fcloseall()
{
  int v0; // ebp
  int i; // edi
  int v2; // esi
  int *v3; // eax
  int v4; // eax
  int v6; // [esp+14h] [ebp-1Ch]

  v6 = 0; /*0x99c8bf*/
  _lock(1); /*0x99c8c4*/
  for ( i = 3; i < dword_BABC00; ++i ) /*0x99c8cf*/
  {
    v2 = 4 * i; /*0x99c8dd*/
    v3 = (int *)((char *)unk_BAABE4 + 4 * i); /*0x99c8e5*/
    if ( *v3 ) /*0x99c8e7*/
    {
      v4 = *v3; /*0x99c8eb*/
      if ( (*(_BYTE *)(v4 + 0xC) & 0x83) != 0 && fclose((FILE *)v4) != 0xFFFFFFFF ) /*0x99c8fd*/
        ++v6; /*0x99c8ff*/
      if ( i >= 0x14 ) /*0x99c905*/
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)unk_BAABE4 + v2) + 0x20)); /*0x99c913*/
        free(*(void **)((char *)unk_BAABE4 + v2)); /*0x99c921*/
        *(_DWORD *)((char *)unk_BAABE4 + v2) = 0; /*0x99c92c*/
      }
    }
  }
  _unlock(1); /*0x99c949*/
  return _fcloseall_::_LN14_9(v0);
}
