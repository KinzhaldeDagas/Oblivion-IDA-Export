0x9316C0: sub     esp, 1Ch
0x9316C3: mov     ecx, [esp+1Ch+arg_4]
0x9316C7: mov     eax, [ecx+4]
0x9316CA: mov     edx, [ecx+8]
0x9316CD: push    ebx
0x9316CE: push    ebp
0x9316CF: mov     [esp+24h+var_18], eax
0x9316D3: xor     ebp, ebp
0x9316D5: push    esi
0x9316D6: xor     eax, eax
0x9316D8: cmp     edx, ebp
0x9316DA: push    edi
0x9316DB: jle     short loc_9316F0
0x9316DD: lea     ecx, [ecx+0]
0x9316E0: mov     edx, [ecx+4]
0x9316E3: mov     [edx+eax*8+6], bp
0x9316E8: mov     edx, [ecx+8]
0x9316EB: inc     eax
0x9316EC: cmp     eax, edx
0x9316EE: jl      short loc_9316E0
0x9316F0: mov     dl, [esp+2Ch+arg_C]
0x9316F4: test    dl, dl
0x9316F6: mov     ebx, [esp+2Ch+arg_10]
0x9316FA: jz      short loc_931702
0x9316FC: mov     eax, [ebx]
0x9316FE: mov     edi, [eax]
0x931700: jmp     short loc_931707
0x931702: mov     ecx, [ebx]
0x931704: mov     edi, [ecx+4]
0x931707: mov     esi, [ebx+4]
0x93170A: dec     esi
0x93170B: js      short loc_93175A
0x93170D: mov     ecx, esi
0x93170F: shl     ecx, 4
0x931712: test    dl, dl
0x931714: mov     eax, [ebx]
0x931716: jz      short loc_93171D
0x931718: mov     eax, [ecx+eax]
0x93171B: jmp     short loc_931721
0x93171D: mov     eax, [ecx+eax+4]
0x931721: cmp     eax, edi
0x931723: jz      short loc_93174E
0x931725: inc     ebp
0x931726: test    dl, dl
0x931728: mov     edi, eax
0x93172A: jz      short loc_931737
0x93172C: movzx   edx, word ptr [eax+2]
0x931730: mov     eax, [esp+2Ch+var_18]
0x931734: lea     eax, [eax+edx*8]
0x931737: mov     edx, 3
0x93173C: cmp     [eax+6], dx
0x931740: jz      loc_9317E8
0x931746: mov     [eax+6], dx
0x93174A: mov     dl, [esp+2Ch+arg_C]
0x93174E: dec     esi
0x93174F: sub     ecx, 10h
0x931752: test    esi, esi
0x931754: jge     short loc_931712
0x931756: test    ebp, ebp
0x931758: jnz     short loc_931769
0x93175A: mov     eax, [esp+2Ch+arg_0]
0x93175E: pop     edi
0x93175F: pop     esi
0x931760: pop     ebp
0x931761: mov     byte ptr [eax], 1
0x931764: pop     ebx
0x931765: add     esp, 1Ch
0x931768: retn
0x931769: test    dl, dl
0x93176B: jz      short loc_931773
0x93176D: mov     ecx, [ebx]
0x93176F: mov     edi, [ecx]
0x931771: jmp     short loc_931778
0x931773: mov     eax, [ebx]
0x931775: mov     edi, [eax+4]
0x931778: mov     esi, [ebx+4]
0x93177B: dec     esi
0x93177C: mov     ebp, 2
0x931781: js      short loc_9317D8
0x931783: mov     edx, esi
0x931785: shl     edx, 4
0x931788: mov     cl, [esp+2Ch+arg_C]
0x93178C: test    cl, cl
0x93178E: mov     eax, [ebx]
0x931790: jz      short loc_931797
0x931792: mov     eax, [edx+eax]
0x931795: jmp     short loc_93179B
0x931797: mov     eax, [edx+eax+4]
0x93179B: cmp     eax, edi
0x93179D: jz      short loc_9317CC
0x93179F: test    cl, cl
0x9317A1: mov     edi, eax
0x9317A3: jnz     short loc_9317B0
0x9317A5: movzx   ecx, word ptr [eax+2]
0x9317A9: mov     eax, [esp+2Ch+var_18]
0x9317AD: lea     eax, [eax+ecx*8]
0x9317B0: movzx   ecx, word ptr [eax+6]
0x9317B4: sub     ecx, 0
0x9317B7: jz      short loc_9317C6
0x9317B9: dec     ecx
0x9317BA: jz      short loc_9317E8
0x9317BC: sub     ecx, ebp
0x9317BE: jnz     short loc_9317CC
0x9317C0: mov     [eax+6], bp
0x9317C4: jmp     short loc_9317CC
0x9317C6: mov     word ptr [eax+6], 1
0x9317CC: dec     esi
0x9317CD: sub     edx, 10h
0x9317D0: test    esi, esi
0x9317D2: jge     short loc_931788
0x9317D4: mov     dl, [esp+2Ch+arg_C]
0x9317D8: test    dl, dl
0x9317DA: mov     eax, [ebx]
0x9317DC: mov     cl, 1
0x9317DE: mov     [esp+2Ch+var_14], cl
0x9317E2: jz      short loc_9317F7
0x9317E4: mov     ebp, [eax]
0x9317E6: jmp     short loc_9317FA
0x9317E8: mov     eax, [esp+2Ch+arg_0]
0x9317EC: pop     edi
0x9317ED: pop     esi
0x9317EE: pop     ebp
0x9317EF: mov     byte ptr [eax], 0
0x9317F2: pop     ebx
0x9317F3: add     esp, 1Ch
0x9317F6: retn
0x9317F7: mov     ebp, [eax+4]
0x9317FA: mov     eax, [ebx+4]
0x9317FD: dec     eax
0x9317FE: js      loc_9318C2
0x931804: mov     edi, eax
0x931806: shl     edi, 4
0x931809: inc     eax
0x93180A: mov     [esp+2Ch+var_C], eax
0x93180E: mov     edi, edi
0x931810: test    dl, dl
0x931812: mov     eax, [ebx]
0x931814: jz      short loc_93181B
0x931816: mov     eax, [edi+eax]
0x931819: jmp     short loc_93181F
0x93181B: mov     eax, [edi+eax+4]
0x93181F: cmp     eax, ebp
0x931821: jz      loc_9318AC
0x931827: test    dl, dl
0x931829: mov     ebp, eax
0x93182B: jz      short loc_931831
0x93182D: mov     esi, eax
0x93182F: jmp     short loc_93183C
0x931831: movzx   eax, word ptr [eax+2]
0x931835: mov     esi, [esp+2Ch+var_18]
0x931839: lea     esi, [esi+eax*8]
0x93183C: cmp     word ptr [esi+6], 1
0x931841: jnz     short loc_93186E
0x931843: test    cl, cl
0x931845: jz      short loc_93186A
0x931847: mov     ecx, [esp+2Ch+arg_4]
0x93184B: push    1
0x93184D: push    esi
0x93184E: push    ecx
0x93184F: lea     edx, [esp+38h+var_1A]
0x931853: push    edx
0x931854: call    sub_931520
0x931859: mov     cl, [eax]
0x93185B: mov     dl, [esp+3Ch+arg_C]
0x93185F: add     esp, 10h
0x931862: test    cl, cl
0x931864: jz      short loc_93186A
0x931866: mov     al, 1
0x931868: jmp     short loc_93186C
0x93186A: xor     al, al
0x93186C: mov     cl, al
0x93186E: movzx   eax, word ptr [esi+2]
0x931872: mov     esi, [esp+2Ch+var_18]
0x931876: cmp     word ptr [esi+eax*8+6], 3
0x93187C: lea     eax, [esi+eax*8]
0x93187F: jnz     short loc_9318AC
0x931881: test    cl, cl
0x931883: jz      short loc_9318A8
0x931885: mov     ecx, [esp+2Ch+arg_4]
0x931889: push    3
0x93188B: push    eax
0x93188C: push    ecx
0x93188D: lea     edx, [esp+38h+var_19]
0x931891: push    edx
0x931892: call    sub_931520
0x931897: mov     cl, [eax]
0x931899: mov     dl, [esp+3Ch+arg_C]
0x93189D: add     esp, 10h
0x9318A0: test    cl, cl
0x9318A2: jz      short loc_9318A8
0x9318A4: mov     al, 1
0x9318A6: jmp     short loc_9318AA
0x9318A8: xor     al, al
0x9318AA: mov     cl, al
0x9318AC: mov     eax, [esp+2Ch+var_C]
0x9318B0: sub     edi, 10h
0x9318B3: dec     eax
0x9318B4: mov     [esp+2Ch+var_C], eax
0x9318B8: jnz     loc_931810
0x9318BE: mov     [esp+2Ch+var_14], cl
0x9318C2: test    dl, dl
0x9318C4: mov     eax, [ebx]
0x9318C6: jz      short loc_9318CC
0x9318C8: mov     eax, [eax]
0x9318CA: jmp     short loc_9318CF
0x9318CC: mov     eax, [eax+4]
0x9318CF: mov     [esp+2Ch+var_10], eax
0x9318D3: mov     eax, [ebx+4]
0x9318D6: dec     eax
0x9318D7: js      loc_9319FB
0x9318DD: mov     ecx, eax
0x9318DF: shl     ecx, 4
0x9318E2: inc     eax
0x9318E3: mov     [esp+2Ch+var_4], eax
0x9318E7: mov     [esp+2Ch+var_C], ecx
0x9318EB: mov     eax, ecx
0x9318ED: jmp     short loc_9318F3
0x9318EF: mov     dl, [esp+2Ch+arg_C]
0x9318F3: test    dl, dl
0x9318F5: mov     ecx, [esp+2Ch+arg_10]
0x9318F9: mov     esi, [ecx]
0x9318FB: jz      short loc_931902
0x9318FD: mov     eax, [esi+eax]
0x931900: jmp     short loc_931906
0x931902: mov     eax, [esi+eax+4]
0x931906: cmp     eax, [esp+2Ch+var_10]
0x93190A: jz      loc_9319DD
0x931910: test    dl, dl
0x931912: mov     [esp+2Ch+var_10], eax
0x931916: jz      short loc_93191C
0x931918: mov     ebp, eax
0x93191A: jmp     short loc_931927
0x93191C: movzx   eax, word ptr [eax+2]
0x931920: mov     edi, [esp+2Ch+var_18]
0x931924: lea     ebp, [edi+eax*8]
0x931927: mov     ebx, 2
0x93192C: cmp     [ebp+6], bx
0x931930: jnz     loc_9319DD
0x931936: test    dl, dl
0x931938: mov     [esp+2Ch+var_8], 1
0x93193D: jz      short loc_931943
0x93193F: mov     edi, [esi]
0x931941: jmp     short loc_931946
0x931943: mov     edi, [esi+4]
0x931946: mov     edx, [ecx+4]
0x931949: dec     edx
0x93194A: js      short loc_93197D
0x93194C: mov     ecx, edx
0x93194E: shl     ecx, 4
0x931951: add     ecx, esi
0x931953: mov     al, [esp+2Ch+arg_C]
0x931957: test    al, al
0x931959: jz      short loc_93195F
0x93195B: mov     eax, [ecx]
0x93195D: jmp     short loc_931962
0x93195F: mov     eax, [ecx+4]
0x931962: cmp     eax, edi
0x931964: jz      short loc_93196E
0x931966: cmp     [eax+6], bx
0x93196A: mov     edi, eax
0x93196C: jnz     short loc_931978
0x93196E: dec     edx
0x93196F: sub     ecx, 10h
0x931972: test    edx, edx
0x931974: jge     short loc_931953
0x931976: jmp     short loc_93197D
0x931978: mov     [esp+2Ch+var_8], 0
0x93197D: mov     eax, [esp+2Ch+arg_4]
0x931981: mov     edx, [eax+8]
0x931984: xor     bl, bl
0x931986: xor     ecx, ecx
0x931988: test    edx, edx
0x93198A: jle     short loc_9319A4
0x93198C: mov     eax, [eax+4]
0x93198F: add     eax, 6
0x931992: cmp     word ptr [eax], 0
0x931996: jz      short loc_9319A2
0x931998: inc     ecx
0x931999: add     eax, 8
0x93199C: cmp     ecx, edx
0x93199E: jl      short loc_931992
0x9319A0: jmp     short loc_9319A4
0x9319A2: mov     bl, 1
0x9319A4: mov     al, [esp+2Ch+var_8]
0x9319A8: test    al, al
0x9319AA: jz      short loc_9319DD
0x9319AC: test    bl, bl
0x9319AE: jz      short loc_9319DD
0x9319B0: mov     al, [esp+2Ch+var_14]
0x9319B4: test    al, al
0x9319B6: jz      short loc_9319D7
0x9319B8: mov     ecx, [esp+2Ch+arg_4]
0x9319BC: push    3
0x9319BE: push    ebp
0x9319BF: push    ecx
0x9319C0: lea     edx, [esp+38h+var_19]
0x9319C4: push    edx
0x9319C5: call    sub_931520
0x9319CA: mov     cl, [eax]
0x9319CC: add     esp, 10h
0x9319CF: test    cl, cl
0x9319D1: jz      short loc_9319D7
0x9319D3: mov     al, 1
0x9319D5: jmp     short loc_9319D9
0x9319D7: xor     al, al
0x9319D9: mov     [esp+2Ch+var_14], al
0x9319DD: mov     eax, [esp+2Ch+var_C]
0x9319E1: mov     ecx, [esp+2Ch+var_4]
0x9319E5: sub     eax, 10h
0x9319E8: dec     ecx
0x9319E9: mov     [esp+2Ch+var_C], eax
0x9319ED: mov     [esp+2Ch+var_4], ecx
0x9319F1: jnz     loc_9318EF
0x9319F7: mov     cl, [esp+2Ch+var_14]
0x9319FB: mov     esi, [esp+2Ch+arg_4]
0x9319FF: mov     edx, [esi+8]
0x931A02: xor     eax, eax
0x931A04: test    edx, edx
0x931A06: jle     short loc_931A22
0x931A08: test    cl, cl
0x931A0A: jz      short loc_931A1B
0x931A0C: mov     ecx, [esi+4]
0x931A0F: cmp     word ptr [ecx+eax*8+6], 0
0x931A15: jz      short loc_931A1B
0x931A17: mov     cl, 1
0x931A19: jmp     short loc_931A1D
0x931A1B: xor     cl, cl
0x931A1D: inc     eax
0x931A1E: cmp     eax, edx
0x931A20: jl      short loc_931A08
0x931A22: mov     eax, [esp+2Ch+arg_0]
0x931A26: pop     edi
0x931A27: pop     esi
0x931A28: pop     ebp
0x931A29: mov     [eax], cl
0x931A2B: pop     ebx
0x931A2C: add     esp, 1Ch
0x931A2F: retn
