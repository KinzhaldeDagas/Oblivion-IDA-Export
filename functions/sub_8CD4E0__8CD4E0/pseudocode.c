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

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 0x50) + 8))(*(_DWORD *)(a3 + 0x50)); /*0x8cd4f1*/
  v7 = a4; /*0x8cd4f4*/
  v8 = result; /*0x8cd4fb*/
  if ( result != a4 ) /*0x8cd4ff*/
  {
    v9 = a4 != 7 && a4 != 6; /*0x8cd508*/
    v34 = v9; /*0x8cd518*/
    v10 = result != 7 && result != 6; /*0x8cd527*/
    v33 = v10; /*0x8cd532*/
    if ( !v9 || v10 || (result = *(_DWORD *)(a3 + 0x50), *(_DWORD *)(result + 0xF0)) ) /*0x8cd53f*/
    {
      v32 = a2; /*0x8cd54d*/
      sub_8BC720((_WORD *)a3); /*0x8cd54e*/
      v11 = *(_DWORD *)(a3 + 8); /*0x8cd55a*/
      if ( !v11 || (v8 == 7) == (v7 == 7) ) /*0x8cd577*/
      {
        sub_8CBC60(a3, v7, v34, v33); /*0x8cd940*/
        if ( v11 ) /*0x8cd94a*/
        {
          v16 = *(_DWORD *)(v11 + 0xB4) < 4; /*0x8cd94c*/
          *(_BYTE *)(v11 + 0x91) = 0; /*0x8cd953*/
          if ( !v16 && v7 == 6 ) /*0x8cd95f*/
            sub_8CC4E0(*(_DWORD *)(v11 + 8), a3); /*0x8cd96d*/
          v30 = a6; /*0x8cd975*/
          *(_BYTE *)(v11 + 0x91) = 1; /*0x8cd97e*/
          sub_89B630((int *)v11, a3, v30, 1); /*0x8cd990*/
        }
      }
      else
      {
        v41 = &v44; /*0x8cd581*/
        v43 = 0x80000010; /*0x8cd58a*/
        v46 = 0x80000010; /*0x8cd58e*/
        v12 = *(_DWORD *)(v11 + 0x7C); /*0x8cd595*/
        v31 = a1; /*0x8cd598*/
        v13 = 0; /*0x8cd599*/
        v45[0] = &v47; /*0x8cd5a2*/
        v42 = 0; /*0x8cd5a6*/
        v45[1] = 0; /*0x8cd5aa*/
        v14 = *(_DWORD *)(v12 + 0x1BF8); /*0x8cd5b1*/
        v39 = *(_DWORD *)(v12 + 0x1BFC); /*0x8cd5bd*/
        v40 = v14; /*0x8cd5c9*/
        v35[0] = &v37; /*0x8cd5d2*/
        *(_BYTE *)(v11 + 0x90) = 1; /*0x8cd5d6*/
        *(_BYTE *)(v11 + 0x91) = 0; /*0x8cd5dd*/
        v35[1] = 0; /*0x8cd5ed*/
        v36 = 0x80000001; /*0x8cd5f1*/
        v38 = (unsigned __int16)v14; /*0x8cd5f9*/
        sub_8CB8A0((_DWORD *)a3, (const void **)&v41); /*0x8cd5fd*/
        if ( v7 == 7 ) /*0x8cd608*/
          sub_8CBEE0(v11, a3, v45); /*0x8cd62d*/
        else
          sub_8CB740(v11, a3, v45); /*0x8cd618*/
        sub_8CB580(*(_DWORD *)(a3 + 0x54) + 0x44, (_DWORD *)a3, (int)v35, v7); /*0x8cd64a*/
        if ( v8 != 7 ) /*0x8cd655*/
        {
          v15 = *(_DWORD *)(a3 + 0x54); /*0x8cd65e*/
          if ( *(int *)(v15 + 0x38) > 2 ) /*0x8cd665*/
            *(_BYTE *)(v15 + 0x26) = 1; /*0x8cd667*/
        }
        sub_8CBE90(v11, a3); /*0x8cd674*/
        sub_8CBC60(a3, v7, v34, v33); /*0x8cd68c*/
        sub_8CB640(v11, a3, a5); /*0x8cd6a2*/
        sub_8CD380(v11, a3, v45); /*0x8cd6b8*/
        v16 = v42 <= 0; /*0x8cd6c4*/
        *(_BYTE *)(v11 + 0x91) = 1; /*0x8cd6c6*/
        if ( !v16 ) /*0x8cd6cd*/
        {
          do /*0x8cd754*/
          {
            v17 = *(_DWORD *)&v41[4 * v13]; /*0x8cd6d7*/
            sub_8D9A50((_DWORD *)v17); /*0x8cd6dc*/
            if ( *(_DWORD *)(v11 + 0x88) ) /*0x8cd6e1*/
            {
              sub_91EF50(v13, v17, v11, v17, v31, v32); /*0x8cd6ed*/
            }
            else
            {
              *(_DWORD *)(v11 + 0x88) = 1; /*0x8cd6f7*/
              sub_91EF50(v13, v17, v11, v17, v31, v32); /*0x8cd701*/
              v18 = *(_DWORD *)(v11 + 0x88) - 1; /*0x8cd70f*/
              *(_DWORD *)(v11 + 0x88) = v18; /*0x8cd710*/
              if ( !v18 ) /*0x8cd716*/
              {
                if ( *(_DWORD *)(v11 + 0x84) ) /*0x8cd718*/
                {
                  if ( !*(_BYTE *)(v11 + 0x90) ) /*0x8cd722*/
                    sub_899210(v11); /*0x8cd72e*/
                }
              }
            }
            if ( *(_WORD *)(v17 + 4) ) /*0x8cd733*/
            {
              if ( !--*(_WORD *)(v17 + 6) ) /*0x8cd73e*/
                (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x8cd74b*/
            }
            ++v13; /*0x8cd751*/
          }
          while ( v13 < v42 ); /*0x8cd754*/
        }
        v19 = a3; /*0x8cd75d*/
        if ( v7 != 7 ) /*0x8cd764*/
        {
          v20 = (_DWORD *)(a3 + 0x38); /*0x8cd769*/
          v21 = 0; /*0x8cd76c*/
          if ( *(int *)(a3 + 0x3C) > 0 ) /*0x8cd770*/
          {
            do /*0x8cd7b5*/
            {
              v22 = *(_DWORD *)(*v20 + 8 * v21 + 4); /*0x8cd775*/
              v23 = v22 + *(_DWORD *)(v22 + 0x10); /*0x8cd77c*/
              if ( !*(_BYTE *)(v19 + 0x91) /*0x8cd798*/
                && !*(_BYTE *)(v23 + 0x91)
                && *(_DWORD *)(v19 + 0x54) != *(_DWORD *)(v23 + 0x54) )
              {
                sub_8CD320(*(int **)(v19 + 8), v19, v23); /*0x8cd7a0*/
                v19 = a3; /*0x8cd7a5*/
              }
              ++v21; /*0x8cd7b2*/
            }
            while ( v21 < v20[1] ); /*0x8cd7b5*/
          }
        }
        sub_8E6C30(*(_DWORD *)(v19 + 0x54) + 0x44, (int)v35); /*0x8cd7c3*/
        if ( v7 == 7 ) /*0x8cd7cf*/
        {
          sub_8DD750(*(float *)(v11 + 0x160), (__m128 *)(*(_DWORD *)(a3 + 0x50) + 0x10)); /*0x8cd7e6*/
          ++*(_DWORD *)(v11 + 0x88); /*0x8cd7fd*/
          sub_8D7400(&a3, 1, v11); /*0x8cd803*/
          (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(v11 + 8) + 0x1C))( /*0x8cd81b*/
            *(_DWORD *)(v11 + 8),
            &a3,
            1,
            v11);
          sub_8DD030(*(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 8), a3); /*0x8cd82a*/
          --*(_DWORD *)(v11 + 0x88); /*0x8cd839*/
        }
        sub_89B630((int *)v11, a3, a6, 1); /*0x8cd853*/
        v24 = *(_DWORD *)(v11 + 0x88); /*0x8cd858*/
        *(_BYTE *)(v11 + 0x90) = 0; /*0x8cd860*/
        if ( !v24 ) /*0x8cd867*/
        {
          if ( *(_DWORD *)(v11 + 0x84) ) /*0x8cd869*/
            sub_899210(v11); /*0x8cd875*/
        }
        v25 = MEMORY[0xBA9DE4]; /*0x8cd880*/
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cd886*/
        if ( v36 >= 0 ) /*0x8cd88d*/
        {
          v27 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C); /*0x8cd892*/
          if ( !v27 ) /*0x8cd89a*/
            v27 = unk_BA7D9C; /*0x8cd89c*/
          sub_8A75D0(v27, v35[0], 4 * v36, 0x14); /*0x8cd8b2*/
        }
        if ( v46 >= 0 ) /*0x8cd8c0*/
        {
          v28 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C); /*0x8cd8c5*/
          if ( !v28 ) /*0x8cd8cd*/
            v28 = unk_BA7D9C; /*0x8cd8cf*/
          sub_8A75D0(v28, (_DWORD *)v45[0], 4 * v46, 0x14); /*0x8cd8e5*/
        }
        if ( v43 >= 0 ) /*0x8cd8f0*/
        {
          v29 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C); /*0x8cd8f9*/
          if ( !v29 ) /*0x8cd901*/
            v29 = unk_BA7D9C; /*0x8cd903*/
          sub_8A75D0(v29, v41, 4 * v43, 0x14); /*0x8cd919*/
          return sub_8BC730((int (__stdcall ***)(signed int))a3); /*0x8cd933*/
        }
      }
      return sub_8BC730((int (__stdcall ***)(signed int))a3); /*0x8cd99c*/
    }
  }
  return result; /*0x8cd92b*/
}
