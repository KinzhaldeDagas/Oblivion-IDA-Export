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

  result = a2;
  v8 = 0;
  v18 = a2;
  for ( i = 0; v18; result = v18 )
  {
    v9 = *(char **)v18;
    if ( *(_DWORD *)v18 )
    {
      v10 = a6;
      if ( a6 )
      {
        do
        {
          v11 = *v10;
          v10[v22 - a6] = *v10;
          ++v10;
        }
        while ( v11 );
        v12 = v9;
        v13 = strlen(v9) + 1;
        v14 = (char *)&v21 + 3;
        while ( *++v14 )
          ;
        qmemcpy(v14, v12, v13);
        v8 = i;
        v9 = v22;
      }
      if ( a3 )
      {
        if ( v8 >= *a3 )
          v16 = 0;
        else
          v16 = *(_DWORD *)(a3[1] + 4 * v8);
        sub_43B5E0(this, &v21, v9, v16, a4, a5, 0, 0, 1, 0);
        if ( !v21 )
          goto LABEL_18;
        v17 = v21;
        if ( InterlockedDecrement((volatile LONG *)&v21->members.unk08) )
          goto LABEL_18;
      }
      else
      {
        sub_43B420(this, &v20, v9, a4, a5, 0, 0, 1, 0);
        if ( !v20 )
          goto LABEL_18;
        v17 = v20;
        if ( InterlockedDecrement((volatile LONG *)&v20->members.unk08) )
          goto LABEL_18;
      }
      (*(void (__thiscall **)(IOTask *, int))v17->vtbl)(v17, 1);
    }
LABEL_18:
    i = ++v8;
    v18 = *(_DWORD *)(v18 + 4);
  }
  return result;
}
