unsigned int __cdecl sub_8AB440(_DWORD *a1, float *a2, int a3, float a4, int a5)
{
  unsigned int result; // eax
  _DWORD *v6; // ebx
  float *v7; // eax
  float *v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  _DWORD *v12; // esi
  bool v13; // zf
  float *v14; // edi
  int v15; // ebx
  __int16 v16; // dx
  float v17; // eax
  void (__thiscall *v18)(_DWORD *, _DWORD); // edx
  float *v19; // eax
  int v20; // eax
  _DWORD *v21; // esi
  float *v22; // eax
  unsigned int v23; // edi
  int v24; // esi
  int i; // eax
  float v26; // [esp+8h] [ebp-64h]
  float v27; // [esp+8h] [ebp-64h]
  float v28; // [esp+1Ch] [ebp-50h]
  float v29; // [esp+24h] [ebp-48h]
  _DWORD *v30; // [esp+28h] [ebp-44h] BYREF
  float v31; // [esp+2Ch] [ebp-40h]
  int v32[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v33[11]; // [esp+3Ch] [ebp-30h] BYREF

  result = (unsigned int)a2;
  v6 = a1;
  v30 = a1;
  if ( a1 )
  {
    v7 = (float *)sub_497420((int)a1);
    v8 = v7;
    if ( v7 )
    {
      sub_88F040(v7);
      v9 = *((_DWORD *)v8 + 4);
      v10 = 0;
      if ( v9 )
      {
        v11 = *(_DWORD *)(v9 + 8);
        if ( !v11 || v11 == 0xFFFFFFEC )
          v10 = 0;
        else
          v10 = *(_DWORD *)(v11 + 0x30);
      }
      v28 = *(float *)(4 * ((v10 >> 8) & 0x1F) + 0xB2EEE8);
      v12 = sub_700010(a1, (int)dword_BA7F3C);
      if ( v12 )
      {
        if ( v28 >= 0.0 )
        {
          if ( (_BYTE)a5 )
          {
            (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v8 + 0x70))(v8, 1, 0);
          }
          else
          {
            v31 = v8[5];
            v29 = v8[6];
            sub_8AA7F0((float *)v12);
            v13 = v12[0x14] == 0;
            v12[0x18] = 2;
            if ( v13 )
            {
              sub_401080(v33, 0xC, 2, (void *(__thiscall *)(void *))sub_8AA460);
              v33[1] = v31;
              v33[2] = v29;
              v33[0] = 0.0;
              v33[4] = 0.0;
              v33[5] = 0.0;
              v33[3] = v28;
              sub_8AA480(v12 + 0x10, 2u);
              v14 = v33;
              v15 = 2;
              do
              {
                sub_8AB000(v12, (int)v14);
                v14 += 3;
                --v15;
              }
              while ( v15 );
              v16 = *((_WORD *)v12 + 4);
              v17 = *(float *)v12;
              *((float *)v12 + 5) = a4;
              *((float *)v12 + 6) = v28;
              *((_WORD *)v12 + 4) = v16 & 0xFE30 | 0xC5;
              v18 = *(void (__thiscall **)(_DWORD *, _DWORD))(LODWORD(v17) + 0x4C);
              *((float *)v12 + 4) = 0.0;
              *((float *)v12 + 3) = 1.0;
              v26 = -flt_A7DEB4;
              v18(v12, LODWORD(v26));
              v6 = v30;
            }
            if ( !sub_700010(v6, (int)&unk_BA8000) )
            {
              sub_4707B0(a2, (float *)v32, flt_B2EC5C);
              v27 = flt_B2EC60;
              v19 = sub_4529E0(v33, (float *)v32);
              sub_8B8590((int)v6, (int)v19, v27);
            }
          }
        }
      }
    }
    else
    {
      v20 = sub_47FAC0((int)a1);
      if ( v20 )
      {
        v21 = *(_DWORD **)(v20 + 0x10);
        if ( v21 )
        {
          if ( (*sub_497340(v21, &v30) & 0x1F00) == 0x1600 )
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v21 + 0x9C))(v21, 1);
            if ( !(_BYTE)a5 )
            {
              sub_4707B0(a2, (float *)v32, flt_B2EC5C);
              v22 = sub_4529E0(v33, (float *)v32);
              sub_5377B0((_DWORD **)v21[2], flt_B2E2E0, (int)v22);
            }
          }
        }
      }
    }
    result = (*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
    v23 = result;
    if ( result )
    {
      result = *(unsigned __int16 *)(result + 0xB6);
      v24 = 0;
      if ( *(_WORD *)(v23 + 0xB6) )
      {
        if ( result )
          goto LABEL_27;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v23 + 0xB0) + 4 * v24) )
        {
          sub_8AB440(i, (int)a2, a3, a4, a5);
          result = *(unsigned __int16 *)(v23 + 0xB6);
          if ( result <= ++v24 )
            break;
LABEL_27:
          ;
        }
      }
    }
  }
  return result;
}
