0x988E9D: mov     eax, [ebp+0Ch]
0x988EA0: cmp     eax, edi
0x988EA2: jz      short loc_988EAC
0x988EA4: cmp     [ebp+10h], edi
0x988EA7: jbe     short loc_988EAC
0x988EA9: mov     byte ptr [eax], 0
0x988EAC: mov     eax, [ebp+14h]
0x988EAF: cmp     eax, edi
0x988EB1: jz      short loc_988EBB
0x988EB3: cmp     [ebp+18h], edi
0x988EB6: jbe     short loc_988EBB
0x988EB8: mov     byte ptr [eax], 0
0x988EBB: mov     eax, [ebp+1Ch]
0x988EBE: cmp     eax, edi
0x988EC0: jz      short loc_988ECA
0x988EC2: cmp     [ebp+20h], edi
0x988EC5: jbe     short loc_988ECA
0x988EC7: mov     byte ptr [eax], 0
0x988ECA: mov     eax, [ebp+24h]
0x988ECD: cmp     eax, edi
0x988ECF: jz      short loc_988ED9
0x988ED1: cmp     [ebp+28h], edi
0x988ED4: jbe     short loc_988ED9
0x988ED6: mov     byte ptr [eax], 0
0x988ED9: call    __errno
0x988EDE: cmp     ebx, edi
0x988EE0: jnz     short loc_988EF8
0x988EE2: push    16h
0x988EE4: pop     esi
0x988EE5: push    edi
0x988EE6: push    edi
0x988EE7: push    edi
0x988EE8: push    edi
0x988EE9: push    edi
0x988EEA: mov     [eax], esi
0x988EEC: call    __invalid_parameter
0x988EF1: add     esp, 14h
0x988EF4: mov     eax, esi
0x988EF6: jmp     short loc_988F22
0x988EF8: cmp     [ebp-4], edi
0x988EFB: jnz     short loc_988EE2
0x988EFD: push    22h ; '"'
0x988EFF: pop     ecx
0x988F00: mov     [eax], ecx
0x988F02: mov     eax, ecx
0x988F04: jmp     short loc_988F22
0x988F06: push    esi; Src
0x988F07: push    ebx; Src
0x988F08: push    dword ptr [ebp+20h]; SizeInBytes
0x988F0B: push    dword ptr [ebp+1Ch]; Dst
0x988F0E: call    _strncpy_s
0x988F13: add     esp, 10h
0x988F16: mov     eax, [ebp+24h]
0x988F19: test    eax, eax
0x988F1B: jz      short loc_988F20
0x988F1D: mov     byte ptr [eax], 0
0x988F20: xor     eax, eax
0x988F22: pop     edi
0x988F23: pop     esi
0x988F24: pop     ebx
0x988F25: leave
0x988F26: retn
