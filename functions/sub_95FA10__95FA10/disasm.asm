0x95FA10: push    ebx
0x95FA11: mov     ebx, [esp+4+arg_0]
0x95FA15: mov     eax, [ebx]
0x95FA17: mov     edx, [eax+0Ch]
0x95FA1A: push    esi
0x95FA1B: mov     esi, ecx
0x95FA1D: mov     ecx, ebx
0x95FA1F: call    edx
0x95FA21: cmp     eax, 4
0x95FA24: jnz     short loc_95FA7D
0x95FA26: push    ebp
0x95FA27: mov     ecx, esi
0x95FA29: call    sub_95F900
0x95FA2E: movzx   eax, word ptr [ebx+0Eh]
0x95FA32: lea     ebp, [esi+4]
0x95FA35: push    eax
0x95FA36: mov     ecx, ebp
0x95FA38: call    NiTArray_SetSize
0x95FA3D: xor     esi, esi
0x95FA3F: cmp     [ebx+0Eh], si
0x95FA43: jbe     short loc_95FA7C
0x95FA45: push    edi
0x95FA46: mov     ecx, [ebx+8]
0x95FA49: mov     edi, [ecx+esi*4]
0x95FA4C: mov     edx, [edi]
0x95FA4E: mov     eax, [edx+18h]
0x95FA51: mov     ecx, edi
0x95FA53: call    eax
0x95FA55: mov     edx, [eax]
0x95FA57: mov     [esp+10h+arg_0], eax
0x95FA5B: mov     ecx, eax
0x95FA5D: mov     eax, [edx+20h]
0x95FA60: push    edi
0x95FA61: call    eax
0x95FA63: lea     ecx, [esp+10h+arg_0]
0x95FA67: push    ecx
0x95FA68: push    esi
0x95FA69: mov     ecx, ebp
0x95FA6B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x95FA70: movzx   edx, word ptr [ebx+0Eh]
0x95FA74: add     esi, 1
0x95FA77: cmp     esi, edx
0x95FA79: jb      short loc_95FA46
0x95FA7B: pop     edi
0x95FA7C: pop     ebp
0x95FA7D: pop     esi
0x95FA7E: pop     ebx
0x95FA7F: retn    4
