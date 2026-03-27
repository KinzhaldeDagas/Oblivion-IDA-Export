0x8FDA30: push    esi
0x8FDA31: mov     esi, ecx
0x8FDA33: mov     al, [esi+31h]
0x8FDA36: push    edi
0x8FDA37: xor     edi, edi
0x8FDA39: test    al, al
0x8FDA3B: jbe     short loc_8FDA5C
0x8FDA3D: push    ebx
0x8FDA3E: lea     ebx, [esi+12h]
0x8FDA41: mov     ecx, [esi+8]
0x8FDA44: mov     eax, [ecx]
0x8FDA46: xor     edx, edx
0x8FDA48: mov     dx, [ebx]
0x8FDA4B: push    edx
0x8FDA4C: call    dword ptr [eax+10h]
0x8FDA4F: movzx   eax, byte ptr [esi+31h]
0x8FDA53: inc     edi
0x8FDA54: add     ebx, 4
0x8FDA57: cmp     edi, eax
0x8FDA59: jl      short loc_8FDA41
0x8FDA5B: pop     ebx
0x8FDA5C: mov     edx, [esi]
0x8FDA5E: push    1
0x8FDA60: mov     ecx, esi
0x8FDA62: call    dword ptr [edx]
0x8FDA64: pop     edi
0x8FDA65: pop     esi
0x8FDA66: retn
