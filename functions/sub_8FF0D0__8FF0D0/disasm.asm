0x8FF0D0: mov     eax, [esp+arg_4]
0x8FF0D4: movzx   edx, byte ptr [eax+0Eh]
0x8FF0D8: xor     ecx, ecx
0x8FF0DA: test    edx, edx
0x8FF0DC: jle     short locret_8FF0FF
0x8FF0DE: push    esi
0x8FF0DF: mov     si, [esp+4+arg_8]
0x8FF0E4: add     eax, 10h
0x8FF0E7: cmp     [eax+2], si
0x8FF0EB: jz      short loc_8FF0F7
0x8FF0ED: inc     ecx
0x8FF0EE: add     eax, 8
0x8FF0F1: cmp     ecx, edx
0x8FF0F3: jl      short loc_8FF0E7
0x8FF0F5: pop     esi
0x8FF0F6: retn
0x8FF0F7: mov     byte ptr [eax], 0
0x8FF0FA: mov     byte ptr [eax+1], 0
0x8FF0FE: pop     esi
0x8FF0FF: retn
