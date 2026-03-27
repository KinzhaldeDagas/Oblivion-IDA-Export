int __usercall findenv@<eax>(int a1@<edi>, unsigned __int8 *a2)
{
  const unsigned __int8 **i; // esi
  unsigned __int8 v3; // al
  size_t v5; // [esp-4h] [ebp-8h]

  for ( i = (const unsigned __int8 **)dword_BA9DB4; ; ++i )
  {
    if ( !*i )
      return -(((char *)i - (_BYTE *)dword_BA9DB4) >> 2);
    LODWORD(v5) = a1;
    if ( !_mbsnbicoll(a2, *i, v5) )
    {
      v3 = (*i)[a1];
      if ( v3 == 0x3D || !v3 )
        break;
    }
  }
  return ((char *)i - (_BYTE *)dword_BA9DB4) >> 2;
}
