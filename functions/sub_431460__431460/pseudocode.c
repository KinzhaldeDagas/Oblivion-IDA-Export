_DWORD *__cdecl sub_431460(char *lpFileName, char *Str, int a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  HANDLE FirstFileA; // eax
  unsigned int v7; // esi
  char *v8; // edi
  char *v9; // eax
  unsigned int v10; // ecx
  const char *v11; // edi
  unsigned int v12; // esi
  void *v13; // ebx
  _DWORD *v15; // [esp+Ch] [ebp-148h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-144h] BYREF

  v4 = a4; /*0x43148e*/
  v15 = a4; /*0x431490*/
  if ( !a4 ) /*0x431494*/
  {
    v5 = (_DWORD *)FormHeapAlloc(8u); /*0x431498*/
    if ( v5 ) /*0x4314a2*/
    {
      *v5 = 0; /*0x4314a4*/
      v5[1] = 0; /*0x4314a6*/
    }
    else
    {
      v5 = 0; /*0x4314ab*/
    }
    v15 = v5; /*0x4314ad*/
    v4 = v5; /*0x4314b1*/
  }
  if ( !bInvalidateOlderFiles_Archive /*0x4314cb*/
    || (FirstFileA = FindFirstFileA(lpFileName, &FindFileData), FirstFileA == (HANDLE)0xFFFFFFFF) )
  {
    if ( !ArchiveManager_IsFileInArchives_(lpFileName, a3) ) /*0x4314e9*/
      goto LABEL_14; /*0x4314e9*/
  }
  else
  {
    FindClose(FirstFileA); /*0x4314ce*/
  }
  v7 = strlen(Str); /*0x4314f1*/
  v8 = strrchr(Str, 0x5C); /*0x43150d*/
  v9 = strrchr(lpFileName, 0x5C); /*0x43150f*/
  if ( v8 ) /*0x431519*/
  {
    if ( v9 ) /*0x431521*/
    {
      v10 = strlen(v8 + 1); /*0x431539*/
      v11 = v9 + 1; /*0x43153b*/
      v12 = v7 - v10; /*0x431540*/
      v13 = (void *)FormHeapAlloc(strlen(v9 + 1) + v12 + 1); /*0x43155b*/
      memcpy(v13, Str, v12); /*0x43155f*/
      *((_BYTE *)v13 + v12) = 0; /*0x431566*/
      strcat((char *)v13, v11); /*0x43158f*/
      BSSimpleList_PushFront(v15, (int)v13); /*0x43159d*/
    }
  }
  v4 = v15; /*0x4315a2*/
LABEL_14:
  if ( v4[1] || *v4 ) /*0x4315ad*/
    return v4; /*0x4315dc*/
  FormHeapFree((unsigned int)v4); /*0x4315b3*/
  return 0; /*0x4315bb*/
}
