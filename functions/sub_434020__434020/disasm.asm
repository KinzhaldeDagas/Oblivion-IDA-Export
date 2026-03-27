0x434020: sub     esp, 0Ch
0x434023: push    esi
0x434024: mov     esi, ecx
0x434026: mov     eax, [esi]
0x434028: mov     edx, [eax+38h]
0x43402B: push    edi
0x43402C: call    edx
0x43402E: test    eax, eax
0x434030: jnz     short loc_43405D
0x434032: mov     ecx, [esi+34h]
0x434035: mov     eax, [ecx]
0x434037: mov     edx, [eax+0Ch]
0x43403A: call    edx
0x43403C: test    eax, eax
0x43403E: jnz     short loc_43405D
0x434040: mov     eax, ModelLoaderPtr
0x434045: mov     edi, [eax+18h]
0x434048: mov     ecx, [edi+28h]
0x43404B: mov     edx, [ecx]
0x43404D: mov     eax, [edx+0Ch]
0x434050: call    eax
0x434052: mov     ecx, [edi+24h]
0x434055: add     eax, ecx
0x434057: jz      loc_4341B6
0x43405D: mov     edi, [esp+14h+arg_0]
0x434061: push    ebx
0x434062: push    ebp
0x434063: push    0
0x434065: push    edi
0x434066: mov     ecx, esi
0x434068: mov     [esi+38h], edi
0x43406B: call    sub_433A40
0x434070: lea     edi, [edi+edi*2+2]
0x434074: xor     ebx, ebx
0x434076: xor     eax, eax
0x434078: mov     [esp+1Ch+var_4], edi
0x43407C: lea     esp, [esp+0]
0x434080: mov     edx, [esi+2Ch]
0x434083: mov     ecx, [edx+eax*4]
0x434086: add     eax, 1
0x434089: add     ebx, ecx
0x43408B: cmp     eax, edi
0x43408D: jbe     short loc_434080
0x43408F: mov     ecx, [esi+34h]
0x434092: mov     edx, [ecx]
0x434094: mov     eax, [edx+0Ch]
0x434097: call    eax
0x434099: mov     ecx, ModelLoaderPtr
0x43409F: mov     edi, [ecx+18h]
0x4340A2: mov     ecx, [edi+28h]
0x4340A5: mov     edx, [ecx]
0x4340A7: mov     ebp, eax
0x4340A9: mov     eax, [edx+0Ch]
0x4340AC: call    eax
0x4340AE: mov     ecx, [edi+24h]
0x4340B1: add     eax, ebx
0x4340B3: add     ecx, eax
0x4340B5: add     ecx, ebp
0x4340B7: mov     [esp+1Ch+var_C], ecx
0x4340BB: mov     eax, ecx
0x4340BD: jz      loc_4341B4
0x4340C3: mov     edx, ecx
0x4340C5: test    edx, edx
0x4340C7: mov     [esp+1Ch+arg_0], edx
0x4340CB: fild    [esp+1Ch+arg_0]
0x4340CF: jge     short loc_4340D7
0x4340D1: fadd    ds:flt_A2FC78
0x4340D7: fstp    [esp+1Ch+var_8]
0x4340DB: jmp     short loc_4340E4
0x4340DD: align 10h
0x4340E0: mov     ecx, [esp+1Ch+var_C]
0x4340E4: sub     ecx, eax
0x4340E6: test    ecx, ecx
0x4340E8: mov     [esp+1Ch+arg_0], ecx
0x4340EC: fild    [esp+1Ch+arg_0]
0x4340F0: jge     short loc_4340F8
0x4340F2: fadd    ds:flt_A2FC78
0x4340F8: fdiv    [esp+1Ch+var_8]
0x4340FC: mov     ecx, SaveLoad_CurrentSavegame
0x434102: fmul    ds:fCostant_100
0x434108: fstp    [esp+1Ch+arg_0]
0x43410C: call    sub_45A500
0x434111: test    al, al
0x434113: jz      short loc_434136
0x434115: mov     ecx, SaveLoad_CurrentSavegame
0x43411B: mov     eax, [ecx+18h]
0x43411E: shr     eax, 0Bh
0x434121: test    al, 1
0x434123: jz      short loc_434136
0x434125: fld     [esp+1Ch+arg_0]
0x434129: push    ecx
0x43412A: fstp    [esp+20h+var_20]; float
0x43412D: push    2; int
0x43412F: call    sub_4523A0
0x434134: jmp     short loc_434148
0x434136: fld     [esp+1Ch+arg_0]
0x43413A: push    ecx
0x43413B: fstp    [esp+20h+var_20]; float
0x43413E: push    2; int
0x434140: call    sub_57B950
0x434145: add     esp, 8
0x434148: mov     edx, [esi]
0x43414A: mov     eax, [edx+38h]
0x43414D: mov     ecx, esi
0x43414F: call    eax
0x434151: mov     ecx, [esi+34h]
0x434154: mov     edx, [ecx]
0x434156: mov     edi, eax
0x434158: mov     eax, [edx+0Ch]
0x43415B: call    eax
0x43415D: cmp     edi, eax
0x43415F: jbe     short loc_434169
0x434161: push    32h ; '2'; dwMilliseconds
0x434163: call    ds:Sleep
0x434169: mov     ecx, esi; this
0x43416B: call    IOManager_ProcessThreads
0x434170: xor     ebx, ebx
0x434172: xor     eax, eax
0x434174: mov     ecx, [esi+2Ch]
0x434177: mov     edx, [ecx+eax*4]
0x43417A: add     eax, 1
0x43417D: add     ebx, edx
0x43417F: cmp     eax, [esp+1Ch+var_4]
0x434183: jbe     short loc_434174
0x434185: mov     ecx, [esi+34h]
0x434188: mov     eax, [ecx]
0x43418A: mov     edx, [eax+0Ch]
0x43418D: call    edx
0x43418F: mov     ebp, eax
0x434191: mov     eax, ModelLoaderPtr
0x434196: mov     edi, [eax+18h]
0x434199: mov     ecx, [edi+28h]
0x43419C: mov     edx, [ecx]
0x43419E: mov     eax, [edx+0Ch]
0x4341A1: call    eax
0x4341A3: mov     ecx, eax
0x4341A5: mov     eax, [edi+24h]
0x4341A8: add     ecx, ebx
0x4341AA: add     eax, ecx
0x4341AC: add     eax, ebp
0x4341AE: jnz     loc_4340E0
0x4341B4: pop     ebp
0x4341B5: pop     ebx
0x4341B6: pop     edi
0x4341B7: mov     dword ptr [esi+38h], 6
0x4341BE: pop     esi
0x4341BF: add     esp, 0Ch
0x4341C2: retn    4
