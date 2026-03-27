double __usercall sub_622E30@<st0>(int a1@<ecx>, char a2@<dil>, double a3@<st1>, double result@<st0>)
{
  int *v6; // edi
  TESObjectREFR *v7; // eax
  double v8; // st5
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  void (__thiscall **v11)(_DWORD *, int); // edi
  int v12; // eax
  _DWORD *v13; // eax
  bool v14; // al
  double v15; // st5
  char v16; // al
  char v17; // al
  unsigned int v18; // edi
  bool v19; // bl
  char v20; // dl
  char v21; // cl
  BSSimpleList_VoidPtr *next; // edi
  float *v23; // ebx
  int v24; // eax
  float *v25; // eax
  float *v26; // edi
  float **v27; // edi
  unsigned int v28; // ebx
  signed int v29; // edx
  float *v30; // eax
  float *data; // [esp+8h] [ebp-24h]
  float v33; // [esp+18h] [ebp-14h]
  float v34; // [esp+18h] [ebp-14h]
  float v35; // [esp+1Ch] [ebp-10h]
  float v36; // [esp+1Ch] [ebp-10h]
  float v37[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xB )
  {
    if ( *(float *)(a1 + 0x184) < 0.0 )
    {
      v6 = *(int **)(a1 + 0x3C);
      v7 = (TESObjectREFR *)sub_6135F0(a1);
      *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(v6, (TESObjectREFR *)v6, v7, 0, a2);
    }
    v35 = *(float *)(a1 + 0x184);
    v8 = sub_615520(a1);
    if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 )
    {
      sub_6191B0(a1, v8, a3, result);
      return result;
    }
    if ( sub_5E1E90(*(void **)(a1 + 0x3C)) )
    {
      *(_BYTE *)(a1 + 0x116) = sub_614290(a1) == 0;
      if ( !sub_6135F0(a1)
        || (v9 = (_DWORD *)sub_6135F0(a1), !Actor_IsSwimming(v9))
        || *(_BYTE *)(a1 + 0x116)
        || *(_DWORD *)(a1 + 0x1A8) < iAICombatMinDetection )
      {
        if ( *(float *)(a1 + 0xD8) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) )
        {
          v10 = *(_DWORD **)(a1 + 0x3C);
          v11 = (void (__thiscall **)(_DWORD *, int))(*v10 + 0x340);
          v12 = sub_6135F0(a1);
          (*v11)(v10, v12);
        }
        return result;
      }
LABEL_28:
      sub_619920(a1, 0);
      return result;
    }
    if ( !sub_5E3400(*(Actor **)(a1 + 0x3C)) )
    {
      if ( sub_6135F0(a1) )
      {
        v13 = (_DWORD *)sub_6135F0(a1);
        if ( !Actor_IsSwimming(v13) )
        {
          v14 = sub_614290(a1) == 0;
          *(_BYTE *)(a1 + 0x116) = v14;
          if ( !v14 && *(_DWORD *)(a1 + 0x1A8) >= iAICombatMinDetection )
            goto LABEL_28;
        }
      }
    }
    v33 = result;
    if ( sub_613440((void **)a1, v35, v33, 0)
      && !*(_BYTE *)(a1 + 0x116)
      && *(_DWORD *)(a1 + 0x1A8) >= iAICombatMinDetection )
    {
      goto LABEL_28;
    }
    if ( sub_6135F0(a1) )
    {
      v15 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4);
      if ( *(float *)(a1 + 0xD8) < v15 )
      {
        if ( *(_DWORD *)(a1 + 0x74) )
        {
          if ( sub_614290(a1) || (v15 = ((double (__thiscall *)(int))loc_622820)(a1), v16) )
          {
            if ( *(_DWORD *)(a1 + 0x1A8) >= iAICombatMinDetection )
              goto LABEL_28;
          }
          result = sub_6150E0((_DWORD *)a1, v15, result, 1);
          if ( v17 )
          {
            sub_61D320(a1);
            return result;
          }
          v18 = *(_DWORD *)(a1 + 0x70);
          v19 = sub_612690(v18);
          if ( !v19 || !*(_BYTE *)(a1 + 0x158) || *(_BYTE *)(a1 + 0x15B) )
          {
            if ( sub_612670(v18) && v20 || !v21 && (v20 || v19) )
            {
              next = *(BSSimpleList_VoidPtr **)(a1 + 0x118);
              v15 = flt_A32048;
              v23 = 0;
              v34 = flt_A32048;
              for ( *(_BYTE *)(a1 + 0x17F) = 0; next; next = (BSSimpleList_VoidPtr *)next->firstNode.next )
              {
                if ( BSSimpleList_IsEmpty(next) )
                  break;
                if ( next->firstNode.data )
                {
                  v24 = sub_6135F0(a1);
                  data = (float *)next->firstNode.data;
                  v25 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v24 + 0x174))(
                                   v24,
                                   result,
                                   a3);
                  sub_4121A0(v25, v37, data);
                  result = sub_404C90(v37);
                  v36 = v15;
                  v15 = v36;
                  if ( v34 > (double)v36 )
                  {
                    v23 = (float *)next->firstNode.data;
                    v34 = v36;
                  }
                }
              }
              v26 = v23;
LABEL_51:
              if ( v26 )
              {
                v30 = (float *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) + 0x174))(
                                 *(_DWORD *)(a1 + 0x3C),
                                 result,
                                 a3);
                sub_4121A0(v30, v37, v26);
                result = sub_404C90(v37);
                if ( v15 > fCostant_100 )
                {
                  sub_61C9A0((float *)a1, (_DWORD **)v26);
                  return result;
                }
              }
              goto LABEL_54;
            }
            v27 = *(float ***)(a1 + 0x118);
            if ( (unsigned int)BSSimpleList_Count(v27) > 1 )
            {
              v28 = BSSimpleList_Count(v27);
              v29 = GetRandomLargeInteger_(0) % v28;
              if ( v29 > 0 )
              {
                do
                {
                  --v29;
                  v27 = (float **)v27[1];
                }
                while ( v29 );
              }
              if ( v27 )
              {
                v26 = *v27;
                goto LABEL_51;
              }
            }
          }
LABEL_54:
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30;
          *(float *)(a1 + 0xDC) = flt_A30634;
        }
      }
    }
  }
  return result;
}
