char __thiscall sub_6E9410(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebp
  unsigned int *v4; // ebx
  unsigned int *v5; // eax
  NiTArray_NiTexturingPropertyMap *v6; // edi
  unsigned int v7; // ecx
  bool v8; // zf
  int v9; // ebp
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  unsigned int *v17; // eax
  _DWORD *v18; // ecx
  bool v19; // cf
  NiTArray_NiTexturingPropertyMap *v20; // edi
  unsigned int v21; // edx
  unsigned int *v22; // eax
  unsigned int *v23; // ebp
  unsigned int v24; // edx
  int v25; // esi
  _DWORD *v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // esi
  int v31; // ebx
  _DWORD *v32; // edi
  _DWORD *v33; // edx
  _DWORD *v34; // ebx
  int v35; // eax
  int v36; // esi
  int v37; // edi
  int v38; // esi
  unsigned int *v39; // ebx
  _DWORD *v40; // esi
  int v41; // ebp
  _DWORD *v42; // edi
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // edi
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v50; // [esp-4h] [ebp-48h]
  unsigned int v51; // [esp+1Ch] [ebp-28h]
  unsigned int i; // [esp+1Ch] [ebp-28h]
  unsigned int v53; // [esp+1Ch] [ebp-28h]
  int v55; // [esp+24h] [ebp-20h] BYREF
  _DWORD *v56; // [esp+28h] [ebp-1Ch]
  unsigned int *v57; // [esp+2Ch] [ebp-18h] BYREF
  unsigned __int16 *v58; // [esp+30h] [ebp-14h]
  _DWORD *v59; // [esp+34h] [ebp-10h] BYREF
  unsigned int v60; // [esp+40h] [ebp-4h]

  sub_715E40(this, (int)a2);
  NiTMap_GetAt((_DWORD *)*a2, (int)this, &v55);
  v51 = 0;
  if ( *((_WORD *)this + 0x27) )
  {
    v58 = (unsigned __int16 *)(v55 + 0x44);
    do
    {
      v4 = 0;
      v59 = *(_DWORD **)(*(this + 0x12) + 4 * v51);
      v3 = v59;
      if ( v59 )
      {
        v5 = (unsigned int *)FormHeapAlloc(0xCu);
        if ( v5 )
        {
          *v5 = 0;
          v5[1] = 0;
          v5[2] = 0;
          v4 = v5;
        }
        v6 = (NiTArray_NiTexturingPropertyMap *)v58;
        v7 = v58[4];
        v60 = 0xFFFFFFFF;
        v57 = v4;
        if ( v51 >= v7 )
          NiTArray_SetSize(v58, v51 + v58[7]);
        NiTArray_SetAt(v6, v51, &v57);
        v8 = v3[2] == 0;
        v57 = 0;
        if ( !v8 )
        {
          do
          {
            v9 = *(_DWORD *)(*v59 + 4 * (_DWORD)v57);
            v10 = (_DWORD *)*a2;
            v11 = *(_DWORD **)(v10[2] + 4 * (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*a2 + 4))(*a2, v9));
            if ( v11 )
            {
              while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v10 + 8))(v10, v9, v11[1]) )
              {
                v11 = (_DWORD *)*v11;
                if ( !v11 )
                  goto LABEL_12;
              }
              v14 = v4[1];
              v15 = v11[2];
              if ( v4[2] == v14 )
              {
                if ( v14 )
                  v16 = 2 * v14;
                else
                  v16 = 1;
                sub_6E8CA0(v4, v16);
              }
              *(_DWORD *)(*v4 + 4 * v4[2]) = v15;
            }
            else
            {
LABEL_12:
              v12 = v4[1];
              if ( v4[2] == v12 )
              {
                if ( v12 )
                  v13 = 2 * v12;
                else
                  v13 = 1;
                sub_6E8CA0(v4, v13);
              }
              *(_DWORD *)(*v4 + 4 * v4[2]) = v9;
            }
            v17 = v57;
            v18 = v59;
            ++v4[2];
            v17 = (unsigned int *)((char *)v17 + 1);
            v19 = (unsigned int)v17 < v18[2];
            v57 = v17;
          }
          while ( v19 );
        }
      }
      else
      {
        v20 = (NiTArray_NiTexturingPropertyMap *)v58;
        v21 = v58[4];
        v59 = 0;
        if ( v51 >= v21 )
          NiTArray_SetSize(v58, v51 + v58[7]);
        NiTArray_SetAt(v20, v51, &v59);
      }
      ++v51;
    }
    while ( v51 < *((unsigned __int16 *)this + 0x27) );
  }
  for ( i = 0; i < *((unsigned __int16 *)this + 0x2F); ++i )
  {
    v59 = *(_DWORD **)(*(this + 0x16) + 4 * i);
    if ( v59 )
    {
      v22 = (unsigned int *)FormHeapAlloc(0xCu);
      if ( v22 )
      {
        *v22 = 0;
        v22[1] = 0;
        v22[2] = 0;
        v23 = v22;
      }
      else
      {
        v23 = 0;
      }
      v24 = *(unsigned __int16 *)(v55 + 0x5C);
      v25 = v55 + 0x54;
      v60 = 0xFFFFFFFF;
      if ( i >= v24 )
        NiTArray_SetSize((unsigned __int16 *)(v55 + 0x54), i + *(unsigned __int16 *)(v55 + 0x62));
      if ( i < *(unsigned __int16 *)(v25 + 0xA) )
      {
        if ( v23 )
        {
          if ( !*(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * i) )
            ++*(_WORD *)(v25 + 0xC);
        }
        else if ( *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * i) )
        {
          --*(_WORD *)(v25 + 0xC);
        }
      }
      else
      {
        *(_WORD *)(v25 + 0xA) = i + 1;
        if ( v23 )
          ++*(_WORD *)(v25 + 0xC);
      }
      v26 = v59;
      *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * i) = v23;
      v8 = v26[2] == 0;
      v58 = 0;
      if ( !v8 )
      {
        do
        {
          v57 = *(unsigned int **)(*v59 + 4 * (_DWORD)v58);
          v27 = FormHeapAlloc(8u);
          if ( v27 )
          {
            *(_DWORD *)(v27 + 4) = 0;
            v56 = (_DWORD *)v27;
          }
          else
          {
            v56 = 0;
          }
          v28 = v23[1];
          if ( v23[2] == v28 )
          {
            if ( v28 )
              v29 = 2 * v28;
            else
              v29 = 1;
            sub_6E8CA0(v23, v29);
          }
          *(_DWORD *)(*v23 + 4 * v23[2]++) = v56;
          v30 = (_DWORD *)*a2;
          v31 = *v57;
          v32 = *(_DWORD **)(v30[2] + 4 * (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a2 + 4))(*a2, *v57));
          if ( v32 )
          {
            while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v30 + 8))(v30, v31, v32[1]) )
            {
              v32 = (_DWORD *)*v32;
              if ( !v32 )
                goto LABEL_57;
            }
            v34 = v56;
            *v56 = v32[2];
          }
          else
          {
LABEL_57:
            v33 = v56;
            *v56 = *v57;
            v34 = v33;
          }
          v35 = (*(int (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)v57[1] + 0x18))(v57[1], a2);
          v36 = v34[1];
          v37 = v35;
          if ( v36 != v35 )
          {
            if ( v36 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) )
                (**(void (__thiscall ***)(int, int))v36)(v36, 1);
            }
            v34[1] = v37;
            if ( v37 )
              InterlockedIncrement((volatile LONG *)(v37 + 4));
          }
          (*(void (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)v57[1] + 0x38))(v57[1], a2);
          v19 = (unsigned int)v58 + 1 < v59[2];
          v58 = (unsigned __int16 *)((char *)v58 + 1);
        }
        while ( v19 );
      }
    }
    else
    {
      v38 = v55 + 0x54;
      if ( i >= *(unsigned __int16 *)(v55 + 0x5C) )
        NiTArray_SetSize((unsigned __int16 *)(v55 + 0x54), i + *(unsigned __int16 *)(v55 + 0x62));
      if ( i < *(unsigned __int16 *)(v38 + 0xA) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v38 + 4) + 4 * i) )
          --*(_WORD *)(v38 + 0xC);
      }
      else
      {
        *(_WORD *)(v38 + 0xA) = i + 1;
      }
      *(_DWORD *)(*(_DWORD *)(v38 + 4) + 4 * i) = 0;
    }
  }
  v53 = 0;
  if ( *(this + 0x1B) )
  {
    v39 = (unsigned int *)(v55 + 0x64);
    do
    {
      v40 = (_DWORD *)*a2;
      v41 = *(_DWORD *)(*(this + 0x19) + 4 * v53);
      v42 = *(_DWORD **)(v40[2] + 4 * (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*a2 + 4))(*a2, v41));
      if ( v42 )
      {
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v40 + 8))(v40, v41, v42[1]) )
        {
          v42 = (_DWORD *)*v42;
          if ( !v42 )
            goto LABEL_80;
        }
        v45 = v39[1];
        v46 = v42[2];
        if ( v39[2] == v45 )
        {
          if ( v45 )
            v47 = 2 * v45;
          else
            v47 = 1;
          sub_6E8CA0(v39, v47);
        }
        *(_DWORD *)(*v39 + 4 * v39[2]) = v46;
      }
      else
      {
LABEL_80:
        v43 = v39[1];
        if ( v39[2] == v43 )
        {
          if ( v43 )
            v44 = 2 * v43;
          else
            v44 = 1;
          sub_6E8CA0(v39, v44);
        }
        *(_DWORD *)(*v39 + 4 * v39[2]) = v41;
      }
      ++v39[2];
      ++v53;
    }
    while ( v53 < *(this + 0x1B) );
  }
  v48 = v55;
  v50 = *(_DWORD *)(v55 + 0x3C);
  *(_DWORD *)(v55 + 0x3C) = 0xFFFFFFFF;
  return sub_6E8DD0(v48, v50);
}
