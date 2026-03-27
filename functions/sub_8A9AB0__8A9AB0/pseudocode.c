void __userpurge sub_8A9AB0(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, int a4, int a5, int a6)
{
  int *v6; // eax
  char v7[4]; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch]
  char v9; // [esp+8h] [ebp-8h]
  char v10; // [esp+9h] [ebp-7h]
  char v11; // [esp+Ah] [ebp-6h]

  v6 = *(int **)(a1 + 8);
  if ( v6 && v6[0x22] )
  {
    v8 = a1;
    v9 = a4;
    v10 = a5;
    v11 = a6;
    v7[0] = 4;
    sub_898820(v6, (int)v7);
  }
  else
  {
    sub_8CD4E0(a2, a3, a1, a4, a5, a6);
  }
}
