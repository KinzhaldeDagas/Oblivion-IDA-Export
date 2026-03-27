int __thiscall sub_8A5C10(char *this, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int *v5; // ebx
  int *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // edi
  int *v14; // eax
  unsigned int v15; // edi
  int *v16; // eax
  unsigned int v17; // edi
  int *v18; // eax
  unsigned int v19; // edi
  int *v20; // eax
  unsigned int v21; // edi
  int *v22; // eax
  unsigned int v23; // edi
  int *v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // ecx
  int *v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ecx
  int *v30; // eax
  unsigned int v31; // edi
  int *v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // edx
  int *v35; // eax
  unsigned int v36; // edi
  unsigned int v37; // edx
  const char *v38; // eax
  int *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // edx
  int v42; // eax
  int *v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // edx
  int *v46; // ebx
  int *v47; // eax
  bool v48; // zf
  int *v49; // edi
  int v50; // edi
  void (__thiscall ***v51)(_DWORD, int); // ebx
  const char **v52; // eax
  char *v53; // eax
  unsigned int v54; // edi
  char *v55; // ebx
  int *v56; // edx
  int result; // eax
  int v58; // ecx
  int *v59; // [esp+18h] [ebp-1B0h] BYREF
  char v60; // [esp+1Fh] [ebp-1A9h]
  int *i; // [esp+20h] [ebp-1A8h] BYREF
  int v62; // [esp+24h] [ebp-1A4h]
  float v63[3]; // [esp+28h] [ebp-1A0h] BYREF
  int v64; // [esp+34h] [ebp-194h] BYREF
  float v65[4]; // [esp+38h] [ebp-190h] BYREF
  float v66[5]; // [esp+48h] [ebp-180h] BYREF
  int v67; // [esp+5Ch] [ebp-16Ch]
  __m128 v68; // [esp+78h] [ebp-150h] BYREF
  float v69; // [esp+88h] [ebp-140h]
  float v70; // [esp+8Ch] [ebp-13Ch]
  float v71; // [esp+90h] [ebp-138h]
  float v72; // [esp+94h] [ebp-134h]
  __m128 v73; // [esp+98h] [ebp-130h] BYREF
  __m128 v74[4]; // [esp+A8h] [ebp-120h] BYREF
  __m128 v75; // [esp+E8h] [ebp-E0h] BYREF
  float v76; // [esp+F8h] [ebp-D0h]
  float v77; // [esp+FCh] [ebp-CCh]
  float v78; // [esp+100h] [ebp-C8h]
  float v79; // [esp+104h] [ebp-C4h]
  float v80; // [esp+108h] [ebp-C0h]
  float v81; // [esp+10Ch] [ebp-BCh]
  float v82; // [esp+110h] [ebp-B8h]
  float v83; // [esp+114h] [ebp-B4h]
  char v84; // [esp+118h] [ebp-B0h]
  char v85[132]; // [esp+130h] [ebp-98h] BYREF
  unsigned int v86; // [esp+1C4h] [ebp-4h]

  v59 = (int *)this;
  v62 = 0;
  sub_8B0080(this, (unsigned __int16 *)a2);
  v2 = TESOutput_PrintString(*(char **)dword_BA7D84);
  end = a2->end;
  capacity = a2->capacity;
  i = (int *)v2;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  NiTArray_SetAt(a2, end, &i);
  sub_8A5790(v66);
  v86 = 0;
  v5 = v59;
  sub_8A2DE0(v59, (int)v66);
  sub_43F3E0(v63, &v68);
  v65[1] = v69;
  v65[2] = v70;
  v65[3] = v71;
  v65[0] = v72;
  v6 = (int *)sub_707280(v63, "Position");
  v7 = a2->end;
  v8 = a2->capacity;
  v59 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize);
  NiTArray_SetAt(a2, v7, &v59);
  v9 = (int *)sub_7153C0(v65, "Rotation");
  v10 = a2->end;
  v11 = a2->capacity;
  v59 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize);
  NiTArray_SetAt(a2, v10, &v59);
  sub_43F3E0(v63, &v75);
  v12 = (int *)sub_707280(v63, (char *)&off_A97548);
  v13 = a2->end;
  v59 = v12;
  if ( v13 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v13 + a2->growSize);
  NiTArray_SetAt(a2, v13, &v59);
  v14 = (int *)TESOutput_PrintLabeledFloat("MASS", v76);
  v15 = a2->end;
  v59 = v14;
  if ( v15 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v15 + a2->growSize);
  NiTArray_SetAt(a2, v15, &v59);
  v16 = (int *)TESOutput_PrintLabeledFloat("LINDAMP", v77);
  v17 = a2->end;
  v59 = v16;
  if ( v17 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v17 + a2->growSize);
  NiTArray_SetAt(a2, v17, &v59);
  v18 = (int *)TESOutput_PrintLabeledFloat("ANGDAMP", v78);
  v19 = a2->end;
  v59 = v18;
  if ( v19 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v19 + a2->growSize);
  NiTArray_SetAt(a2, v19, &v59);
  v20 = (int *)TESOutput_PrintLabeledFloat("FRICTION", v79);
  v21 = a2->end;
  v59 = v20;
  if ( v21 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v21 + a2->growSize);
  NiTArray_SetAt(a2, v21, &v59);
  v22 = (int *)TESOutput_PrintLabeledFloat("REST", v80);
  v23 = a2->end;
  v59 = v22;
  if ( v23 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v23 + a2->growSize);
  NiTArray_SetAt(a2, v23, &v59);
  sub_8A5280((unsigned __int16 *)a2, (char *)v84);
  v24 = (int *)TESOutput_PrintLabeledFloat("MAXLINVEL", v81);
  v25 = a2->end;
  v26 = a2->capacity;
  v59 = v24;
  if ( v25 >= v26 )
    NiTArray_SetSize((unsigned __int16 *)a2, v25 + a2->growSize);
  NiTArray_SetAt(a2, v25, &v59);
  v27 = (int *)TESOutput_PrintLabeledFloat("MAXANGVEL", v82);
  v28 = a2->end;
  v29 = a2->capacity;
  v59 = v27;
  if ( v28 >= v29 )
    NiTArray_SetSize((unsigned __int16 *)a2, v28 + a2->growSize);
  NiTArray_SetAt(a2, v28, &v59);
  sub_43F3E0(v63, &v73);
  v30 = (int *)sub_707280(v63, "LinVel");
  v31 = a2->end;
  v59 = v30;
  if ( v31 >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, v31 + a2->growSize);
  NiTArray_SetAt(a2, v31, &v59);
  sub_43F3E0(v63, v74);
  v32 = (int *)sub_707280(v63, "AngVel");
  v33 = a2->end;
  v34 = a2->capacity;
  v59 = v32;
  if ( v33 >= v34 )
    NiTArray_SetSize((unsigned __int16 *)a2, v33 + a2->growSize);
  NiTArray_SetAt(a2, v33, &v59);
  v35 = (int *)TESOutput_PrintLabeledFloat("PENDEPTH", v83);
  v36 = a2->end;
  v37 = a2->capacity;
  v59 = v35;
  if ( v36 >= v37 )
    NiTArray_SetSize((unsigned __int16 *)a2, v36 + a2->growSize);
  NiTArray_SetAt(a2, v36, &v59);
  v38 = sub_8A3200((char *)v66);
  v39 = (int *)TESOutput_PrintLabeledString("QUALITYTYPE", v38);
  v40 = a2->end;
  v41 = a2->capacity;
  v59 = v39;
  if ( v40 >= v41 )
    NiTArray_SetSize((unsigned __int16 *)a2, v40 + a2->growSize);
  NiTArray_SetAt(a2, v40, &v59);
  v42 = sub_8A4740(v5);
  v43 = (int *)TESOutput_PrintLabeledUnsignedInt("ACTCONCOUNT", v42);
  v44 = a2->end;
  v45 = a2->capacity;
  v59 = v43;
  if ( v44 >= v45 )
    NiTArray_SetSize((unsigned __int16 *)a2, v44 + a2->growSize);
  NiTArray_SetAt(a2, v44, &v59);
  v46 = v5 + 4;
  for ( i = v46; ; v46 = i )
  {
    if ( !v46 || (v47 = sub_677C70(v46, (int *)&v59), v62 |= 1u, v48 = *v47 == 0, v60 = 1, v48) )
      v60 = 0;
    if ( (v62 & 1) != 0 )
    {
      v49 = v59;
      v62 &= ~1u;
      if ( v59 )
      {
        if ( !InterlockedDecrement(v59 + 1) )
        {
          if ( v49 )
            (*(void (__thiscall **)(int *, int))*v49)(v49, 1);
        }
      }
    }
    if ( !v60 )
      break;
    v50 = *sub_677C70(v46, &v64);
    if ( v64 )
    {
      v51 = (void (__thiscall ***)(_DWORD, int))v64;
      if ( !InterlockedDecrement((volatile LONG *)(v64 + 4)) )
        (**v51)(v51, 1);
    }
    v52 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v50 + 4))(v50);
    _sprintf(v85, "%s: 0x%8X", *v52, v50);
    v53 = TESOutput_PrintLabeledString("ACTCON", v85);
    v54 = a2->end;
    v55 = v53;
    if ( v54 >= a2->capacity )
      NiTArray_SetSize((unsigned __int16 *)a2, v54 + a2->growSize);
    if ( v54 < a2->end )
    {
      if ( v55 )
      {
        if ( !*((_DWORD *)&a2->data->vtbl + v54) )
          ++a2->numObjs;
      }
      else if ( *((_DWORD *)&a2->data->vtbl + v54) )
      {
        --a2->numObjs;
      }
    }
    else
    {
      a2->end = v54 + 1;
      if ( v55 )
        ++a2->numObjs;
    }
    v56 = i;
    *((_DWORD *)&a2->data->vtbl + v54) = v55;
    i = (int *)v56[1];
  }
  result = v67;
  v86 = 0xFFFFFFFF;
  if ( v67 >= 0 )
  {
    v58 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v58 )
      v58 = dword_BA7D9C;
    return sub_8A75D0(v58, (_DWORD *)LODWORD(v66[3]), 8 * v67, 0x14);
  }
  return result;
}
