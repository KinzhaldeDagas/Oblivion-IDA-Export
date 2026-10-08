// Pass269 ABI and ownership proof: NiObjectNET::AddExtraData consumes one stack argument with RET 4 and also expects owning object in ECX/EBX at this build's callsites. The plugin wrapper must not execute caller-side ADD ESP,4.
char __userpurge NiNode_AddNiExtraData@<al>(const void **this@<ecx>, int a2@<ebx>, unsigned int *a3)
{
  unsigned int *v3; // esi
  va_list v4; // edi
  const char **v6; // eax
  const char *v7; // ebp
  char *v8; // eax
  char *v9; // ebx
  unsigned int v10; // edi
  char *v11; // esi
  const char *v12; // [esp-1Ch] [ebp-38h]
  size_t v13; // [esp-14h] [ebp-30h]
  rsize_t v14; // [esp-Ch] [ebp-28h]
  char Src[8]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a3; /*0x6ff8af*/
  v4 = (va_list)this; /*0x6ff8b6*/
  if ( !a3 ) /*0x6ff8c0*/
    return 0; /*0x6ff8c3*/
  if ( !Shared_GetPointerAtOffset08((Atmosphere *)a3) ) /*0x6ff8d9*/
  {
    v6 = (const char **)(*(int (__thiscall **)(unsigned int *))(*a3 + 4))(a3); /*0x6ff8ee*/
    v7 = *v6; /*0x6ff8f0*/
    if ( *v6 ) /*0x6ff8f0*/
    {
      if ( strlen(*v6) ) /*0x6ff907*/
      {
        HIDWORD(v14) = a2; /*0x6ff915*/
        HIDWORD(v13) = "ED%03d"; /*0x6ff917*/
        LODWORD(v13) = 6; /*0x6ff920*/
        sub_6C5D40(v4, Src, v13, (char *)*((unsigned __int16 *)v4 + 0xA)); /*0x6ff923*/
        v8 = strstr(v7, "ExtraData"); /*0x6ff92e*/
        v9 = 0; /*0x6ff936*/
        if ( v8 > v7 ) /*0x6ff93a*/
          v9 = (char *)(v8 - v7); /*0x6ff93e*/
        v10 = (unsigned int)&v9[strlen(Src) + 1]; /*0x6ff952*/
        v11 = (char *)FormHeapAlloc(v10); /*0x6ff95e*/
        sub_6ED670(v11, __PAIR64__((unsigned int)v7, v10), v9, v14); /*0x6ff962*/
        v9[(_DWORD)v11] = 0; /*0x6ff96e*/
        strcat_s(v11, __PAIR64__(Src, v10), v12); /*0x6ff972*/
        sub_721440(a3, v11); /*0x6ff97f*/
        FormHeapFree((unsigned int)v11); /*0x6ff985*/
        v4 = (va_list)this; /*0x6ff98a*/
        v3 = a3; /*0x6ff98e*/
      }
    }
  }
  return sub_6FF570((const void **)v4, (int)v3); /*0x6ff8c2*/
}
