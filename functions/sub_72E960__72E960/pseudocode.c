unsigned int __stdcall sub_72E960(int a1, int a2, unsigned int *a3)
{
  int v3; // esi
  unsigned int result; // eax
  unsigned int *v5; // eax
  unsigned int v6; // ecx
  unsigned int *v7; // esi
  _DWORD *v8; // ebp
  unsigned int v9; // ebx
  __int16 v10; // di
  unsigned int v11; // edx
  unsigned int v12; // eax
  _WORD *v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned int *v17; // ebx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int i; // [esp+18h] [ebp-30h]
  unsigned int v22; // [esp+1Ch] [ebp-2Ch]
  unsigned int v23; // [esp+28h] [ebp-20h]
  unsigned int v24; // [esp+2Ch] [ebp-1Ch]
  char v25[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v26; // [esp+32h] [ebp-16h] BYREF
  _DWORD v27[5]; // [esp+34h] [ebp-14h] BYREF

  v3 = a1;
  result = 0;
  v24 = *(unsigned __int16 *)(a1 + 0x40);
  for ( i = 0; i < v24; result = ++i )
  {
    (*(void (__thiscall **)(int, unsigned int, char *, __int16 *, _DWORD *))(*(_DWORD *)v3 + 0x60))(
      v3,
      result,
      v25,
      &v26,
      v27);
    if ( *(_WORD *)v25 != v26 && v26 != LOWORD(v27[0]) && LOWORD(v27[0]) != *(_WORD *)v25 )
    {
      v5 = (unsigned int *)FormHeapAlloc(0xCu);
      v6 = 0;
      if ( v5 )
      {
        *v5 = 0;
        v5[1] = 0;
        v5[2] = 0;
        v7 = v5;
      }
      else
      {
        v7 = 0;
      }
      v27[4] = 0xFFFFFFFF;
      v22 = 0;
      do
      {
        v8 = (_DWORD *)(a2 + 0xC * *(unsigned __int16 *)&v25[2 * v6]);
        v9 = 0;
        v23 = v8[2];
        if ( v23 )
        {
          do
          {
            v10 = *(_WORD *)(*v8 + 8 * v9);
            v11 = v7[2];
            v12 = 0;
            if ( !v11 )
              goto LABEL_16;
            v13 = (_WORD *)*v7;
            while ( *v13 != v10 )
            {
              ++v12;
              ++v13;
              if ( v12 >= v11 )
                goto LABEL_16;
            }
            if ( v12 == 0xFFFFFFFF )
            {
LABEL_16:
              v14 = v7[1];
              if ( v11 == v14 )
              {
                if ( v14 )
                  v15 = 2 * v14;
                else
                  v15 = 1;
                sub_72CCC0(v7, v15);
              }
              *(_WORD *)(*v7 + 2 * v7[2]++) = v10;
            }
            ++v9;
          }
          while ( v9 < v23 );
          v6 = v22;
        }
        v22 = ++v6;
      }
      while ( v6 < 3 );
      unknown_libname_60(*v7, v7[2], 2, PtFuncCompare);
      v16 = 0;
      if ( a3[2] )
      {
        while ( 1 )
        {
          v17 = *(unsigned int **)(*a3 + 4 * v16);
          if ( sub_72CDF0(v17, v7) )
            break;
          if ( sub_72CDF0(v7, v17) )
          {
            if ( v17 )
            {
              FormHeapFree(*v17);
              FormHeapFree((unsigned int)v17);
            }
            --a3[2];
            *(_DWORD *)(*a3 + 4 * v16) = *(_DWORD *)(*a3 + 4 * a3[2]);
          }
          else
          {
            ++v16;
          }
          if ( v16 >= a3[2] )
            goto LABEL_35;
        }
        FormHeapFree(*v7);
        FormHeapFree((unsigned int)v7);
      }
LABEL_35:
      v18 = a3[2];
      if ( v16 == v18 )
      {
        v19 = a3[1];
        if ( v18 == v19 )
        {
          if ( v19 )
            v20 = 2 * v19;
          else
            v20 = 1;
          sub_6E8CA0(a3, v20);
        }
        *(_DWORD *)(*a3 + 4 * a3[2]++) = v7;
      }
      v3 = a1;
    }
  }
  return result;
}
