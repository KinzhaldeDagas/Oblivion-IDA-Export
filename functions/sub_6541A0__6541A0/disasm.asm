0x6541A0: push    ebx
0x6541A1: push    esi
0x6541A2: push    edi
0x6541A3: mov     edi, ecx
0x6541A5: mov     eax, [edi+0E4h]
0x6541AB: mov     ecx, [eax+8]
0x6541AE: movsx   eax, byte ptr [ecx+90h]
0x6541B5: cmp     eax, 1
0x6541B8: mov     ebx, 5
0x6541BD: jz      short loc_6541C7
0x6541BF: add     eax, 0FFFFFFFDh
0x6541C2: cmp     eax, 2
0x6541C5: ja      short loc_6541CC
0x6541C7: mov     ebx, 4
0x6541CC: mov     esi, [esp+0Ch+arg_0]
0x6541D0: test    esi, esi
0x6541D2: jz      loc_654329
0x6541D8: mov     ecx, ds:0B333C4h; this
0x6541DE: push    1; a2
0x6541E0: call    Player_GetAnimData
0x6541E5: test    eax, eax
0x6541E7: jz      loc_654293
0x6541ED: mov     ecx, ds:0B333C4h; this
0x6541F3: push    1; a2
0x6541F5: call    Player_GetAnimData
0x6541FA: cmp     esi, [eax+98h]
0x654200: jnz     loc_654293
0x654206: mov     ecx, [esi+7Ch]
0x654209: mov     edx, [ecx]
0x65420B: mov     eax, ds:0B0655Ch
0x654210: mov     edx, [edx+4Ch]
0x654213: push    eax
0x654214: call    edx
0x654216: mov     ecx, [esi+7Ch]
0x654219: mov     edx, ds:0B06550h[ebx*4]
0x654220: mov     ds:0B3BA84h, eax
0x654225: mov     eax, [ecx]
0x654227: mov     eax, [eax+4Ch]
0x65422A: push    edx
0x65422B: call    eax
0x65422D: mov     ecx, [esi+7Ch]
0x654230: mov     edx, [ecx]
0x654232: mov     edx, [edx+4Ch]
0x654235: mov     ds:0B3BA90h, eax
0x65423A: mov     eax, ds:0B06570h
0x65423F: push    eax
0x654240: call    edx
0x654242: mov     ecx, [esp+0Ch+a1]
0x654246: mov     ds:0B3BA88h, eax
0x65424B: mov     eax, ds:0B0656Ch
0x654250: push    eax; a2
0x654251: push    ecx; a1
0x654252: call    NiObjectNET_LookupObjectByName
0x654257: mov     ecx, [esi+7Ch]
0x65425A: mov     edx, [ecx]
0x65425C: mov     edx, [edx+4Ch]
0x65425F: mov     ds:0B3BA8Ch, eax
0x654264: mov     eax, ds:0B06568h
0x654269: add     esp, 8
0x65426C: push    eax
0x65426D: call    edx
0x65426F: mov     edx, ds:0B3BA84h
0x654275: push    edx
0x654276: mov     ds:0B3BA94h, eax
0x65427B: mov     dword ptr ds:0B3BA98h, 0
0x654285: call    sub_480770
0x65428A: add     esp, 4
0x65428D: pop     edi
0x65428E: pop     esi
0x65428F: pop     ebx
0x654290: retn    8
0x654293: mov     ecx, [esi+7Ch]
0x654296: mov     eax, [ecx]
0x654298: mov     edx, ds:0B0655Ch
0x65429E: mov     eax, [eax+4Ch]
0x6542A1: push    edx
0x6542A2: call    eax
0x6542A4: mov     [edi+0FCh], eax
0x6542AA: mov     ecx, [esi+7Ch]
0x6542AD: mov     edx, [ecx]
0x6542AF: mov     eax, ds:0B06550h[ebx*4]
0x6542B6: mov     edx, [edx+4Ch]
0x6542B9: push    eax
0x6542BA: call    edx
0x6542BC: mov     [edi+108h], eax
0x6542C2: mov     ecx, [esi+7Ch]
0x6542C5: mov     eax, [ecx]
0x6542C7: mov     edx, ds:0B06570h
0x6542CD: mov     eax, [eax+4Ch]
0x6542D0: push    edx
0x6542D1: call    eax
0x6542D3: mov     edx, [esp+0Ch+a1]
0x6542D7: mov     [edi+100h], eax
0x6542DD: mov     ecx, ds:0B0656Ch
0x6542E3: push    ecx; a2
0x6542E4: push    edx; a1
0x6542E5: call    NiObjectNET_LookupObjectByName
0x6542EA: mov     [edi+104h], eax
0x6542F0: mov     ecx, [esi+7Ch]
0x6542F3: mov     eax, [ecx]
0x6542F5: mov     edx, ds:0B06568h
0x6542FB: mov     eax, [eax+4Ch]
0x6542FE: add     esp, 8
0x654301: push    edx
0x654302: call    eax
0x654304: mov     [edi+10Ch], eax
0x65430A: mov     eax, [edi+0FCh]
0x654310: push    eax
0x654311: mov     dword ptr [edi+110h], 0
0x65431B: call    sub_480770
0x654320: add     esp, 4
0x654323: pop     edi
0x654324: pop     esi
0x654325: pop     ebx
0x654326: retn    8
0x654329: mov     esi, [esp+0Ch+a1]
0x65432D: test    esi, esi
0x65432F: jz      short loc_65430A
0x654331: mov     ecx, ds:0B333C4h; this
0x654337: push    1; a2
0x654339: call    Player_GetAnimData
0x65433E: test    eax, eax
0x654340: jz      short loc_6543B1
0x654342: mov     ecx, ds:0B333C4h; this
0x654348: push    1; a2
0x65434A: call    Player_GetAnimData
0x65434F: cmp     esi, [eax+4]
0x654352: jnz     short loc_6543B1
0x654354: mov     ecx, ds:0B0655Ch
0x65435A: push    ecx; a2
0x65435B: push    esi; a1
0x65435C: call    NiObjectNET_LookupObjectByName
0x654361: mov     edx, ds:0B06550h[ebx*4]
0x654368: push    edx; a2
0x654369: push    esi; a1
0x65436A: mov     ds:0B3BA84h, eax
0x65436F: call    NiObjectNET_LookupObjectByName
0x654374: mov     ds:0B3BA90h, eax
0x654379: mov     eax, ds:0B06570h
0x65437E: push    eax; a2
0x65437F: push    esi; a1
0x654380: call    NiObjectNET_LookupObjectByName
0x654385: mov     ecx, ds:0B0656Ch
0x65438B: push    ecx; a2
0x65438C: push    esi; a1
0x65438D: mov     ds:0B3BA88h, eax
0x654392: call    NiObjectNET_LookupObjectByName
0x654397: mov     edx, ds:0B06568h
0x65439D: push    edx; a2
0x65439E: push    esi; a1
0x65439F: mov     ds:0B3BA8Ch, eax
0x6543A4: call    NiObjectNET_LookupObjectByName
0x6543A9: add     esp, 28h
0x6543AC: jmp     loc_65426F
0x6543B1: mov     eax, ds:0B0655Ch
0x6543B6: push    eax; a2
0x6543B7: push    esi; a1
0x6543B8: call    NiObjectNET_LookupObjectByName
0x6543BD: mov     [edi+0FCh], eax
0x6543C3: mov     ecx, ds:0B06550h[ebx*4]
0x6543CA: push    ecx; a2
0x6543CB: push    esi; a1
0x6543CC: call    NiObjectNET_LookupObjectByName
0x6543D1: mov     [edi+108h], eax
0x6543D7: mov     edx, ds:0B06570h
0x6543DD: push    edx; a2
0x6543DE: push    esi; a1
0x6543DF: call    NiObjectNET_LookupObjectByName
0x6543E4: mov     [edi+100h], eax
0x6543EA: mov     eax, ds:0B0656Ch
0x6543EF: push    eax; a2
0x6543F0: push    esi; a1
0x6543F1: call    NiObjectNET_LookupObjectByName
0x6543F6: mov     [edi+104h], eax
0x6543FC: mov     ecx, ds:0B06568h
0x654402: push    ecx; a2
0x654403: push    esi; a1
0x654404: call    NiObjectNET_LookupObjectByName
0x654409: add     esp, 28h
0x65440C: jmp     loc_654304
