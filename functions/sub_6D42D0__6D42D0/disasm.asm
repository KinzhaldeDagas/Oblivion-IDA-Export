0x6D42D0: push    ebx
0x6D42D1: mov     ebx, [esp+4+arg_4]
0x6D42D5: test    ebx, ebx
0x6D42D7: jz      loc_6D43D8
0x6D42DD: mov     eax, [ebx]
0x6D42DF: mov     edx, [eax+4]
0x6D42E2: mov     ecx, ebx
0x6D42E4: call    edx
0x6D42E6: test    eax, eax
0x6D42E8: jz      loc_6D43D8
0x6D42EE: mov     edi, edi
0x6D42F0: cmp     eax, offset dword_B3FA80
0x6D42F5: jz      short loc_6D4300
0x6D42F7: mov     eax, [eax+4]
0x6D42FA: test    eax, eax
0x6D42FC: jnz     short loc_6D42F0
0x6D42FE: pop     ebx
0x6D42FF: retn
0x6D4300: push    esi
0x6D4301: mov     esi, [ebx+0Ch]
0x6D4304: test    esi, esi
0x6D4306: push    edi
0x6D4307: jz      loc_6D438F
0x6D430D: lea     ecx, [ecx+0]
0x6D4310: mov     eax, [esi]
0x6D4312: mov     edx, [eax+4]
0x6D4315: mov     edi, [esi+34h]
0x6D4318: mov     ecx, esi
0x6D431A: call    edx
0x6D431C: test    eax, eax
0x6D431E: jz      short loc_6D432E
0x6D4320: cmp     eax, offset dword_B3DBDC
0x6D4325: jz      short loc_6D4370
0x6D4327: mov     eax, [eax+4]
0x6D432A: test    eax, eax
0x6D432C: jnz     short loc_6D4320
0x6D432E: mov     eax, [esi]
0x6D4330: mov     edx, [eax+4]
0x6D4333: mov     ecx, esi
0x6D4335: call    edx
0x6D4337: test    eax, eax
0x6D4339: jz      short loc_6D434E
0x6D433B: jmp     short loc_6D4340
0x6D433D: align 10h
0x6D4340: cmp     eax, offset dword_B3DF34
0x6D4345: jz      short loc_6D4378
0x6D4347: mov     eax, [eax+4]
0x6D434A: test    eax, eax
0x6D434C: jnz     short loc_6D4340
0x6D434E: mov     eax, [esi]
0x6D4350: mov     edx, [eax+4]
0x6D4353: mov     ecx, esi
0x6D4355: call    edx
0x6D4357: test    eax, eax
0x6D4359: jz      short loc_6D4389
0x6D435B: jmp     short loc_6D4360
0x6D435D: align 10h
0x6D4360: cmp     eax, offset dword_B3DDC0
0x6D4365: jz      short loc_6D4380
0x6D4367: mov     eax, [eax+4]
0x6D436A: test    eax, eax
0x6D436C: jnz     short loc_6D4360
0x6D436E: jmp     short loc_6D4389
0x6D4370: push    esi
0x6D4371: call    sub_6D3EB0
0x6D4376: jmp     short loc_6D4386
0x6D4378: push    esi
0x6D4379: call    sub_6D3BD0
0x6D437E: jmp     short loc_6D4386
0x6D4380: push    esi
0x6D4381: call    sub_6D4000
0x6D4386: add     esp, 4
0x6D4389: test    edi, edi
0x6D438B: mov     esi, edi
0x6D438D: jnz     short loc_6D4310
0x6D438F: mov     eax, [ebx]
0x6D4391: mov     edx, [eax+8]
0x6D4394: mov     ecx, ebx
0x6D4396: call    edx
0x6D4398: test    eax, eax
0x6D439A: jz      short loc_6D43D6
0x6D439C: movzx   eax, word ptr [ebx+0B6h]
0x6D43A3: xor     esi, esi
0x6D43A5: test    eax, eax
0x6D43A7: jbe     short loc_6D43D6
0x6D43A9: cmp     eax, esi
0x6D43AB: mov     edi, [esp+0Ch+arg_0]
0x6D43AF: ja      short loc_6D43B5
0x6D43B1: xor     eax, eax
0x6D43B3: jmp     short loc_6D43BE
0x6D43B5: mov     eax, [ebx+0B0h]
0x6D43BB: mov     eax, [eax+esi*4]
0x6D43BE: push    eax
0x6D43BF: push    edi
0x6D43C0: call    sub_6D42D0
0x6D43C5: movzx   eax, word ptr [ebx+0B6h]
0x6D43CC: add     esi, 1
0x6D43CF: add     esp, 8
0x6D43D2: cmp     eax, esi
0x6D43D4: ja      short loc_6D43B5
0x6D43D6: pop     edi
0x6D43D7: pop     esi
0x6D43D8: pop     ebx
0x6D43D9: retn
