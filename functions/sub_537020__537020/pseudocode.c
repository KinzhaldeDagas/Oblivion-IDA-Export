char __thiscall sub_537020(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ecx
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // esi
  int (__thiscall *v7)(_DWORD *); // edx
  void (__thiscall *v8)(_DWORD *, int *); // edx
  int v9; // esi
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  char v17; // al
  char v18; // bl
  char v19; // al
  int v20; // ecx
  char v21; // al
  bool v22; // zf
  int v23; // ecx
  int v25; // ebx
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  _DWORD *v32; // eax
  int v33; // eax
  char v34; // al
  int v35; // ecx
  char v36; // [esp+16h] [ebp-142h]
  char v37; // [esp+17h] [ebp-141h]
  _DWORD *v38; // [esp+18h] [ebp-140h] BYREF
  int v39; // [esp+1Ch] [ebp-13Ch]
  int v40; // [esp+20h] [ebp-138h]
  _DWORD *v41; // [esp+24h] [ebp-134h]
  _DWORD *v42; // [esp+28h] [ebp-130h]
  int v43; // [esp+2Ch] [ebp-12Ch]
  int v44; // [esp+30h] [ebp-128h]
  int v45; // [esp+38h] [ebp-120h] BYREF
  int v46; // [esp+3Ch] [ebp-11Ch]
  int v47; // [esp+40h] [ebp-118h]
  int v48; // [esp+44h] [ebp-114h]
  int v49; // [esp+154h] [ebp-4h]

  v2 = this; /*0x53704d*/
  v41 = this; /*0x53704f*/
  v3 = (_DWORD *)*(this + 3); /*0x537053*/
  v4 = 0; /*0x537056*/
  v36 = 0; /*0x53705a*/
  if ( !v3 ) /*0x53705f*/
    return 0; /*0x53705f*/
  v5 = v3[2]; /*0x537065*/
  if ( (v5 & 0x800) != 0 || (v5 & 0x20) != 0 || !(*(int (__thiscall **)(_DWORD *))(*v3 + 0x154))(v3) ) /*0x537089*/
    return 0; /*0x53745b*/
  v6 = (_DWORD *)(v2[2] + *(_DWORD *)(v2[2] + 0x10)); /*0x537099*/
  v7 = *(int (__thiscall **)(_DWORD *))(*v6 + 0x10); /*0x53709d*/
  v42 = v6; /*0x5370a2*/
  if ( v7(v6) != 1 )
  {
    if ( !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x10))(v6) )
    {
      v25 = v6[0x25]; /*0x53730b*/
      if ( v25 )
      {
        v38 = 0; /*0x53731e*/
        v39 = 0; /*0x537322*/
        v40 = 0x80000000; /*0x537326*/
        v49 = 2; /*0x537330*/
        if ( v25 > 0 )
        {
          sub_8A6E40((const void **)&v38, v25 < 0 ? 0 : v25, 4);
          while ( 1 ) /*0x537367*/
          {
            v26 = v6[0x24]; /*0x537367*/
            v27 = *(_DWORD *)(v26 + 4 * v4); /*0x53736d*/
            if ( v27 ) /*0x537372*/
            {
              sub_536110(*(_DWORD *)(v26 + 4 * v4)); /*0x537379*/
              v28 = v39; /*0x53737e*/
              v30 = v29; /*0x537386*/
              v31 = 0; /*0x53738b*/
              if ( v39 <= 0 ) /*0x53738f*/
                goto LABEL_49; /*0x53738f*/
              while ( v38[v31] != v30 ) /*0x537394*/
              {
                if ( ++v31 >= v39 ) /*0x53739b*/
                  goto LABEL_49; /*0x53739b*/
              }
              if ( v31 == 0xFFFFFFFF ) /*0x5373a2*/
              {
LABEL_49:
                if ( v39 == (v40 & 0x3FFFFFFF) ) /*0x5373b0*/
                {
                  sub_8A6EE0((const void **)&v38, 4); /*0x5373b9*/
                  v28 = v39; /*0x5373be*/
                }
                v32 = v41; /*0x5373c9*/
                v38[v28] = v30; /*0x5373cd*/
                v33 = v32[3]; /*0x5373d0*/
                ++v39; /*0x5373d3*/
                Script_AddEventToExtraScript(v30, v33 + 0x44, 0x10000000); /*0x5373e2*/
                if ( v34 ) /*0x5373ec*/
                  v36 = 1; /*0x5373ee*/
                else
                  (*(void (__thiscall **)(_DWORD *, int))(*v42 + 0x20))(v42, v27); /*0x5373ff*/
              }
            }
            if ( ++v4 >= v25 ) /*0x537406*/
              break; /*0x537406*/
            v6 = v42; /*0x537363*/
          }
        }
        v49 = 0xFFFFFFFF; /*0x537412*/
        if ( v40 >= 0 ) /*0x53741d*/
        {
          v35 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x53742f*/
          if ( !v35 ) /*0x537437*/
            v35 = unk_BA7D9C; /*0x537439*/
          sub_8A75D0(v35, v38, 4 * v40, 0x14); /*0x537450*/
        }
      }
    }
    return v36; /*0x537450*/
  }
  if ( !v6[0x49] ) /*0x5370c0*/
    return v36; /*0x537459*/
  sub_536F70(&v45); /*0x5370ca*/
  v8 = *(void (__thiscall **)(_DWORD *, int *))(*v6 + 0x38); /*0x5370d1*/
  v49 = 0; /*0x5370db*/
  v48 = 0; /*0x5370e2*/
  LOBYTE(v46) = 0; /*0x5370e6*/
  v8(v6, &v45); /*0x5370eb*/
  if ( v48 )
  {
    v9 = v48; /*0x5370fe*/
    v38 = 0; /*0x537100*/
    v39 = 0; /*0x537104*/
    v40 = 0x80000000; /*0x537108*/
    LOBYTE(v49) = 1; /*0x537112*/
    if ( v48 > 0 )
      sub_8A6E40((const void **)&v38, v48 < 0 ? 0 : v48, 4);
    v37 = 0; /*0x537138*/
    if ( v9 > 0 )
    {
      v43 = 0; /*0x537143*/
      v44 = v9; /*0x537147*/
      while ( 1 )
      {
        v10 = *(_DWORD *)(v47 + v4 + 8); /*0x537158*/
        if ( v10 )
        {
          sub_536110(v10); /*0x537165*/
          v12 = v11; /*0x53716a*/
          if ( v11 )
          {
            v13 = v39; /*0x537177*/
            v14 = 0; /*0x53717f*/
            if ( v39 <= 0 ) /*0x537183*/
              goto LABEL_20; /*0x537183*/
            while ( v38[v14] != v12 ) /*0x537188*/
            {
              if ( ++v14 >= v39 ) /*0x53718e*/
                goto LABEL_20; /*0x53718e*/
            }
            if ( v14 == 0xFFFFFFFF )
            {
LABEL_20:
              if ( v39 == (v40 & 0x3FFFFFFF) ) /*0x5371a7*/
              {
                sub_8A6EE0((const void **)&v38, 4); /*0x5371b0*/
                v13 = v39; /*0x5371b5*/
              }
              v38[v13] = v12; /*0x5371c0*/
              v15 = v2[3]; /*0x5371c3*/
              ++v39; /*0x5371c6*/
              v16 = v15 + 0x44; /*0x5371ca*/
              Script_AddEventToExtraScript(v12, v15 + 0x44, 0x10000000); /*0x5371d4*/
              v18 = v17; /*0x5371d9*/
              if ( ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 0x188))(v12) != 0 ? v12 : 0) != 0 )
              {
                Script_AddEventToExtraScript(v12, v16, 0x40000000); /*0x5371f9*/
                v18 |= v19; /*0x5371fe*/
                v20 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 0x190))(v12) != 0 ? v12 : 0;
                if ( v20 ) /*0x537217*/
                {
                  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 0x198))(v20, 0) ) /*0x537223*/
                  {
                    Script_AddEventToExtraScript(v12, v16, 0x20000000); /*0x537230*/
                    v18 |= v21; /*0x537238*/
                  }
                }
              }
              if ( !v37 ) /*0x53723f*/
              {
                sub_4D8350(v41[3], v12); /*0x537249*/
                v37 = 1; /*0x53724e*/
              }
              if ( v18 ) /*0x537255*/
              {
                v36 = 1; /*0x537257*/
              }
              else if ( (g_TESSaveLoadGame->flags & 0x800) == 0 ) /*0x53726d*/
              {
                (*(void (__thiscall **)(_DWORD *, int))(*v42 + 0x20))(v42, v10); /*0x537279*/
              }
            }
          }
        }
        v4 = v43 + 0x10; /*0x53727f*/
        v22 = v44-- == 1; /*0x537287*/
        v43 += 0x10; /*0x53728b*/
        if ( v22 ) /*0x53728f*/
          break; /*0x53728f*/
        v2 = v41; /*0x537150*/
      }
    }
    LOBYTE(v49) = 0; /*0x53729d*/
    if ( v40 >= 0 ) /*0x5372a5*/
    {
      v23 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x5372b7*/
      if ( !v23 ) /*0x5372bf*/
        v23 = unk_BA7D9C; /*0x5372c1*/
      sub_8A75D0(v23, v38, 4 * v40, 0x14); /*0x5372d8*/
    }
  }
  v49 = 0xFFFFFFFF; /*0x5372e1*/
  hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v45); /*0x5372ec*/
  return v36; /*0x53745d*/
}
