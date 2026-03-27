int __thiscall sub_9057A0(_DWORD *this, int **a2, _DWORD *a3, int *a4)
{
  _DWORD *v4; // esi
  int *v5; // edi
  int v6; // edx
  int result; // eax
  int v8; // eax
  signed int v9; // edi
  _DWORD *v10; // ecx
  int v11; // ecx
  int v12; // eax
  const void **v13; // esi
  const void *v14; // eax
  _DWORD *v15; // ecx
  int *v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // [esp+24h] [ebp-23Ch]
  int v28; // [esp+28h] [ebp-238h]
  int v29; // [esp+2Ch] [ebp-234h]
  int *v30; // [esp+30h] [ebp-230h]
  char v31; // [esp+37h] [ebp-229h] BYREF
  _DWORD *v32; // [esp+38h] [ebp-228h]
  int v33; // [esp+3Ch] [ebp-224h]
  _DWORD v34[4]; // [esp+40h] [ebp-220h] BYREF
  char v35[524]; // [esp+50h] [ebp-210h] BYREF

  v4 = this;
  v5 = *a2;
  v34[2] = a2[2];
  v34[3] = a2;
  v6 = *v5;
  v32 = this;
  v30 = v5;
  v28 = (*(int (__thiscall **)(int *))(v6 + 0x1C))(v5);
  result = (*(int (__thiscall **)(int *))(*v5 + 0x20))(v5);
  v27 = result;
  if ( v28 > 0 )
  {
    while ( 1 )
    {
      v34[0] = (*(int (__thiscall **)(int *, int, char *))(*v5 + 0x28))(v5, v27, v35);
      v8 = v4[4];
      v9 = 0;
      v34[1] = v27;
      if ( v8 <= 0 )
      {
LABEL_8:
        v9 = 0xFFFFFFFF;
      }
      else
      {
        v10 = (_DWORD *)v4[3];
        while ( *v10 != v27 )
        {
          ++v9;
          v10 += 2;
          if ( v9 >= v8 )
            goto LABEL_8;
        }
      }
      if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, int *, _DWORD *, int **, int *, int))a4[1])(
                       a4[1],
                       &v31,
                       a4,
                       a3,
                       a2,
                       v30,
                       v27) )
      {
        if ( v9 == 0xFFFFFFFF )
        {
          v11 = v4[5];
          v12 = v4[4];
          v13 = (const void **)(v4 + 3);
          if ( v12 == (v11 & 0x3FFFFFFF) )
            sub_8A6EE0(v13, 8);
          v14 = v13[1];
          v15 = v32;
          v16 = (int *)((char *)*v13 + 8 * (_DWORD)v14);
          v13[1] = (char *)v14 + 1;
          *v16 = v27;
          v17 = *a4;
          v33 = v15[2];
          v29 = v17;
          v18 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v34[0] + 8))(v34[0]);
          v19 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
          v20 = *((_BYTE *)a4 + 0xC) ? v29 + 0x590 : v29 + 0x190;
          v21 = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v29
                                                                   + 0x14 * *(unsigned __int8 *)(v20 + 0x20 * v18 + v19)
                                                                   + 0x990))(
                  v34,
                  a3,
                  a4,
                  v33);
          v4 = v32;
          v16[1] = v21;
        }
        else
        {
          v22 = *(_DWORD *)(v4[3] + 8 * v9 + 4);
          (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int *))(*(_DWORD *)v22 + 0x1C))(v22, v34, a3, a4);
        }
      }
      else if ( v9 != 0xFFFFFFFF )
      {
        v23 = *(_DWORD *)(v4[3] + 8 * v9 + 4);
        (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 0x18))(v23);
        v24 = v4[4] - 1;
        v4[4] = v24;
        v25 = v24;
        v26 = v4[3];
        *(_DWORD *)(v26 + 8 * v9) = *(_DWORD *)(v26 + 8 * v25);
        *(_DWORD *)(v26 + 8 * v9 + 4) = *(_DWORD *)(v26 + 8 * v25 + 4);
      }
      result = (*(int (__thiscall **)(int *, int))(*v30 + 0x24))(v30, v27);
      v27 = result;
      if ( !--v28 )
        break;
      v5 = v30;
    }
  }
  return result;
}
