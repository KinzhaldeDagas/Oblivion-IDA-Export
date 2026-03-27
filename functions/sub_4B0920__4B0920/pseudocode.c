int *__thiscall sub_4B0920(int *this, _DWORD *a2)
{
  int *v2; // edi
  int v3; // ebp
  int (__thiscall **v4)(_DWORD *, int); // esi
  int SkillAVFromSchool; // eax
  int v6; // eax
  int *v7; // esi
  int *v8; // ebx
  int v9; // ebp
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v15; // [esp+10h] [ebp-8h]

  v2 = 0;
  v3 = 0;
  v15 = 0;
  do
  {
    v4 = (int (__thiscall **)(_DWORD *, int))(*a2 + 0x284);
    SkillAVFromSchool = Magic_GetSkillAVFromSchool(v3);
    v6 = (*v4)(a2, SkillAVFromSchool);
    v7 = sub_4B07C0(this, v3, v6);
    v8 = v7;
    if ( !v7 )
      goto LABEL_22;
    do
    {
      v9 = *v7;
      if ( !*v7 )
        goto LABEL_18;
      if ( !v2 )
      {
        v10 = (int *)FormHeapAlloc(8u);
        if ( v10 )
        {
          *v10 = 0;
          v10[1] = 0;
          v2 = v10;
        }
        else
        {
          v2 = 0;
        }
LABEL_12:
        if ( *v2 )
        {
          v12 = (int *)FormHeapAlloc(8u);
          if ( v12 )
          {
            *v12 = *v2;
            v12[1] = 0;
          }
          else
          {
            v12 = 0;
          }
          v12[1] = v2[1];
          v2[1] = (int)v12;
        }
        *v2 = v9;
        goto LABEL_18;
      }
      v11 = v2;
      do
      {
        if ( *v11 == v9 )
          break;
        v11 = (int *)v11[1];
      }
      while ( v11 );
      if ( !v11 )
        goto LABEL_12;
LABEL_18:
      v7 = (int *)v7[1];
    }
    while ( v7 );
    if ( v8[1] )
    {
      do
      {
        v13 = *(_DWORD *)(v8[1] + 4);
        FormHeapFree(v8[1]);
        v8[1] = v13;
      }
      while ( v13 );
    }
    v3 = v15;
    *v8 = 0;
LABEL_22:
    FormHeapFree((unsigned int)v8);
    v15 = ++v3;
  }
  while ( v3 < 6 );
  return v2;
}
