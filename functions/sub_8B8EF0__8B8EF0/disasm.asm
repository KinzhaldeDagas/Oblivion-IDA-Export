0x8B8EF0: push    ebp
0x8B8EF1: mov     ebp, esp
0x8B8EF3: and     esp, 0FFFFFFF0h
0x8B8EF6: sub     esp, 0Ch
0x8B8EF9: push    esi
0x8B8EFA: mov     esi, ecx
0x8B8EFC: mov     eax, [esi]
0x8B8EFE: mov     edx, [eax+74h]
0x8B8F01: lea     ecx, [esp+10h+var_4]
0x8B8F05: push    ecx
0x8B8F06: mov     ecx, esi
0x8B8F08: call    edx
0x8B8F0A: test    eax, eax
0x8B8F0C: jz      short loc_8B8F1E
0x8B8F0E: movaps  xmm0, xmmword ptr [esi+30h]
0x8B8F12: movaps  xmmword ptr [eax+30h], xmm0
0x8B8F16: movaps  xmm0, xmmword ptr [esi+20h]
0x8B8F1A: movaps  xmmword ptr [eax+40h], xmm0
0x8B8F1E: mov     eax, [ebp+arg_0]
0x8B8F21: push    eax
0x8B8F22: mov     ecx, esi
0x8B8F24: call    sub_8A5120
0x8B8F29: mov     edx, [esi]
0x8B8F2B: mov     eax, dword ptr [esp+10h+var_4]
0x8B8F2F: mov     edx, [edx+64h]
0x8B8F32: push    eax
0x8B8F33: mov     ecx, esi
0x8B8F35: call    edx
0x8B8F37: pop     esi
0x8B8F38: mov     esp, ebp
0x8B8F3A: pop     ebp
0x8B8F3B: retn    4
