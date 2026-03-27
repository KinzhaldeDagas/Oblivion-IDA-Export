0x57C240: mov     eax, [esp+arg_0]
0x57C244: sub     esp, 8
0x57C247: cmp     eax, 1Dh
0x57C24A: ja      loc_57C35F
0x57C250: push    edi
0x57C251: mov     edi, [esp+0Ch+a2]
0x57C255: mov     byte ptr [edi], 0
0x57C258: mov     ecx, ds:0B33398h
0x57C25E: mov     edx, [ecx+20h]
0x57C261: mov     cl, [eax+edx+1B9Bh]
0x57C268: add     eax, edx
0x57C26A: cmp     cl, 9
0x57C26D: jnb     short loc_57C295
0x57C26F: movzx   eax, cl
0x57C272: mov     eax, ds:0B39554h[eax*4]
0x57C279: test    eax, eax
0x57C27B: jz      short loc_57C281
0x57C27D: mov     ecx, [eax]
0x57C27F: jmp     short loc_57C283
0x57C281: xor     ecx, ecx
0x57C283: mov     edx, edi
0x57C285: mov     al, [ecx]
0x57C287: mov     [edx], al
0x57C289: add     ecx, 1
0x57C28C: add     edx, 1
0x57C28F: test    al, al
0x57C291: jnz     short loc_57C285
0x57C293: jmp     short loc_57C2F4
0x57C295: mov     cl, [eax+1B7Eh]
0x57C29B: cmp     cl, 0EEh ; 'î'
0x57C29E: jnb     short loc_57C2C6
0x57C2A0: movzx   ecx, cl
0x57C2A3: mov     eax, ds:0B39578h[ecx*4]
0x57C2AA: test    eax, eax
0x57C2AC: jz      short loc_57C2B2
0x57C2AE: mov     ecx, [eax]
0x57C2B0: jmp     short loc_57C2B4
0x57C2B2: xor     ecx, ecx
0x57C2B4: mov     edx, edi
0x57C2B6: mov     al, [ecx]
0x57C2B8: mov     [edx], al
0x57C2BA: add     ecx, 1
0x57C2BD: add     edx, 1
0x57C2C0: test    al, al
0x57C2C2: jnz     short loc_57C2B6
0x57C2C4: jmp     short loc_57C2F4
0x57C2C6: mov     al, [eax+1BB8h]
0x57C2CC: cmp     al, 8
0x57C2CE: jnb     short loc_57C341
0x57C2D0: movzx   edx, al
0x57C2D3: mov     eax, ds:0B39930h[edx*4]
0x57C2DA: test    eax, eax
0x57C2DC: jz      short loc_57C2E2
0x57C2DE: mov     ecx, [eax]
0x57C2E0: jmp     short loc_57C2E4
0x57C2E2: xor     ecx, ecx
0x57C2E4: mov     edx, edi
0x57C2E6: mov     al, [ecx]
0x57C2E8: mov     [edx], al
0x57C2EA: add     ecx, 1
0x57C2ED: add     edx, 1
0x57C2F0: test    al, al
0x57C2F2: jnz     short loc_57C2E6
0x57C2F4: cmp     byte ptr [edi], 0
0x57C2F7: jz      short loc_57C341
0x57C2F9: push    esi
0x57C2FA: push    0; a3
0x57C2FC: push    edi; a2
0x57C2FD: lea     ecx, [esp+18h+var_8]; this
0x57C301: mov     [esp+18h+var_8.m_data], 0
0x57C309: mov     [esp+18h+var_8.m_dataLen], 0
0x57C310: mov     [esp+18h+var_8.m_bufLen], 0
0x57C317: call    BSStringT_Set
0x57C31C: mov     esi, [esp+10h+var_8.m_data]
0x57C320: mov     eax, ds:0B38F18h
0x57C325: push    esi
0x57C326: push    eax
0x57C327: push    offset aSS; "%s %s"
0x57C32C: push    edi
0x57C32D: call    __sprintf
0x57C332: push    esi
0x57C333: call    FormHeapFree
0x57C338: add     esp, 14h
0x57C33B: pop     esi
0x57C33C: pop     edi
0x57C33D: add     esp, 8
0x57C340: retn
0x57C341: mov     ecx, ds:0B38F20h
0x57C347: mov     edx, edi
0x57C349: lea     esp, [esp+0]
0x57C350: mov     al, [ecx]
0x57C352: mov     [edx], al
0x57C354: add     ecx, 1
0x57C357: add     edx, 1
0x57C35A: test    al, al
0x57C35C: jnz     short loc_57C350
0x57C35E: pop     edi
0x57C35F: add     esp, 8
0x57C362: retn
