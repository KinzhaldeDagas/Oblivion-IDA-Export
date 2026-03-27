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

  v3 = a3;
  v4 = (va_list)this;
  if ( !a3 )
    return 0;
  if ( !sub_452A60((Atmosphere *)a3) )
  {
    v6 = (const char **)(*(int (__thiscall **)(unsigned int *))(*a3 + 4))(a3);
    v7 = *v6;
    if ( *v6 )
    {
      if ( strlen(*v6) )
      {
        HIDWORD(v14) = a2;
        HIDWORD(v13) = "ED%03d";
        LODWORD(v13) = 6;
        sub_6C5D40(v4, Src, v13, (char *)*((unsigned __int16 *)v4 + 0xA));
        v8 = strstr(v7, "ExtraData");
        v9 = 0;
        if ( v8 > v7 )
          v9 = (char *)(v8 - v7);
        v10 = (unsigned int)&v9[strlen(Src) + 1];
        v11 = (char *)FormHeapAlloc(v10);
        sub_6ED670(v11, __PAIR64__((unsigned int)v7, v10), v9, v14);
        v9[(_DWORD)v11] = 0;
        strcat_s(v11, __PAIR64__(Src, v10), v12);
        sub_721440(a3, v11);
        FormHeapFree((unsigned int)v11);
        v4 = (va_list)this;
        v3 = a3;
      }
    }
  }
  return sub_6FF570((const void **)v4, (int)v3);
}
