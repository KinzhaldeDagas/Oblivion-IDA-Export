double __userpurge sub_55C900@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, double a4@<st2>, int a5)
{
  int v6; // edi
  int v7; // ebx
  int v8; // ebp
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  float v14; // [esp+8h] [ebp-2Ch]
  float v15; // [esp+8h] [ebp-2Ch]
  int v16; // [esp+10h] [ebp-24h]
  int v17; // [esp+10h] [ebp-24h]
  _UNKNOWN **v18; // [esp+18h] [ebp-1Ch]
  int *v19; // [esp+1Ch] [ebp-18h]
  float v20; // [esp+28h] [ebp-Ch]
  float v21; // [esp+2Ch] [ebp-8h]
  float v22; // [esp+30h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h] BYREF

  v6 = 0; /*0x55c909*/
  while ( 2 ) /*0x55c923*/
  {
    switch ( v6 ) /*0x55c923*/
    {
      case 8: /*0x55c923*/
      case 0xB: /*0x55c923*/
        v7 = (*(int (__usercall **)@<eax>(int@<ecx>, _UNKNOWN **, int *, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))( /*0x55c938*/
               a1,
               v18,
               v19,
               result,
               a3);
        v19 = &a5; /*0x55c948*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1); /*0x55c94d*/
        v18 = &retaddr; /*0x55c951*/
        *(float *)&v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 0x5C))(v7); /*0x55c962*/
        result = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 0x5C))(v8); /*0x55c969*/
        v14 = result; /*0x55c96c*/
        sub_54F5E0(v14, COERCE_FLOAT(8), (float *)v16, (float *)0xB); /*0x55c96f*/
        if ( v6 != 8 ) /*0x55c97a*/
          goto LABEL_5; /*0x55c97a*/
        a4 = v21; /*0x55c97c*/
        goto LABEL_9; /*0x55c980*/
      case 9: /*0x55c923*/
      case 0xA: /*0x55c923*/
        v9 = (*(int (__usercall **)@<eax>(int@<ecx>, _UNKNOWN **, int *, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))( /*0x55c994*/
               a1,
               v18,
               v19,
               result,
               a3);
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1); /*0x55c9a5*/
        v19 = &a5; /*0x55c9ab*/
        v18 = &retaddr; /*0x55c9b3*/
        *(float *)&v17 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v9 + 0x5C))(v9); /*0x55c9c0*/
        result = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v10 + 0x5C))(v10); /*0x55c9c7*/
        v15 = result; /*0x55c9ca*/
        sub_54F5E0(v15, COERCE_FLOAT(9), (float *)v17, (float *)0xA); /*0x55c9cd*/
        if ( v6 == 9 ) /*0x55c9d8*/
          a4 = v21; /*0x55c9da*/
        else
LABEL_5:
          a4 = v22; /*0x55c982*/
        goto LABEL_9; /*0x55c9de*/
      case 0xE: /*0x55c923*/
      case 0xF: /*0x55c923*/
      case 0x10: /*0x55c923*/
        goto LABEL_15;
      default:
        v11 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))( /*0x55c9ea*/
                a1,
                result,
                a3);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x5C))(v11, v6); /*0x55c9f4*/
LABEL_9:
        v20 = a4; /*0x55c9f6*/
        a4 = v20; /*0x55ca04*/
        if ( v20 > 0.0 && a4 <= 1.0 ) /*0x55ca14*/
        {
          v12 = a5; /*0x55ca16*/
          if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a5 + 0x10) + 0x1C))(*(_DWORD *)(a5 + 0x10), v6) ) /*0x55ca23*/
          {
            if ( !*(_BYTE *)(v12 + 0x1C) ) /*0x55ca29*/
            {
              NiGeometry_RestoreFaceGenBaseVertices(*(_DWORD *)v12, v12 + 4); /*0x55ca36*/
              *(_BYTE *)(v12 + 0x1C) = 1; /*0x55ca3e*/
            }
            v13 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>, double@<st1>))(**(_DWORD **)(v12 + 0x10) /*0x55ca4b*/
                                                                                             + 0x1C))(
                    *(_DWORD *)(v12 + 0x10),
                    v6,
                    result,
                    a3);
            result = v20; /*0x55ca4d*/
            (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v13 + 4))( /*0x55ca68*/
              v13,
              v12 + 4,
              *(_DWORD *)(v12 + 0x18),
              *(_DWORD *)(v12 + 0x14),
              COERCE_FLOAT(LODWORD(v20)));
          }
        }
LABEL_15:
        if ( ++v6 < 0x11 ) /*0x55ca74*/
          continue; /*0x55ca74*/
        return result;
    }
  }
}
