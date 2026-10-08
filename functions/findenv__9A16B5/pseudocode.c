int __usercall findenv@<eax>(int a1@<edi>, unsigned __int8 *a2)
{
  const unsigned __int8 **i; // esi
  unsigned __int8 v3; // al
  size_t v5; // [esp-4h] [ebp-8h]

  for ( i = (const unsigned __int8 **)unk_BA9DB4; ; ++i ) /*0x9a16b6*/
  {
    if ( !*i ) /*0x9a16e0*/
      return -(((char *)i - (_BYTE *)unk_BA9DB4) >> 2); /*0x9a16f4*/
    LODWORD(v5) = a1; /*0x9a16be*/
    if ( !_mbsnbicoll(a2, *i, v5) ) /*0x9a16c4*/
    {
      v3 = (*i)[a1]; /*0x9a16d2*/
      if ( v3 == 0x3D || !v3 ) /*0x9a16db*/
        break; /*0x9a16db*/
    }
  }
  return ((char *)i - (_BYTE *)unk_BA9DB4) >> 2; /*0x9a16ee*/
}
