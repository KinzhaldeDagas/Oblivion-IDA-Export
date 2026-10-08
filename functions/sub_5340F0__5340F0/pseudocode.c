int __thiscall sub_5340F0(const void **this, char *FullPath, int a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  char *v7; // edi
  int v8; // ecx
  int result; // eax
  char Ext[31]; // [esp+10h] [ebp-A4h] BYREF
  char v11; // [esp+2Fh] [ebp-85h] BYREF
  char Filename[128]; // [esp+30h] [ebp-84h] BYREF

  _splitpath(FullPath, 0, 0, Filename, Ext); /*0x534120*/
  v4 = strlen(Ext) + 1; /*0x534137*/
  v5 = &v11; /*0x534141*/
  while ( *++v5 ) /*0x53414c*/
    ; /*0x534144*/
  qmemcpy(v5, Ext, v4); /*0x534153*/
  v7 = sub_8B18F0(Filename); /*0x53417f*/
  if ( *(this + 3) == (const void *)((unsigned int)*(this + 4) & 0x3FFFFFFF) ) /*0x534181*/
    sub_8A6EE0(this + 2, 8); /*0x534186*/
  v8 = (int)*(this + 3); /*0x53418e*/
  result = (int)*(this + 2); /*0x534191*/
  *(_DWORD *)(result + 8 * v8) = v7; /*0x534193*/
  *(_DWORD *)(result + 8 * v8 + 4) = a3; /*0x534196*/
  *(this + 3) = (char *)*(this + 3) + 1; /*0x53419a*/
  return result; /*0x53419e*/
}
