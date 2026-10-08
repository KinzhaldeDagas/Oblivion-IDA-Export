int __thiscall sub_7763A0(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // ebp
  int v6; // edi
  bool v7; // zf
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  double v11; // st7
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  int v15; // ebp
  int v16; // eax
  _DWORD *v17; // [esp+24h] [ebp-1Ch]
  unsigned __int8 v18; // [esp+24h] [ebp-1Ch]
  __int64 v19; // [esp+28h] [ebp-18h] BYREF
  float v20; // [esp+30h] [ebp-10h]
  float v21; // [esp+34h] [ebp-Ch]
  float i; // [esp+38h] [ebp-8h]

  v20 = 0.0; /*0x7763a8*/
  v3 = (_DWORD *)*(this + 5); /*0x7763ac*/
  v21 = 0.0; /*0x7763af*/
  for ( i = 0.0; v3; *(_BYTE *)(*(_DWORD *)(v4 + 0x104) + 0x70) = 1 ) /*0x7763bb*/
  {
    v4 = v3[2]; /*0x7763c3*/
    v3 = (_DWORD *)*v3; /*0x7763c5*/
  }
  if ( *((_BYTE *)this + 0x31) ) /*0x7763d5*/
  {
    v5 = 0; /*0x7763e4*/
    if ( a2 ) /*0x7763ec*/
      v5 = *(_DWORD **)(a2 + 0xC); /*0x7763f5*/
    a2 = 0; /*0x7763f9*/
    while ( v5 ) /*0x776401*/
    {
      if ( a2 >= 8 ) /*0x776415*/
        break; /*0x776415*/
      v6 = v5[1]; /*0x776426*/
      v17 = (_DWORD *)*v5; /*0x776429*/
      v5 = (_DWORD *)*v5; /*0x77642d*/
      v7 = *(_BYTE *)(v6 + 0xAC) == 0; /*0x77642f*/
      LODWORD(v19) = v6; /*0x776436*/
      if ( !v7 && flt_A34BA0 <= (double)*(float *)(v6 + 0xDC) ) /*0x776451*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x84))(v6) ) /*0x776461*/
        {
          v8 = *(_DWORD *)(v6 + 0x104); /*0x7764ab*/
          if ( v8 ) /*0x7764b3*/
          {
            if ( sub_775FF0((float *)v8, v6) ) /*0x7764bc*/
              goto LABEL_14; /*0x7764c3*/
          }
          else
          {
            v15 = sub_775FA0(this); /*0x77664a*/
            v16 = FormHeapAlloc(0x74u); /*0x77664c*/
            v8 = v16; /*0x776651*/
            if ( v16 ) /*0x776658*/
            {
              *(_DWORD *)(v16 + 0x68) = 0; /*0x77665d*/
              *(_DWORD *)(v16 + 0x6C) = v15; /*0x776664*/
              *(_BYTE *)(v16 + 0x70) = 0; /*0x776667*/
              *(_BYTE *)(v16 + 0x71) = 0; /*0x77666b*/
              sub_775FF0((float *)v16, v6); /*0x77666f*/
            }
            else
            {
              v8 = 0; /*0x776676*/
            }
            NiTMap_SetAt(this, v6, v8); /*0x77667c*/
            v5 = v17; /*0x776681*/
            *(_DWORD *)(v6 + 0x104) = v8; /*0x776685*/
LABEL_14:
            (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 8) + 0xCC))( /*0x7764c5*/
              *(this + 8),
              *(_DWORD *)(v8 + 0x6C),
              v8);
          }
          if ( !*(_BYTE *)(v8 + 0x71) ) /*0x7764d8*/
          {
            (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 8) + 0xD4))( /*0x7764f0*/
              *(this + 8),
              *(_DWORD *)(v8 + 0x6C),
              1);
            *(_BYTE *)(v8 + 0x71) = 1; /*0x7764fa*/
            NiTList_AddHead(this + 4, &v19); /*0x7764fe*/
          }
          ++a2; /*0x776503*/
          *(_BYTE *)(v8 + 0x70) = 0; /*0x776508*/
          continue; /*0x776508*/
        }
        *(float *)&v19 = *(float *)(v6 + 0xDC); /*0x77646d*/
        v20 = *(float *)(v6 + 0xE0) * *(float *)&v19 + v20; /*0x776487*/
        v21 = *(float *)(v6 + 0xE4) * *(float *)&v19 + v21; /*0x776497*/
        i = *(float *)&v19 * *(float *)(v6 + 0xE8) + i; /*0x7764a5*/
      }
    }
  }
  v9 = (_DWORD *)*(this + 5); /*0x776515*/
  while ( v9 ) /*0x77651a*/
  {
    v10 = *(_DWORD *)(v9[2] + 0x104); /*0x776523*/
    v7 = *(_BYTE *)(v10 + 0x70) == 0; /*0x776529*/
    a2 = (unsigned int)v9; /*0x776530*/
    v9 = (_DWORD *)*v9; /*0x776534*/
    if ( !v7 ) /*0x776536*/
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 8) + 0xD4))( /*0x77654a*/
        *(this + 8),
        *(_DWORD *)(v10 + 0x6C),
        0);
      *(_BYTE *)(v10 + 0x71) = 0; /*0x776554*/
      NiTPointerList_RemoveNode((BSTextureManager *)(this + 4), (NiTPointerList_Node_void **)&a2); /*0x776558*/
    }
  }
  v11 = dbl_A3DDD8; /*0x77657f*/
  v19 = (__int64)(v20 * v11); /*0x776585*/
  v18 = v19; /*0x776592*/
  if ( (unsigned int)v19 > 0xFF ) /*0x77659a*/
    v18 = 0xFF; /*0x77659c*/
  v19 = (__int64)(v21 * v11); /*0x7765c0*/
  v12 = v19; /*0x7765c4*/
  if ( (unsigned int)v19 > 0xFF ) /*0x7765d2*/
    v12 = 0xFF; /*0x7765d4*/
  v19 = (__int64)(v11 * i); /*0x7765f3*/
  v13 = v19; /*0x7765f7*/
  if ( (unsigned int)v19 > 0xFF ) /*0x776604*/
    v13 = 0xFF; /*0x776606*/
  return (*(int (__thiscall **)(_DWORD, int, unsigned int, _DWORD))(*(_DWORD *)*(this + 9) + 0x64))( /*0x77663a*/
           *(this + 9),
           0x8B,
           v13 | ((v12 | ((v18 | 0xFFFFFF00) << 8)) << 8),
           0);
}
