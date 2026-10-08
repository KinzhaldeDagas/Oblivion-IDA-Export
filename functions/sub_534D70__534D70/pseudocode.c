char __thiscall sub_534D70(_DWORD *this, char *FullPath, int a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edi
  char Ext[31]; // [esp+10h] [ebp-A4h] BYREF
  char v12; // [esp+2Fh] [ebp-85h] BYREF
  char Filename[128]; // [esp+30h] [ebp-84h] BYREF

  if ( !*(this + 3) ) /*0x534d8f*/
    return 1; /*0x534d8f*/
  _splitpath(FullPath, 0, 0, Filename, Ext); /*0x534daa*/
  v4 = strlen(Ext) + 1; /*0x534dbf*/
  v5 = &v12; /*0x534dc7*/
  while ( *++v5 ) /*0x534dd8*/
    ; /*0x534dd0*/
  qmemcpy(v5, Ext, v4); /*0x534de1*/
  v7 = 0; /*0x534dea*/
  if ( (int)*(this + 3) <= 0 ) /*0x534def*/
    return 1; /*0x534e28*/
  while ( 1 ) /*0x534e00*/
  {
    v8 = *(this + 2); /*0x534e00*/
    v9 = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x534e06*/
    if ( !sub_8B17C0((int)Filename, *(char **)(v8 + 8 * v7)) && a3 == v9 ) /*0x534e1e*/
      break; /*0x534e1e*/
    if ( ++v7 >= *(this + 3) ) /*0x534e26*/
      return 1; /*0x534e26*/
  }
  return 0; /*0x534e2a*/
}
