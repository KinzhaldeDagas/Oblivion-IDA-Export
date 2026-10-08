int __userpurge __CxxUnhandledExceptionFilter@<eax>(int a1@<edi>, int a2)
{
  int (__cdecl *v2)(int); // eax
  int (__cdecl *v3)(int); // esi

  if ( LOBYTE(dword_BA9E10[0x20D]) /*0x992856*/
    && (v2 = (int (__cdecl *)(int))_decode_pointer((void *)dword_BA9E10[0x20C]), (v3 = v2) != 0)
    && unknown_libname_193((int)v2) )
  {
    return v3(a1); /*0x992861*/
  }
  else
  {
    return 0; /*0x992865*/
  }
}
