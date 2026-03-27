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

  v15 = a1;
  sub_8B0E10(v14, a2);
  sub_8B15C0(v14, a4);
  v6 = 0;
  v17 = 0x7F7FFFFF;
  v13 = 0;
  if ( a4 > 0 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a3 + 4 * v6) + 0x14;
      sub_8B0E80(v14, v7, 0);
      v8 = 0;
      if ( *(int *)(v7 + 0x28) > 0 )
        break;
LABEL_7:
      v13 = ++v6;
      if ( v6 >= a4 )
        return sub_8B0E60(v14);
    }
    while ( 1 )
    {
      v9 = (_DWORD *)(*(_DWORD *)(v7 + 0x24) + 8 * v8);
      v10 = sub_8B0F00((int *)v14, v9[1]);
      if ( !*sub_8B0D80(v14, &v12, v10) )
      {
        a6(v15, *v9, a5, v16);
        if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
          break;
      }
      if ( ++v8 >= *(_DWORD *)(v7 + 0x28) )
      {
        v6 = v13;
        goto LABEL_7;
      }
    }
  }
  return sub_8B0E60(v14);
}
