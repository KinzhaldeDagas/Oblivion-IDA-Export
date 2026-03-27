0x517950: push    ebx
0x517951: push    esi
0x517952: mov     esi, ecx
0x517954: xor     ebx, ebx
0x517956: cmp     [esi], ebx
0x517958: jnz     short loc_5179AE
0x51795A: push    0A4h ; '¤'; Size
0x51795F: call    FormHeapAlloc
0x517964: add     esp, 4
0x517967: cmp     eax, ebx
0x517969: jz      short loc_5179AA
0x51796B: xor     ecx, ecx
0x51796D: mov     [eax+20h], ebx
0x517970: mov     [eax+18h], ebx
0x517973: mov     [eax+1Ch], ebx
0x517976: mov     [eax+24h], ecx
0x517979: mov     [eax+28h], ecx
0x51797C: mov     [eax+2Ch], ecx
0x51797F: mov     [eax+30h], ecx
0x517982: mov     [eax+34h], ecx
0x517985: mov     [eax+38h], ecx
0x517988: mov     [eax+3Ch], ecx
0x51798B: mov     [eax+40h], ecx
0x51798E: mov     [eax+44h], ecx
0x517991: mov     [eax+48h], ecx
0x517994: mov     [eax], ebx
0x517996: mov     [eax+4], ebx
0x517999: mov     [eax+8], ebx
0x51799C: mov     [eax+10h], ebx
0x51799F: mov     [eax+14h], ebx
0x5179A2: mov     [eax+0A0h], bl
0x5179A8: jmp     short loc_5179AC
0x5179AA: xor     eax, eax
0x5179AC: mov     [esi], eax
0x5179AE: mov     ecx, [esi]
0x5179B0: cmp     [ecx+14h], ebx
0x5179B3: jz      short loc_517A2B
0x5179B5: push    0A4h ; '¤'; Size
0x5179BA: call    FormHeapAlloc
0x5179BF: add     esp, 4
0x5179C2: cmp     eax, ebx
0x5179C4: jz      short loc_517A05
0x5179C6: mov     [eax+20h], ebx
0x5179C9: mov     [eax+18h], ebx
0x5179CC: mov     [eax+1Ch], ebx
0x5179CF: xor     ecx, ecx
0x5179D1: mov     [eax+24h], ecx
0x5179D4: mov     [eax+28h], ecx
0x5179D7: mov     [eax+2Ch], ecx
0x5179DA: mov     [eax+30h], ecx
0x5179DD: mov     [eax+34h], ecx
0x5179E0: mov     [eax+38h], ecx
0x5179E3: mov     [eax+3Ch], ecx
0x5179E6: mov     [eax+40h], ecx
0x5179E9: mov     [eax+44h], ecx
0x5179EC: mov     [eax+48h], ecx
0x5179EF: mov     [eax], ebx
0x5179F1: mov     [eax+4], ebx
0x5179F4: mov     [eax+8], ebx
0x5179F7: mov     [eax+10h], ebx
0x5179FA: mov     [eax+14h], ebx
0x5179FD: mov     [eax+0A0h], bl
0x517A03: mov     ebx, eax
0x517A05: mov     eax, [esp+8+arg_8]
0x517A09: mov     ecx, [esp+8+arg_4]
0x517A0D: mov     edx, [esp+8+arg_0]
0x517A11: push    eax
0x517A12: push    ecx
0x517A13: push    edx
0x517A14: mov     ecx, ebx
0x517A16: call    Script_RunSomethingElse??
0x517A1B: push    ebx
0x517A1C: call    FormHeapFree
0x517A21: add     esp, 4
0x517A24: pop     esi
0x517A25: mov     al, 1
0x517A27: pop     ebx
0x517A28: retn    0Ch
0x517A2B: mov     eax, [esp+8+arg_8]
0x517A2F: mov     edx, [esp+8+arg_4]
0x517A33: push    eax
0x517A34: mov     eax, [esp+0Ch+arg_0]
0x517A38: push    edx
0x517A39: push    eax
0x517A3A: call    Script_RunSomethingElse??
0x517A3F: pop     esi
0x517A40: mov     al, 1
0x517A42: pop     ebx
0x517A43: retn    0Ch
