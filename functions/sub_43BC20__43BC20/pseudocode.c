int __thiscall sub_43BC20(int *this, int a2, unsigned int *a3, unsigned __int8 a4, volatile LONG *a5, char *a6)
{
  int result; // eax
  unsigned int v8; // edi
  char *v9; // eax
  char *v10; // ecx
  char v11; // dl
  char *v12; // edx
  unsigned int v13; // eax
  char *v14; // edi
  int v16; // ecx
  IOTask *v17; // esi
  int v18; // [esp+Ch] [ebp-11Ch]
  unsigned int i; // [esp+10h] [ebp-118h]
  IOTask *v20; // [esp+18h] [ebp-110h] BYREF
  IOTask *v21; // [esp+1Ch] [ebp-10Ch] BYREF
  char v22[260]; // [esp+20h] [ebp-108h] BYREF

  result = a2; /*0x43bc34*/
  v8 = 0; /*0x43bc4e*/
  v18 = a2; /*0x43bc56*/
  for ( i = 0; v18; result = v18 ) /*0x43bc5e*/
  {
    v9 = *(char **)v18; /*0x43bc69*/
    if ( *(_DWORD *)v18 ) /*0x43bc69*/
    {
      v10 = a6; /*0x43bc73*/
      if ( a6 ) /*0x43bc7c*/
      {
        do /*0x43bc8e*/
        {
          v11 = *v10; /*0x43bc84*/
          v10[v22 - a6] = *v10; /*0x43bc86*/
          ++v10; /*0x43bc89*/
        }
        while ( v11 ); /*0x43bc8e*/
        v12 = v9; /*0x43bc90*/
        v13 = strlen(v9) + 1; /*0x43bc9f*/
        v14 = (char *)&v21 + 3; /*0x43bca1*/
        while ( *++v14 ) /*0x43bcac*/
          ; /*0x43bca4*/
        qmemcpy(v14, v12, v13); /*0x43bcb5*/
        v8 = i; /*0x43bcbe*/
        v9 = v22; /*0x43bcc2*/
      }
      if ( a3 ) /*0x43bccc*/
      {
        if ( v8 >= *a3 ) /*0x43bcd0*/
          v16 = 0; /*0x43bcda*/
        else
          v16 = *(_DWORD *)(a3[1] + 4 * v8); /*0x43bcd5*/
        sub_43B5E0(this, &v21, v9, v16, a4, a5, 0, 0, 1, 0); /*0x43bcf6*/
        if ( !v21 ) /*0x43bd01*/
          goto LABEL_18; /*0x43bd01*/
        v17 = v21; /*0x43bd03*/
        if ( InterlockedDecrement((volatile LONG *)&v21->members.unk08) ) /*0x43bd09*/
          goto LABEL_18; /*0x43bd11*/
      }
      else
      {
        sub_43B420(this, &v20, v9, a4, a5, 0, 0, 1, 0); /*0x43bd3c*/
        if ( !v20 ) /*0x43bd47*/
          goto LABEL_18; /*0x43bd47*/
        v17 = v20; /*0x43bd49*/
        if ( InterlockedDecrement((volatile LONG *)&v20->members.unk08) ) /*0x43bd4f*/
          goto LABEL_18; /*0x43bd57*/
      }
      (*(void (__thiscall **)(IOTask *, int))v17->vtbl)(v17, 1); /*0x43bd65*/
    }
LABEL_18:
    i = ++v8; /*0x43bd73*/
    v18 = *(_DWORD *)(v18 + 4); /*0x43bd77*/
  }
  return result; /*0x43bd82*/
}
