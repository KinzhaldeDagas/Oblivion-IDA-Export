char __thiscall sub_6CED50(_BYTE *this)
{
  char result; // al
  int v3; // esi
  char *v4; // eax
  char *v5; // ebx
  int v6; // eax
  int v7; // edx
  const void *v8; // esi
  char *v9; // edi
  unsigned __int8 v10; // [esp+16h] [ebp-12h]
  char v11; // [esp+17h] [ebp-11h]

  v10 = *(this + 0xD); /*0x6ced7c*/
  result = sub_6CCFD0(this); /*0x6ced80*/
  v11 = result; /*0x6ced87*/
  if ( result )
  {
    v3 = (unsigned __int8)*(this + 0xD); /*0x6ced8d*/
    v4 = (char *)FormHeapAlloc((0x68 * (unsigned __int64)(unsigned __int8)*(this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v3);
    v5 = v4; /*0x6ceda9*/
    if ( v4 ) /*0x6cedbc*/
      sub_401080(v4, 0x68, v3, (void *(__thiscall *)(void *))sub_6C3730); /*0x6cedc7*/
    else
      v5 = 0; /*0x6cedce*/
    if ( v10 ) /*0x6cedd6*/
    {
      v6 = 0; /*0x6cedd8*/
      v7 = v10; /*0x6cedda*/
      do /*0x6cedf5*/
      {
        v8 = (const void *)(v6 + *((_DWORD *)this + 0x14)); /*0x6cede3*/
        v9 = &v5[v6]; /*0x6cede5*/
        v6 += 0x68; /*0x6ceded*/
        --v7; /*0x6cedf0*/
        qmemcpy(v9, v8, 0x68u); /*0x6cedf3*/
      }
      while ( v7 ); /*0x6cedf5*/
    }
    FormHeapFree(*((_DWORD *)this + 0x14)); /*0x6cedfb*/
    *((_DWORD *)this + 0x14) = v5; /*0x6cee07*/
    return v11; /*0x6cee00*/
  }
  return result; /*0x6cee0a*/
}
