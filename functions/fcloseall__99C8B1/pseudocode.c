int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_BABC00; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_BAABE4 + 4 * i);
    if ( *v2 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 0xC) & 0x83) != 0 && fclose((FILE *)v3) != 0xFFFFFFFF )
        ++v5;
      if ( i >= 0x14 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_BAABE4 + v1) + 0x20));
        free(*(void **)((char *)dword_BAABE4 + v1));
        *(_DWORD *)((char *)dword_BAABE4 + v1) = 0;
      }
    }
  }
  _unlock(1);
  return _fcloseall_::_LN14_9();
}
