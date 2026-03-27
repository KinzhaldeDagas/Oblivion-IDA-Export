0x92EA40: push    ebp
0x92EA41: mov     ebp, esp
0x92EA43: and     esp, 0FFFFFFF0h
0x92EA46: sub     esp, 64h
0x92EA49: mov     eax, [ebp+arg_4]
0x92EA4C: mov     ecx, [eax]
0x92EA4E: mov     edx, [eax+4]
0x92EA51: mov     eax, [eax+8]
0x92EA54: push    ebx
0x92EA55: xorps   xmm0, xmm0
0x92EA58: push    esi
0x92EA59: mov     esi, [ebp+arg_0]
0x92EA5C: movaps  [esp+6Ch+var_10], xmm0
0x92EA61: mov     dword ptr [esp+6Ch+var_10+8], eax
0x92EA65: mov     eax, [esi+4]
0x92EA68: xor     ebx, ebx
0x92EA6A: test    eax, eax
0x92EA6C: movaps  [esp+6Ch+var_30], xmm0
0x92EA71: movaps  [esp+6Ch+var_20], xmm0
0x92EA76: push    edi
0x92EA77: mov     dword ptr [esp+70h+var_30], ecx
0x92EA7B: mov     dword ptr [esp+70h+var_20+4], edx
0x92EA7F: jle     loc_92EB41
0x92EA85: xor     edi, edi
0x92EA87: jmp     short loc_92EA90
0x92EA89: align 10h
0x92EA90: mov     eax, [esi]
0x92EA92: mov     ecx, [eax+edi]
0x92EA95: mov     edx, ds:0BA7A40h
0x92EA9B: add     eax, edi
0x92EA9D: mov     [esp+70h+var_60], ecx
0x92EAA1: mov     ecx, edx
0x92EAA3: mov     [esp+70h+var_58], ecx
0x92EAA7: mov     ecx, ds:0BA7A44h
0x92EAAD: mov     [esp+70h+var_5C], edx
0x92EAB1: mov     [esp+70h+var_54], 0
0x92EAB9: mov     edx, [eax+4]
0x92EABC: mov     [esp+70h+var_50], edx
0x92EAC0: mov     edx, ecx
0x92EAC2: mov     [esp+70h+var_4C], ecx
0x92EAC6: mov     ecx, ds:0BA7A48h
0x92EACC: mov     [esp+70h+var_48], edx
0x92EAD0: mov     [esp+70h+var_44], 0
0x92EAD8: mov     eax, [eax+8]
0x92EADB: mov     [esp+70h+var_40], eax
0x92EADF: mov     edx, ecx
0x92EAE1: lea     eax, [esp+70h+var_30]
0x92EAE5: mov     [esp+70h+var_3C], ecx
0x92EAE9: push    eax
0x92EAEA: lea     ecx, [esp+74h+var_60]
0x92EAEE: mov     [esp+74h+var_38], edx
0x92EAF2: mov     [esp+74h+var_34], 0
0x92EAFA: call    sub_8D2C20
0x92EAFF: fld     [esp+70h+var_40]
0x92EB03: mov     eax, [esi]
0x92EB05: fld     [esp+70h+var_50]
0x92EB09: mov     ecx, [esp+70h+var_60]
0x92EB0D: mov     edx, [ebp+arg_8]
0x92EB10: add     eax, edi
0x92EB12: mov     [eax], ecx
0x92EB14: fstp    dword ptr [eax+4]
0x92EB17: fstp    dword ptr [eax+8]
0x92EB1A: mov     dword ptr [eax+0Ch], 0
0x92EB21: mov     eax, [esi]
0x92EB23: movaps  xmm1, xmmword ptr [eax+edi]
0x92EB27: movaps  xmm0, xmmword ptr [edx]
0x92EB2A: add     eax, edi
0x92EB2C: addps   xmm1, xmm0
0x92EB2F: movaps  xmmword ptr [eax], xmm1
0x92EB32: mov     eax, [esi+4]
0x92EB35: inc     ebx
0x92EB36: add     edi, 10h
0x92EB39: cmp     ebx, eax
0x92EB3B: jl      loc_92EA90
0x92EB41: pop     edi
0x92EB42: pop     esi
0x92EB43: pop     ebx
0x92EB44: mov     esp, ebp
0x92EB46: pop     ebp
0x92EB47: retn
