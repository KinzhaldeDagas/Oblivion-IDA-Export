0x41E160: push    ebx
0x41E161: push    esi
0x41E162: push    edi
0x41E163: mov     esi, ecx
0x41E165: push    offset aBaseextralistR; lpCriticalSection
0x41E16A: mov     ecx, offset BSExtraDataCS
0x41E16F: call    NiEnterCriticalSection
0x41E174: mov     ecx, [esi+4]
0x41E177: mov     bl, [esp+0Ch+arg_0]
0x41E17B: xor     eax, eax
0x41E17D: test    ecx, ecx
0x41E17F: jz      short loc_41E1AB
0x41E181: cmp     [ecx+4], bl
0x41E184: jz      short loc_41E191
0x41E186: mov     eax, ecx
0x41E188: mov     ecx, [ecx+8]
0x41E18B: test    ecx, ecx
0x41E18D: jnz     short loc_41E181
0x41E18F: jmp     short loc_41E1AB
0x41E191: test    eax, eax
0x41E193: jz      short loc_41E19D
0x41E195: mov     edx, [ecx+8]
0x41E198: mov     [eax+8], edx
0x41E19B: jmp     short loc_41E1A3
0x41E19D: mov     eax, [ecx+8]
0x41E1A0: mov     [esi+4], eax
0x41E1A3: mov     edx, [ecx]
0x41E1A5: mov     eax, [edx]
0x41E1A7: push    1
0x41E1A9: call    eax
0x41E1AB: movzx   edi, bl
0x41E1AE: mov     eax, edi
0x41E1B0: shr     eax, 3
0x41E1B3: cmp     eax, 0Ch
0x41E1B6: jnb     short loc_41E1D1
0x41E1B8: mov     ecx, edi
0x41E1BA: and     ecx, 80000007h
0x41E1C0: jns     short loc_41E1C7
0x41E1C2: dec     ecx
0x41E1C3: or      ecx, 0FFFFFFF8h
0x41E1C6: inc     ecx
0x41E1C7: mov     dl, 1
0x41E1C9: shl     dl, cl
0x41E1CB: not     dl
0x41E1CD: and     [eax+esi+8], dl
0x41E1D1: mov     eax, TlsIndex
0x41E1D6: mov     ecx, large fs:2Ch
0x41E1DD: mov     eax, [ecx+eax*4]
0x41E1E0: cmp     esi, [eax+8]
0x41E1E6: jnz     short loc_41E1F8
0x41E1E8: cmp     edi, 5Ch ; '\'
0x41E1EB: ja      short loc_41E1F8
0x41E1ED: mov     dword ptr [eax+edi*4+10h], 0
0x41E1F8: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E1FD: call    NiLeaveCriticalSection_0
0x41E202: pop     edi
0x41E203: pop     esi
0x41E204: pop     ebx
0x41E205: retn    4
