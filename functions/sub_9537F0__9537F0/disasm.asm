0x9537F0: sub     esp, 21Ch
0x9537F6: push    ebp
0x9537F7: push    esi
0x9537F8: push    edi
0x9537F9: mov     edi, [esp+228h+arg_4]
0x953800: movzx   eax, byte ptr [edi+0Dh]
0x953804: mov     ebp, ecx
0x953806: lea     ecx, [eax-1]; switch 28 cases
0x953809: xor     esi, esi
0x95380B: cmp     ecx, 1Bh
0x95380E: ja      def_95381B; jumptable 0095381B default case, case 19
0x953814: movzx   ecx, ds:byte_953A54[ecx]
0x95381B: jmp     ds:jpt_95381B[ecx*4]; switch jump
0x953822: mov     ecx, edi; jumptable 0095381B cases 1-18,24
0x953824: call    sub_940B80
0x953829: mov     esi, eax
0x95382B: jmp     loc_953940
0x953830: mov     ecx, edi; jumptable 0095381B cases 20,21
0x953832: call    sub_940B70
0x953837: test    eax, eax
0x953839: jz      short loc_95384E
0x95383B: mov     ecx, edi
0x95383D: call    sub_940B70
0x953842: movzx   esi, byte ptr [ebp+0Ch]
0x953846: imul    esi, eax
0x953849: jmp     loc_953940
0x95384E: movzx   esi, byte ptr [ebp+0Ch]
0x953852: mov     eax, 1
0x953857: imul    esi, eax
0x95385A: jmp     loc_953940
0x95385F: cmp     eax, 1Bh; jumptable 0095381B cases 22,23,26,27
0x953862: jnz     short loc_953868
0x953864: movzx   esi, byte ptr [ebp+0Ch]
0x953868: cmp     eax, 16h
0x95386B: movzx   edx, byte ptr [ebp+0Ch]
0x95386F: lea     esi, [esi+edx+4]
0x953873: jnz     loc_953940
0x953879: add     esi, 4
0x95387C: jmp     loc_953940
0x953881: mov     ecx, edi; jumptable 0095381B case 25
0x953883: call    sub_90D1F0
0x953888: mov     ecx, edi
0x95388A: mov     esi, eax
0x95388C: call    sub_940B70
0x953891: test    eax, eax
0x953893: jz      short loc_9538AF
0x953895: mov     ecx, edi
0x953897: call    sub_940B70
0x95389C: mov     ecx, esi
0x95389E: mov     edi, eax
0x9538A0: call    sub_953130
0x9538A5: mov     esi, eax
0x9538A7: imul    esi, edi
0x9538AA: jmp     loc_953940
0x9538AF: mov     ecx, esi
0x9538B1: mov     edi, 1
0x9538B6: call    sub_953130
0x9538BB: mov     esi, eax
0x9538BD: imul    esi, edi
0x9538C0: jmp     short loc_953940
0x9538C2: mov     ecx, edi; jumptable 0095381B case 28
0x9538C4: call    sub_940B70
0x9538C9: test    eax, eax
0x9538CB: jz      short loc_9538DF
0x9538CD: mov     ecx, edi
0x9538CF: call    sub_940B70
0x9538D4: movzx   esi, byte ptr [ebp+0Ch]
0x9538D8: imul    esi, eax
0x9538DB: shl     esi, 1
0x9538DD: jmp     short loc_953940
0x9538DF: movzx   esi, byte ptr [ebp+0Ch]
0x9538E3: mov     eax, 1
0x9538E8: imul    esi, eax
0x9538EB: shl     esi, 1
0x9538ED: jmp     short loc_953940
0x9538EF: push    ecx; jumptable 0095381B default case, case 19
0x9538F0: mov     eax, esp
0x9538F2: mov     byte ptr [eax], 1
0x9538F5: push    200h
0x9538FA: lea     eax, [esp+230h+var_200]
0x9538FE: push    eax
0x9538FF: lea     ecx, [esp+234h+var_20C]
0x953903: call    sub_8BBFB0
0x953908: push    offset aUnknownClass_0; "Unknown class member type found!"
0x95390D: lea     ecx, [esp+22Ch+var_20C]
0x953911: call    sub_8BBDB0
0x953916: mov     ecx, ds:0BA7FB0h
0x95391C: mov     edx, [ecx]
0x95391E: push    0A3h ; '£'
0x953923: push    offset a_CopierHkobjec; ".\\copier\\hkObjectCopier.cpp"
0x953928: lea     eax, [esp+230h+var_200]
0x95392C: push    eax
0x95392D: push    5EF4E5A4h
0x953932: push    3
0x953934: call    dword ptr [edx+8]
0x953937: lea     ecx, [esp+228h+var_20C]
0x95393B: call    sub_8BC000
0x953940: mov     ecx, ds:0BA9DE4h
0x953946: mov     edx, large fs:2Ch
0x95394D: mov     ebp, [edx+ecx*4]
0x953950: mov     ecx, [ebp+19Ch]
0x953956: mov     [esp+228h+var_21C], 0
0x95395E: mov     [esp+228h+var_218], 0
0x953966: mov     [esp+228h+var_214], 80000000h
0x95396E: mov     edx, [ecx+20h]
0x953971: lea     eax, [esi+10h]
0x953974: and     eax, 0FFFFFFF0h
0x953977: lea     edi, [edx+eax]
0x95397A: cmp     edi, [ecx+2Ch]
0x95397D: ja      short loc_953986
0x95397F: mov     [ecx+20h], edi
0x953982: mov     eax, edx
0x953984: jmp     short loc_95398C
0x953986: mov     edx, [ecx]
0x953988: push    eax
0x953989: call    dword ptr [edx+0Ch]
0x95398C: mov     [esp+228h+var_21C], eax
0x953990: mov     ecx, esi
0x953992: mov     [esp+228h+var_210], eax
0x953996: mov     eax, [esp+228h+var_218]
0x95399A: or      ecx, 80000000h
0x9539A0: cmp     esi, eax
0x9539A2: mov     [esp+228h+var_214], ecx
0x9539A6: jle     short loc_9539E0
0x9539A8: and     ecx, 3FFFFFFFh
0x9539AE: cmp     ecx, esi
0x9539B0: mov     edi, eax
0x9539B2: jge     short loc_9539CD
0x9539B4: lea     eax, [ecx+ecx]
0x9539B7: cmp     esi, eax
0x9539B9: jl      short loc_9539BD
0x9539BB: mov     eax, esi
0x9539BD: push    1
0x9539BF: push    eax
0x9539C0: lea     eax, [esp+230h+var_21C]
0x9539C4: push    eax
0x9539C5: call    sub_8A6E40
0x9539CA: add     esp, 0Ch
0x9539CD: cmp     edi, esi
0x9539CF: mov     eax, edi
0x9539D1: jge     short loc_9539E0
0x9539D3: mov     ecx, [esp+228h+var_21C]
0x9539D7: mov     byte ptr [eax+ecx], 0
0x9539DB: inc     eax
0x9539DC: cmp     eax, esi
0x9539DE: jl      short loc_9539D3
0x9539E0: mov     edx, [esp+228h+var_21C]
0x9539E4: mov     ecx, [esp+228h+arg_0]
0x9539EB: push    esi
0x9539EC: push    edx
0x9539ED: mov     [esp+230h+var_218], esi
0x9539F1: call    sub_918390
0x9539F6: mov     ecx, [ebp+19Ch]
0x9539FC: mov     eax, [esp+228h+var_210]
0x953A00: cmp     eax, [ecx+28h]
0x953A03: mov     [ecx+20h], eax
0x953A06: jnz     short loc_953A0E
0x953A08: mov     edx, [ecx]
0x953A0A: push    eax
0x953A0B: call    dword ptr [edx+10h]
0x953A0E: mov     eax, [esp+228h+var_214]
0x953A12: test    eax, eax
0x953A14: js      short loc_953A2E
0x953A16: mov     ecx, [ebp+19Ch]
0x953A1C: push    14h
0x953A1E: and     eax, 3FFFFFFFh
0x953A23: push    eax
0x953A24: mov     eax, [esp+230h+var_21C]
0x953A28: push    eax
0x953A29: call    sub_8A75D0
0x953A2E: pop     edi
0x953A2F: pop     esi
0x953A30: pop     ebp
0x953A31: add     esp, 21Ch
0x953A37: retn    8
