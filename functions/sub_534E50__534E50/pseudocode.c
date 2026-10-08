unsigned int __thiscall sub_534E50(_DWORD *this, char *FullPath, int a3)
{
  unsigned int result; // eax
  char *v5; // edi
  int v7; // esi
  int v8; // eax
  char *v9; // edi
  int v10; // ebp
  int v11; // ebx
  char Ext[31]; // [esp+Ch] [ebp-A4h] BYREF
  char v13; // [esp+2Bh] [ebp-85h] BYREF
  char Filename[128]; // [esp+2Ch] [ebp-84h] BYREF

  _splitpath(FullPath, 0, 0, Filename, Ext); /*0x534e7f*/
  result = strlen(Ext) + 1; /*0x534e97*/
  v5 = &v13; /*0x534e9f*/
  while ( *++v5 ) /*0x534eaa*/
    ; /*0x534ea2*/
  qmemcpy(v5, Ext, result); /*0x534eb1*/
  v7 = 0; /*0x534eba*/
  if ( (int)*(this + 3) > 0 ) /*0x534ebf*/
  {
    while ( 1 ) /*0x534ec2*/
    {
      v8 = *(this + 2); /*0x534ec2*/
      v9 = *(char **)(v8 + 8 * v7); /*0x534ec5*/
      v10 = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x534ec8*/
      result = sub_8B17C0((int)Filename, v9); /*0x534ed2*/
      if ( !result && a3 == v10 ) /*0x534ee5*/
        break; /*0x534ee5*/
      if ( ++v7 >= *(this + 3) ) /*0x534eed*/
        return result; /*0x534eed*/
    }
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, v9); /*0x534efd*/
    result = --*(this + 3); /*0x534f03*/
    v11 = *(this + 2); /*0x534f06*/
    *(_DWORD *)(v11 + 8 * v7) = *(_DWORD *)(v11 + 8 * result); /*0x534f0c*/
    *(_DWORD *)(v11 + 8 * v7 + 4) = *(_DWORD *)(v11 + 8 * result + 4); /*0x534f13*/
  }
  return result; /*0x534f18*/
}
