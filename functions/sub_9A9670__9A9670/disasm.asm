0x9A9670: push    ebx
0x9A9671: push    ebp
0x9A9672: push    esi
0x9A9673: mov     ebx, 1
0x9A9678: test    byte ptr dword_BAAA94, bl
0x9A967E: push    edi
0x9A967F: mov     esi, ecx
0x9A9681: jnz     short loc_9A96A0
0x9A9683: or      dword_BAAA94, ebx
0x9A9689: push    offset sub_A27C10; void (__cdecl *)()
0x9A968E: mov     dword_BAAA90, 0
0x9A9698: call    _atexit
0x9A969D: add     esp, 4
0x9A96A0: movzx   ecx, word ptr [esi+0Ah]
0x9A96A4: mov     eax, [esp+10h+arg_0]
0x9A96A8: cmp     eax, ecx
0x9A96AA: mov     ebp, [esp+10h+arg_4]
0x9A96AE: jb      short loc_9A96C8
0x9A96B0: lea     edx, [eax+1]
0x9A96B3: mov     [esi+0Ah], dx
0x9A96B7: mov     ecx, [ebp+0]
0x9A96BA: cmp     ecx, dword_BAAA90
0x9A96C0: jz      short loc_9A96EC
0x9A96C2: add     [esi+0Ch], bx
0x9A96C6: jmp     short loc_9A96EC
0x9A96C8: mov     ecx, dword_BAAA90
0x9A96CE: cmp     [ebp+0], ecx
0x9A96D1: mov     edx, [esi+4]
0x9A96D4: jz      short loc_9A96E1
0x9A96D6: cmp     [edx+eax*4], ecx
0x9A96D9: jnz     short loc_9A96EC
0x9A96DB: add     [esi+0Ch], bx
0x9A96DF: jmp     short loc_9A96EC
0x9A96E1: cmp     [edx+eax*4], ecx
0x9A96E4: jz      short loc_9A96EC
0x9A96E6: add     word ptr [esi+0Ch], 0FFFFh
0x9A96EC: mov     ecx, [esi+4]
0x9A96EF: mov     esi, [ecx+eax*4]
0x9A96F2: cmp     esi, [ebp+0]
0x9A96F5: lea     edi, [ecx+eax*4]
0x9A96F8: jz      short loc_9A972C
0x9A96FA: test    esi, esi
0x9A96FC: jz      short loc_9A9719
0x9A96FE: lea     edx, [esi+4]
0x9A9701: push    edx; lpAddend
0x9A9702: call    ds:InterlockedDecrement
0x9A9708: test    eax, eax
0x9A970A: jnz     short loc_9A9719
0x9A970C: test    esi, esi
0x9A970E: jz      short loc_9A9719
0x9A9710: mov     eax, [esi]
0x9A9712: mov     edx, [eax]
0x9A9714: push    ebx
0x9A9715: mov     ecx, esi
0x9A9717: call    edx
0x9A9719: mov     eax, [ebp+0]
0x9A971C: test    eax, eax
0x9A971E: mov     [edi], eax
0x9A9720: jz      short loc_9A972C
0x9A9722: add     eax, 4
0x9A9725: push    eax; lpAddend
0x9A9726: call    ds:InterlockedIncrement
0x9A972C: pop     edi
0x9A972D: pop     esi
0x9A972E: pop     ebp
0x9A972F: pop     ebx
0x9A9730: retn    8
