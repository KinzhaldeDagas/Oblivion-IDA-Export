int *__thiscall sub_85A390(
        int **this,
        NiNode *a2,
        _DWORD *a3,
        NiTPointerList_Node_void *a4,
        char a5,
        char *a6,
        int a7,
        int a8)
{
  void (__thiscall ***v9)(_DWORD, int); // esi
  _DWORD *v10; // eax
  LONG (__stdcall *v11)(volatile LONG *); // edi
  _DWORD *v12; // eax
  int v13; // ecx
  bool v14; // bl
  void (__thiscall ***v15)(_DWORD, int); // esi
  _DWORD *v16; // eax
  int v17; // ecx
  bool v18; // bl
  void (__thiscall ***v19)(_DWORD, int); // esi
  _DWORD *v20; // eax
  int v21; // ecx
  bool v22; // bl
  void (__thiscall ***v23)(_DWORD, int); // esi
  int v24; // eax
  int v25; // edi
  int (__thiscall *v26)(int **); // edx
  int *v27; // eax
  int **v28; // ecx
  NiProperty *NiPropertyByID; // eax
  void **vtbl; // edx
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  int v33; // ecx
  bool v34; // bl
  void (__thiscall ***v35)(_DWORD, int); // esi
  _DWORD *v36; // edi
  _DWORD *v37; // eax
  int v38; // ecx
  bool v39; // bl
  void (__thiscall ***v40)(_DWORD, int); // esi
  _DWORD *v41; // eax
  int v42; // ecx
  bool v43; // bl
  void (__thiscall ***v44)(_DWORD, int); // esi
  int v45; // eax
  int v46; // edi
  int (__thiscall *v47)(int **); // edx
  int *v48; // eax
  int **v49; // ecx
  int v50; // eax
  int v51; // edi
  int (__thiscall *v52)(int **); // eax
  int *result; // eax
  int **v54; // ecx
  int v55; // [esp+1Ch] [ebp-34h]
  int v57; // [esp+24h] [ebp-2Ch]
  int v58; // [esp+28h] [ebp-28h] BYREF
  int v59; // [esp+2Ch] [ebp-24h] BYREF
  int v60; // [esp+30h] [ebp-20h] BYREF
  _DWORD *v61; // [esp+34h] [ebp-1Ch] BYREF
  int v62; // [esp+38h] [ebp-18h] BYREF
  int v63; // [esp+3Ch] [ebp-14h]
  int v64; // [esp+40h] [ebp-10h]
  int v65; // [esp+4Ch] [ebp-4h]
  _DWORD *i; // [esp+6Ch] [ebp+1Ch]
  _DWORD *v67; // [esp+6Ch] [ebp+1Ch]

  v55 = 0;
  NiNode_GetNiPropertyByID(a2, 4);
  sub_405AD0(a3, &v61);
  if ( v61 )
  {
    v9 = (void (__thiscall ***)(_DWORD, int))v61;
    if ( !InterlockedDecrement(v61 + 1) )
      (**v9)(v9, 1);
  }
  sub_854380(this, a2, (int)a3, a4, a5, a6, a8);
  if ( dword_B2C674 )
  {
    if ( *((unsigned __int16 *)this + 0x66) >= (unsigned int)(dword_B2C674 - 1) )
      v57 = dword_B2C674 - 1;
    else
      v57 = *((unsigned __int16 *)this + 0x66);
  }
  else
  {
    v57 = *((unsigned __int16 *)this + 0x66);
  }
  if ( !byte_B42E86 )
  {
    for ( i = sub_7ED2A0(this); i; i = (_DWORD *)sub_7ED4B0(this) )
    {
      v10 = (_DWORD *)sub_7ED4B0(this);
      v11 = InterlockedDecrement;
      do
      {
        v14 = 0;
        if ( v10 )
        {
          v12 = sub_405AD0(v10, &v61);
          v13 = *v12;
          v55 |= 1u;
          if ( *(float *)&dword_B3FA90 == *(float *)(*v12 + 0xEC)
            && *(float *)&dword_B3FA94 == *(float *)(v13 + 0xF0)
            && *(float *)&dword_B3FA98 == *(float *)(v13 + 0xF4) )
          {
            v14 = 1;
          }
        }
        if ( (v55 & 1) != 0 )
        {
          v15 = (void (__thiscall ***)(_DWORD, int))v61;
          v55 &= ~1u;
          if ( v61 )
          {
            if ( !v11(v61 + 1) )
            {
              if ( v15 )
                (**v15)(v15, 1);
            }
          }
        }
        v10 = (_DWORD *)sub_7ED4B0(this);
      }
      while ( v14 );
      while ( 1 )
      {
        v18 = 0;
        if ( v10 )
        {
          v16 = sub_405AD0(v10, &v58);
          v17 = *v16;
          v55 |= 2u;
          if ( *(float *)&dword_B3FA90 == *(float *)(*v16 + 0xEC)
            && *(float *)&dword_B3FA94 == *(float *)(v17 + 0xF0)
            && *(float *)&dword_B3FA98 == *(float *)(v17 + 0xF4) )
          {
            v18 = 1;
          }
        }
        if ( (v55 & 2) != 0 )
        {
          v55 &= ~2u;
          if ( v58 )
          {
            v19 = (void (__thiscall ***)(_DWORD, int))v58;
            if ( !InterlockedDecrement((volatile LONG *)(v58 + 4)) )
              (**v19)(v19, 1);
          }
        }
        if ( !v18 )
          break;
        v10 = (_DWORD *)sub_7ED4B0(this);
      }
      v20 = sub_405AD0(i, &v59);
      v21 = *v20;
      v55 |= 4u;
      v22 = *(float *)&dword_B3FA90 != *(float *)(*v20 + 0xEC)
         || *(float *)&dword_B3FA94 != *(float *)(v21 + 0xF0)
         || *(float *)&dword_B3FA98 != *(float *)(v21 + 0xF4);
      if ( (v55 & 4) != 0 )
      {
        v55 &= ~4u;
        if ( v59 )
        {
          v23 = (void (__thiscall ***)(_DWORD, int))v59;
          if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) )
            (**v23)(v23, 1);
        }
      }
      if ( v22 )
      {
        if ( a5 == 1 )
        {
          v24 = FormHeapAlloc(0x10u);
          v63 = v24;
          v65 = 0;
          if ( v24 )
            v25 = sub_7E2370(v24, (int)a2, 0x169, *a6, 3u, (int)i);
          else
            v25 = 0;
          v26 = (int (__thiscall *)(int **))(*(this + 0xA))[1];
          v65 = 0xFFFFFFFF;
          v27 = (int *)v26(this + 0xA);
          v27[2] = v25;
          *v27 = 0;
          v27[1] = (int)*(this + 0xC);
          v28 = (int **)*(this + 0xC);
          if ( v28 )
          {
            *v28 = v27;
            *(this + 0xD) = (int *)((char *)*(this + 0xD) + 1);
          }
          else
          {
            *(this + 0xD) = (int *)((char *)*(this + 0xD) + 1);
            *(this + 0xB) = v27;
          }
          *(this + 0xC) = v27;
        }
        else
        {
          ++LOWORD(a4->next);
        }
      }
    }
    v58 = 0;
    if ( v57 > 0 )
    {
      do
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
        vtbl = NiPropertyByID->vtbl;
        v63 = v58 + 1;
        if ( ((int (__thiscall *)(NiProperty *, int))vtbl[0x22])(NiPropertyByID, v58 + 1) )
        {
          v67 = sub_7ED2A0(this);
          if ( v67 )
          {
            while ( 1 )
            {
              v31 = (_DWORD *)sub_7ED4B0(this);
              v61 = v31;
              v34 = 0;
              if ( v31 )
              {
                v32 = sub_405AD0(v31, &v62);
                v33 = *v32;
                v55 |= 8u;
                if ( *(float *)&dword_B3FA90 == *(float *)(*v32 + 0xEC)
                  && *(float *)&dword_B3FA94 == *(float *)(v33 + 0xF0)
                  && *(float *)&dword_B3FA98 == *(float *)(v33 + 0xF4) )
                {
                  v34 = 1;
                }
              }
              if ( (v55 & 8) != 0 )
              {
                v35 = (void (__thiscall ***)(_DWORD, int))v62;
                v55 &= ~8u;
                if ( v62 )
                {
                  if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) )
                  {
                    if ( v35 )
                      (**v35)(v35, 1);
                  }
                }
              }
              if ( !v34 )
              {
                do
                {
                  v36 = (_DWORD *)sub_7ED4B0(this);
                  v39 = 0;
                  if ( v36 )
                  {
                    v37 = sub_405AD0(v36, &v59);
                    v38 = *v37;
                    v55 |= 0x10u;
                    if ( *(float *)&dword_B3FA90 == *(float *)(*v37 + 0xEC)
                      && *(float *)&dword_B3FA94 == *(float *)(v38 + 0xF0)
                      && *(float *)&dword_B3FA98 == *(float *)(v38 + 0xF4) )
                    {
                      v39 = 1;
                    }
                  }
                  if ( (v55 & 0x10) != 0 )
                  {
                    v55 &= ~0x10u;
                    if ( v59 )
                    {
                      v40 = (void (__thiscall ***)(_DWORD, int))v59;
                      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) )
                        (**v40)(v40, 1);
                    }
                  }
                }
                while ( v39 );
                v41 = sub_405AD0(v67, &v60);
                v42 = *v41;
                v55 |= 0x20u;
                v43 = *(float *)&dword_B3FA90 != *(float *)(*v41 + 0xEC)
                   || *(float *)&dword_B3FA94 != *(float *)(v42 + 0xF0)
                   || *(float *)&dword_B3FA98 != *(float *)(v42 + 0xF4);
                if ( (v55 & 0x20) != 0 )
                {
                  v55 &= ~0x20u;
                  if ( v60 )
                  {
                    v44 = (void (__thiscall ***)(_DWORD, int))v60;
                    if ( !InterlockedDecrement((volatile LONG *)(v60 + 4)) )
                      (**v44)(v44, 1);
                  }
                }
                if ( v43 )
                {
                  if ( a5 == 1 )
                  {
                    v45 = FormHeapAlloc(0x10u);
                    v64 = v45;
                    v65 = 1;
                    if ( v45 )
                      v46 = sub_7E2370(v45, (int)a2, 0x172, *a6, 3u, (int)v67);
                    else
                      v46 = 0;
                    *(_BYTE *)(v46 + 9) = v58 + 1;
                    v47 = (int (__thiscall *)(int **))(*(this + 0xA))[1];
                    v65 = 0xFFFFFFFF;
                    v48 = (int *)v47(this + 0xA);
                    v48[2] = v46;
                    *v48 = 0;
                    v48[1] = (int)*(this + 0xC);
                    v49 = (int **)*(this + 0xC);
                    if ( v49 )
                    {
                      *v49 = v48;
                      *(this + 0xD) = (int *)((char *)*(this + 0xD) + 1);
                    }
                    else
                    {
                      *(this + 0xD) = (int *)((char *)*(this + 0xD) + 1);
                      *(this + 0xB) = v48;
                    }
                    *(this + 0xC) = v48;
                  }
                  else
                  {
                    ++LOWORD(a4->next);
                  }
                }
                v67 = (_DWORD *)sub_7ED4B0(this);
                if ( !v67 )
                  break;
              }
            }
          }
        }
        v58 = v63;
      }
      while ( v63 < v57 );
    }
  }
  if ( a5 == 1 )
  {
    v50 = FormHeapAlloc(0x10u);
    v65 = 2;
    if ( v50 )
      v51 = sub_7E2370(v50, (int)a2, 0x176, *a6, 1u, (int)a3);
    else
      v51 = 0;
    *(_BYTE *)(v51 + 9) = 9;
    v52 = (int (__thiscall *)(int **))(*(this + 0xA))[1];
    v65 = 0xFFFFFFFF;
    result = (int *)v52(this + 0xA);
    result[2] = v51;
    *result = 0;
    result[1] = (int)*(this + 0xC);
    v54 = (int **)*(this + 0xC);
    if ( v54 )
    {
      *v54 = result;
      *(this + 0xD) = (int *)((char *)*(this + 0xD) + 1);
    }
    else
    {
      *(this + 0xD) = (int *)((char *)*(this + 0xD) + 1);
      *(this + 0xB) = result;
    }
    *(this + 0xC) = result;
  }
  else
  {
    ++LOWORD(a4->next);
    return (int *)a4;
  }
  return result;
}
