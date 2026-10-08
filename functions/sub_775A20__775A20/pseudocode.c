int *__thiscall sub_775A20(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int *v6; // edi
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // ebx
  unsigned int v19; // esi
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int v24; // [esp+30h] [ebp-34h]
  int v25; // [esp+34h] [ebp-30h]
  unsigned int v26; // [esp+38h] [ebp-2Ch]
  _DWORD *v27; // [esp+3Ch] [ebp-28h]
  unsigned int v28; // [esp+40h] [ebp-24h]
  _DWORD v29[4]; // [esp+44h] [ebp-20h] BYREF
  char v30[12]; // [esp+54h] [ebp-10h] BYREF
  int v31; // [esp+60h] [ebp-4h]

  v4 = a3; /*0x775a24*/
  *this = a3; /*0x775a2c*/
  v6 = this + 0x114; /*0x775a32*/
  *((_WORD *)this + 0x22C) = 0x20; /*0x775a3d*/
  *((_WORD *)this + 0x22D) = 0; /*0x775a48*/
  *((_WORD *)this + 0x22E) = 0; /*0x775a4c*/
  *(this + 0x114) = (int)&NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable'; /*0x775a53*/
  *((_WORD *)this + 0x22F) = 0x10; /*0x775a59*/
  v7 = a2; /*0x775a69*/
  *(this + 0x115) = FormHeapAlloc(0x80u); /*0x775a74*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)a2 + 0x14))(a2, *this, 0, this + 1); /*0x775a83*/
  v8 = *(_DWORD **)(a4 + 4); /*0x775a89*/
  if ( v8 ) /*0x775a8e*/
  {
    while ( 1 ) /*0x775a9a*/
    {
      v9 = v8[2]; /*0x775a9a*/
      v27 = (_DWORD *)*v8; /*0x775aa4*/
      v24 = v9; /*0x775aa8*/
      if ( v9 ) /*0x775aac*/
      {
        v10 = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)v7 + 0x18))(v7, *this, v9); /*0x775abd*/
        v11 = 0; /*0x775abf*/
        v28 = v10; /*0x775ac3*/
        v26 = 0; /*0x775ac7*/
        if ( v10 ) /*0x775acb*/
        {
          while ( 1 ) /*0x775ad7*/
          {
            if ( (*(int (__stdcall **)(int, _DWORD, int, unsigned int, _DWORD *))(*(_DWORD *)v7 + 0x1C))( /*0x775aec*/
                   v7,
                   *this,
                   v9,
                   v11,
                   v29) >= 0 )
            {
              v12 = 0; /*0x775af2*/
              v25 = 0; /*0x775afb*/
              if ( !*((_WORD *)this + 0x22D) ) /*0x775af4*/
                goto LABEL_20; /*0x775af4*/
              do /*0x775b75*/
              {
                v13 = *(_DWORD **)(*(this + 0x115) + 4 * v12); /*0x775b0b*/
                if ( v13 ) /*0x775b10*/
                {
                  if ( v13[3] == v24 && *v13 == v29[0] && v13[1] == v29[1] ) /*0x775b2a*/
                  {
                    v14 = v13 + 4; /*0x775b2f*/
                    v25 = *(_DWORD *)(*(this + 0x115) + 4 * v12); /*0x775b32*/
                    v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v13[4] + 4))(v13 + 4); /*0x775b3b*/
                    v15[2] = v29[2]; /*0x775b41*/
                    *v15 = 0; /*0x775b44*/
                    v15[1] = v14[2]; /*0x775b4d*/
                    v16 = (_DWORD *)v14[2]; /*0x775b50*/
                    if ( v16 ) /*0x775b55*/
                      *v16 = v15; /*0x775b57*/
                    else
                      v14[1] = v15; /*0x775b5b*/
                    ++v14[3]; /*0x775b5e*/
                    v14[2] = v15; /*0x775b62*/
                    v7 = a2; /*0x775b65*/
                  }
                }
                ++v12; /*0x775b70*/
              }
              while ( v12 < *((unsigned __int16 *)this + 0x22D) ); /*0x775b75*/
              if ( !v25 ) /*0x775b7c*/
              {
LABEL_20:
                v17 = (_DWORD *)FormHeapAlloc(0x20u); /*0x775b84*/
                if ( v17 ) /*0x775b8e*/
                  v18 = sub_7759A0(v17, v29); /*0x775b9c*/
                else
                  v18 = 0; /*0x775ba0*/
                v19 = *((unsigned __int16 *)v6 + 5); /*0x775ba2*/
                if ( v19 >= *((unsigned __int16 *)v6 + 4) ) /*0x775bac*/
                  NiTArray_SetSize((unsigned __int16 *)v6, v19 + *((unsigned __int16 *)v6 + 7)); /*0x775bb7*/
                if ( v19 < *((unsigned __int16 *)v6 + 5) ) /*0x775bc2*/
                {
                  if ( v18 ) /*0x775bd8*/
                  {
                    if ( !*(_DWORD *)(v6[1] + 4 * v19) ) /*0x775bdd*/
                      ++*((_WORD *)v6 + 6); /*0x775be3*/
                  }
                  else if ( *(_DWORD *)(v6[1] + 4 * v19) ) /*0x775bed*/
                  {
                    --*((_WORD *)v6 + 6); /*0x775bf3*/
                  }
                }
                else
                {
                  *((_WORD *)v6 + 5) = v19 + 1; /*0x775bc9*/
                  if ( v18 ) /*0x775bcd*/
                    ++*((_WORD *)v6 + 6); /*0x775bcf*/
                }
                *(_DWORD *)(v6[1] + 4 * v19) = v18; /*0x775bfc*/
                v7 = a2; /*0x775bff*/
              }
            }
            v11 = ++v26; /*0x775c07*/
            if ( v26 >= v28 ) /*0x775c12*/
              break; /*0x775c12*/
            v9 = v24; /*0x775ad3*/
          }
        }
      }
      if ( !v27 ) /*0x775c1d*/
        break; /*0x775c1d*/
      v8 = v27; /*0x775a96*/
    }
    v4 = a3; /*0x775c23*/
  }
  (*(void (__stdcall **)(int, _DWORD, char *))(*(_DWORD *)v7 + 0x20))(v7, *this, v30); /*0x775c36*/
  v20 = (int *)FormHeapAlloc(0x148u); /*0x775c3d*/
  if ( v20 ) /*0x775c47*/
    v21 = sub_775780(v20, v7, v4, 1, v31, a4); /*0x775c59*/
  else
    v21 = 0; /*0x775c60*/
  *(this + 0x118) = (int)v21; /*0x775c67*/
  v22 = (int *)FormHeapAlloc(0x148u); /*0x775c6d*/
  if ( v22 ) /*0x775c77*/
    *(this + 0x119) = (int)sub_775780(v22, v7, v4, 2, v31, a4); /*0x775c8f*/
  else
    *(this + 0x119) = 0; /*0x775ca3*/
  return this; /*0x775c8e*/
}
