int __thiscall sub_9546D0(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // ebx
  int result; // eax

  v3 = a2; /*0x9546d1*/
  if ( *a2 ) /*0x9546d5*/
  {
    v5 = a3 - (_DWORD)a2; /*0x9546e2*/
    do /*0x954701*/
    {
      result = *(_DWORD *)((char *)v3 + v5); /*0x9546e4*/
      if ( !result ) /*0x9546e9*/
        break; /*0x9546e9*/
      (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 8))( /*0x9546f6*/
        this,
        *(_DWORD *)(*v3 + 8),
        *(_DWORD *)((char *)v3 + v5));
      result = v3[1]; /*0x9546f9*/
      ++v3; /*0x9546fc*/
    }
    while ( result ); /*0x954701*/
  }
  return result; /*0x954704*/
}
