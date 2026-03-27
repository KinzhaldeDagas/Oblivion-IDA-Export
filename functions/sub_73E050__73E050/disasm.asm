0x73E050: sub     esp, 8
0x73E053: push    esi
0x73E054: push    edi
0x73E055: mov     edi, [esp+10h+a2]
0x73E059: mov     esi, ecx
0x73E05B: push    edi; a2
0x73E05C: mov     [esp+14h+var_4], esi
0x73E060: call    sub_700670
0x73E065: test    al, al
0x73E067: jnz     short loc_73E071
0x73E069: pop     edi
0x73E06A: pop     esi
0x73E06B: add     esp, 8
0x73E06E: retn    4
0x73E071: push    ebp
0x73E072: mov     ebp, [esi+10h]
0x73E075: cmp     ebp, [edi+10h]
0x73E078: jz      short loc_73E085
0x73E07A: pop     ebp
0x73E07B: pop     edi
0x73E07C: xor     al, al
0x73E07E: pop     esi
0x73E07F: add     esp, 8
0x73E082: retn    4
0x73E085: push    ebx
0x73E086: xor     ebx, ebx
0x73E088: test    ebp, ebp
0x73E08A: jbe     short loc_73E103
0x73E08C: mov     eax, [esi+8]
0x73E08F: mov     esi, [edi+8]
0x73E092: lea     edi, [eax+4]
0x73E095: sub     eax, esi
0x73E097: mov     [esp+18h+var_8], eax
0x73E09B: jmp     short loc_73E0A0
0x73E09D: align 10h
0x73E0A0: mov     cx, [eax+esi]
0x73E0A4: cmp     cx, [esi]
0x73E0A7: jz      short loc_73E0EE
0x73E0A9: mov     dx, [edi-2]
0x73E0AD: cmp     dx, [esi+2]
0x73E0B1: jz      short loc_73E0EE
0x73E0B3: mov     cx, [edi]
0x73E0B6: cmp     cx, [esi+4]
0x73E0BA: jz      short loc_73E0EE
0x73E0BC: mov     dx, [edi+2]
0x73E0C0: cmp     dx, [esi+6]
0x73E0C4: jz      short loc_73E0EE
0x73E0C6: mov     cx, [edi+4]
0x73E0CA: cmp     cx, [esi+8]
0x73E0CE: jz      short loc_73E0EE
0x73E0D0: mov     dx, [edi+6]
0x73E0D4: cmp     dx, [esi+0Ah]
0x73E0D8: jz      short loc_73E0EE
0x73E0DA: lea     eax, [esi+0Ch]
0x73E0DD: push    eax
0x73E0DE: lea     ecx, [edi+8]
0x73E0E1: call    sub_632310
0x73E0E6: test    al, al
0x73E0E8: jnz     short loc_73E120
0x73E0EA: mov     eax, [esp+18h+var_8]
0x73E0EE: add     ebx, 1
0x73E0F1: add     edi, 1Ch
0x73E0F4: add     esi, 1Ch
0x73E0F7: cmp     ebx, ebp
0x73E0F9: jb      short loc_73E0A0
0x73E0FB: mov     esi, [esp+18h+var_4]
0x73E0FF: mov     edi, [esp+18h+a2]
0x73E103: mov     ecx, [esi+14h]
0x73E106: mov     eax, [edi+14h]
0x73E109: mov     edx, [ecx]
0x73E10B: push    eax
0x73E10C: mov     eax, [edx+2Ch]
0x73E10F: call    eax
0x73E111: pop     ebx
0x73E112: pop     ebp
0x73E113: test    al, al
0x73E115: pop     edi
0x73E116: setnz   al
0x73E119: pop     esi
0x73E11A: add     esp, 8
0x73E11D: retn    4
0x73E120: pop     ebx
0x73E121: pop     ebp
0x73E122: pop     edi
0x73E123: xor     al, al
0x73E125: pop     esi
0x73E126: add     esp, 8
0x73E129: retn    4
