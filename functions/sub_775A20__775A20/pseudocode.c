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

  v4 = a3;
  *this = a3;
  v6 = this + 0x114;
  *((_WORD *)this + 0x22C) = 0x20;
  *((_WORD *)this + 0x22D) = 0;
  *((_WORD *)this + 0x22E) = 0;
  *(this + 0x114) = (int)&NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable';
  *((_WORD *)this + 0x22F) = 0x10;
  v7 = a2;
  *(this + 0x115) = FormHeapAlloc(0x80u);
  (*(void (__stdcall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)a2 + 0x14))(a2, *this, 0, this + 1);
  v8 = *(_DWORD **)(a4 + 4);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = v8[2];
      v27 = (_DWORD *)*v8;
      v24 = v9;
      if ( v9 )
      {
        v10 = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)v7 + 0x18))(v7, *this, v9);
        v11 = 0;
        v28 = v10;
        v26 = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            if ( (*(int (__stdcall **)(int, _DWORD, int, unsigned int, _DWORD *))(*(_DWORD *)v7 + 0x1C))(
                   v7,
                   *this,
                   v9,
                   v11,
                   v29) >= 0 )
            {
              v12 = 0;
              v25 = 0;
              if ( !*((_WORD *)this + 0x22D) )
                goto LABEL_20;
              do
              {
                v13 = *(_DWORD **)(*(this + 0x115) + 4 * v12);
                if ( v13 )
                {
                  if ( v13[3] == v24 && *v13 == v29[0] && v13[1] == v29[1] )
                  {
                    v14 = v13 + 4;
                    v25 = *(_DWORD *)(*(this + 0x115) + 4 * v12);
                    v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v13[4] + 4))(v13 + 4);
                    v15[2] = v29[2];
                    *v15 = 0;
                    v15[1] = v14[2];
                    v16 = (_DWORD *)v14[2];
                    if ( v16 )
                      *v16 = v15;
                    else
                      v14[1] = v15;
                    ++v14[3];
                    v14[2] = v15;
                    v7 = a2;
                  }
                }
                ++v12;
              }
              while ( v12 < *((unsigned __int16 *)this + 0x22D) );
              if ( !v25 )
              {
LABEL_20:
                v17 = (_DWORD *)FormHeapAlloc(0x20u);
                if ( v17 )
                  v18 = sub_7759A0(v17, v29);
                else
                  v18 = 0;
                v19 = *((unsigned __int16 *)v6 + 5);
                if ( v19 >= *((unsigned __int16 *)v6 + 4) )
                  NiTArray_SetSize((unsigned __int16 *)v6, v19 + *((unsigned __int16 *)v6 + 7));
                if ( v19 < *((unsigned __int16 *)v6 + 5) )
                {
                  if ( v18 )
                  {
                    if ( !*(_DWORD *)(v6[1] + 4 * v19) )
                      ++*((_WORD *)v6 + 6);
                  }
                  else if ( *(_DWORD *)(v6[1] + 4 * v19) )
                  {
                    --*((_WORD *)v6 + 6);
                  }
                }
                else
                {
                  *((_WORD *)v6 + 5) = v19 + 1;
                  if ( v18 )
                    ++*((_WORD *)v6 + 6);
                }
                *(_DWORD *)(v6[1] + 4 * v19) = v18;
                v7 = a2;
              }
            }
            v11 = ++v26;
            if ( v26 >= v28 )
              break;
            v9 = v24;
          }
        }
      }
      if ( !v27 )
        break;
      v8 = v27;
    }
    v4 = a3;
  }
  (*(void (__stdcall **)(int, _DWORD, char *))(*(_DWORD *)v7 + 0x20))(v7, *this, v30);
  v20 = (int *)FormHeapAlloc(0x148u);
  if ( v20 )
    v21 = sub_775780(v20, v7, v4, 1, v31, a4);
  else
    v21 = 0;
  *(this + 0x118) = (int)v21;
  v22 = (int *)FormHeapAlloc(0x148u);
  if ( v22 )
    *(this + 0x119) = (int)sub_775780(v22, v7, v4, 2, v31, a4);
  else
    *(this + 0x119) = 0;
  return this;
}
