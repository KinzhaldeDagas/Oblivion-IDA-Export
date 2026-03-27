void __thiscall sub_4E7950(int *this, void *a2)
{
  int *v2; // ebp
  int *v3; // eax
  int v4; // edi
  _WORD *v5; // esi
  int v6; // eax
  unsigned int i; // edi
  char *v8; // ebp
  float *v9; // eax
  float *v10; // esi
  char *v11; // eax
  unsigned int v12; // edi
  bool v13; // zf
  char *v14; // ebp
  _DWORD *v15; // esi
  int v16; // edi
  int *j; // ebp
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  _DWORD *v21; // ecx
  char *v22; // edi
  char **v23; // esi
  int v24; // eax
  char **v25; // eax
  int v26; // eax
  unsigned int v27; // edx
  _DWORD *v28; // ebp
  _DWORD *v29; // edi
  _DWORD *v30; // esi
  int v31; // eax
  int *v32; // edi
  _DWORD *v33; // eax
  Data *OverrideFile; // eax
  unsigned int v35; // [esp-4h] [ebp-3Ch]
  char *v37; // [esp+1Ch] [ebp-1Ch]
  float *v38; // [esp+20h] [ebp-18h] BYREF
  int *v39; // [esp+24h] [ebp-14h]
  _WORD *v40; // [esp+28h] [ebp-10h]
  int v41; // [esp+34h] [ebp-4h]
  bool v42; // [esp+3Ch] [ebp+4h]

  v2 = this;
  v3 = (int *)OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESPathGrid `RTTI Type Descriptor',
                0);
  v4 = (int)v3;
  v39 = v3;
  if ( v3 )
  {
    v42 = v3[9] != 0;
    if ( !v3[9] )
      sub_4E7610(v3);
    v40 = *(_WORD **)(v4 + 0x24);
    v5 = v40;
    if ( v40 )
    {
      sub_521BE0(v40);
      *((_WORD *)v2 + 0x18) = *(_WORD *)(v4 + 0x30);
      v6 = FormHeapAlloc(0x10u);
      if ( v6 )
      {
        *(_DWORD *)v6 = &NiTArray<TESPathGridPoint *>::`vftable';
        *(_WORD *)(v6 + 8) = 0;
        *(_WORD *)(v6 + 0xE) = 1;
        *(_WORD *)(v6 + 0xA) = 0;
        *(_WORD *)(v6 + 0xC) = 0;
        *(_DWORD *)(v6 + 4) = 0;
      }
      else
      {
        v6 = 0;
      }
      v2[9] = v6;
      v35 = (unsigned __int16)v5[5];
      v41 = 0xFFFFFFFF;
      NiTArray_SetSize((unsigned __int16 *)v6, v35);
      for ( i = 0; i < (unsigned __int16)v5[5]; ++i )
      {
        v8 = *(char **)(*((_DWORD *)v5 + 1) + 4 * i);
        if ( v8 )
        {
          v9 = (float *)FormHeapAlloc(0x2Cu);
          v38 = v9;
          v41 = 1;
          if ( v9 )
            v10 = sub_4E7DF0(v9);
          else
            v10 = 0;
          v41 = 0xFFFFFFFF;
          v38 = v10;
          v11 = sub_4BEF40(v8);
          sub_4BEF50(v10, v11);
          NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)*(this + 9), i, &v38);
          v5 = v40;
        }
      }
      v12 = 0;
      v13 = v5[5] == 0;
      v38 = 0;
      if ( !v13 )
      {
        do
        {
          v14 = *(char **)(*((_DWORD *)v5 + 1) + 4 * v12);
          if ( v14 )
          {
            v37 = *(char **)(*(_DWORD *)(*(this + 9) + 4) + 4 * v12);
            v15 = (_DWORD *)sub_4E7DE0(v37);
            if ( v15[1] )
            {
              do
              {
                v16 = *(_DWORD *)(v15[1] + 4);
                FormHeapFree(v15[1]);
                v15[1] = v16;
              }
              while ( v16 );
              v12 = (unsigned int)v38;
            }
            *v15 = 0;
            for ( j = (int *)sub_4E7DE0(v14); j; j = (int *)j[1] )
            {
              if ( !j[1] && !*j )
                break;
              v18 = v39[9];
              v19 = *j;
              if ( v18 )
              {
                if ( v19 )
                {
                  v20 = 0;
                  if ( *((_WORD *)v39 + 0x18) )
                  {
                    v21 = *(_DWORD **)(v18 + 4);
                    while ( *v21 != v19 )
                    {
                      ++v20;
                      ++v21;
                      if ( v20 >= *((unsigned __int16 *)v39 + 0x18) )
                        goto LABEL_41;
                    }
                    if ( v20 >= 0 )
                    {
                      v22 = *(char **)(*(_DWORD *)(*(this + 9) + 4) + 4 * v20);
                      if ( v22 )
                      {
                        if ( v22 != v37 )
                        {
                          v23 = (char **)sub_4E7DE0(v37);
                          v24 = (int)(v23 + 1);
                          if ( v23[1] )
                          {
                            do
                            {
                              v23 = *(char ***)v24;
                              v13 = *(_DWORD *)(*(_DWORD *)v24 + 4) == 0;
                              v24 = *(_DWORD *)v24 + 4;
                            }
                            while ( !v13 );
                          }
                          if ( *v23 )
                          {
                            v25 = (char **)FormHeapAlloc(8u);
                            if ( v25 )
                            {
                              *v25 = v22;
                              v25[1] = 0;
                              v23[1] = (char *)v25;
                            }
                            else
                            {
                              v23[1] = 0;
                            }
                          }
                          else
                          {
                            *v23 = v22;
                          }
                        }
                      }
                      v12 = (unsigned int)v38;
                    }
                  }
                }
              }
LABEL_41:
              ;
            }
            v26 = *(this + 9);
            if ( v12 < *(unsigned __int16 *)(v26 + 0xA) )
            {
              if ( v37 )
              {
                if ( !*(_DWORD *)(*(_DWORD *)(v26 + 4) + 4 * v12) )
                  ++*(_WORD *)(v26 + 0xC);
              }
              else if ( *(_DWORD *)(*(_DWORD *)(v26 + 4) + 4 * v12) )
              {
                --*(_WORD *)(v26 + 0xC);
              }
            }
            else
            {
              *(_WORD *)(v26 + 0xA) = v12 + 1;
              if ( v37 )
                ++*(_WORD *)(v26 + 0xC);
            }
            v5 = v40;
            *(_DWORD *)(*(_DWORD *)(v26 + 4) + 4 * v12) = v37;
          }
          v27 = (unsigned __int16)v5[5];
          v38 = (float *)++v12;
        }
        while ( v12 < v27 );
      }
      v2 = this;
      v4 = (int)v39;
    }
    sub_4E4ED0((unsigned int *)v2);
    v28 = (_DWORD *)(v4 + 0x28);
    if ( v4 != 0xFFFFFFD8 )
    {
      do
      {
        if ( !v28[1] && !*v28 )
          break;
        v29 = (_DWORD *)*v28;
        v30 = (_DWORD *)FormHeapAlloc(0x10u);
        *v30 = *v29;
        v30[1] = v29[1];
        v30[2] = v29[2];
        v31 = v29[3];
        v32 = this + 0xA;
        v30[3] = v31;
        if ( *(this + 0xB) )
        {
          do
            v32 = (int *)v32[1];
          while ( v32[1] );
        }
        if ( *v32 )
        {
          v33 = (_DWORD *)FormHeapAlloc(8u);
          if ( v33 )
          {
            *v33 = v30;
            v33[1] = 0;
            v32[1] = (int)v33;
          }
          else
          {
            v32[1] = 0;
          }
        }
        else
        {
          *v32 = (int)v30;
        }
        v28 = (_DWORD *)v28[1];
        v4 = (int)v39;
      }
      while ( v28 );
    }
    if ( !v42 )
    {
      if ( *(_DWORD *)(v4 + 0x24) )
      {
        sub_4E5400(v4);
        if ( !TESForm_GetOverrideFile((TESForm *)v4, 0xFFFFFFFF)
          || (OverrideFile = TESForm_GetOverrideFile((TESForm *)v4, 0), !TESFile_IsActive(OverrideFile)) )
        {
          sub_4E6CA0((_DWORD *)v4);
          sub_4E5280((_DWORD *)v4);
        }
      }
    }
  }
}
