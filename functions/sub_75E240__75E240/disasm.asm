0x75E240: push    ecx
0x75E241: push    ebx
0x75E242: push    ebp
0x75E243: push    esi
0x75E244: push    0Ch; Size
0x75E246: mov     esi, ecx
0x75E248: call    FormHeapAlloc
0x75E24D: xor     ebp, ebp
0x75E24F: add     esp, 4
0x75E252: cmp     eax, ebp
0x75E254: jz      short loc_75E26A
0x75E256: mov     ecx, [esp+10h+arg_0]
0x75E25A: push    ecx
0x75E25B: mov     ecx, eax
0x75E25D: call    sub_75E100
0x75E262: mov     ecx, eax
0x75E264: mov     [esp+10h+var_4], ecx
0x75E268: jmp     short loc_75E270
0x75E26A: mov     [esp+10h+var_4], ebp
0x75E26E: mov     ecx, ebp
0x75E270: xor     ebx, ebx
0x75E272: cmp     [esp+10h+arg_0], ebp
0x75E276: jbe     short loc_75E2C7
0x75E278: push    edi
0x75E279: lea     esp, [esp+0]
0x75E280: cmp     ebx, [ecx+4]
0x75E283: jb      short loc_75E289
0x75E285: xor     edi, edi
0x75E287: jmp     short loc_75E28D
0x75E289: mov     edi, [ecx]
0x75E28B: add     edi, ebp
0x75E28D: mov     eax, [esi+4]
0x75E290: cmp     [esi+8], eax
0x75E293: jnz     short loc_75E2AE
0x75E295: test    eax, eax
0x75E297: jbe     short loc_75E29D
0x75E299: add     eax, eax
0x75E29B: jmp     short loc_75E2A2
0x75E29D: mov     eax, 1
0x75E2A2: push    eax
0x75E2A3: mov     ecx, esi
0x75E2A5: call    sub_6E8CA0
0x75E2AA: mov     ecx, [esp+14h+var_4]
0x75E2AE: mov     edx, [esi+8]
0x75E2B1: mov     eax, [esi]
0x75E2B3: mov     [eax+edx*4], edi
0x75E2B6: add     dword ptr [esi+8], 1
0x75E2BA: add     ebx, 1
0x75E2BD: add     ebp, 14h
0x75E2C0: cmp     ebx, [esp+14h+arg_0]
0x75E2C4: jb      short loc_75E280
0x75E2C6: pop     edi
0x75E2C7: mov     edx, [esi+14h]
0x75E2CA: mov     [ecx+8], edx
0x75E2CD: mov     [esi+14h], ecx
0x75E2D0: pop     esi
0x75E2D1: pop     ebp
0x75E2D2: pop     ebx
0x75E2D3: pop     ecx
0x75E2D4: retn    4
