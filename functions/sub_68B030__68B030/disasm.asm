0x68B030: push    ebx
0x68B031: push    ebp
0x68B032: push    esi
0x68B033: mov     esi, [esp+0Ch+arg_8]
0x68B037: xor     bl, bl
0x68B039: test    esi, esi
0x68B03B: push    edi
0x68B03C: mov     ebp, ecx
0x68B03E: jz      short loc_68B04D
0x68B040: mov     ecx, esi; this
0x68B042: call    TESObjectCELL_IsInterior
0x68B047: test    al, al
0x68B049: jnz     short loc_68B04D
0x68B04B: xor     esi, esi
0x68B04D: mov     edi, [esp+10h+arg_4]
0x68B051: xor     eax, eax
0x68B053: test    esi, esi
0x68B055: jz      short loc_68B061
0x68B057: push    edi
0x68B058: mov     ecx, esi
0x68B05A: call    sub_4CBBB0
0x68B05F: jmp     short loc_68B071
0x68B061: mov     esi, [esp+10h+arg_C]
0x68B065: test    esi, esi
0x68B067: jz      short loc_68B077
0x68B069: push    edi
0x68B06A: mov     ecx, esi
0x68B06C: call    sub_4F0600
0x68B071: test    eax, eax
0x68B073: jnz     short loc_68B077
0x68B075: mov     eax, esi
0x68B077: mov     esi, [esp+10h+arg_0]
0x68B07B: test    esi, esi
0x68B07D: jz      short loc_68B0B0
0x68B07F: test    eax, eax
0x68B081: jz      short loc_68B0B0
0x68B083: push    esi
0x68B084: push    edi
0x68B085: push    eax
0x68B086: mov     eax, [esi]
0x68B088: mov     edx, [eax+174h]
0x68B08E: mov     ecx, esi
0x68B090: call    edx
0x68B092: push    eax
0x68B093: mov     ecx, esi
0x68B095: call    sub_4D8AF0
0x68B09A: push    eax
0x68B09B: mov     ecx, ebp
0x68B09D: call    sub_68AB20
0x68B0A2: mov     bl, al
0x68B0A4: test    bl, bl
0x68B0A6: jz      short loc_68B0B0
0x68B0A8: push    esi
0x68B0A9: mov     ecx, ebp
0x68B0AB: call    sub_689DC0
0x68B0B0: pop     edi
0x68B0B1: pop     esi
0x68B0B2: pop     ebp
0x68B0B3: mov     al, bl
0x68B0B5: pop     ebx
0x68B0B6: retn    10h
