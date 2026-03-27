0x616190: sub     esp, 0Ch
0x616193: push    esi
0x616194: push    edi
0x616195: mov     edi, [esp+14h+arg_0]
0x616199: test    edi, edi
0x61619B: mov     esi, ecx
0x61619D: jz      loc_6162C5
0x6161A3: push    ebp
0x6161A4: mov     ebp, [esi+3Ch]
0x6161A7: cmp     edi, ebp
0x6161A9: jz      loc_6162C4
0x6161AF: mov     ecx, [edi+58h]
0x6161B2: test    ecx, ecx
0x6161B4: jz      short loc_6161C8
0x6161B6: mov     eax, [ecx]
0x6161B8: mov     edx, [eax+3D0h]
0x6161BE: call    edx
0x6161C0: cmp     eax, ebp
0x6161C2: jz      loc_6162C4
0x6161C8: mov     ecx, [esi+3Ch]
0x6161CB: mov     eax, [ecx]
0x6161CD: mov     edx, [eax+284h]
0x6161D3: push    4
0x6161D5: call    edx
0x6161D7: test    eax, eax
0x6161D9: jnz     short loc_616229
0x6161DB: mov     ecx, [esi+3Ch]
0x6161DE: mov     eax, [ecx]
0x6161E0: mov     edx, [eax+26Ch]
0x6161E6: call    edx
0x6161E8: fmul    qword ptr ds:0A3C770h
0x6161EE: mov     ecx, [esi+3Ch]
0x6161F1: push    0
0x6161F3: push    edi
0x6161F4: fstp    dword ptr [esp+20h+var_C]
0x6161F8: call    TesObjectREF_GetDistance
0x6161FD: fstp    [esp+18h+arg_0]
0x616201: mov     ecx, [esi+3Ch]
0x616204: fld     [esp+18h+arg_0]
0x616208: mov     eax, [ecx]
0x61620A: fstp    [esp+18h+var_C+4]
0x61620E: mov     edx, [eax+26Ch]
0x616214: call    edx
0x616216: fadd    dword ptr [esp+18h+var_C]
0x61621A: fcomp   [esp+18h+var_C+4]
0x61621E: fnstsw  ax
0x616220: test    ah, 5
0x616223: jnp     loc_6162C4
0x616229: push    edi
0x61622A: mov     ecx, esi
0x61622C: call    sub_613670
0x616231: test    al, al
0x616233: jnz     loc_6162C4
0x616239: cmp     edi, ds:0B333C4h
0x61623F: jnz     short loc_616247
0x616241: mov     [esi+4Bh], al
0x616244: mov     [esi+4Ch], al
0x616247: push    14h; Size
0x616249: call    FormHeapAlloc
0x61624E: fld     [esp+1Ch+arg_C]
0x616252: mov     ecx, dword ptr [esp+1Ch+arg_4]
0x616256: fstp    dword ptr [eax+0Ch]
0x616259: mov     dl, byte ptr [esp+1Ch+arg_8]
0x61625D: fld     [esp+1Ch+arg_10]
0x616261: add     esp, 4
0x616264: fstp    dword ptr [eax+10h]
0x616267: push    offset sub_614190
0x61626C: mov     [eax+4], ecx
0x61626F: mov     [eax], edi
0x616271: mov     [eax+8], dl
0x616274: mov     ecx, [esi+40h]
0x616277: push    eax
0x616278: call    BSSimpleList_InsertSorted
0x61627D: cmp     edi, ds:0B333C4h
0x616283: jnz     short loc_61628A
0x616285: call    SoundManager_CombatMusicStart
0x61628A: mov     eax, [esi+40h]
0x61628D: mov     ecx, [eax]
0x61628F: mov     edx, [ecx]
0x616291: mov     ecx, [esi+24h]
0x616294: push    edx
0x616295: call    TESPackage_LocationData_SetReference
0x61629A: mov     eax, [esi+40h]
0x61629D: mov     ecx, [eax]
0x61629F: mov     edx, [ecx]
0x6162A1: mov     ecx, [esi+28h]
0x6162A4: push    edx
0x6162A5: call    TeSPackage_TargetData_SetTargetREFR
0x6162AA: mov     ecx, [esi+3Ch]
0x6162AD: mov     eax, [ecx]
0x6162AF: mov     edx, [eax+330h]
0x6162B5: call    edx
0x6162B7: test    eax, eax
0x6162B9: jz      short loc_6162C4
0x6162BB: push    1
0x6162BD: mov     ecx, esi
0x6162BF: call    sub_624030
0x6162C4: pop     ebp
0x6162C5: pop     edi
0x6162C6: pop     esi
0x6162C7: add     esp, 0Ch
0x6162CA: retn    14h
