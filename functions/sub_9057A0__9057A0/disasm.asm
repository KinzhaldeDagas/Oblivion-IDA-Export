0x9057A0: push    ebp
0x9057A1: mov     ebp, esp
0x9057A3: and     esp, 0FFFFFFF0h
0x9057A6: sub     esp, 244h
0x9057AC: mov     eax, ds:0B30AACh
0x9057B1: push    ebx
0x9057B2: mov     [esp+248h+var_4], eax
0x9057B9: mov     eax, [ebp+arg_0]
0x9057BC: push    esi
0x9057BD: mov     esi, ecx
0x9057BF: mov     ecx, [eax+8]
0x9057C2: push    edi
0x9057C3: mov     edi, [eax]
0x9057C5: mov     [esp+250h+var_218], ecx
0x9057C9: mov     [esp+250h+var_214], eax
0x9057CD: mov     edx, [edi]
0x9057CF: mov     ecx, edi
0x9057D1: mov     [esp+250h+var_228], esi
0x9057D5: mov     [esp+250h+var_230], edi
0x9057D9: call    dword ptr [edx+1Ch]
0x9057DC: mov     ebx, eax
0x9057DE: mov     eax, [edi]
0x9057E0: mov     ecx, edi
0x9057E2: mov     [esp+250h+var_238], ebx
0x9057E6: call    dword ptr [eax+20h]
0x9057E9: test    ebx, ebx
0x9057EB: mov     [esp+250h+var_23C], eax
0x9057EF: jle     loc_905972
0x9057F5: mov     ecx, [esp+250h+var_238]
0x9057F9: mov     ebx, [ebp+arg_8]
0x9057FC: mov     [esp+250h+var_238], ecx
0x905800: jmp     short loc_905806
0x905802: mov     edi, [esp+250h+var_230]
0x905806: mov     ecx, [esp+250h+var_23C]
0x90580A: mov     edx, [edi]
0x90580C: lea     eax, [esp+250h+var_210]
0x905810: push    eax
0x905811: push    ecx
0x905812: mov     ecx, edi
0x905814: call    dword ptr [edx+28h]
0x905817: mov     edx, [esp+250h+var_23C]
0x90581B: mov     [esp+250h+var_220], eax
0x90581F: mov     eax, [esi+10h]
0x905822: xor     edi, edi
0x905824: test    eax, eax
0x905826: mov     [esp+250h+var_21C], edx
0x90582A: jle     short loc_90583C
0x90582C: mov     ecx, [esi+0Ch]
0x90582F: nop
0x905830: cmp     [ecx], edx
0x905832: jz      short loc_90583F
0x905834: inc     edi
0x905835: add     ecx, 8
0x905838: cmp     edi, eax
0x90583A: jl      short loc_905830
0x90583C: or      edi, 0FFFFFFFFh
0x90583F: mov     eax, [esp+250h+var_23C]
0x905843: mov     ecx, [ebx+4]
0x905846: mov     edx, [ecx]
0x905848: push    eax
0x905849: mov     eax, [esp+254h+var_230]
0x90584D: push    eax
0x90584E: mov     eax, [ebp+arg_0]
0x905851: push    eax
0x905852: mov     eax, [ebp+arg_4]
0x905855: push    eax
0x905856: push    ebx
0x905857: lea     eax, [esp+264h+var_229]
0x90585B: push    eax
0x90585C: call    dword ptr [edx]
0x90585E: cmp     byte ptr [eax], 0
0x905861: jz      loc_90592B
0x905867: cmp     edi, 0FFFFFFFFh
0x90586A: jnz     loc_905913
0x905870: mov     ecx, [esi+14h]
0x905873: mov     eax, [esi+10h]
0x905876: add     esi, 0Ch
0x905879: and     ecx, 3FFFFFFFh
0x90587F: cmp     eax, ecx
0x905881: jnz     short loc_90588E
0x905883: push    8
0x905885: push    esi
0x905886: call    sub_8A6EE0
0x90588B: add     esp, 8
0x90588E: mov     eax, [esi+4]
0x905891: mov     edx, [esi]
0x905893: mov     ecx, [esp+250h+var_228]
0x905897: lea     edi, [edx+eax*8]
0x90589A: inc     eax
0x90589B: mov     [esi+4], eax
0x90589E: mov     eax, [esp+250h+var_23C]
0x9058A2: mov     [edi], eax
0x9058A4: mov     edx, [ecx+8]
0x9058A7: mov     ecx, [esp+250h+var_220]
0x9058AB: mov     eax, [ebx]
0x9058AD: mov     [esp+250h+var_224], edx
0x9058B1: mov     edx, [ecx]
0x9058B3: mov     [esp+250h+var_234], eax
0x9058B7: call    dword ptr [edx+8]
0x9058BA: mov     esi, eax
0x9058BC: mov     eax, [ebp+arg_4]
0x9058BF: mov     ecx, [eax]
0x9058C1: mov     edx, [ecx]
0x9058C3: call    dword ptr [edx+8]
0x9058C6: mov     cl, [ebx+0Ch]
0x9058C9: test    cl, cl
0x9058CB: mov     ecx, [esp+250h+var_234]
0x9058CF: jz      short loc_9058D9
0x9058D1: add     ecx, 590h
0x9058D7: jmp     short loc_9058DF
0x9058D9: add     ecx, 190h
0x9058DF: mov     edx, [esp+250h+var_224]
0x9058E3: shl     esi, 5
0x9058E6: add     esi, ecx
0x9058E8: movzx   eax, byte ptr [esi+eax]
0x9058EC: mov     ecx, [esp+250h+var_234]
0x9058F0: push    edx
0x9058F1: lea     eax, [eax+eax*4]
0x9058F4: mov     eax, [ecx+eax*4+990h]
0x9058FB: mov     ecx, [ebp+arg_4]
0x9058FE: push    ebx
0x9058FF: push    ecx
0x905900: lea     edx, [esp+25Ch+var_220]
0x905904: push    edx
0x905905: call    eax
0x905907: mov     esi, [esp+260h+var_228]
0x90590B: add     esp, 10h
0x90590E: mov     [edi+4], eax
0x905911: jmp     short loc_905956
0x905913: mov     eax, [esi+0Ch]
0x905916: mov     ecx, [eax+edi*8+4]
0x90591A: mov     eax, [ebp+arg_4]
0x90591D: mov     edx, [ecx]
0x90591F: push    ebx
0x905920: push    eax
0x905921: lea     eax, [esp+258h+var_220]
0x905925: push    eax
0x905926: call    dword ptr [edx+1Ch]
0x905929: jmp     short loc_905956
0x90592B: cmp     edi, 0FFFFFFFFh
0x90592E: jz      short loc_905956
0x905930: mov     ecx, [esi+0Ch]
0x905933: mov     ecx, [ecx+edi*8+4]
0x905937: mov     edx, [ecx]
0x905939: call    dword ptr [edx+18h]
0x90593C: mov     eax, [esi+10h]
0x90593F: dec     eax
0x905940: mov     [esi+10h], eax
0x905943: mov     ecx, eax
0x905945: mov     eax, [esi+0Ch]
0x905948: mov     edx, [eax+ecx*8]
0x90594B: mov     [eax+edi*8], edx
0x90594E: mov     ecx, [eax+ecx*8+4]
0x905952: mov     [eax+edi*8+4], ecx
0x905956: mov     ecx, [esp+250h+var_230]
0x90595A: mov     eax, [esp+250h+var_23C]
0x90595E: mov     edx, [ecx]
0x905960: push    eax
0x905961: call    dword ptr [edx+24h]
0x905964: mov     [esp+250h+var_23C], eax
0x905968: dec     [esp+250h+var_238]
0x90596C: jnz     loc_905802
0x905972: mov     ecx, [esp+250h+var_4]
0x905979: call    @__security_check_cookie@4; __security_check_cookie(x)
0x90597E: pop     edi
0x90597F: pop     esi
0x905980: pop     ebx
0x905981: mov     esp, ebp
0x905983: pop     ebp
0x905984: retn    0Ch
