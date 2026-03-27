0x71BF20: mov     edx, [esp+arg_0]
0x71BF24: xor     eax, eax
0x71BF26: test    edx, edx
0x71BF28: jz      short loc_71BF48
0x71BF2A: cmp     edx, 4
0x71BF2D: jnz     short locret_71BF6D
0x71BF2F: mov     edx, [esp+arg_C]
0x71BF33: mov     eax, [ecx]
0x71BF35: mov     eax, [eax+44h]
0x71BF38: push    edx
0x71BF39: mov     edx, [esp+4+arg_8]
0x71BF3D: push    edx
0x71BF3E: mov     edx, [esp+8+arg_4]
0x71BF42: push    edx
0x71BF43: call    eax
0x71BF45: retn    10h
0x71BF48: mov     eax, [esp+arg_C]
0x71BF4C: mov     ecx, [eax+4]
0x71BF4F: cmp     ecx, 2
0x71BF52: jz      short loc_71BF5F
0x71BF54: cmp     ecx, 3
0x71BF57: jz      short loc_71BF5F
0x71BF59: cmp     byte ptr [eax+1], 10h
0x71BF5D: jnz     short locret_71BF6D
0x71BF5F: mov     ecx, [esp+arg_4]
0x71BF63: cmp     dword ptr [ecx], 4
0x71BF66: jnz     short locret_71BF6D
0x71BF68: mov     eax, offset unk_B25E00
0x71BF6D: retn    10h
