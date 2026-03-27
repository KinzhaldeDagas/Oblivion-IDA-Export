0x580120: sub     esp, 804h
0x580126: mov     eax, ds:0B30AACh
0x58012B: xor     eax, esp
0x58012D: mov     [esp+804h+var_4], eax
0x580134: push    esi
0x580135: mov     esi, ecx
0x580137: movzx   eax, word ptr [esi+1Ch]
0x58013B: cmp     ax, 0FFFFh
0x58013F: push    edi
0x580140: jnz     short loc_580157
0x580142: mov     eax, [esi+18h]
0x580145: lea     edx, [eax+1]
0x580148: mov     cl, [eax]
0x58014A: add     eax, 1
0x58014D: test    cl, cl
0x58014F: jnz     short loc_580148
0x580151: sub     eax, edx
0x580153: mov     edi, eax
0x580155: jmp     short loc_58015A
0x580157: movzx   edi, ax
0x58015A: movzx   eax, word ptr [esi+1Ch]
0x58015E: cmp     ax, 0FFFFh
0x580162: jnz     short loc_58017D
0x580164: mov     eax, [esi+18h]
0x580167: lea     edx, [eax+1]
0x58016A: lea     ebx, [ebx+0]
0x580170: mov     cl, [eax]
0x580172: add     eax, 1
0x580175: test    cl, cl
0x580177: jnz     short loc_580170
0x580179: sub     eax, edx
0x58017B: jmp     short loc_580180
0x58017D: movzx   eax, ax
0x580180: test    eax, eax
0x580182: jnz     short loc_58018D
0x580184: mov     [esp+80Ch+var_404], al
0x58018B: jmp     short loc_5801AC
0x58018D: mov     eax, [esi+18h]
0x580190: lea     edx, [esp+80Ch+var_404]
0x580197: sub     edx, eax
0x580199: lea     esp, [esp+0]
0x5801A0: mov     cl, [eax]
0x5801A2: mov     [edx+eax], cl
0x5801A5: add     eax, 1
0x5801A8: test    cl, cl
0x5801AA: jnz     short loc_5801A0
0x5801AC: xor     ecx, ecx
0x5801AE: xor     eax, eax
0x5801B0: test    edi, edi
0x5801B2: jl      short loc_5801EA
0x5801B4: mov     dl, [esi]
0x5801B6: push    ebx
0x5801B7: test    dl, dl
0x5801B9: jz      short loc_5801D4
0x5801BB: cmp     ecx, [esi+4]
0x5801BE: jnz     short loc_5801D4
0x5801C0: mov     bl, [esi+8]
0x5801C3: neg     bl
0x5801C5: sbb     bl, bl
0x5801C7: and     bl, 0FDh
0x5801CA: add     bl, 7Fh
0x5801CD: mov     [esp+eax+810h+var_804], bl
0x5801D1: add     eax, 1
0x5801D4: mov     bl, [esp+ecx+810h+var_404]
0x5801DB: mov     [esp+eax+810h+var_804], bl
0x5801DF: add     ecx, 1
0x5801E2: add     eax, 1
0x5801E5: cmp     ecx, edi
0x5801E7: jle     short loc_5801B7
0x5801E9: pop     ebx
0x5801EA: mov     [esp+eax+80Ch+var_804], 0
0x5801EF: push    0; a3
0x5801F1: lea     eax, [esp+810h+var_804]
0x5801F5: add     esi, 20h ; ' '
0x5801F8: push    eax; a2
0x5801F9: mov     ecx, esi; this
0x5801FB: call    BSStringT_Set
0x580200: movzx   eax, word ptr [esi+4]
0x580204: cmp     ax, 0FFFFh
0x580208: jnz     short loc_58021D
0x58020A: mov     eax, [esi]
0x58020C: lea     edx, [eax+1]
0x58020F: nop
0x580210: mov     cl, [eax]
0x580212: add     eax, 1
0x580215: test    cl, cl
0x580217: jnz     short loc_580210
0x580219: sub     eax, edx
0x58021B: jmp     short loc_580220
0x58021D: movzx   eax, ax
0x580220: test    eax, eax
0x580222: jnz     short loc_580231
0x580224: push    eax; a3
0x580225: push    offset word_A36430; a2
0x58022A: mov     ecx, esi; this
0x58022C: call    BSStringT_Set
0x580231: mov     eax, [esi]
0x580233: mov     ecx, [esp+80Ch+var_4]
0x58023A: pop     edi
0x58023B: pop     esi
0x58023C: xor     ecx, esp
0x58023E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x580243: add     esp, 804h
0x580249: retn
