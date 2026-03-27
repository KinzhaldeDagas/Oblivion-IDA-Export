0x4B7720: sub     esp, 10h
0x4B7723: mov     ecx, ds:0B333C4h
0x4B7729: push    esi
0x4B772A: push    edi
0x4B772B: add     ecx, 44h ; 'D'
0x4B772E: call    GetExtraDataFollower
0x4B7733: mov     esi, eax
0x4B7735: xor     edi, edi
0x4B7737: cmp     esi, edi
0x4B7739: mov     [esp+18h+var_4], esi
0x4B773D: jz      loc_4B78D6
0x4B7743: push    8; Size
0x4B7745: call    FormHeapAlloc
0x4B774A: add     esp, 4
0x4B774D: cmp     eax, edi
0x4B774F: jz      short loc_4B775C
0x4B7751: mov     [eax], edi
0x4B7753: mov     [eax+4], edi
0x4B7756: mov     [esp+18h+var_10], eax
0x4B775A: jmp     short loc_4B7760
0x4B775C: mov     [esp+18h+var_10], edi
0x4B7760: push    ebx
0x4B7761: push    ebp
0x4B7762: push    8; Size
0x4B7764: call    FormHeapAlloc
0x4B7769: add     esp, 4
0x4B776C: cmp     eax, edi
0x4B776E: jz      short loc_4B7779
0x4B7770: mov     [eax], edi
0x4B7772: mov     [eax+4], edi
0x4B7775: mov     ebp, eax
0x4B7777: jmp     short loc_4B777B
0x4B7779: xor     ebp, ebp
0x4B777B: mov     ebx, [esi+0Ch]
0x4B777E: cmp     ebx, edi
0x4B7780: mov     [esp+20h+var_C], ebp
0x4B7784: jz      short loc_4B77D3
0x4B7786: mov     edi, [ebx]
0x4B7788: test    edi, edi
0x4B778A: jz      short loc_4B77D3
0x4B778C: cmp     dword ptr [ebp+4], 0
0x4B7790: lea     eax, [ebp+4]
0x4B7793: mov     esi, ebp
0x4B7795: jz      short loc_4B77A2
0x4B7797: mov     esi, [eax]
0x4B7799: cmp     dword ptr [esi+4], 0
0x4B779D: lea     eax, [esi+4]
0x4B77A0: jnz     short loc_4B7797
0x4B77A2: cmp     dword ptr [esi], 0
0x4B77A5: jz      short loc_4B77CA
0x4B77A7: push    8; Size
0x4B77A9: call    FormHeapAlloc
0x4B77AE: add     esp, 4
0x4B77B1: test    eax, eax
0x4B77B3: jz      short loc_4B77C3
0x4B77B5: mov     [eax], edi
0x4B77B7: mov     dword ptr [eax+4], 0
0x4B77BE: mov     [esi+4], eax
0x4B77C1: jmp     short loc_4B77CC
0x4B77C3: xor     eax, eax
0x4B77C5: mov     [esi+4], eax
0x4B77C8: jmp     short loc_4B77CC
0x4B77CA: mov     [esi], edi
0x4B77CC: mov     ebx, [ebx+4]
0x4B77CF: test    ebx, ebx
0x4B77D1: jnz     short loc_4B7786
0x4B77D3: test    ebp, ebp
0x4B77D5: pop     ebp
0x4B77D6: pop     ebx
0x4B77D7: jz      loc_4B787B
0x4B77DD: lea     ecx, [ecx+0]
0x4B77E0: mov     eax, [esp+18h+var_C]
0x4B77E4: mov     esi, [eax]
0x4B77E6: test    esi, esi
0x4B77E8: jz      loc_4B787B
0x4B77EE: mov     ecx, esi
0x4B77F0: call    sub_5E03A0
0x4B77F5: test    eax, eax
0x4B77F7: jz      short loc_4B7837
0x4B77F9: mov     al, [eax+20h]
0x4B77FC: cmp     al, 1
0x4B77FE: jz      short loc_4B7804
0x4B7800: cmp     al, 7
0x4B7802: jnz     short loc_4B7837
0x4B7804: mov     ecx, esi; this
0x4B7806: call    Actor__GetProcessLevel
0x4B780B: mov     edi, [esi+58h]
0x4B780E: mov     esi, [edi]
0x4B7810: mov     ecx, offset TimeGlobals
0x4B7815: add     esi, 1Ch
0x4B7818: call    TimeGlobals_GetGameHour
0x4B781D: fsub    qword ptr ds:0A2F928h
0x4B7823: mov     edx, [esi]
0x4B7825: push    ecx
0x4B7826: fstp    [esp+1Ch+var_8]
0x4B782A: mov     ecx, edi
0x4B782C: fld     [esp+1Ch+var_8]
0x4B7830: fstp    [esp+1Ch+var_1C]
0x4B7833: call    edx
0x4B7835: jmp     short loc_4B7868
0x4B7837: mov     edi, [esp+18h+var_10]
0x4B783B: cmp     dword ptr [edi], 0
0x4B783E: jz      short loc_4B7866
0x4B7840: push    8; Size
0x4B7842: call    FormHeapAlloc
0x4B7847: add     esp, 4
0x4B784A: test    eax, eax
0x4B784C: jz      short loc_4B785B
0x4B784E: mov     ecx, [edi]
0x4B7850: mov     [eax], ecx
0x4B7852: mov     dword ptr [eax+4], 0
0x4B7859: jmp     short loc_4B785D
0x4B785B: xor     eax, eax
0x4B785D: mov     edx, [edi+4]
0x4B7860: mov     [eax+4], edx
0x4B7863: mov     [edi+4], eax
0x4B7866: mov     [edi], esi
0x4B7868: mov     eax, [esp+18h+var_C]
0x4B786C: mov     eax, [eax+4]
0x4B786F: test    eax, eax
0x4B7871: mov     [esp+18h+var_C], eax
0x4B7875: jnz     loc_4B77E0
0x4B787B: mov     esi, [esp+18h+var_10]
0x4B787F: mov     edi, esi
0x4B7881: test    edi, edi
0x4B7883: jz      short loc_4B78A1
0x4B7885: mov     eax, [esi]
0x4B7887: test    eax, eax
0x4B7889: jz      short loc_4B78A1
0x4B788B: mov     ecx, ds:0B333C4h
0x4B7891: push    eax
0x4B7892: add     ecx, 44h ; 'D'
0x4B7895: call    sub_424D00
0x4B789A: mov     esi, [esi+4]
0x4B789D: test    esi, esi
0x4B789F: jnz     short loc_4B7885
0x4B78A1: mov     ecx, edi
0x4B78A3: call    BSSimpleList_Clear
0x4B78A8: push    edi
0x4B78A9: call    FormHeapFree
0x4B78AE: mov     ecx, [esp+1Ch+var_4]
0x4B78B2: mov     eax, [ecx+0Ch]
0x4B78B5: add     esp, 4
0x4B78B8: cmp     dword ptr [eax+4], 0
0x4B78BC: jnz     short loc_4B78D6
0x4B78BE: cmp     dword ptr [eax], 0
0x4B78C1: jnz     short loc_4B78D6
0x4B78C3: mov     ecx, ds:0B333C4h
0x4B78C9: pop     edi
0x4B78CA: add     ecx, 44h ; 'D'
0x4B78CD: pop     esi
0x4B78CE: add     esp, 10h
0x4B78D1: jmp     sub_420F00
0x4B78D6: pop     edi
0x4B78D7: pop     esi
0x4B78D8: add     esp, 10h
0x4B78DB: retn
