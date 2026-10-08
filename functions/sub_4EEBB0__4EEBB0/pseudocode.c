char __thiscall sub_4EEBB0(_DWORD *this, const void **a2)
{
  const void **v2; // edi
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // edx
  const void **v7; // eax
  const void **v8; // ebx
  int v9; // eax

  v2 = a2; /*0x4eebb1*/
  if ( !a2 ) /*0x4eebb7*/
    return 1; /*0x4eebb9*/
  if ( !*(this + 1) && !*this && !a2[1] && !*a2 ) /*0x4eebd0*/
    return 0; /*0x4eebd5*/
  v4 = 0; /*0x4eebdc*/
  v5 = this; /*0x4eebde*/
  do /*0x4eebed*/
  {
    if ( *v5 ) /*0x4eebe0*/
      ++v4; /*0x4eebe5*/
    v5 = (_DWORD *)v5[1]; /*0x4eebe8*/
  }
  while ( v5 ); /*0x4eebed*/
  v6 = 0; /*0x4eebef*/
  v7 = a2; /*0x4eebf1*/
  do /*0x4eec00*/
  {
    if ( *v7 ) /*0x4eebf3*/
      ++v6; /*0x4eebf8*/
    v7 = (const void **)v7[1]; /*0x4eebfb*/
  }
  while ( v7 ); /*0x4eec00*/
  if ( v4 != v6 ) /*0x4eec04*/
    return 1; /*0x4eec07*/
  v8 = (const void **)this; /*0x4eec0f*/
  while ( 1 ) /*0x4eecb2*/
  {
    do /*0x4eecb2*/
    {
      if ( !v2 ) /*0x4eec22*/
        return 1; /*0x4eecba*/
      v9 = memcmp(*v8, *v2, 8u); /*0x4eec35*/
      v2 = (const void **)v2[1]; /*0x4eeca8*/
    }
    while ( v9 ); /*0x4eecb2*/
    v8 = (const void **)v8[1]; /*0x4eecbe*/
    if ( !v8 ) /*0x4eecc3*/
      break; /*0x4eecc3*/
    v2 = a2; /*0x4eec13*/
  }
  return 0; /*0x4eebbb*/
}
