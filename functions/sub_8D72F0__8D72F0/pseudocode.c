int __userpurge sub_8D72F0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3,
        int a4,
        int a5,
        void (__thiscall *a6)(int, _DWORD, int, char *))
{
  int v6; // edi
  unsigned int v7; // esi
  int v8; // ebx
  _DWORD *v9; // edi
  int v10; // eax
  bool v12; // [esp+1Bh] [ebp-3075h] BYREF
  int v13; // [esp+1Ch] [ebp-3074h]
  char *v14[3]; // [esp+20h] [ebp-3070h] BYREF
  int v15; // [esp+2Ch] [ebp-3064h]
  char v16[12340]; // [esp+30h] [ebp-3060h] BYREF
  int v17; // [esp+3064h] [ebp-2Ch]

  v15 = a1; /*0x8d7307*/
  sub_8B0E10(v14, a2); /*0x8d7317*/
  sub_8B15C0(v14, a4); /*0x8d7324*/
  v6 = 0; /*0x8d7329*/
  v17 = 0x7F7FFFFF; /*0x8d732d*/
  v13 = 0; /*0x8d7338*/
  if ( a4 > 0 ) /*0x8d733c*/
  {
    while ( 1 ) /*0x8d734a*/
    {
      v7 = *(_DWORD *)(a3 + 4 * v6) + 0x14; /*0x8d734a*/
      sub_8B0E80(v14, v7, 0); /*0x8d7352*/
      v8 = 0; /*0x8d735a*/
      if ( *(int *)(v7 + 0x28) > 0 ) /*0x8d735e*/
        break; /*0x8d735e*/
LABEL_7:
      v13 = ++v6; /*0x8d73b8*/
      if ( v6 >= a4 ) /*0x8d73bc*/
        return sub_8B0E60(v14); /*0x8d73bc*/
    }
    while ( 1 ) /*0x8d7367*/
    {
      v9 = (_DWORD *)(*(_DWORD *)(v7 + 0x24) + 8 * v8); /*0x8d7367*/
      v10 = sub_8B0F00((int *)v14, v9[1]); /*0x8d736f*/
      if ( !*sub_8B0D80(v14, &v12, v10) ) /*0x8d7383*/
      {
        a6(v15, *v9, a5, v16); /*0x8d7398*/
        if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d73a4*/
          break; /*0x8d73a4*/
      }
      if ( ++v8 >= *(_DWORD *)(v7 + 0x28) ) /*0x8d73ac*/
      {
        v6 = v13; /*0x8d73ae*/
        goto LABEL_7; /*0x8d73ae*/
      }
    }
  }
  return sub_8B0E60(v14); /*0x8d73c7*/
}
