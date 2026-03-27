0x4994C0: mov     eax, ds:0B35220h
0x4994C5: sub     esp, 8
0x4994C8: cmp     byte ptr ds:0B3521Ch, 0
0x4994CF: jz      short loc_4994E4
0x4994D1: cmp     dword ptr [eax+0A8h], 0
0x4994D8: jz      short loc_4994E4
0x4994DA: mov     ecx, [eax+0A8h]
0x4994E0: test    ecx, ecx
0x4994E2: jnz     short loc_499560
0x4994E4: test    eax, eax
0x4994E6: jz      short loc_499562
0x4994E8: mov     ecx, offset TimeGlobals
0x4994ED: call    TimeGlobals_GetGameHour
0x4994F2: fstp    [esp+8+var_8]
0x4994F5: call    Sky_CreateOrGetGlobalObject
0x4994FA: mov     ecx, eax
0x4994FC: call    sub_499200
0x499501: fcomp   [esp+8+var_8]
0x499504: fnstsw  ax
0x499506: test    ah, 41h
0x499509: jnp     short loc_499548
0x49950B: mov     ecx, offset TimeGlobals
0x499510: call    TimeGlobals_GetGameHour
0x499515: fstp    [esp+8+var_8]
0x499518: call    Sky_CreateOrGetGlobalObject
0x49951D: mov     ecx, eax
0x49951F: call    sub_499140
0x499524: fcomp   [esp+8+var_8]
0x499527: fnstsw  ax
0x499529: test    ah, 41h
0x49952C: jz      short loc_499548
0x49952E: mov     eax, ds:0B35220h
0x499533: test    eax, eax
0x499535: jz      short loc_499562
0x499537: cmp     dword ptr [eax+0A0h], 0
0x49953E: jz      short loc_499562
0x499540: mov     ecx, [eax+0A0h]
0x499546: jmp     short loc_49955C
0x499548: mov     eax, ds:0B35220h
0x49954D: cmp     dword ptr [eax+0A4h], 0
0x499554: jz      short loc_499562
0x499556: mov     ecx, [eax+0A4h]
0x49955C: test    ecx, ecx
0x49955E: jz      short loc_499562
0x499560: mov     eax, ecx
0x499562: add     esp, 8
0x499565: retn
