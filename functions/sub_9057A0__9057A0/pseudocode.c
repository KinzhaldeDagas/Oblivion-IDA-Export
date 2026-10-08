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

  v4 = this; /*0x9057bd*/
  v5 = *a2; /*0x9057c3*/
  v34[2] = a2[2]; /*0x9057c5*/
  v34[3] = a2; /*0x9057c9*/
  v6 = *v5; /*0x9057cd*/
  v32 = this; /*0x9057d1*/
  v30 = v5; /*0x9057d5*/
  v28 = (*(int (__thiscall **)(int *))(v6 + 0x1C))(v5); /*0x9057e2*/
  result = (*(int (__thiscall **)(int *))(*v5 + 0x20))(v5); /*0x9057e6*/
  v27 = result; /*0x9057eb*/
  if ( v28 > 0 )
  {
    while ( 1 )
    {
      v34[0] = (*(int (__thiscall **)(int *, int, char *))(*v5 + 0x28))(v5, v27, v35); /*0x90581b*/
      v8 = v4[4]; /*0x90581f*/
      v9 = 0; /*0x905822*/
      v34[1] = v27; /*0x905826*/
      if ( v8 <= 0 ) /*0x90582a*/
      {
LABEL_8:
        v9 = 0xFFFFFFFF; /*0x90583c*/
      }
      else
      {
        v10 = (_DWORD *)v4[3]; /*0x90582c*/
        while ( *v10 != v27 ) /*0x905832*/
        {
          ++v9; /*0x905834*/
          v10 += 2; /*0x905835*/
          if ( v9 >= v8 ) /*0x90583a*/
            goto LABEL_8; /*0x90583a*/
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
          v11 = v4[5]; /*0x905870*/
          v12 = v4[4]; /*0x905873*/
          v13 = (const void **)(v4 + 3); /*0x905876*/
          if ( v12 == (v11 & 0x3FFFFFFF) ) /*0x905881*/
            sub_8A6EE0(v13, 8); /*0x905886*/
          v14 = v13[1]; /*0x90588e*/
          v15 = v32; /*0x905893*/
          v16 = (int *)((char *)*v13 + 8 * (_DWORD)v14); /*0x905897*/
          v13[1] = (char *)v14 + 1; /*0x90589b*/
          *v16 = v27; /*0x9058a2*/
          v17 = *a4; /*0x9058ab*/
          v33 = v15[2]; /*0x9058ad*/
          v29 = v17; /*0x9058b3*/
          v18 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v34[0] + 8))(v34[0]); /*0x9058ba*/
          v19 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x9058c3*/
          v20 = *((_BYTE *)a4 + 0xC) ? v29 + 0x590 : v29 + 0x190;
          v21 = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v29 /*0x905905*/
                                                                   + 0x14 * *(unsigned __int8 *)(v20 + 0x20 * v18 + v19)
                                                                   + 0x990))(
                  v34,
                  a3,
                  a4,
                  v33);
          v4 = v32; /*0x905907*/
          v16[1] = v21; /*0x90590e*/
        }
        else
        {
          v22 = *(_DWORD *)(v4[3] + 8 * v9 + 4); /*0x905916*/
          (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int *))(*(_DWORD *)v22 + 0x1C))(v22, v34, a3, a4); /*0x905926*/
        }
      }
      else if ( v9 != 0xFFFFFFFF ) /*0x90592e*/
      {
        v23 = *(_DWORD *)(v4[3] + 8 * v9 + 4); /*0x905933*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 0x18))(v23); /*0x905939*/
        v24 = v4[4] - 1; /*0x90593f*/
        v4[4] = v24; /*0x905940*/
        v25 = v24; /*0x905943*/
        v26 = v4[3]; /*0x905945*/
        *(_DWORD *)(v26 + 8 * v9) = *(_DWORD *)(v26 + 8 * v25); /*0x90594b*/
        *(_DWORD *)(v26 + 8 * v9 + 4) = *(_DWORD *)(v26 + 8 * v25 + 4); /*0x905952*/
      }
      result = (*(int (__thiscall **)(int *, int))(*v30 + 0x24))(v30, v27); /*0x905961*/
      v27 = result; /*0x905964*/
      if ( !--v28 ) /*0x90596c*/
        break; /*0x90596c*/
      v5 = v30; /*0x905802*/
    }
  }
  return result; /*0x905972*/
}
