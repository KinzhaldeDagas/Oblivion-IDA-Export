volatile LONG *__usercall _updatetlocinfoEx_nolock@<eax>(volatile LONG **a1@<eax>, volatile LONG *a2@<edi>)
{
  volatile LONG *v2; // esi

  if ( !a2 || !a1 )
    return 0;
  v2 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    __addlocaleref(a2);
    if ( v2 )
    {
      __removelocaleref(v2);
      if ( !*v2 && v2 != (volatile LONG *)&unk_B318C0 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}
