0x9376E0: push    ecx
0x9376E1: mov     eax, [esp+4+arg_4]
0x9376E5: push    ebx
0x9376E6: mov     ebx, [esp+8+arg_8]
0x9376EA: push    ebp
0x9376EB: push    esi
0x9376EC: push    edi
0x9376ED: mov     esi, ecx
0x9376EF: mov     ecx, [esp+14h+arg_14]
0x9376F3: push    eax
0x9376F4: mov     eax, [esp+18h+arg_18]
0x9376F8: push    ecx
0x9376F9: lea     edx, [esp+1Ch+var_4]
0x9376FD: mov     word ptr [esp+1Ch+var_4+2], 0
0x937704: call    sub_936790
0x937709: mov     edi, [esp+1Ch+arg_1C]
0x93770D: mov     ebp, [esp+1Ch+arg_0]
0x937711: add     esp, 8
0x937714: push    edi; float
0x937715: push    edx; int
0x937716: push    ebp; int
0x937717: mov     ecx, esi
0x937719: call    sub_937470
0x93771E: mov     eax, [esp+14h+arg_C]
0x937722: test    eax, eax
0x937724: jz      short loc_937731
0x937726: xor     ecx, ecx
0x937728: cmp     eax, 1
0x93772B: setnz   cl
0x93772E: inc     ecx
0x93772F: mov     eax, ecx
0x937731: lea     ecx, [eax+4]
0x937734: mov     eax, [esp+14h+arg_10]
0x937738: mov     ebx, 1
0x93773D: shl     ebx, cl
0x93773F: test    eax, eax
0x937741: jnz     short loc_937749
0x937743: mov     [esp+14h+arg_4], eax
0x937747: jmp     short loc_937756
0x937749: xor     edx, edx
0x93774B: cmp     eax, 1
0x93774E: setnz   dl
0x937751: inc     edx
0x937752: mov     [esp+14h+arg_4], edx
0x937756: mov     cl, byte ptr [esp+14h+var_4]
0x93775A: push    edi; float
0x93775B: xor     cl, bl
0x93775D: lea     eax, [esp+18h+var_4]
0x937761: push    eax; int
0x937762: mov     byte ptr [esp+1Ch+var_4], cl
0x937766: push    ebp; int
0x937767: mov     ecx, esi
0x937769: call    sub_937470
0x93776E: mov     ecx, [esp+14h+arg_4]
0x937772: add     ecx, 4
0x937775: mov     dl, 1
0x937777: shl     dl, cl
0x937779: mov     cl, byte ptr [esp+14h+var_4+1]
0x93777D: push    edi; float
0x93777E: lea     eax, [esp+18h+var_4]
0x937782: xor     cl, dl
0x937784: push    eax; int
0x937785: mov     byte ptr [esp+1Ch+var_4+1], cl
0x937789: push    ebp; int
0x93778A: mov     ecx, esi
0x93778C: call    sub_937470
0x937791: mov     al, byte ptr [esp+14h+var_4]
0x937795: push    edi; float
0x937796: lea     ecx, [esp+18h+var_4]
0x93779A: push    ecx; int
0x93779B: xor     al, bl
0x93779D: push    ebp; int
0x93779E: mov     ecx, esi
0x9377A0: mov     byte ptr [esp+20h+var_4], al
0x9377A4: call    sub_937470
0x9377A9: pop     edi
0x9377AA: pop     esi
0x9377AB: pop     ebp
0x9377AC: pop     ebx
0x9377AD: pop     ecx
0x9377AE: retn    20h ; ' '
