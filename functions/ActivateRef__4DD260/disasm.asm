0x4DD260: sub     esp, 108h
0x4DD266: mov     eax, ds:0B30AACh
0x4DD26B: xor     eax, esp
0x4DD26D: mov     [esp+108h+var_4], eax
0x4DD274: push    ebx
0x4DD275: push    ebp
0x4DD276: mov     ebp, [esp+110h+arg_8]
0x4DD27D: push    esi
0x4DD27E: push    edi
0x4DD27F: mov     edi, [esp+118h+arg_0]
0x4DD286: xor     bl, bl
0x4DD288: test    edi, edi
0x4DD28A: mov     esi, ecx
0x4DD28C: mov     ds:0B35F04h, bl
0x4DD292: jz      short loc_4DD2CA
0x4DD294: mov     eax, [edi]
0x4DD296: mov     edx, [eax+190h]
0x4DD29C: mov     ecx, edi
0x4DD29E: call    edx
0x4DD2A0: test    al, al
0x4DD2A2: jz      short loc_4DD2CA
0x4DD2A4: mov     ecx, [edi+58h]
0x4DD2A7: test    ecx, ecx
0x4DD2A9: jz      short loc_4DD2CA
0x4DD2AB: mov     eax, [ecx]
0x4DD2AD: mov     edx, [eax+8]
0x4DD2B0: call    edx
0x4DD2B2: test    eax, eax
0x4DD2B4: jnz     short loc_4DD2CA
0x4DD2B6: mov     ecx, [edi+58h]
0x4DD2B9: mov     eax, [ecx]
0x4DD2BB: mov     edx, [eax+47Ch]
0x4DD2C1: call    edx
0x4DD2C3: cmp     eax, 4
0x4DD2C6: jnz     short loc_4DD2CA
0x4DD2C8: mov     bl, 1
0x4DD2CA: mov     eax, [esi+8]
0x4DD2CD: shr     eax, 0Dh
0x4DD2D0: test    al, 1
0x4DD2D2: jnz     loc_4DD4A4
0x4DD2D8: test    edi, edi
0x4DD2DA: jz      loc_4DD3E5
0x4DD2E0: mov     edx, [edi]
0x4DD2E2: mov     eax, [edx+190h]
0x4DD2E8: mov     ecx, edi
0x4DD2EA: call    eax
0x4DD2EC: test    al, al
0x4DD2EE: jz      short loc_4DD316
0x4DD2F0: mov     edx, [edi]
0x4DD2F2: mov     eax, [edx+380h]
0x4DD2F8: mov     ecx, edi
0x4DD2FA: call    eax
0x4DD2FC: test    eax, eax
0x4DD2FE: jz      short loc_4DD316
0x4DD300: mov     edx, [esi]
0x4DD302: mov     eax, [edx+170h]
0x4DD308: mov     ecx, esi
0x4DD30A: call    eax
0x4DD30C: cmp     byte ptr [eax+4], 12h
0x4DD310: jz      loc_4DD404
0x4DD316: test    bl, bl
0x4DD318: jnz     loc_4DD3E5
0x4DD31E: call    sub_579440
0x4DD323: cmp     eax, esi
0x4DD325: jnz     short loc_4DD38A
0x4DD327: mov     edx, [esi]
0x4DD329: mov     eax, [edx+170h]
0x4DD32F: mov     ecx, esi
0x4DD331: call    eax
0x4DD333: movzx   eax, byte ptr [eax+4]
0x4DD337: mov     edx, [esi]
0x4DD339: lea     ecx, [eax+eax*2]
0x4DD33C: mov     ebx, ds:0B05E04h[ecx*4]
0x4DD343: mov     eax, [edx+170h]
0x4DD349: mov     ecx, esi
0x4DD34B: call    eax
0x4DD34D: push    eax; a1
0x4DD34E: call    TESFullName_GetNameForForm
0x4DD353: mov     edx, [edi]
0x4DD355: add     esp, 4
0x4DD358: push    eax
0x4DD359: mov     eax, [edx+170h]
0x4DD35F: push    ebx
0x4DD360: mov     ecx, edi
0x4DD362: call    eax
0x4DD364: push    eax; a1
0x4DD365: call    TESFullName_GetNameForForm
0x4DD36A: add     esp, 4
0x4DD36D: push    eax
0x4DD36E: lea     ecx, [esp+124h+Format]
0x4DD372: push    offset aSActivatedSS; "'%s' activated %s '%s'"
0x4DD377: push    ecx
0x4DD378: call    __sprintf
0x4DD37D: lea     edx, [esp+12Ch+Format]
0x4DD381: push    edx; Format
0x4DD382: call    Interface_ConsolePrint
0x4DD387: add     esp, 18h
0x4DD38A: mov     eax, ds:0B333C4h
0x4DD38F: cmp     edi, eax
0x4DD391: jnz     short loc_4DD39C
0x4DD393: cmp     byte ptr [eax+10Ch], 0
0x4DD39A: jnz     short loc_4DD3E5
0x4DD39C: lea     ebx, [esi+44h]
0x4DD39F: push    1
0x4DD3A1: mov     ecx, ebx
0x4DD3A3: call    sub_41F830
0x4DD3A8: test    al, al
0x4DD3AA: jnz     short loc_4DD3E5
0x4DD3AC: push    2
0x4DD3AE: mov     ecx, ebx
0x4DD3B0: call    sub_423DF0
0x4DD3B5: push    edi
0x4DD3B6: mov     ecx, ebx
0x4DD3B8: call    sub_423EB0
0x4DD3BD: cmp     dword ptr ds:0B35F00h, 5
0x4DD3C4: jge     short loc_4DD3DE
0x4DD3C6: mov     edi, 1
0x4DD3CB: add     ds:0B35F00h, edi
0x4DD3D1: mov     ecx, esi
0x4DD3D3: call    RunScripts
0x4DD3D8: sub     ds:0B35F00h, edi
0x4DD3DE: mov     al, ds:0B35F04h
0x4DD3E3: jmp     short loc_4DD406
0x4DD3E5: mov     eax, [esi]
0x4DD3E7: mov     edx, [eax+170h]
0x4DD3ED: mov     ecx, esi
0x4DD3EF: call    edx
0x4DD3F1: movzx   eax, byte ptr [eax+4]
0x4DD3F5: sub     eax, 18h
0x4DD3F8: jz      short loc_4DD421
0x4DD3FA: sub     eax, 4
0x4DD3FD: jz      short loc_4DD404
0x4DD3FF: sub     eax, 2
0x4DD402: jnz     short loc_4DD469
0x4DD404: xor     al, al
0x4DD406: mov     ecx, [esp+118h+var_4]
0x4DD40D: pop     edi
0x4DD40E: pop     esi
0x4DD40F: pop     ebp
0x4DD410: pop     ebx
0x4DD411: xor     ecx, esp
0x4DD413: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4DD418: add     esp, 108h
0x4DD41E: retn    10h
0x4DD421: lea     ecx, [esi+44h]; this
0x4DD424: call    ExtraDataList_GetTeleport
0x4DD429: mov     ebx, eax
0x4DD42B: test    ebx, ebx
0x4DD42D: jz      short loc_4DD469
0x4DD42F: mov     eax, ds:0B333C4h
0x4DD434: cmp     edi, eax
0x4DD436: jnz     short loc_4DD469
0x4DD438: mov     ecx, [eax+58h]
0x4DD43B: mov     eax, [ecx]
0x4DD43D: mov     edx, [eax+47Ch]
0x4DD443: call    edx
0x4DD445: cmp     eax, 4
0x4DD448: jz      short loc_4DD469
0x4DD44A: mov     ecx, ebx
0x4DD44C: call    sub_42B460
0x4DD451: mov     ebx, eax
0x4DD453: test    ebx, ebx
0x4DD455: jz      short loc_4DD469
0x4DD457: mov     ecx, ebx; this
0x4DD459: call    TESObjectCELL_IsInterior
0x4DD45E: test    al, al
0x4DD460: jz      short loc_4DD469
0x4DD462: mov     ecx, ebx
0x4DD464: call    sub_4CB040
0x4DD469: mov     edx, [esp+118h+arg_C]
0x4DD470: mov     ecx, [esi+1Ch]
0x4DD473: mov     eax, [ecx]
0x4DD475: mov     eax, [eax+0CCh]
0x4DD47B: push    edx
0x4DD47C: mov     edx, [esp+11Ch+arg_4]
0x4DD483: push    ebp
0x4DD484: push    edx
0x4DD485: push    edi
0x4DD486: push    esi
0x4DD487: call    eax
0x4DD489: test    al, al
0x4DD48B: jz      loc_4DD404
0x4DD491: mov     ecx, ds:0B333C4h
0x4DD497: push    edi
0x4DD498: call    sub_665260
0x4DD49D: mov     byte ptr ds:0B35F04h, 1
0x4DD4A4: mov     al, 1
0x4DD4A6: jmp     loc_4DD406
