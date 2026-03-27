_WORD *__thiscall sub_704AD0(int *this, int a2)
{
  int *v2; // edi
  unsigned int *v3; // ebp
  unsigned int v4; // eax
  void (__cdecl *v5)(unsigned int, unsigned int *, int, int *, int); // eax
  __int16 v6; // cx
  void (__cdecl *v7)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v8)(unsigned int, unsigned int *, int, int *, int); // eax
  NiTArray_NiTexturingPropertyMap *v9; // esi
  int v10; // ebx
  bool v11; // cf
  unsigned int v12; // edi
  unsigned int v13; // eax
  void (__cdecl *v14)(unsigned int, int *, int, int *, int); // eax
  int v15; // eax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18; // dx
  double v19; // st6
  int v20; // eax
  void (__cdecl *v21)(unsigned int, unsigned int *, int, int *, int); // eax
  int v22; // eax
  unsigned int v23; // edi
  void (__cdecl *v24)(unsigned int, char *, int, _DWORD *, int); // edx
  int v25; // eax
  __int16 v26; // dx
  int v27; // esi
  unsigned int v28; // edx
  unsigned int v29; // ecx
  _DWORD *v30; // eax
  _WORD *result; // eax
  unsigned int v32; // [esp-18h] [ebp-58h]
  unsigned int v33; // [esp-18h] [ebp-58h]
  unsigned int v34; // [esp-18h] [ebp-58h]
  unsigned int v35; // [esp-18h] [ebp-58h]
  unsigned int v36; // [esp-18h] [ebp-58h]
  int v37; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v38; // [esp+18h] [ebp-28h] BYREF
  int v39; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v40; // [esp+20h] [ebp-20h] BYREF
  int *v41; // [esp+24h] [ebp-1Ch]
  _WORD *v42; // [esp+28h] [ebp-18h]
  int v43; // [esp+2Ch] [ebp-14h] BYREF
  _DWORD v44[4]; // [esp+30h] [ebp-10h] BYREF

  v2 = this;
  v41 = this;
  v3 = (unsigned int *)a2;
  sub_700AC0(this, (unsigned int *)a2);
  v4 = v3[0x87];
  if ( v3[0x36] >= 0x14010002 )
  {
    v7 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v4 + 4);
    a2 = 2;
    v42 = v2 + 6;
    v7(v4, v2 + 6, 2, &a2, 1);
    *((_WORD *)v2 + 0xC) &= 0xF00Fu;
  }
  else
  {
    v32 = v3[0x87];
    v5 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v4 + 4);
    a2 = 4;
    v5(v32, &v40, 4, &a2, 1);
    v6 = (2 * v40) | v2[6] & 0xFFF1;
    v42 = v2 + 6;
    *((_WORD *)v2 + 0xC) = v6;
  }
  v33 = v3[0x87];
  v8 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v33 + 4);
  a2 = 4;
  v8(v33, &v38, 4, &a2, 1);
  v9 = (NiTArray_NiTexturingPropertyMap *)(v2 + 7);
  NiTArray_SetSize((unsigned __int16 *)v2 + 0xE, v38);
  if ( v3[0x36] >= 0x303000D )
    sub_712BC0(v3, v38);
  else
    sub_712BC0(v3, v38 + 1);
  v10 = 0;
  v40 = 0;
  if ( v38 )
  {
    while ( 1 )
    {
      v11 = v3[0x36] < 0x4010000;
      v12 = v40;
      v13 = v3[0x87];
      v39 = 0;
      v34 = v13;
      v14 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v13 + 4);
      if ( v11 )
      {
        v43 = 4;
        v14(v34, &v39, 4, &v43, 1);
        LOBYTE(a2) = v39 != 0;
      }
      else
      {
        v43 = 1;
        v14(v34, &a2, 1, &v43, 1);
      }
      if ( v3[0x36] >= 0x303000D )
      {
        if ( v40 == 5 )
        {
          sub_712BC0(v3, (unsigned __int8)a2);
          if ( (_BYTE)a2 )
          {
            v17 = FormHeapAlloc(0x28u);
            if ( v17 )
            {
              *(_WORD *)(v17 + 4) = 0;
              *(_DWORD *)(v17 + 8) = 0;
              *(float *)(v17 + 0x10) = 1.0;
              v18 = *(_WORD *)(v17 + 4);
              *(float *)(v17 + 0x14) = 0.0;
              v19 = flt_A3D65C;
              *(float *)(v17 + 0x18) = flt_A3D65C;
              *(_DWORD *)(v17 + 0xC) = 0;
              *(float *)(v17 + 0x24) = v19;
              *(_WORD *)(v17 + 4) = v18 & 0xC000 | 0x3100;
              *(_DWORD *)v17 = &NiTexturingProperty::BumpMap::`vftable';
              *(float *)(v17 + 0x1C) = 0.0;
              *(float *)(v17 + 0x20) = 0.0;
            }
            else
            {
              v17 = 0;
            }
            v39 = v17;
            (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v17 + 4))(v17, v3);
          }
          if ( v9->capacity <= 5u )
            NiTArray_SetSize((unsigned __int16 *)v9, v9->growSize + 5);
          NiTArray_SetAt(v9, 5u, &v39);
          goto LABEL_39;
        }
      }
      else if ( v40 >= 5 )
      {
        sub_712BC0(v3, 0);
        v12 = v40 + 1;
      }
      sub_712BC0(v3, (unsigned __int8)a2);
      if ( (_BYTE)a2 )
      {
        v15 = FormHeapAlloc(0x10u);
        if ( v15 )
        {
          *(_WORD *)(v15 + 4) = 0;
          *(_DWORD *)v15 = &NiTexturingProperty::Map::`vftable';
          *(_DWORD *)(v15 + 8) = 0;
          v16 = *(_WORD *)(v15 + 4) & 0xC000 | 0x3100;
          *(_DWORD *)(v15 + 0xC) = 0;
          *(_WORD *)(v15 + 4) = v16;
        }
        else
        {
          v15 = 0;
        }
        v39 = v15;
        (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v15 + 4))(v15, v3);
      }
      if ( v12 >= v9->capacity )
        NiTArray_SetSize((unsigned __int16 *)v9, v12 + v9->growSize);
      v20 = v39;
      if ( v12 < v9->end )
      {
        if ( v39 )
        {
          if ( !*((_DWORD *)&v9->data->vtbl + v12) )
            ++v9->numObjs;
        }
        else if ( *((_DWORD *)&v9->data->vtbl + v12) )
        {
          --v9->numObjs;
        }
      }
      else
      {
        v9->end = v12 + 1;
        if ( v20 )
          ++v9->numObjs;
      }
      *((_DWORD *)&v9->data->vtbl + v12) = v20;
LABEL_39:
      if ( ++v40 >= v38 )
      {
        v2 = v41;
        break;
      }
    }
  }
  if ( v3[0x36] >= 0x5000011 )
  {
    v35 = v3[0x87];
    v21 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v35 + 4);
    a2 = 4;
    v21(v35, &v38, 4, &a2, 1);
    sub_712BC0(v3, v38);
    if ( v38 )
    {
      v22 = FormHeapAlloc(0x10u);
      if ( v22 )
      {
        *(_DWORD *)v22 = &NiTArray<NiTexturingProperty::ShaderMap *>::`vftable';
        *(_WORD *)(v22 + 8) = 0;
        *(_WORD *)(v22 + 0xE) = 1;
        *(_WORD *)(v22 + 0xA) = 0;
        *(_WORD *)(v22 + 0xC) = 0;
        *(_DWORD *)(v22 + 4) = 0;
      }
      else
      {
        v22 = 0;
      }
      v2[0xB] = v22;
      v23 = 0;
      for ( v44[3] = 0xFFFFFFFF; v23 < v38; v10 = 0 )
      {
        v24 = *(void (__cdecl **)(unsigned int, char *, int, _DWORD *, int))(v3[0x87] + 4);
        v36 = v3[0x87];
        v44[0] = 1;
        v24(v36, (char *)&v37 + 3, 1, v44, 1);
        sub_712BC0(v3, HIBYTE(v37));
        if ( HIBYTE(v37) )
        {
          v25 = FormHeapAlloc(0x14u);
          if ( v25 )
          {
            *(_WORD *)(v25 + 4) = 0;
            *(_DWORD *)(v25 + 8) = 0;
            v26 = *(_WORD *)(v25 + 4) & 0xC000 | 0x3100;
            *(_DWORD *)(v25 + 0xC) = 0;
            *(_WORD *)(v25 + 4) = v26;
            *(_DWORD *)v25 = &NiTexturingProperty::ShaderMap::`vftable';
            *(_DWORD *)(v25 + 0x10) = 0;
          }
          else
          {
            v25 = 0;
          }
          v10 = v25;
          (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v25 + 4))(v25, v3);
        }
        v27 = v41[0xB];
        if ( v23 >= *(unsigned __int16 *)(v27 + 8) )
          NiTArray_SetSize((unsigned __int16 *)v27, v23 + *(unsigned __int16 *)(v27 + 0xE));
        if ( v23 < *(unsigned __int16 *)(v27 + 0xA) )
        {
          if ( v10 )
          {
            if ( !*(_DWORD *)(*(_DWORD *)(v27 + 4) + 4 * v23) )
              ++*(_WORD *)(v27 + 0xC);
          }
          else if ( *(_DWORD *)(*(_DWORD *)(v27 + 4) + 4 * v23) )
          {
            --*(_WORD *)(v27 + 0xC);
          }
        }
        else
        {
          *(_WORD *)(v27 + 0xA) = v23 + 1;
          if ( v10 )
            ++*(_WORD *)(v27 + 0xC);
        }
        *(_DWORD *)(*(_DWORD *)(v27 + 4) + 4 * v23++) = v10;
      }
      v2 = v41;
    }
  }
  v28 = *((unsigned __int16 *)v2 + 0x13);
  v29 = 1;
  if ( v28 <= 1 )
  {
LABEL_68:
    result = v42;
    *v42 &= ~1u;
  }
  else
  {
    v30 = (_DWORD *)(v2[8] + 4);
    while ( !*v30 )
    {
      ++v29;
      ++v30;
      if ( v29 >= v28 )
        goto LABEL_68;
    }
    result = v42;
    *v42 |= 1u;
  }
  return result;
}
