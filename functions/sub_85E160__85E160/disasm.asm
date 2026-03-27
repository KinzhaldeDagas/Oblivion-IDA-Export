0x85E160: push    0FFFFFFFFh
0x85E162: push    offset SEH_85E160
0x85E167: mov     eax, large fs:0
0x85E16D: push    eax
0x85E16E: push    ebx
0x85E16F: push    ebp
0x85E170: push    esi
0x85E171: push    edi
0x85E172: mov     eax, ds:0B30AACh
0x85E177: xor     eax, esp
0x85E179: push    eax
0x85E17A: lea     eax, [esp+20h+var_C]
0x85E17E: mov     large fs:0, eax
0x85E184: mov     esi, ecx
0x85E186: mov     eax, [esp+20h+arg_8]
0x85E18A: mov     eax, [eax+10h]
0x85E18D: mov     edx, [esi]
0x85E18F: mov     edx, [edx+0BCh]
0x85E195: mov     edi, ds:0B477F4h
0x85E19B: push    eax
0x85E19C: mov     eax, [esp+24h+arg_0]
0x85E1A0: push    0
0x85E1A2: push    eax
0x85E1A3: call    edx
0x85E1A5: mov     ecx, [esp+20h+arg_C]
0x85E1A9: mov     eax, [edi+24h]
0x85E1AC: mov     ebp, [eax]
0x85E1AE: push    0
0x85E1B0: push    ecx
0x85E1B1: mov     ecx, esi
0x85E1B3: call    sub_848FD0
0x85E1B8: mov     ebx, [ebp+4]
0x85E1BB: cmp     ebx, eax
0x85E1BD: mov     [esp+20h+arg_8], eax
0x85E1C1: jz      short loc_85E1F8
0x85E1C3: test    ebx, ebx
0x85E1C5: jz      short loc_85E1E7
0x85E1C7: lea     edx, [ebx+4]
0x85E1CA: push    edx; lpAddend
0x85E1CB: call    dword ptr ds:0A2807Ch
0x85E1D1: test    eax, eax
0x85E1D3: jnz     short loc_85E1E3
0x85E1D5: test    ebx, ebx
0x85E1D7: jz      short loc_85E1E3
0x85E1D9: mov     eax, [ebx]
0x85E1DB: mov     edx, [eax]
0x85E1DD: push    1
0x85E1DF: mov     ecx, ebx
0x85E1E1: call    edx
0x85E1E3: mov     eax, [esp+20h+arg_8]
0x85E1E7: test    eax, eax
0x85E1E9: mov     [ebp+4], eax
0x85E1EC: jz      short loc_85E1F8
0x85E1EE: add     eax, 4
0x85E1F1: push    eax; lpAddend
0x85E1F2: call    dword ptr ds:0A28078h
0x85E1F8: mov     eax, [esp+20h+arg_C]
0x85E1FC: push    eax
0x85E1FD: push    ebp
0x85E1FE: mov     ecx, esi
0x85E200: call    sub_848FA0
0x85E205: mov     ecx, [edi+24h]
0x85E208: mov     ebx, [ecx+4]
0x85E20B: mov     eax, ds:0B43108h
0x85E210: mov     ebp, [ebx+4]
0x85E213: add     ebx, 4
0x85E216: cmp     ebp, eax
0x85E218: mov     [esp+20h+arg_C], eax
0x85E21C: jz      short loc_85E253
0x85E21E: test    ebp, ebp
0x85E220: jz      short loc_85E243
0x85E222: lea     edx, [ebp+4]
0x85E225: push    edx; lpAddend
0x85E226: call    dword ptr ds:0A2807Ch
0x85E22C: test    eax, eax
0x85E22E: jnz     short loc_85E23F
0x85E230: test    ebp, ebp
0x85E232: jz      short loc_85E23F
0x85E234: mov     eax, [ebp+0]
0x85E237: mov     edx, [eax]
0x85E239: push    1
0x85E23B: mov     ecx, ebp
0x85E23D: call    edx
0x85E23F: mov     eax, [esp+20h+arg_C]
0x85E243: test    eax, eax
0x85E245: mov     [ebx], eax
0x85E247: jz      short loc_85E253
0x85E249: add     eax, 4
0x85E24C: push    eax; lpAddend
0x85E24D: call    dword ptr ds:0A28078h
0x85E253: mov     eax, [edi+24h]
0x85E256: mov     ebp, [eax+8]
0x85E259: mov     eax, ds:0B4310Ch
0x85E25E: mov     ebx, [ebp+4]
0x85E261: cmp     ebx, eax
0x85E263: mov     ecx, eax
0x85E265: mov     [esp+20h+arg_C], ecx
0x85E269: jz      short loc_85E2A0
0x85E26B: test    ebx, ebx
0x85E26D: jz      short loc_85E28F
0x85E26F: lea     ecx, [ebx+4]
0x85E272: push    ecx; lpAddend
0x85E273: call    dword ptr ds:0A2807Ch
0x85E279: test    eax, eax
0x85E27B: jnz     short loc_85E28B
0x85E27D: test    ebx, ebx
0x85E27F: jz      short loc_85E28B
0x85E281: mov     edx, [ebx]
0x85E283: mov     eax, [edx]
0x85E285: push    1
0x85E287: mov     ecx, ebx
0x85E289: call    eax
0x85E28B: mov     ecx, [esp+20h+arg_C]
0x85E28F: test    ecx, ecx
0x85E291: mov     [ebp+4], ecx
0x85E294: jz      short loc_85E2A0
0x85E296: add     ecx, 4
0x85E299: push    ecx; lpAddend
0x85E29A: call    dword ptr ds:0A28078h
0x85E2A0: cmp     byte ptr [esp+20h+arg_10], 0
0x85E2A5: jnz     short loc_85E2E2
0x85E2A7: mov     ebx, 1
0x85E2AC: add     [edi+60h], ebx
0x85E2AF: mov     [esp+20h+arg_10], edi
0x85E2B3: mov     edx, [esi+38h]
0x85E2B6: lea     ecx, [esp+20h+arg_10]
0x85E2BA: push    ecx
0x85E2BB: push    edx
0x85E2BC: lea     ecx, [esi+40h]
0x85E2BF: mov     [esp+28h+var_4], 0
0x85E2C7: call    sub_76CE40
0x85E2CC: or      eax, 0FFFFFFFFh
0x85E2CF: add     [edi+60h], eax
0x85E2D2: mov     [esp+20h+var_4], eax
0x85E2D6: jnz     short loc_85E2DF
0x85E2D8: mov     ecx, edi
0x85E2DA: call    sub_7604D0
0x85E2DF: add     [esi+38h], ebx
0x85E2E2: mov     ecx, dword ptr [esp+20h+var_C]
0x85E2E6: mov     large fs:0, ecx
0x85E2ED: pop     ecx
0x85E2EE: pop     edi
0x85E2EF: pop     esi
0x85E2F0: pop     ebp
0x85E2F1: pop     ebx
0x85E2F2: add     esp, 0Ch
0x85E2F5: retn    14h
