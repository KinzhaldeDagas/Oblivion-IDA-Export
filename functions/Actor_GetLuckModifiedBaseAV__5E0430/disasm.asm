0x5E0430: push    ebx
0x5E0431: push    ebp
0x5E0432: push    esi
0x5E0433: mov     esi, ecx
0x5E0435: mov     eax, [esi]
0x5E0437: mov     edx, [eax+170h]
0x5E043D: push    edi
0x5E043E: xor     ebp, ebp
0x5E0440: call    edx
0x5E0442: mov     edi, eax
0x5E0444: test    edi, edi
0x5E0446: jz      short loc_5E045A
0x5E0448: mov     eax, [esi]
0x5E044A: mov     edx, [eax+190h]
0x5E0450: mov     ecx, esi
0x5E0452: call    edx
0x5E0454: test    al, al
0x5E0456: jz      short loc_5E045A
0x5E0458: mov     ebp, edi
0x5E045A: mov     eax, [esi]
0x5E045C: mov     edx, [eax+170h]
0x5E0462: mov     ecx, esi
0x5E0464: xor     edi, edi
0x5E0466: call    edx
0x5E0468: mov     ebx, eax
0x5E046A: test    ebx, ebx
0x5E046C: jz      short loc_5E0480
0x5E046E: mov     eax, [esi]
0x5E0470: mov     edx, [eax+190h]
0x5E0476: mov     ecx, esi
0x5E0478: call    edx
0x5E047A: test    al, al
0x5E047C: jz      short loc_5E0480
0x5E047E: mov     edi, ebx
0x5E0480: mov     eax, [ebp+0]
0x5E0483: mov     edx, [eax+128h]
0x5E0489: push    7
0x5E048B: mov     ecx, ebp
0x5E048D: call    edx
0x5E048F: mov     ecx, [esp+0Ch+arg_4]
0x5E0493: push    eax
0x5E0494: mov     eax, [edi]
0x5E0496: mov     edx, [eax+128h]
0x5E049C: push    ecx
0x5E049D: mov     ecx, edi
0x5E049F: call    edx
0x5E04A1: push    eax
0x5E04A2: call    Calc_LuckModifiedSkill
0x5E04A7: add     esp, 8
0x5E04AA: pop     edi
0x5E04AB: pop     esi
0x5E04AC: pop     ebp
0x5E04AD: pop     ebx
0x5E04AE: retn    4
