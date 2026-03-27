0x8E6560: mov     eax, [esp+arg_0]
0x8E6564: movzx   ecx, byte ptr [eax]
0x8E6567: sub     ecx, 2
0x8E656A: push    esi
0x8E656B: jz      short loc_8E6577
0x8E656D: sub     ecx, 2
0x8E6570: jz      short loc_8E65A6
0x8E6572: sub     ecx, 2
0x8E6575: jnz     short loc_8E65A4
0x8E6577: lea     esi, [eax+20h]
0x8E657A: movzx   ecx, byte ptr [eax+1]
0x8E657E: mov     edx, [esp+4+arg_4]
0x8E6582: imul    ecx, 34h ; '4'
0x8E6585: push    edi
0x8E6586: mov     edi, [edx]
0x8E6588: mov     ecx, [ecx+edi+16ACh]
0x8E658F: test    ecx, ecx
0x8E6591: pop     edi
0x8E6592: jz      short loc_8E65A4
0x8E6594: push    edx
0x8E6595: mov     edx, [eax+18h]
0x8E6598: push    edx
0x8E6599: mov     edx, [eax+14h]
0x8E659C: push    edx
0x8E659D: push    esi
0x8E659E: push    eax
0x8E659F: call    ecx
0x8E65A1: add     esp, 14h
0x8E65A4: pop     esi
0x8E65A5: retn
0x8E65A6: lea     esi, [eax+30h]
0x8E65A9: jmp     short loc_8E657A
