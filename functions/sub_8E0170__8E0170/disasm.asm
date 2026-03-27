0x8E0170: push    ebp
0x8E0171: mov     ebp, [esp+4+arg_0]
0x8E0175: mov     ecx, [ebp+0]
0x8E0178: cmp     byte ptr [ecx+4], 2
0x8E017C: push    esi
0x8E017D: push    edi
0x8E017E: jnz     short loc_8E01AB
0x8E0180: movsx   eax, byte ptr [ecx+5]
0x8E0184: mov     esi, [eax+ecx+10h]
0x8E0188: add     eax, ecx
0x8E018A: mov     ecx, [ebp+4]
0x8E018D: movsx   edi, byte ptr [ecx+5]
0x8E0191: add     esi, eax
0x8E0193: add     edi, ecx
0x8E0195: mov     ecx, esi
0x8E0197: call    sub_8DF540
0x8E019C: mov     eax, [esi]
0x8E019E: push    edi
0x8E019F: mov     ecx, esi
0x8E01A1: call    dword ptr [eax+20h]
0x8E01A4: mov     ecx, esi
0x8E01A6: call    sub_8DF540
0x8E01AB: mov     ecx, [ebp+4]
0x8E01AE: cmp     byte ptr [ecx+4], 2
0x8E01B2: jnz     short loc_8E01DF
0x8E01B4: mov     eax, [ebp+0]
0x8E01B7: movsx   edi, byte ptr [eax+5]
0x8E01BB: add     edi, eax
0x8E01BD: movsx   eax, byte ptr [ecx+5]
0x8E01C1: mov     esi, [eax+ecx+10h]
0x8E01C5: add     eax, ecx
0x8E01C7: add     esi, eax
0x8E01C9: mov     ecx, esi
0x8E01CB: call    sub_8DF540
0x8E01D0: mov     edx, [esi]
0x8E01D2: push    edi
0x8E01D3: mov     ecx, esi
0x8E01D5: call    dword ptr [edx+20h]
0x8E01D8: mov     ecx, esi
0x8E01DA: call    sub_8DF540
0x8E01DF: pop     edi
0x8E01E0: pop     esi
0x8E01E1: pop     ebp
0x8E01E2: retn    4
