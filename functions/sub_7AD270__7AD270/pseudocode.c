void __userpurge sub_7AD270(
        int a1@<ecx>,
        int a2@<edi>,
        NiGeometry *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  volatile LONG *v15; // esi
  int v17; // eax
  volatile LONG *v18; // edi
  _DWORD *v19; // eax
  bool v20; // zf
  int v21; // ecx
  BSShaderProperty *v22; // ebp
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int (__thiscall *v27)(BSShaderProperty *, float *, int, float *, int); // edx
  int v28; // eax
  _DWORD *v29; // esi
  _WORD *v30; // eax
  _DWORD *v31; // esi
  int v32; // ecx
  int (__thiscall *v33)(BSShaderProperty *, float *, int, float *, int); // edx
  int v34; // eax
  _DWORD *v35; // esi
  unsigned __int16 *v36; // eax
  int (__thiscall *v37)(BSShaderProperty *, float *, int, volatile LONG **, int); // edx
  int v38; // eax
  void **v39; // esi
  _DWORD *v40; // edi
  BSTextureManager *v41; // ecx
  _DWORD **v42; // esi
  int v43; // edx
  int (__thiscall *v44)(BSShaderProperty *, float *, int, float *, int); // edx
  int v45; // eax
  void *i; // esi
  _DWORD *v47; // edi
  BSTextureManager *v48; // ecx
  int start; // eax
  int ShadowSceneNode; // eax
  char v51; // al
  int (__thiscall *v52)(BSShaderProperty *, float *, int, volatile LONG **, int); // edx
  _DWORD *v53; // eax
  NiObject *j; // esi
  int v55; // eax
  int v56; // eax
  int v57; // esi
  BSShader *v58; // edi
  int v59; // eax
  int v60; // ebp
  _DWORD *v61; // edx
  unsigned __int16 v62; // si
  _DWORD *v63; // ecx
  int *v64; // eax
  volatile LONG *v65; // edi
  int v66; // edi
  float *v67; // eax
  float v68; // edx
  float v69; // ecx
  float v70; // edx
  int v71; // eax
  float v72; // ecx
  float v73; // edx
  double v74; // st7
  float v75; // edx
  double v76; // st7
  float v77; // eax
  float v78; // ecx
  float v79; // edx
  int v80; // ecx
  double v81; // st6
  int v82; // eax
  double v83; // st6
  int v84; // ecx
  double v85; // st6
  int v86; // edx
  int v87; // eax
  int v88; // ecx
  int v89; // ecx
  int v90; // eax
  _DWORD *v91; // eax
  int v92; // [esp-Eh] [ebp-9Ch]
  int v93; // [esp-Eh] [ebp-9Ch]
  int v94; // [esp-Eh] [ebp-9Ch]
  int v95; // [esp-Eh] [ebp-9Ch]
  int v96; // [esp-Eh] [ebp-9Ch]
  char v97; // [esp+1h] [ebp-8Dh]
  _DWORD *v98; // [esp+2h] [ebp-8Ch]
  int v99; // [esp+6h] [ebp-88h] BYREF
  int v100; // [esp+Ah] [ebp-84h]
  void *v101[2]; // [esp+Eh] [ebp-80h] BYREF
  volatile LONG *v102; // [esp+16h] [ebp-78h] BYREF
  float v103; // [esp+1Ah] [ebp-74h] BYREF
  int v104; // [esp+1Eh] [ebp-70h]
  volatile LONG *v105; // [esp+22h] [ebp-6Ch] BYREF
  float v106; // [esp+26h] [ebp-68h]
  float v107; // [esp+2Ah] [ebp-64h]
  float v108; // [esp+2Eh] [ebp-60h]
  float v109; // [esp+32h] [ebp-5Ch]
  float v110; // [esp+36h] [ebp-58h]
  float v111; // [esp+3Ah] [ebp-54h]
  float v112[3]; // [esp+3Eh] [ebp-50h] BYREF
  float v113; // [esp+4Ah] [ebp-44h]
  float v114; // [esp+4Eh] [ebp-40h]
  float v115; // [esp+52h] [ebp-3Ch]
  float v116; // [esp+56h] [ebp-38h]
  int v117; // [esp+5Ah] [ebp-34h]
  int v118; // [esp+5Eh] [ebp-30h]
  float v119; // [esp+62h] [ebp-2Ch]
  int v120; // [esp+66h] [ebp-28h]
  int v121; // [esp+6Ah] [ebp-24h]
  int v122; // [esp+6Eh] [ebp-20h]
  int v123; // [esp+72h] [ebp-1Ch]
  int v124; // [esp+76h] [ebp-18h]
  int v125; // [esp+7Eh] [ebp-10h]
  float *retaddr; // [esp+8Eh] [ebp+0h] BYREF

  v15 = (volatile LONG *)a3;
  if ( !byte_B42CDA )
    goto LABEL_178;
  if ( byte_B42CDB )
  {
    if ( !a3 )
      return;
    v17 = (int)a3->__vftable->super.super.GetType((NiObject *)a3);
    if ( !v17 )
      return;
    while ( (char *)v17 != dword_B3FCDC )
    {
      v17 = *(_DWORD *)(v17 + 4);
      if ( !v17 )
        return;
    }
  }
  if ( !byte_B42CDA )
  {
LABEL_178:
    if ( byte_B42CDB )
      sub_7AB6F0((_DWORD *)a1);
  }
  if ( !*(_BYTE *)(a1 + 0x2268) && !byte_B42CE8 )
    *(_BYTE *)(a1 + 0x2268) = 1;
  v99 = a2;
  v18 = *sub_405760(a3, &v105);
  if ( v105 )
  {
    v15 = v105;
    if ( !InterlockedDecrement(v105 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int, int))v15)(v15, 1, v99);
  }
  if ( !v18 )
  {
    v19 = sub_7ABC40((_DWORD *)a1, 0, (int)v15);
    sub_7ABDE0(v19, (int *)&retaddr);
    return;
  }
  v20 = byte_B42CE3 == 0;
  v21 = *((_DWORD *)retaddr + 0x2F);
  v22 = *((BSShaderProperty **)v18 + 6);
  v103 = *(float *)&v22;
  if ( v20 )
  {
    if ( !v21 )
      goto LABEL_24;
  }
  else
  {
    v23 = *((_DWORD *)v18 + 8);
    if ( !v21 )
    {
      if ( !v23 )
        return;
      v24 = **(_DWORD **)(v23 + 0x20);
      if ( !v24 || !*(_DWORD *)(v24 + 8) )
        return;
LABEL_24:
      if ( *(_BYTE *)(a1 + 0x21E0) )
      {
        v25 = *((_DWORD *)v18 + 2);
        if ( (*(_BYTE *)(v25 + 0x18) & 1) == 0 || *(_BYTE *)(a1 + 0x34) && (*(_WORD *)(v25 + 0x18) & 0x2000) != 0 )
        {
          if ( LOWORD(dword_B42EAC) != 6 )
          {
            v91 = sub_7ABC40((_DWORD *)a1, (int)v18, (int)v15);
            sub_7ABDE0(v91, (int *)&retaddr);
          }
        }
        else if ( byte_B42CE3 )
        {
          sub_5B1E20((BSTextureManager *)(a1 + 0xC), (void **)&retaddr);
        }
        else if ( byte_B42CE1 && (double)dword_B42CE4 > retaddr[0xA] )
        {
          sub_5B1E20((BSTextureManager *)(a1 + 0x2254), (void **)&retaddr);
        }
        else
        {
          sub_5B1E20((BSTextureManager *)(a1 + 0x2244), (void **)&retaddr);
        }
      }
      else
      {
        (*(void (__thiscall **)(float *, NiDX9Renderer *))(*(_DWORD *)retaddr + 0x84))(retaddr, g_Renderer);
      }
      return;
    }
  }
  if ( *(float *)&v22 == 0.0 )
    goto LABEL_24;
  v15 = (volatile LONG *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 0x1C))(v21);
  v26 = (*((int (__thiscall **)(BSShaderProperty *))v22->vtbl + 0x15))(v22);
  if ( v15 == (volatile LONG *)0x16 )
  {
    if ( v26 == 0xB )
    {
      v27 = *((int (__thiscall **)(BSShaderProperty *, float *, int, float *, int))v22->vtbl + 0x17);
      v92 = dword_B42F40;
      v103 = 0.0;
      v28 = *(_DWORD *)(v27(v22, retaddr, v92, &v103, 1) + 4);
      v29 = *(_DWORD **)v28;
      v30 = *(_WORD **)(v28 + 8);
      for ( v101[0] = v30; v30; v101[0] = v30 )
      {
        if ( byte_B42CE8 )
        {
          if ( v30[2] == 0x17D )
            sub_7A9820(v30, 0x17Du);
        }
        else
        {
          sub_7ABDE0((_DWORD *)(a1 + 0x14 * ((unsigned __int16)v30[2] + 0xD)), (int *)v101);
        }
        if ( !v29 )
          break;
        v30 = (_WORD *)v29[2];
        v29 = (_DWORD *)*v29;
      }
      v31 = (_DWORD *)v125;
      ++dword_B42CD0;
      if ( !(*(int (__thiscall **)(_DWORD *))(*v31 + 0x10))(v31) )
        return;
      v32 = v31[0x2D];
LABEL_45:
      dword_B42CC4 += (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v32 + 0x5C))(v32);
      return;
    }
    goto LABEL_89;
  }
  if ( v15 != (volatile LONG *)0x18 )
  {
    if ( v15 == (volatile LONG *)0x19 )
    {
      if ( v26 != 0xE )
        goto LABEL_89;
      if ( !*(_BYTE *)(a1 + 0x21E3) )
        return;
      v37 = *((int (__thiscall **)(BSShaderProperty *, float *, int, volatile LONG **, int))v22->vtbl + 0x17);
      v94 = dword_B42F40;
      v102 = 0;
      v38 = *(_DWORD *)(v37(v22, retaddr, v94, &v102, 1) + 4);
      v40 = *(_DWORD **)v38;
      v101[0] = *(void **)(v38 + 8);
      v39 = (void **)v101[0];
      if ( v101[0] )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v100 + 0x108) == 8 )
          {
            sub_7AD1C0((_DWORD *)(a1 + 0xA4), (int)v39);
            goto LABEL_70;
          }
          sub_5B1E20((BSTextureManager *)(a1 + 0x21C0), v101);
          if ( byte_B42CE3 )
          {
            v41 = (BSTextureManager *)(a1 + 0xC);
            goto LABEL_69;
          }
          if ( *(_DWORD *)(v100 + 0x108) != 8 )
            break;
          if ( !byte_B42CE1 || !byte_B42CE2 )
            goto LABEL_64;
          v41 = (BSTextureManager *)(a1 + 0x2254);
LABEL_69:
          sub_5B1E20(v41, v39);
LABEL_70:
          if ( v40 )
          {
            v39 = (void **)v40[2];
            v40 = (_DWORD *)*v40;
            v101[0] = v39;
            if ( v39 )
              continue;
          }
          goto LABEL_72;
        }
        if ( byte_B42CE1 && (double)dword_B42CE4 > *((float *)*v39 + 0xA) )
        {
          v41 = (BSTextureManager *)(a1 + 0x2254);
          goto LABEL_69;
        }
LABEL_64:
        v41 = (BSTextureManager *)(a1 + 0x2244);
        goto LABEL_69;
      }
    }
    else
    {
      if ( v15 != (volatile LONG *)0x1A )
      {
        if ( (int)v15 <= (int)0xFFFFFFFF )
          goto LABEL_24;
        goto LABEL_89;
      }
      if ( v26 != 0xD )
        goto LABEL_89;
      if ( !*(_BYTE *)(a1 + 0x21E3) )
        return;
      v44 = *((int (__thiscall **)(BSShaderProperty *, float *, int, float *, int))v22->vtbl + 0x17);
      v95 = dword_B42F40;
      v103 = 0.0;
      v45 = *(_DWORD *)(v44(v22, retaddr, v95, &v103, 1) + 4);
      v47 = *(_DWORD **)v45;
      v101[0] = *(void **)(v45 + 8);
      for ( i = v101[0]; i; v101[0] = i )
      {
        sub_5B1E20((BSTextureManager *)(a1 + 0x21C0), v101);
        if ( byte_B42CE3 )
        {
          v48 = (BSTextureManager *)(a1 + 0xC);
        }
        else if ( byte_B42CE1 && (double)dword_B42CE4 > *(float *)(*(_DWORD *)i + 0x28) )
        {
          v48 = (BSTextureManager *)(a1 + 0x2254);
        }
        else
        {
          v48 = (BSTextureManager *)(a1 + 0x2244);
        }
        sub_5B1E20(v48, (void **)i);
        if ( !v47 )
          break;
        i = (void *)v47[2];
        v47 = (_DWORD *)*v47;
      }
    }
LABEL_72:
    v42 = (_DWORD **)v125;
    ++dword_B42CD0;
    if ( !((int (__thiscall *)(_DWORD **))(*v42)[4])(v42) )
      return;
    v43 = *v42[0x2D];
    goto LABEL_74;
  }
  if ( v26 == 0xC )
  {
    v33 = *((int (__thiscall **)(BSShaderProperty *, float *, int, float *, int))v22->vtbl + 0x17);
    v93 = dword_B42F40;
    v103 = 0.0;
    v34 = *(_DWORD *)(v33(v22, retaddr, v93, &v103, 1) + 4);
    v35 = *(_DWORD **)v34;
    v36 = *(unsigned __int16 **)(v34 + 8);
    for ( v101[0] = v36; v36; v101[0] = v36 )
    {
      sub_7ABDE0((_DWORD *)(a1 + 0x14 * (v36[2] + 0xD)), (int *)v101);
      if ( !v35 )
        break;
      v36 = (unsigned __int16 *)v35[2];
      v35 = (_DWORD *)*v35;
    }
    ++dword_B42CD0;
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)retaddr + 0x10))(retaddr) )
    {
      v32 = *((_DWORD *)retaddr + 0x2D);
      goto LABEL_45;
    }
    return;
  }
LABEL_89:
  if ( v26 < 1 )
    goto LABEL_24;
  start = (int)v22[1].member.passes.start;
  if ( !start || !sub_7AA3C0(a1, start, 1) )
  {
    v20 = *((_BYTE *)retaddr + 0x18) >> 7 == 0;
    v109 = *((float *)v18 + 2);
    if ( v20 && LOWORD(dword_B42EAC) != 5 )
    {
      ShadowSceneNode = GetShadowSceneNode(v22->member.passInfo >> 0x1C);
      if ( !sub_7C7050((int)retaddr, ShadowSceneNode) )
        return;
      *((_WORD *)retaddr + 0xC) |= 0x80u;
    }
    v51 = *(_DWORD *)(a1 + 0x5C) > 0;
    if ( v51 != ((v22->member.passInfo & 0x200) != 0) )
    {
      sub_434980(v22, 0x200, v51);
      sub_7E24C0(v22);
    }
    v52 = *((int (__thiscall **)(BSShaderProperty *, float *, int, volatile LONG **, int))v22->vtbl + 0x17);
    v96 = dword_B42F40;
    v105 = 0;
    v53 = (_DWORD *)v52(v22, retaddr, v96, &v105, 1);
    v101[0] = v53;
    if ( v53 )
    {
      v97 = 0;
      if ( v53[3] > 1u )
      {
        for ( j = *(NiObject **)(v125 + 0xC); j; j = (NiObject *)j[6].members.m_uiRefCount )
        {
          if ( v97 )
            break;
          if ( NiRTTI::IsObjectOfRTTIType(&stru_B3CE30, j) )
          {
            v55 = FormHeapAlloc(0x18u);
            if ( v55 )
            {
              *(_DWORD *)v55 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
              *(_DWORD *)(v55 + 4) = 0;
              *(_DWORD *)(v55 + 8) = 0;
              *(_DWORD *)(v55 + 0xC) = 0;
            }
            else
            {
              v55 = 0;
            }
            *(float *)(v55 + 0x14) = 0.0;
            v99 = v55;
            sub_7AA6C0((_DWORD *)v55);
            sub_6AA320((_DWORD *)(a1 + 0x3C), &v99);
            v97 = 1;
          }
        }
      }
      if ( *((_DWORD *)v101[0] + 3) && *(float *)(v100 + 0x20) > 0.0 )
      {
        if ( *(_BYTE *)(a1 + 0x21E2) )
        {
          if ( *(_BYTE *)(a1 + 0x21E0) )
          {
            v56 = (*(int (**)(void))(*(_DWORD *)v100 + 0x64))();
            if ( *(_DWORD *)(v56 + 0xC) )
            {
              v20 = *(_BYTE *)(a1 + 0x21E0) == 0;
              v57 = *(_DWORD *)(*(_DWORD *)(v56 + 4) + 8);
              v99 = v57;
              if ( v20 )
              {
                v58 = sub_7A9CC0();
                sub_7D1320((int *)*(unsigned __int16 *)(v57 + 4));
                if ( v58 )
                {
                  v58->member.super.VertexConstantMap->_vtbl->sub_9A97B0(v58->member.super.VertexConstantMap);
                  v58->member.super.PixelConstantMap->_vtbl->sub_9A97B0(v58->member.super.PixelConstantMap);
                }
                sub_7A9820((_DWORD *)v57, *(_WORD *)(v57 + 4));
              }
              else
              {
                sub_7ABDE0((_DWORD *)(a1 + 0x14 * (*(unsigned __int16 *)(v57 + 4) + 0xD)), &v99);
              }
            }
          }
        }
        v59 = *((_DWORD *)v101[0] + 1);
        v61 = *(_DWORD **)v59;
        v98 = *(_DWORD **)v59;
        v99 = *(_DWORD *)(v59 + 8);
        v60 = v99;
        if ( v99 )
        {
          while ( 1 )
          {
            v62 = *(_WORD *)(v60 + 4);
            if ( byte_B42CE8 )
            {
              if ( (unsigned __int16)(v62 - 0x168) <= 0x12u && v62 != 0x16E && v62 != 0x16F || v62 == 0x17B )
                break;
            }
            if ( v62 != 0x190
              && v62 != 0x192
              && ((unsigned __int16)(v62 - 0x34) > 0x13u || *((_DWORD *)v101[0] + 3) != 1) )
            {
              JUMPOUT(0x7ADCD8);
            }
            v65 = *sub_405760(*(NiGeometry **)v60, &v102);
            sub_7016A0((NiD3DVertexShader *)&v102);
            v66 = *((_DWORD *)v65 + 3);
            if ( !v66 )
            {
              if ( v62 != 0x190 && v62 != 0x192 )
              {
                switch ( v62 )
                {
                  case '4':
LABEL_144:
                    def_7ADBF2(a1, v60, 0x19u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '5':
LABEL_138:
                    def_7ADBF2(a1, v60, 0x1Au, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '6':
LABEL_145:
                    def_7ADBF2(a1, v60, 0x1Bu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '7':
LABEL_146:
                    def_7ADBF2(a1, v60, 0x1Cu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '8':
LABEL_147:
                    def_7ADBF2(a1, v60, 0x1Eu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '9':
LABEL_148:
                    def_7ADBF2(a1, v60, 0x1Fu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case ':':
LABEL_149:
                    def_7ADBF2(a1, v60, 0x1Du, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case ';':
LABEL_150:
                    def_7ADBF2(a1, v60, 0x20u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '<':
LABEL_151:
                    def_7ADBF2(a1, v60, 0x21u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '=':
LABEL_152:
                    def_7ADBF2(a1, v60, 0x22u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '>':
LABEL_153:
                    def_7ADBF2(a1, v60, 0x24u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '?':
LABEL_154:
                    def_7ADBF2(a1, v60, 0x25u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case '@':
LABEL_156:
                    def_7ADBF2(a1, v60, 0x26u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'A':
LABEL_157:
                    def_7ADBF2(a1, v60, 0x27u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'B':
LABEL_158:
                    def_7ADBF2(a1, v60, 0x29u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'C':
LABEL_159:
                    def_7ADBF2(a1, v60, 0x2Au, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'D':
LABEL_155:
                    def_7ADBF2(a1, v60, 0x28u, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'E':
LABEL_160:
                    def_7ADBF2(a1, v60, 0x2Bu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'F':
LABEL_161:
                    def_7ADBF2(a1, v60, 0x2Cu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                  case 'G':
LABEL_162:
                    def_7ADBF2(a1, v60, 0x2Eu, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                    break;
                }
                return;
              }
              if ( !v98 )
                goto LABEL_167;
              v64 = v98 + 2;
              v63 = (_DWORD *)*v98;
              goto LABEL_165;
            }
            v67 = *(float **)(a1 + 8);
            v68 = v67[0x22];
            v103 = *(float *)(v66 + 0x2C);
            v69 = v67[0x23];
            v104 = *(int *)(v66 + 0x30);
            v106 = v68;
            v70 = v67[0x24];
            v71 = *(_DWORD *)v60 + 0x20;
            v107 = v69;
            v113 = *(float *)v71;
            v72 = *(float *)(v71 + 8);
            v108 = v70;
            v73 = *(float *)(v71 + 4);
            v112[0] = v113 - v106;
            v114 = v73;
            v74 = v73;
            v75 = *(float *)(v71 + 0xC);
            v115 = v72;
            v116 = v75;
            v112[1] = v74 - v107;
            v112[2] = v72 - v108;
            v76 = sub_404C90(v112);
            if ( v103 < v76 + v116 )
            {
              v77 = *(float *)(v66 + 0x20);
              v78 = *(float *)(v66 + 0x24);
              v117 = v104;
              v79 = *(float *)(v66 + 0x28);
              v109 = v77;
              *(float *)&v118 = *(float *)&v104 - v103;
              v110 = v78;
              v80 = v118;
              v119 = 0.0;
              v111 = v79;
              *(float *)&v120 = 0.0;
              v81 = v77;
              dword_B46638 = v104;
              v82 = v120;
              *(float *)&v121 = v81;
              v83 = v110;
              dword_B4663C = v80;
              v84 = v121;
              *(float *)&v122 = v83;
              v85 = v111;
              *(float *)&dword_B46640 = 0.0;
              v86 = v122;
              *(float *)&v123 = v85;
              dword_B46644 = v82;
              v87 = v123;
              *(float *)&v124 = 0.0;
              dword_B46648 = v84;
              v88 = v124;
              dword_B4664C = v86;
              dword_B46650 = v87;
              dword_B46654 = v88;
              def_7ADBF2(a1, v60, v62, (int)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
              return;
            }
            if ( v62 != 0x190 && v62 != 0x192 )
            {
              switch ( v62 )
              {
                case '4':
                  goto LABEL_144;
                case '5':
                  goto LABEL_138;
                case '6':
                  goto LABEL_145;
                case '7':
                  goto LABEL_146;
                case '8':
                  goto LABEL_147;
                case '9':
                  goto LABEL_148;
                case ':':
                  goto LABEL_149;
                case ';':
                  goto LABEL_150;
                case '<':
                  goto LABEL_151;
                case '=':
                  goto LABEL_152;
                case '>':
                  goto LABEL_153;
                case '?':
                  goto LABEL_154;
                case '@':
                  goto LABEL_156;
                case 'A':
                  goto LABEL_157;
                case 'B':
                  goto LABEL_158;
                case 'C':
                  goto LABEL_159;
                case 'D':
                  goto LABEL_155;
                case 'E':
                  goto LABEL_160;
                case 'F':
                  goto LABEL_161;
                case 'G':
                  goto LABEL_162;
              }
            }
            if ( !v98 )
              goto LABEL_167;
            v64 = v98 + 2;
            v98 = (_DWORD *)*v98;
LABEL_166:
            v60 = *v64;
            v99 = *v64;
            if ( !v99 )
              goto LABEL_167;
            v61 = v98;
          }
          if ( !v61 )
            goto LABEL_167;
          v63 = (_DWORD *)*v61;
          v64 = v61 + 2;
LABEL_165:
          v98 = v63;
          goto LABEL_166;
        }
LABEL_167:
        v89 = v125;
        ++dword_B42CD0;
        v90 = (*(int (__thiscall **)(int))(*(_DWORD *)v89 + 0x10))(v89);
        if ( !v90 )
          return;
        v43 = **(_DWORD **)(v90 + 0xB4);
LABEL_74:
        dword_B42CC4 += (*(unsigned __int16 (**)(void))(v43 + 0x5C))();
      }
    }
  }
}
