0x71DCB0: mov     eax, [esp+arg_4]
0x71DCB4: test    eax, eax
0x71DCB6: push    edi
0x71DCB7: mov     edi, [esp+4+arg_18]
0x71DCBB: jbe     short loc_71DD30
0x71DCBD: mov     edx, [esp+4+arg_0]
0x71DCC1: push    ebx
0x71DCC2: push    ebp
0x71DCC3: push    esi
0x71DCC4: mov     esi, [esp+10h+arg_C]
0x71DCC8: mov     [esp+10h+arg_18], eax
0x71DCCC: mov     eax, [esp+10h+arg_1C]
0x71DCD0: test    edx, edx
0x71DCD2: jbe     short loc_71DD26
0x71DCD4: mov     ebp, edx
0x71DCD6: movzx   ebx, word ptr [edi]
0x71DCD9: and     ebx, [eax]
0x71DCDB: movzx   ecx, byte ptr [eax+10h]
0x71DCDF: shr     ebx, cl
0x71DCE1: movzx   ecx, byte ptr [eax+14h]
0x71DCE5: shl     bl, cl
0x71DCE7: add     esi, 1
0x71DCEA: add     esi, 1
0x71DCED: add     esi, 1
0x71DCF0: mov     [esi-3], bl
0x71DCF3: movzx   ebx, word ptr [edi]
0x71DCF6: and     ebx, [eax+4]
0x71DCF9: movzx   ecx, byte ptr [eax+11h]
0x71DCFD: shr     ebx, cl
0x71DCFF: movzx   ecx, byte ptr [eax+15h]
0x71DD03: shl     bl, cl
0x71DD05: add     edi, 2
0x71DD08: mov     [esi-2], bl
0x71DD0B: movzx   ebx, word ptr [edi-2]
0x71DD0F: and     ebx, [eax+8]
0x71DD12: movzx   ecx, byte ptr [eax+12h]
0x71DD16: shr     ebx, cl
0x71DD18: movzx   ecx, byte ptr [eax+16h]
0x71DD1C: shl     bl, cl
0x71DD1E: sub     ebp, 1
0x71DD21: mov     [esi-1], bl
0x71DD24: jnz     short loc_71DCD6
0x71DD26: sub     [esp+10h+arg_18], 1
0x71DD2B: jnz     short loc_71DCD0
0x71DD2D: pop     esi
0x71DD2E: pop     ebp
0x71DD2F: pop     ebx
0x71DD30: pop     edi
0x71DD31: retn
