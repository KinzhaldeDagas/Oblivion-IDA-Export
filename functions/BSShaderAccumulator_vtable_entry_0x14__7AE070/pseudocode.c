void __thiscall BSShaderAccumulator::vtable_entry_0x14(_BYTE *this)
{
  bool v2; // zf
  int i; // edi
  int j; // edi
  ShaderDefinition *ShaderDefinition; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // edx
  NiObjectNET *v8; // eax
  int v9; // ecx
  int *v10; // edx
  float v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  int **v14; // ebp
  int *v15; // eax
  int v16; // edi
  int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // edx
  unsigned __int16 v21; // ax
  unsigned int v22; // edi
  int v23; // eax
  int k; // eax
  int *v25; // ecx
  int v26; // ebx
  float v27; // eax
  int v28; // ebp
  int v29; // edi
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int *v33; // eax
  int v34; // edx
  void (__thiscall *v35)(_BYTE *); // eax
  int v36; // eax
  int v37; // edx
  int v38; // ebx
  int v39; // ecx
  float v40; // eax
  int v41; // ebp
  int m; // edi
  float v43; // eax
  int n; // edi
  _DWORD *v45; // eax
  int ii; // edi
  _DWORD *jj; // ebp
  int *v48; // ecx
  int v49; // eax
  int v50; // ebx
  _DWORD *v51; // eax
  _DWORD **v52; // edi
  int *v53; // ebp
  int v54; // edi
  _DWORD *v55; // ebp
  int v56; // eax
  int v57; // ebp
  int v58; // ebp
  int v59; // edi
  _DWORD *kk; // ebp
  int *v61; // ecx
  int v62; // eax
  _DWORD *v63; // edi
  _DWORD *v64; // eax
  NiDX9Renderer *v65; // ebx
  NiScreenElements **v66; // edi
  unsigned int v67; // [esp+58h] [ebp-50h]
  int v68; // [esp+70h] [ebp-38h]
  int v69; // [esp+70h] [ebp-38h]
  _DWORD *v70; // [esp+70h] [ebp-38h]
  int v71; // [esp+74h] [ebp-34h] BYREF
  int v72; // [esp+78h] [ebp-30h] BYREF
  float v73; // [esp+7Ch] [ebp-2Ch]
  IDirect3DDevice9 *shader; // [esp+80h] [ebp-28h]
  float v75; // [esp+84h] [ebp-24h]
  NiDX9Renderer *v76; // [esp+88h] [ebp-20h]
  int v77[4]; // [esp+8Ch] [ebp-1Ch] BYREF
  int v78; // [esp+A4h] [ebp-4h]

  if ( *(this + 0x2268) )
  {
    if ( *((_DWORD *)this + 2) )
    {
      if ( *(this + 0x21E1) )
      {
        *(this + 0x2268) = 0;
        v2 = LOWORD(dword_B42EAC) == 5;
        v76 = g_Renderer;
        byte_B42CDD = 0;
        if ( v2 )
        {
          for ( i = 6; i <= 9; ++i )
            (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0x60))(this, i, 0);
          for ( j = 0x154; j <= 0x155; ++j )
            (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0x60))(this, j, 0);
          sub_7AB6F0(this);
        }
        else
        {
          ShaderDefinition = GetShaderDefinition(1u);
          v6 = *((_DWORD **)this + 0x1A);
          shader = (IDirect3DDevice9 *)ShaderDefinition->shader;
          while ( v6 )
          {
            v7 = (_DWORD *)v6[2];
            v6 = (_DWORD *)*v6;
            sub_7ABBC0(v7);
          }
          sub_7AA6C0((_DWORD *)this + 0x880);
          sub_7AA6C0((_DWORD *)this + 0x885);
          if ( byte_B42CD9 )
          {
            if ( LOWORD(dword_B42EAC) != 5 )
            {
              v8 = sub_7A9E10(this);
              NiSmartPointer_Set__((Ni2DBuffer **)&RenderWindowNiNode, (Ni2DBuffer *)v8);
              byte_B42CD9 = 0;
            }
          }
          v2 = OcclusionCullngBool == 0;
          v9 = *((_DWORD *)this + 8);
          v10 = *((int **)this + 9);
          v71 = *((_DWORD *)this + 0xA);
          v11 = *((float *)this + 0xB);
          v68 = v9;
          v72 = (int)v10;
          v75 = v11;
          if ( v2 || (v12 = *((_DWORD *)this + 0x54)) == 0 || byte_B42CDB || LOWORD(dword_B42EAC) == 5 )
          {
            if ( !byte_B42CDA )
            {
              sub_7AA6C0((_DWORD *)this + 0x50);
              dword_B42CCC = 0;
            }
          }
          else
          {
            *((_WORD *)this + 0x10F2) = v12;
            *((_DWORD *)this + 8) = v12;
            *((_DWORD *)this + 9) = v12;
            *((_DWORD *)this + 0xA) = FormHeapAlloc((unsigned __int64)v12 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v12);
            v13 = FormHeapAlloc((unsigned __int64)*((unsigned int *)this + 9) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *((_DWORD *)this + 9));
            v14 = *((int ***)this + 0x51);
            *((_DWORD *)this + 0xB) = v13;
            v15 = *((int **)this + 2);
            v77[0] = v15[0x19];
            v16 = 0;
            v77[1] = v15[0x1C];
            for ( v77[2] = v15[0x1F]; v14; *(float *)(v20 + 4 * v16 - 4) = v73 )
            {
              v17 = *v14[2];
              v14 = (int **)*v14;
              *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * v16) = v17;
              v18 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * v16);
              v73 = *(float *)(v18 + 0x2C);
              v19 = sub_47D9E0((float *)(v18 + 0x20), (float *)v77);
              v20 = *((_DWORD *)this + 0xB);
              ++v16;
              v73 = v19 - v73;
            }
            *((_DWORD *)this + 8) = v16;
            *((_DWORD *)this + 9) = v16;
            sub_733380(this, 0, v16 - 1);
            v21 = *((_WORD *)this + 0x10F2);
            if ( v21 > *((_WORD *)this + 0x10F3) )
            {
              v22 = *((_DWORD *)this + 0x87A);
              *((_DWORD *)this + 0x87A) = FormHeapAlloc((unsigned __int64)v21 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v21);
              v23 = 0;
              if ( *((_WORD *)this + 0x10F3) )
              {
                do
                {
                  *(_DWORD *)(*((_DWORD *)this + 0x87A) + 4 * v23) = *(_DWORD *)(v22 + 4 * v23);
                  ++v23;
                }
                while ( v23 < *((unsigned __int16 *)this + 0x10F3) );
              }
              for ( k = *((unsigned __int16 *)this + 0x10F3); k < *((unsigned __int16 *)this + 0x10F2); ++k )
                *(_DWORD *)(*((_DWORD *)this + 0x87A) + 4 * k) = 0;
              FormHeapFree(v22);
              *((_WORD *)this + 0x10F3) = *((_WORD *)this + 0x10F2);
            }
            v25 = *((int **)this + 0xA);
            *((_DWORD *)this + 0xC) = 0;
            v26 = *v25;
            *((_DWORD *)this + 0xC) = 1;
            sub_7D1320((int *)3);
            (*((void (__thiscall **)(IDirect3DDevice9Vtbl *))shader[0xC].lpVtbl->QueryInterface + 0x12))(shader[0xC].lpVtbl);
            (*((void (__thiscall **)(IDirect3DDevice9Vtbl *))shader[0xB].lpVtbl->QueryInterface + 0x12))(shader[0xB].lpVtbl);
            shader = dword_B43104->member.device;
            v27 = COERCE_FLOAT(FormHeapAlloc(0x10u));
            v73 = v27;
            v78 = 0;
            if ( v27 == 0.0 )
              v28 = 0;
            else
              v28 = sub_7E2370(SLODWORD(v27), 0, 0, 1, 0, 0);
            v78 = 0xFFFFFFFF;
            *(_WORD *)(v28 + 4) = 3;
            *(_BYTE *)(v28 + 8) = 0;
            if ( v26 )
            {
              v29 = 0;
              do
              {
                *(_DWORD *)v28 = v26;
                if ( !*(_DWORD *)(v29 + *((_DWORD *)this + 0x87A)) )
                  shader->lpVtbl->CreateQuery(
                    shader,
                    D3DQUERYTYPE_OCCLUSION,
                    (IDirect3DQuery9 **)(v29 + *((_DWORD *)this + 0x87A)));
                (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(v29 + *((_DWORD *)this + 0x87A)) + 0x18))(
                  *(_DWORD *)(v29 + *((_DWORD *)this + 0x87A)),
                  2);
                sub_7A9820((_DWORD *)v28, 3u);
                ++dword_B42CCC;
                dword_B42CC8 += (*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)v28 + 0xB4) + 0x5C))(*(_DWORD *)(*(_DWORD *)v28 + 0xB4));
                (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(v29 + *((_DWORD *)this + 0x87A)) + 0x18))(
                  *(_DWORD *)(v29 + *((_DWORD *)this + 0x87A)),
                  1);
                v30 = *((_DWORD *)this + 0xC);
                v29 += 4;
                if ( v30 >= *((_DWORD *)this + 8) )
                  break;
                v26 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * v30);
                *((_DWORD *)this + 0xC) = v30 + 1;
              }
              while ( v26 );
            }
            sub_7E2400(v28);
            FormHeapFree(v28);
            if ( !byte_B42CDA || LOWORD(dword_B42EAC) )
              sub_7AA6C0((_DWORD *)this + 0x50);
            v31 = v71;
            v32 = v68;
            v71 = *((_DWORD *)this + 0xA);
            v68 = *((_DWORD *)this + 8);
            v33 = *((int **)this + 9);
            *((_DWORD *)this + 0xA) = v31;
            v34 = v72;
            v72 = (int)v33;
            v67 = *((_DWORD *)this + 0xB);
            *((_DWORD *)this + 8) = v32;
            *((_DWORD *)this + 9) = v34;
            FormHeapFree(v67);
            *((float *)this + 0xB) = v75;
          }
          v35 = *(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x5C);
          *((_DWORD *)this + 7) = 0;
          v35(this);
          if ( OcclusionCullngBool )
          {
            if ( dword_B42CCC )
            {
              if ( !byte_B42CDB && LOWORD(dword_B42EAC) != 5 )
              {
                v36 = *((_DWORD *)this + 8);
                v37 = v68;
                v38 = *((_DWORD *)this + 0xA);
                *((_DWORD *)this + 0xA) = v71;
                v39 = v72;
                v69 = v36;
                v40 = *((float *)this + 9);
                v41 = 0;
                v2 = *((_WORD *)this + 0x10F2) == 0;
                *((_DWORD *)this + 8) = v37;
                v75 = v40;
                *((_DWORD *)this + 9) = v39;
                if ( !v2 )
                {
                  do
                  {
                    for ( m = 4 * v41;
                          (*(int (__stdcall **)(_DWORD, int *, int, int))(**(_DWORD **)(m + *((_DWORD *)this + 0x87A))
                                                                        + 0x1C))(
                            *(_DWORD *)(m + *((_DWORD *)this + 0x87A)),
                            &v72,
                            4,
                            1) == 1;
                          ++dword_B42CA8 )
                    {
                      ;
                    }
                    if ( !v72 )
                    {
                      sub_7ABDE0((_DWORD *)this + 0x87B, (int *)(m + *((_DWORD *)this + 0xA)));
                      ++dword_B42CB8;
                    }
                    ++v41;
                  }
                  while ( v41 < *((unsigned __int16 *)this + 0x10F2) );
                }
                if ( *((_DWORD *)this + 0x87A) )
                {
                  if ( !byte_B42CDA )
                    *((_WORD *)this + 0x10F2) = 0;
                }
                if ( *((int *)this + 8) > 0 )
                  FormHeapFree(*((_DWORD *)this + 0xA));
                v43 = v75;
                *((_DWORD *)this + 0xA) = v38;
                *((_DWORD *)this + 8) = v69;
                *((float *)this + 9) = v43;
              }
            }
          }
          if ( byte_B42CDA )
          {
            if ( !LOWORD(dword_B42EAC) )
              byte_B42CDB = 1;
          }
          for ( n = 4; n < 0x17C; ++n )
            (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0x60))(this, n, 0);
          v45 = *((_DWORD **)this + 0x1E);
          if ( v45 )
          {
            if ( v45[4] )
              sub_7ABAC0(v45, 0);
          }
          if ( *((_DWORD *)this + 0x23) )
          {
            sub_7AA550((_DWORD *)this + 0x1F, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
            sub_7F8DB0(*((int **)this + 0x899), (_DWORD *)this + 0x1F, 0x76);
          }
          if ( *((_DWORD *)this + 0x28) )
          {
            sub_7AA550((_DWORD *)this + 0x24, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
            sub_7F9410(*((int **)this + 0x899), (_DWORD *)this + 0x24, 0x195);
          }
          for ( ii = 0x17C; ii < 0x198; ++ii )
            (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0x60))(this, ii, 0);
          if ( *((_DWORD *)this + 0x12) )
          {
            for ( jj = *(_DWORD **)(*((_DWORD *)this + 0x10) + 8); jj; jj = *(_DWORD **)(*((_DWORD *)this + 0x10) + 8) )
            {
              sub_7ABAC0(jj, 0);
              *jj = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
              FormHeapFree((unsigned int)jj);
              v48 = *((int **)this + 0x10);
              v49 = *v48;
              v2 = *v48 == 0;
              *((_DWORD *)this + 0x10) = *v48;
              if ( v2 )
                *((_DWORD *)this + 0x11) = 0;
              else
                *(_DWORD *)(v49 + 4) = 0;
              (*(void (__thiscall **)(_BYTE *, int *))(*((_DWORD *)this + 0xF) + 8))(this + 0x3C, v48);
              if ( !--*((_DWORD *)this + 0x12) )
                break;
            }
          }
          if ( !byte_B42CDB )
          {
            sub_7A9C30((int)(this + 0x21EC));
            *((_DWORD *)this + 0x87E) = *((_DWORD *)this + 0x87C);
            *((_DWORD *)this + 0x87C) = 0;
            *((_DWORD *)this + 0x87D) = 0;
            *((_DWORD *)this + 0x87F) = 0;
          }
          v50 = *((_DWORD *)this + 0x88A);
          if ( *((_DWORD *)this + 0x88E) )
          {
            if ( v50 )
            {
              if ( !byte_B42CDB )
              {
                if ( byte_B42CDE )
                {
                  v51 = *((_DWORD **)this + 0x88C);
                  *((_DWORD *)this + 0x88F) = 0;
                  *(this + 0x2240) = 0;
                  v52 = *(_DWORD ***)(v50 + 0xBC);
                  v70 = v51;
                  if ( v52 )
                  {
                    if ( ((int (__thiscall *)(_DWORD **))(*v52)[7])(v52) < 1
                      || ((int (__thiscall *)(_DWORD **))(*v52)[7])(v52) > 5 )
                    {
                      if ( ((int (__thiscall *)(_DWORD **))(*v52)[7])(v52) == 0x1B )
                      {
                        v53 = (int *)(byte_B42CE0 != 0 ? 0x10 : 0x12A);
                        v72 = (int)v53;
                        sub_7FD260((unsigned __int16)v53);
                        (*(void (__thiscall **)(_DWORD *))(*v52[0xC] + 0x48))(v52[0xC]);
                        (*(void (__thiscall **)(_DWORD *))(*v52[0xB] + 0x48))(v52[0xB]);
                      }
                      else
                      {
                        LOWORD(v53) = v72;
                      }
                    }
                    else
                    {
                      v72 = byte_B42CE0 != 0 ? 0x10 : 3;
                      LOWORD(v53) = v72;
                      sub_7D1320((int *)v72);
                      (*(void (__thiscall **)(_DWORD *))(*v52[0xC] + 0x48))(v52[0xC]);
                      (*(void (__thiscall **)(_DWORD *))(*v52[0xB] + 0x48))(v52[0xB]);
                    }
                    sub_7E2370((int)v77, v50, (__int16)v53, 0, 0, 0);
                    v78 = 1;
                    while ( v70 )
                    {
                      v54 = v70[2];
                      v70 = (_DWORD *)*v70;
                      if ( v54 )
                      {
                        if ( *(_BYTE *)(v54 + 0x19) || !*(_BYTE *)(v54 + 0x1A) )
                        {
                          *(_BYTE *)(v54 + 0x18) = 0;
                        }
                        else
                        {
                          *(_DWORD *)(v50 + 0x88) = *(_DWORD *)v54;
                          *(_DWORD *)(v50 + 0x8C) = *(_DWORD *)(v54 + 4);
                          *(_DWORD *)(v50 + 0x90) = *(_DWORD *)(v54 + 8);
                          v75 = *(float *)(v54 + 0xC);
                          v55 = (_DWORD *)(v54 + 0x14);
                          *(float *)(v50 + 0x94) = v75;
                          if ( !*(_DWORD *)(v54 + 0x14) )
                            dword_B43104->member.device->lpVtbl->CreateQuery(
                              dword_B43104->member.device,
                              D3DQUERYTYPE_OCCLUSION,
                              (IDirect3DQuery9 **)(v54 + 0x14));
                          if ( *v55 )
                          {
                            if ( *(_BYTE *)(v54 + 0x19) )
                            {
                              for ( ;
                                    (*(int (__stdcall **)(_DWORD, int *, int, int))(*(_DWORD *)*v55 + 0x1C))(
                                      *v55,
                                      &v71,
                                      4,
                                      1) == 1;
                                    ++dword_B42CAC )
                              {
                                ;
                              }
                              v56 = v71;
                              *(_BYTE *)(v54 + 0x18) = v71 == 0;
                              *(_DWORD *)(v54 + 0x1C) = v56;
                              *(_BYTE *)(v54 + 0x19) = 0;
                            }
                            if ( (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)*v55 + 0x18))(*v55, 2)
                              && ((*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v55 + 0x18))(*v55, 1),
                                  (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)*v55 + 0x18))(*v55, 2)) )
                            {
                              v58 = *v55;
                              *(_BYTE *)(v54 + 0x19) = 0;
                              *(_BYTE *)(v54 + 0x18) = 0;
                              (*(void (__stdcall **)(int, int))(*(_DWORD *)v58 + 0x18))(v58, 1);
                            }
                            else
                            {
                              sub_7A9820(v77, v72);
                              v57 = *v55;
                              *(_BYTE *)(v54 + 0x19) = 1;
                              (*(void (__stdcall **)(int, int))(*(_DWORD *)v57 + 0x18))(v57, 1);
                            }
                          }
                        }
                      }
                    }
                    v78 = 0xFFFFFFFF;
                    sub_7E2400((int)v77);
                  }
                }
              }
            }
            *((_DWORD *)this + 0x88F) = 0;
            *(this + 0x2240) = 0;
          }
          sub_7ACF40(this);
          if ( byte_B42CE2 )
            *((_DWORD *)this + 7) = this + 0x2244;
          else
            *((_DWORD *)this + 7) = this + 0x2254;
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x5C))(this);
          sub_7ACF40(this);
          v59 = 0x198;
          v72 = 0x198;
          do
          {
            (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 0x60))(this, v59, 1);
            if ( v59 == 0x19B )
            {
              if ( byte_B42CE2 )
                *((_DWORD *)this + 7) = this + 0x2254;
              else
                *((_DWORD *)this + 7) = this + 0x2244;
              (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x5C))(this);
              sub_7ACF40(this);
              v2 = *((_DWORD *)this + 0x16) == 0;
              *((_DWORD *)this + 7) = 0;
              if ( !v2 )
              {
                for ( kk = *(_DWORD **)(*((_DWORD *)this + 0x14) + 8); kk; kk = *(_DWORD **)(*((_DWORD *)this + 0x14) + 8) )
                {
                  sub_7ABAC0(kk, 1);
                  *kk = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
                  FormHeapFree((unsigned int)kk);
                  v61 = *((int **)this + 0x14);
                  v62 = *v61;
                  v2 = *v61 == 0;
                  *((_DWORD *)this + 0x14) = *v61;
                  if ( v2 )
                    *((_DWORD *)this + 0x15) = 0;
                  else
                    *(_DWORD *)(v62 + 4) = 0;
                  (*(void (__thiscall **)(_BYTE *, int *))(*((_DWORD *)this + 0x13) + 8))(this + 0x4C, v61);
                  if ( !--*((_DWORD *)this + 0x16) )
                    break;
                }
              }
              v63 = *((_DWORD **)this + 0x871);
              while ( v63 )
              {
                v64 = v63;
                v63 = (_DWORD *)*v63;
                (*(void (__thiscall **)(_BYTE *, _DWORD *))(*((_DWORD *)this + 0x870) + 8))(this + 0x21C0, v64);
              }
              v59 = v72;
              *((_DWORD *)this + 0x873) = 0;
              *((_DWORD *)this + 0x871) = 0;
              *((_DWORD *)this + 0x872) = 0;
            }
            v72 = ++v59;
          }
          while ( v59 <= 0x19F );
          sub_7ABAC0((_DWORD *)this + 0x29, 1);
          if ( LOWORD(dword_B42EAC) == 4 )
          {
            v65 = v76;
            if ( v76 )
            {
              if ( (v76->member.super.SceneState1 == 1 || v76->member.super.SceneState2 == 1)
                && v76->member.super.IsReady == 1 )
              {
                v76->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v76, 0);
              }
              v66 = (NiScreenElements **)dword_B42CF8;
              do
                sub_709C60(*v66++);
              while ( (int)v66 < (int)&dword_B42D3C );
              if ( (v65->member.super.SceneState1 == 1 || v65->member.super.SceneState2 == 1)
                && v65->member.super.IsReady == 1 )
              {
                v65->__vftable->super.Clear((NiRenderer *)v65, 0, 2);
              }
              SetCameraViewProj(v65, *((NiCamera **)this + 2));
            }
          }
          sub_733830(this);
        }
      }
    }
  }
}
