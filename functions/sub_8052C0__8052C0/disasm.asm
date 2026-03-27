0x8052C0: mov     eax, [esp+arg_4]
0x8052C4: test    eax, eax
0x8052C6: push    ebx
0x8052C7: mov     ebx, [esp+4+arg_18]
0x8052CB: push    esi
0x8052CC: push    edi
0x8052CD: mov     esi, ecx
0x8052CF: jz      short loc_805301
0x8052D1: mov     edi, [esp+0Ch+arg_8]
0x8052D5: test    edi, edi
0x8052D7: jz      short loc_80530C
0x8052D9: cmp     dword ptr [esi+34h], 0
0x8052DD: jnz     short loc_8052F2
0x8052DF: mov     ecx, ds:0B43104h
0x8052E5: push    1
0x8052E7: push    3
0x8052E9: push    0
0x8052EB: push    ebx
0x8052EC: push    eax
0x8052ED: call    NiDX9Renderer__CalculateBoneMatrixes
0x8052F2: mov     ecx, [esi+18h]
0x8052F5: movzx   edx, word ptr [edi+24h]
0x8052F9: mov     eax, [ecx]
0x8052FB: mov     eax, [eax+30h]
0x8052FE: push    edx
0x8052FF: call    eax
0x805301: mov     ecx, [esi+14h]
0x805304: push    0
0x805306: push    ebx
0x805307: call    sub_765480
0x80530C: pop     edi
0x80530D: pop     esi
0x80530E: xor     eax, eax
0x805310: pop     ebx
0x805311: retn    20h ; ' '
