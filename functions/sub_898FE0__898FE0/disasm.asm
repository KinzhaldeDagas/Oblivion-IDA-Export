0x898FE0: push    ebx
0x898FE1: push    ebp
0x898FE2: mov     ebp, [esp+8+arg_0]
0x898FE6: mov     eax, [ebp+38h]
0x898FE9: xor     ebx, ebx
0x898FEB: test    eax, eax
0x898FED: jle     short loc_89902C
0x898FEF: push    esi
0x898FF0: push    edi
0x898FF1: mov     eax, [ebp+34h]
0x898FF4: mov     eax, [eax+ebx*4]
0x898FF7: mov     esi, [eax+68h]
0x898FFA: mov     eax, [eax+6Ch]
0x898FFD: dec     eax
0x898FFE: js      short loc_899022
0x899000: lea     edi, [eax+1]
0x899003: mov     ecx, [esi+0Ch]
0x899006: mov     edx, [ecx]
0x899008: call    dword ptr [edx+0Ch]
0x89900B: cmp     eax, 0Bh
0x89900E: jz      short loc_89901C
0x899010: mov     eax, [esi]
0x899012: mov     ecx, [esp+10h+arg_4]
0x899016: push    eax
0x899017: call    sub_8DA100
0x89901C: add     esi, 1Ch
0x89901F: dec     edi
0x899020: jnz     short loc_899003
0x899022: mov     eax, [ebp+38h]
0x899025: inc     ebx
0x899026: cmp     ebx, eax
0x899028: jl      short loc_898FF1
0x89902A: pop     edi
0x89902B: pop     esi
0x89902C: pop     ebp
0x89902D: pop     ebx
0x89902E: retn
