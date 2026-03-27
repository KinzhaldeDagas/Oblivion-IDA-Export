0x73CFD0: push    ebx
0x73CFD1: push    ebp
0x73CFD2: mov     ebp, [esp+8+arg_0]
0x73CFD6: push    esi
0x73CFD7: push    edi
0x73CFD8: push    ebp
0x73CFD9: mov     edi, ecx
0x73CFDB: call    sub_6FE000
0x73CFE0: mov     eax, [ebp+220h]
0x73CFE6: mov     edx, [eax+8]
0x73CFE9: push    1
0x73CFEB: lea     ecx, [esp+14h+arg_0]
0x73CFEF: push    ecx
0x73CFF0: push    4
0x73CFF2: lea     ebx, [edi+0Ch]
0x73CFF5: push    ebx
0x73CFF6: push    eax
0x73CFF7: mov     [esp+24h+arg_0], 4
0x73CFFF: call    edx
0x73D001: xor     esi, esi
0x73D003: add     esp, 14h
0x73D006: cmp     [ebx], esi
0x73D008: jbe     short loc_73D025
0x73D00A: lea     ebx, [ebx+0]
0x73D010: mov     eax, [edi+10h]
0x73D013: mov     ecx, [eax+esi*4]
0x73D016: push    ecx
0x73D017: mov     ecx, ebp
0x73D019: call    sub_713720
0x73D01E: add     esi, 1
0x73D021: cmp     esi, [ebx]
0x73D023: jb      short loc_73D010
0x73D025: pop     edi
0x73D026: pop     esi
0x73D027: pop     ebp
0x73D028: pop     ebx
0x73D029: retn    4
