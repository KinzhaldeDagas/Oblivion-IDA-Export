void __thiscall sub_5E7A60(int *this, float a2)
{
  int *v2; // ebx
  int *v3; // eax
  int *v4; // esi
  int v5; // edi
  bool v6; // zf
  int *v7; // eax
  int *i; // edi
  int v9; // edi
  int *v10; // [esp+Ch] [ebp-4h]

  v10 = this + 0x27;
  v2 = this + 0x27;
  v3 = (int *)FormHeapAlloc(8u);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  while ( v2 )
  {
    v5 = *v2;
    v6 = *v2 == 0;
    v2 = (int *)v2[1];
    if ( !v6 )
    {
      if ( *(float *)(v5 + 4) > 0.0 )
      {
        *(float *)(v5 + 4) = *(float *)(v5 + 4) - a2;
        continue;
      }
      if ( !*v4 )
        goto LABEL_11;
      v7 = (int *)FormHeapAlloc(8u);
      if ( !v7 )
      {
        *(_DWORD *)4 = v4[1];
        v4[1] = 0;
LABEL_11:
        *v4 = v5;
        continue;
      }
      *v7 = *v4;
      v7[1] = 0;
      v7[1] = v4[1];
      v4[1] = (int)v7;
      *v4 = v5;
    }
  }
  for ( i = v4; i; i = (int *)i[1] )
  {
    if ( !*i )
      break;
    BSSimpleList_Remove(v10, *i);
  }
  if ( v4[1] )
  {
    do
    {
      v9 = *(_DWORD *)(v4[1] + 4);
      FormHeapFree(v4[1]);
      v4[1] = v9;
    }
    while ( v9 );
  }
  *v4 = 0;
  FormHeapFree((unsigned int)v4);
}
