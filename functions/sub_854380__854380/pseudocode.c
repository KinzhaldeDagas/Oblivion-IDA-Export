int __thiscall sub_854380(_DWORD *this, NiNode *a2, int a3, NiTPointerList_Node_void *a4, char a5, char *a6, int a7)
{
  NiProperty *NiPropertyByID; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  char *v13; // ebp
  int v14; // eax
  volatile LONG *v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // esi
  int (__thiscall *v20)(_DWORD *); // eax
  _DWORD *v21; // esi
  int *v22; // ecx
  volatile LONG *v23; // eax
  volatile LONG *v24; // eax
  volatile LONG *v25; // eax
  volatile LONG *v26; // eax
  volatile LONG *v27; // eax
  NiTPointerList_Node_void *v28; // edi
  int **v29; // ebp
  _DWORD *v30; // eax
  int v31; // ecx
  double v32; // st7
  bool v33; // bl
  volatile LONG *v34; // esi
  int v35; // eax
  int v36; // edi
  int (__thiscall *v37)(int **); // eax
  int *v38; // eax
  int *v39; // ecx
  int v40; // ebx
  char *v41; // edi
  int v42; // ebp
  int v43; // eax
  int v44; // eax
  volatile LONG *v45; // eax
  int **v46; // ebp
  char v47; // bl
  int v48; // eax
  int v49; // edi
  int (__thiscall *v50)(int **); // eax
  int *v51; // eax
  int *v52; // ecx
  _DWORD *i; // edi
  _DWORD *v54; // eax
  int v55; // ecx
  double v56; // st7
  bool v57; // bl
  void (__thiscall ***v58)(_DWORD, int); // esi
  int v59; // eax
  int v60; // edi
  int (__thiscall *v61)(int **); // edx
  int *v62; // eax
  int *v63; // ecx
  bool v64; // [esp+17h] [ebp-25h]
  volatile LONG *v65; // [esp+18h] [ebp-24h] BYREF
  int v66; // [esp+1Ch] [ebp-20h]
  _DWORD *v67; // [esp+20h] [ebp-1Ch]
  int v68; // [esp+24h] [ebp-18h]
  NiProperty *v69; // [esp+28h] [ebp-14h]
  int v70; // [esp+2Ch] [ebp-10h]
  int v71; // [esp+38h] [ebp-4h]

  v67 = this;
  v66 = 0;
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
  v9 = *((unsigned __int16 *)this + 0x66);
  v64 = ShaderPackage <= 1;
  v10 = dword_B2C674 - 1;
  v69 = NiPropertyByID;
  if ( v9 >= v10 )
  {
    v11 = v10;
    v68 = v10;
  }
  else
  {
    v11 = v9;
    v68 = v9;
  }
  result = (int)a4;
  if ( byte_B42E86 )
  {
    v13 = a6;
    if ( a5 == 1 )
    {
      v14 = FormHeapAlloc(0x10u);
      a7 = v14;
      v71 = 0;
      if ( v14 )
        v15 = (volatile LONG *)sub_7E2370(v14, (int)a2, 0x48, *v13, 0, 0);
      else
        v15 = 0;
      v71 = 0xFFFFFFFF;
      v65 = v15;
      result = (int)sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&v65);
    }
    else
    {
      ++LOWORD(a4->next);
    }
    v16 = 0;
    *v13 = 0;
    if ( v11 > 0 )
    {
      do
      {
        result = (unsigned __int16)v16;
        if ( *(_DWORD *)(*(_DWORD *)&v69[7].members.m_extraDataListLen + 4 * (unsigned __int16)v16 + 4) )
        {
          if ( a5 == 1 )
          {
            v17 = FormHeapAlloc(0x10u);
            a7 = v17;
            v71 = 1;
            if ( v17 )
              v18 = sub_7E2370(v17, (int)a2, 0x16E, *v13, 0, 0);
            else
              v18 = 0;
            v19 = v67;
            *(_BYTE *)(v18 + 9) = v16 + 1;
            v20 = *(int (__thiscall **)(_DWORD *))(v19[0xA] + 4);
            v21 = v19 + 0xA;
            v71 = 0xFFFFFFFF;
            result = v20(v21);
            *(_DWORD *)(result + 8) = v18;
            *(_DWORD *)result = 0;
            *(_DWORD *)(result + 4) = v21[2];
            v22 = (int *)v21[2];
            if ( v22 )
            {
              *v22 = result;
              ++v21[3];
            }
            else
            {
              ++v21[3];
              v21[1] = result;
            }
            v21[2] = result;
          }
          else
          {
            result = (int)a4;
            ++LOWORD(a4->next);
          }
        }
        ++v16;
      }
      while ( v16 < v68 );
    }
    return result;
  }
  if ( !(_BYTE)a7 )
  {
    if ( a5 == 1 )
    {
      v23 = (volatile LONG *)FormHeapAlloc(0x10u);
      v65 = v23;
      v71 = 2;
      if ( v23 )
        v65 = (volatile LONG *)sub_7E2370((int)v23, (int)a2, 0x48, *a6, 1u, a3);
      else
        v65 = 0;
      v71 = 0xFFFFFFFF;
      sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&v65);
      goto LABEL_36;
    }
LABEL_35:
    ++LOWORD(a4->next);
    goto LABEL_36;
  }
  if ( a5 != 1 )
    goto LABEL_35;
  v24 = (volatile LONG *)FormHeapAlloc(0x10u);
  v65 = v24;
  v71 = 3;
  if ( v24 )
    v25 = (volatile LONG *)sub_7E2370((int)v24, (int)a2, 0x49, *a6, 1u, a3);
  else
    v25 = 0;
  v65 = v25;
  v71 = 0xFFFFFFFF;
  sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&v65);
LABEL_36:
  *a6 = 0;
  result = (*((int (__thiscall **)(NiProperty *, _DWORD))NiPropertyByID->vtbl + 0x24))(NiPropertyByID, 0);
  if ( result )
  {
    if ( a5 == 1 )
    {
      v26 = (volatile LONG *)FormHeapAlloc(0x10u);
      v65 = v26;
      v71 = 4;
      if ( v26 )
        v27 = (volatile LONG *)sub_7E2370((int)v26, (int)a2, 0x16D, *a6, 0, 0);
      else
        v27 = 0;
      v65 = v27;
      v71 = 0xFFFFFFFF;
      result = (int)sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&v65);
    }
    else
    {
      result = (int)a4;
      ++LOWORD(a4->next);
    }
  }
  if ( v64 )
  {
    result = (int)sub_7ED2A0(v67);
    v28 = (NiTPointerList_Node_void *)result;
    if ( result )
    {
      v29 = (int **)v67;
      do
      {
        v30 = sub_405AD0(v28, &v65);
        v31 = *v30;
        v32 = *(float *)(*v30 + 0xEC);
        v66 |= 1u;
        v33 = *(float *)&dword_B3FA90 != v32
           || *(float *)&dword_B3FA94 != *(float *)(v31 + 0xF0)
           || *(float *)&dword_B3FA98 != *(float *)(v31 + 0xF4);
        if ( (v66 & 1) != 0 )
        {
          v66 &= ~1u;
          if ( v65 )
          {
            v34 = v65;
            if ( !InterlockedDecrement(v65 + 1) )
              (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1);
          }
        }
        if ( v33 )
        {
          if ( a5 == 1 )
          {
            v35 = FormHeapAlloc(0x10u);
            v70 = v35;
            v71 = 5;
            if ( v35 )
              v36 = sub_7E2370(v35, (int)a2, 0x168, *a6, 1u, (int)v28);
            else
              v36 = 0;
            v37 = (int (__thiscall *)(int **))v29[0xA][1];
            v71 = 0xFFFFFFFF;
            v38 = (int *)v37(v29 + 0xA);
            v38[2] = v36;
            *v38 = 0;
            v38[1] = (int)v29[0xC];
            v39 = v29[0xC];
            if ( v39 )
            {
              *v39 = (int)v38;
              v29[0xD] = (int *)((char *)v29[0xD] + 1);
            }
            else
            {
              v29[0xD] = (int *)((char *)v29[0xD] + 1);
              v29[0xB] = v38;
            }
            v29[0xC] = v38;
          }
          else
          {
            ++LOWORD(a4->next);
          }
        }
        result = sub_7ED4B0(v29);
        v28 = (NiTPointerList_Node_void *)result;
      }
      while ( result );
    }
  }
  v40 = 0;
  if ( v68 > 0 )
  {
    result = (int)a4;
    v41 = a6;
    v42 = a3;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)&v69[7].members.m_extraDataListLen + 4 * (unsigned __int16)v40 + 4) )
      {
        if ( (_BYTE)a7 )
        {
          if ( a5 != 1 )
          {
LABEL_80:
            ++*(_WORD *)result;
            goto LABEL_81;
          }
          v44 = FormHeapAlloc(0x10u);
          a3 = v44;
          v71 = 7;
          if ( v44 )
            v45 = (volatile LONG *)sub_7E2370(v44, (int)a2, 0x16F, *v41, 1u, v42);
          else
            v45 = 0;
          v65 = v45;
          *((_BYTE *)v45 + 9) = v40 + 1;
        }
        else
        {
          if ( a5 != 1 )
            goto LABEL_80;
          v43 = FormHeapAlloc(0x10u);
          a3 = v43;
          v71 = 6;
          if ( v43 )
          {
            v65 = (volatile LONG *)sub_7E2370(v43, (int)a2, 0x16E, *v41, 1u, v42);
            *((_BYTE *)v65 + 9) = v40 + 1;
          }
          else
          {
            v65 = 0;
            *(_BYTE *)9 = v40 + 1;
          }
        }
        v71 = 0xFFFFFFFF;
        sub_5B1E20((BSTextureManager *)(v67 + 0xA), (void **)&v65);
        result = (int)a4;
      }
LABEL_81:
      ++v40;
    }
    while ( v40 < v68 );
  }
  a7 = 0;
  if ( v68 > 0 )
  {
    v46 = (int **)v67;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)&v69[7].members.m_extraDataListLen + 4 * (unsigned __int16)a7 + 4) )
      {
        v47 = a7;
        if ( (*((int (__thiscall **)(NiProperty *, int))v69->vtbl + 0x24))(v69, a7 + 1) )
        {
          if ( a5 == 1 )
          {
            v48 = FormHeapAlloc(0x10u);
            v70 = v48;
            v71 = 8;
            if ( v48 )
              v49 = sub_7E2370(v48, (int)a2, 0x170, *a6, 0, 0);
            else
              v49 = 0;
            *(_BYTE *)(v49 + 9) = v47 + 1;
            v50 = (int (__thiscall *)(int **))v46[0xA][1];
            v71 = 0xFFFFFFFF;
            v51 = (int *)v50(v46 + 0xA);
            v51[2] = v49;
            *v51 = 0;
            v51[1] = (int)v46[0xC];
            v52 = v46[0xC];
            if ( v52 )
            {
              *v52 = (int)v51;
              v46[0xD] = (int *)((char *)v46[0xD] + 1);
            }
            else
            {
              v46[0xD] = (int *)((char *)v46[0xD] + 1);
              v46[0xB] = v51;
            }
            v46[0xC] = v51;
          }
          else
          {
            ++LOWORD(a4->next);
          }
        }
        if ( v64 )
        {
          for ( i = sub_7ED2A0(v46); i; i = (_DWORD *)sub_7ED4B0(v46) )
          {
            v54 = sub_405AD0(i, &a3);
            v55 = *v54;
            v56 = *(float *)(*v54 + 0xEC);
            v66 |= 2u;
            v57 = *(float *)&dword_B3FA90 != v56
               || *(float *)&dword_B3FA94 != *(float *)(v55 + 0xF0)
               || *(float *)&dword_B3FA98 != *(float *)(v55 + 0xF4);
            if ( (v66 & 2) != 0 )
            {
              v66 &= ~2u;
              if ( a3 )
              {
                v58 = (void (__thiscall ***)(_DWORD, int))a3;
                if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
                  (**v58)(v58, 1);
              }
            }
            if ( v57 )
            {
              if ( a5 == 1 )
              {
                v59 = FormHeapAlloc(0x10u);
                v70 = v59;
                v71 = 9;
                if ( v59 )
                  v60 = sub_7E2370(v59, (int)a2, 0x171, *a6, 1u, (int)i);
                else
                  v60 = 0;
                *(_BYTE *)(v60 + 9) = a7 + 1;
                v61 = (int (__thiscall *)(int **))v46[0xA][1];
                v71 = 0xFFFFFFFF;
                v62 = (int *)v61(v46 + 0xA);
                v62[2] = v60;
                *v62 = 0;
                v62[1] = (int)v46[0xC];
                v63 = v46[0xC];
                if ( v63 )
                {
                  *v63 = (int)v62;
                  v46[0xD] = (int *)((char *)v46[0xD] + 1);
                }
                else
                {
                  v46[0xD] = (int *)((char *)v46[0xD] + 1);
                  v46[0xB] = v62;
                }
                v46[0xC] = v62;
              }
              else
              {
                ++LOWORD(a4->next);
              }
            }
          }
        }
      }
      result = ++a7;
    }
    while ( a7 < v68 );
  }
  return result;
}
