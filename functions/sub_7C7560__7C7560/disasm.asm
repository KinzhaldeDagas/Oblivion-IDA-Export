0x7C7560: push    ebx
0x7C7561: push    esi
0x7C7562: mov     esi, [esp+8+arg_0]
0x7C7566: push    edi
0x7C7567: push    esi
0x7C7568: mov     ebx, ecx
0x7C756A: call    sub_70BAE0
0x7C756F: mov     eax, ds:0B43388h
0x7C7574: push    eax; ArgList
0x7C7575: call    TESOutput_PrintString
0x7C757A: movzx   edi, word ptr [esi+0Ah]
0x7C757E: movzx   ecx, word ptr [esi+8]
0x7C7582: add     esp, 4
0x7C7585: cmp     edi, ecx
0x7C7587: mov     [esp+0Ch+arg_0], eax
0x7C758B: jb      short loc_7C759B
0x7C758D: movzx   edx, word ptr [esi+0Eh]
0x7C7591: add     edx, edi
0x7C7593: push    edx
0x7C7594: mov     ecx, esi
0x7C7596: call    NiTArray_SetSize
0x7C759B: lea     eax, [esp+0Ch+arg_0]
0x7C759F: push    eax
0x7C75A0: push    edi
0x7C75A1: mov     ecx, esi
0x7C75A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C75A8: mov     eax, [ebx+0F0h]
0x7C75AE: push    eax; __int16
0x7C75AF: push    offset aLightCount; "light count"
0x7C75B4: call    TESOutput_PrintLabeledUnsignedShort
0x7C75B9: movzx   edi, word ptr [esi+0Ah]
0x7C75BD: movzx   ecx, word ptr [esi+8]
0x7C75C1: add     esp, 8
0x7C75C4: cmp     edi, ecx
0x7C75C6: mov     [esp+0Ch+arg_0], eax
0x7C75CA: jb      short loc_7C75DA
0x7C75CC: movzx   edx, word ptr [esi+0Eh]
0x7C75D0: add     edx, edi
0x7C75D2: push    edx
0x7C75D3: mov     ecx, esi
0x7C75D5: call    NiTArray_SetSize
0x7C75DA: push    ebp
0x7C75DB: lea     eax, [esp+10h+arg_0]
0x7C75DF: push    eax
0x7C75E0: push    edi
0x7C75E1: mov     ecx, esi
0x7C75E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C75E8: mov     ebp, [ebx+0F0h]
0x7C75EE: movzx   eax, bp
0x7C75F1: xor     edi, edi
0x7C75F3: cmp     eax, edi
0x7C75F5: mov     [esp+10h+arg_0], edi
0x7C75F9: jle     short loc_7C7644
0x7C75FB: jmp     short loc_7C7600
0x7C75FD: align 10h
0x7C7600: movzx   edx, di
0x7C7603: cmp     edx, ebp
0x7C7605: jb      short loc_7C760B
0x7C7607: xor     ecx, ecx
0x7C7609: jmp     short loc_7C762C
0x7C760B: test    edx, edx
0x7C760D: mov     eax, [ebx+0E8h]
0x7C7613: lea     ecx, [eax+8]
0x7C7616: mov     eax, [eax]
0x7C7618: mov     ecx, [ecx]
0x7C761A: jle     short loc_7C762C
0x7C761C: lea     esp, [esp+0]
0x7C7620: sub     edx, 1
0x7C7623: lea     ecx, [eax+8]
0x7C7626: mov     eax, [eax]
0x7C7628: mov     ecx, [ecx]
0x7C762A: jnz     short loc_7C7620
0x7C762C: cmp     byte ptr [ecx+0F4h], 0
0x7C7633: jz      short loc_7C763A
0x7C7635: add     [esp+10h+arg_0], 1
0x7C763A: movzx   eax, bp
0x7C763D: add     edi, 1
0x7C7640: cmp     edi, eax
0x7C7642: jl      short loc_7C7600
0x7C7644: mov     ecx, [esp+10h+arg_0]
0x7C7648: push    ecx; int
0x7C7649: push    offset aShadowLightCou; "shadow light count"
0x7C764E: call    TESOutput_PrintLabeledSignedInt
0x7C7653: movzx   edi, word ptr [esi+0Ah]
0x7C7657: movzx   edx, word ptr [esi+8]
0x7C765B: add     esp, 8
0x7C765E: cmp     edi, edx
0x7C7660: mov     ebx, eax
0x7C7662: pop     ebp
0x7C7663: jb      short loc_7C7673
0x7C7665: movzx   eax, word ptr [esi+0Eh]
0x7C7669: add     eax, edi
0x7C766B: push    eax
0x7C766C: mov     ecx, esi
0x7C766E: call    NiTArray_SetSize
0x7C7673: movzx   ecx, word ptr [esi+0Ah]
0x7C7677: cmp     edi, ecx
0x7C7679: jb      short loc_7C7697
0x7C767B: test    ebx, ebx
0x7C767D: lea     edx, [edi+1]
0x7C7680: mov     [esi+0Ah], dx
0x7C7684: jz      short loc_7C76C3
0x7C7686: mov     edx, [esi+4]
0x7C7689: add     word ptr [esi+0Ch], 1
0x7C768E: mov     [edx+edi*4], ebx
0x7C7691: pop     edi
0x7C7692: pop     esi
0x7C7693: pop     ebx
0x7C7694: retn    4
0x7C7697: test    ebx, ebx
0x7C7699: jz      short loc_7C76B4
0x7C769B: mov     eax, [esi+4]
0x7C769E: cmp     dword ptr [eax+edi*4], 0
0x7C76A2: jnz     short loc_7C76C3
0x7C76A4: add     word ptr [esi+0Ch], 1
0x7C76A9: mov     edx, eax
0x7C76AB: mov     [edx+edi*4], ebx
0x7C76AE: pop     edi
0x7C76AF: pop     esi
0x7C76B0: pop     ebx
0x7C76B1: retn    4
0x7C76B4: mov     ecx, [esi+4]
0x7C76B7: cmp     dword ptr [ecx+edi*4], 0
0x7C76BB: jz      short loc_7C76C3
0x7C76BD: add     word ptr [esi+0Ch], 0FFFFh
0x7C76C3: mov     edx, [esi+4]
0x7C76C6: mov     [edx+edi*4], ebx
0x7C76C9: pop     edi
0x7C76CA: pop     esi
0x7C76CB: pop     ebx
0x7C76CC: retn    4
