int __usercall sub_8CD4E0@<eax>(int a1@<ebp>, int a2@<esi>, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int v7; // ebx
  int v8; // edi
  bool v9; // cl
  bool v10; // al
  int v11; // esi
  int v12; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  bool v16; // cc
  int v17; // edi
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // ebp
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  int v31; // [esp-8h] [ebp-C8h]
  int v32; // [esp-4h] [ebp-C4h]
  char v33; // [esp+8h] [ebp-B8h]
  char v34; // [esp+Ch] [ebp-B4h]
  _DWORD *v35[2]; // [esp+10h] [ebp-B0h] BYREF
  int v36; // [esp+18h] [ebp-A8h]
  char v37; // [esp+1Ch] [ebp-A4h] BYREF
  int v38; // [esp+20h] [ebp-A0h]
  __int16 v39; // [esp+24h] [ebp-9Ch]
  __int16 v40; // [esp+26h] [ebp-9Ah]
  char *v41; // [esp+28h] [ebp-98h] BYREF
  int v42; // [esp+2Ch] [ebp-94h]
  int v43; // [esp+30h] [ebp-90h]
  char v44; // [esp+34h] [ebp-8Ch] BYREF
  const void *v45[2]; // [esp+74h] [ebp-4Ch] BYREF
  int v46; // [esp+7Ch] [ebp-44h]
  char v47; // [esp+80h] [ebp-40h] BYREF

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 0x50) + 8))(*(_DWORD *)(a3 + 0x50));
  v7 = a4;
  v8 = result;
  if ( result != a4 )
  {
    v9 = a4 != 7 && a4 != 6;
    v34 = v9;
    v10 = result != 7 && result != 6;
    v33 = v10;
    if ( !v9 || v10 || (result = *(_DWORD *)(a3 + 0x50), *(_DWORD *)(result + 0xF0)) )
    {
      v32 = a2;
      sub_8BC720((_WORD *)a3);
      v11 = *(_DWORD *)(a3 + 8);
      if ( !v11 || (v8 == 7) == (v7 == 7) )
      {
        sub_8CBC60(a3, v7, v34, v33);
        if ( v11 )
        {
          v16 = *(_DWORD *)(v11 + 0xB4) < 4;
          *(_BYTE *)(v11 + 0x91) = 0;
          if ( !v16 && v7 == 6 )
            sub_8CC4E0(*(_DWORD *)(v11 + 8), a3);
          v30 = a6;
          *(_BYTE *)(v11 + 0x91) = 1;
          sub_89B630((int *)v11, a3, v30, 1);
        }
      }
      else
      {
        v41 = &v44;
        v43 = 0x80000010;
        v46 = 0x80000010;
        v12 = *(_DWORD *)(v11 + 0x7C);
        v31 = a1;
        v13 = 0;
        v45[0] = &v47;
        v42 = 0;
        v45[1] = 0;
        v14 = *(_DWORD *)(v12 + 0x1BF8);
        v39 = *(_DWORD *)(v12 + 0x1BFC);
        v40 = v14;
        v35[0] = &v37;
        *(_BYTE *)(v11 + 0x90) = 1;
        *(_BYTE *)(v11 + 0x91) = 0;
        v35[1] = 0;
        v36 = 0x80000001;
        v38 = (unsigned __int16)v14;
        sub_8CB8A0((_DWORD *)a3, (const void **)&v41);
        if ( v7 == 7 )
          sub_8CBEE0(v11, a3, v45);
        else
          sub_8CB740(v11, a3, v45);
        sub_8CB580(*(_DWORD *)(a3 + 0x54) + 0x44, (_DWORD *)a3, (int)v35, v7);
        if ( v8 != 7 )
        {
          v15 = *(_DWORD *)(a3 + 0x54);
          if ( *(int *)(v15 + 0x38) > 2 )
            *(_BYTE *)(v15 + 0x26) = 1;
        }
        sub_8CBE90(v11, a3);
        sub_8CBC60(a3, v7, v34, v33);
        sub_8CB640(v11, a3, a5);
        sub_8CD380(v11, a3, v45);
        v16 = v42 <= 0;
        *(_BYTE *)(v11 + 0x91) = 1;
        if ( !v16 )
        {
          do
          {
            v17 = *(_DWORD *)&v41[4 * v13];
            sub_8D9A50((_DWORD *)v17);
            if ( *(_DWORD *)(v11 + 0x88) )
            {
              sub_91EF50(v13, v17, v11, v17, v31, v32);
            }
            else
            {
              *(_DWORD *)(v11 + 0x88) = 1;
              sub_91EF50(v13, v17, v11, v17, v31, v32);
              v18 = *(_DWORD *)(v11 + 0x88) - 1;
              *(_DWORD *)(v11 + 0x88) = v18;
              if ( !v18 )
              {
                if ( *(_DWORD *)(v11 + 0x84) )
                {
                  if ( !*(_BYTE *)(v11 + 0x90) )
                    sub_899210(v11);
                }
              }
            }
            if ( *(_WORD *)(v17 + 4) )
            {
              if ( !--*(_WORD *)(v17 + 6) )
                (**(void (__thiscall ***)(int, int))v17)(v17, 1);
            }
            ++v13;
          }
          while ( v13 < v42 );
        }
        v19 = a3;
        if ( v7 != 7 )
        {
          v20 = (_DWORD *)(a3 + 0x38);
          v21 = 0;
          if ( *(int *)(a3 + 0x3C) > 0 )
          {
            do
            {
              v22 = *(_DWORD *)(*v20 + 8 * v21 + 4);
              v23 = v22 + *(_DWORD *)(v22 + 0x10);
              if ( !*(_BYTE *)(v19 + 0x91)
                && !*(_BYTE *)(v23 + 0x91)
                && *(_DWORD *)(v19 + 0x54) != *(_DWORD *)(v23 + 0x54) )
              {
                sub_8CD320(*(int **)(v19 + 8), v19, v23);
                v19 = a3;
              }
              ++v21;
            }
            while ( v21 < v20[1] );
          }
        }
        sub_8E6C30(*(_DWORD *)(v19 + 0x54) + 0x44, (int)v35);
        if ( v7 == 7 )
        {
          sub_8DD750(*(float *)(v11 + 0x160), *(_DWORD *)(a3 + 0x50) + 0x10);
          ++*(_DWORD *)(v11 + 0x88);
          sub_8D7400(&a3, 1, v11);
          (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(v11 + 8) + 0x1C))(
            *(_DWORD *)(v11 + 8),
            &a3,
            1,
            v11);
          sub_8DD030(*(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 8), a3);
          --*(_DWORD *)(v11 + 0x88);
        }
        sub_89B630((int *)v11, a3, a6, 1);
        v24 = *(_DWORD *)(v11 + 0x88);
        *(_BYTE *)(v11 + 0x90) = 0;
        if ( !v24 )
        {
          if ( *(_DWORD *)(v11 + 0x84) )
            sub_899210(v11);
        }
        v25 = TlsIndex;
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        if ( v36 >= 0 )
        {
          v27 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C);
          if ( !v27 )
            v27 = dword_BA7D9C;
          sub_8A75D0(v27, v35[0], 4 * v36, 0x14);
        }
        if ( v46 >= 0 )
        {
          v28 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C);
          if ( !v28 )
            v28 = dword_BA7D9C;
          sub_8A75D0(v28, (_DWORD *)v45[0], 4 * v46, 0x14);
        }
        if ( v43 >= 0 )
        {
          v29 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C);
          if ( !v29 )
            v29 = dword_BA7D9C;
          sub_8A75D0(v29, v41, 4 * v43, 0x14);
          return sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))a3);
        }
      }
      return sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))a3);
    }
  }
  return result;
}
