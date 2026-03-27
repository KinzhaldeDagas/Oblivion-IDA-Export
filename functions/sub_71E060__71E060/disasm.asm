0x71E060: mov     eax, [esp+arg_4]
0x71E064: test    eax, eax
0x71E066: push    edi
0x71E067: mov     edi, [esp+4+arg_18]
0x71E06B: jbe     loc_71E0FF
0x71E071: mov     edx, [esp+4+arg_0]
0x71E075: push    ebx
0x71E076: push    ebp
0x71E077: push    esi
0x71E078: mov     esi, [esp+10h+arg_C]
0x71E07C: mov     [esp+10h+arg_18], eax
0x71E080: mov     eax, [esp+10h+arg_1C]
0x71E084: test    edx, edx
0x71E086: jbe     short loc_71E0F5
0x71E088: mov     ebp, edx
0x71E08A: lea     ebx, [ebx+0]
0x71E090: mov     ebx, [edi]
0x71E092: and     ebx, [eax]
0x71E094: movzx   ecx, byte ptr [eax+10h]
0x71E098: shr     ebx, cl
0x71E09A: movzx   ecx, byte ptr [eax+14h]
0x71E09E: shl     bl, cl
0x71E0A0: add     esi, 1
0x71E0A3: add     esi, 1
0x71E0A6: add     esi, 1
0x71E0A9: mov     [esi-3], bl
0x71E0AC: mov     ebx, [eax+4]
0x71E0AF: and     ebx, [edi]
0x71E0B1: movzx   ecx, byte ptr [eax+11h]
0x71E0B5: shr     ebx, cl
0x71E0B7: movzx   ecx, byte ptr [eax+15h]
0x71E0BB: shl     bl, cl
0x71E0BD: add     esi, 1
0x71E0C0: add     edi, 4
0x71E0C3: mov     [esi-3], bl
0x71E0C6: mov     ebx, [eax+8]
0x71E0C9: and     ebx, [edi-4]
0x71E0CC: movzx   ecx, byte ptr [eax+12h]
0x71E0D0: shr     ebx, cl
0x71E0D2: movzx   ecx, byte ptr [eax+16h]
0x71E0D6: shl     bl, cl
0x71E0D8: mov     [esi-2], bl
0x71E0DB: mov     ebx, [eax+0Ch]
0x71E0DE: and     ebx, [edi-4]
0x71E0E1: movzx   ecx, byte ptr [eax+13h]
0x71E0E5: shr     ebx, cl
0x71E0E7: movzx   ecx, byte ptr [eax+17h]
0x71E0EB: shl     bl, cl
0x71E0ED: sub     ebp, 1
0x71E0F0: mov     [esi-1], bl
0x71E0F3: jnz     short loc_71E090
0x71E0F5: sub     [esp+10h+arg_18], 1
0x71E0FA: jnz     short loc_71E084
0x71E0FC: pop     esi
0x71E0FD: pop     ebp
0x71E0FE: pop     ebx
0x71E0FF: pop     edi
0x71E100: retn
