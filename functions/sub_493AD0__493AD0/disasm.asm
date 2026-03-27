0x493AD0: mov     eax, [esp+arg_0]
0x493AD4: push    esi
0x493AD5: mov     esi, ecx
0x493AD7: mov     ecx, [esp+4+arg_4]
0x493ADB: mov     [esi+4], ecx
0x493ADE: xor     ecx, ecx
0x493AE0: mov     [esi], eax
0x493AE2: mov     edx, 4
0x493AE7: mul     edx
0x493AE9: seto    cl
0x493AEC: push    edi
0x493AED: neg     ecx
0x493AEF: or      ecx, eax
0x493AF1: push    ecx; Size
0x493AF2: call    FormHeapAlloc
0x493AF7: mov     [esi+8], eax
0x493AFA: mov     eax, [esi]
0x493AFC: xor     ecx, ecx
0x493AFE: mov     edx, 4
0x493B03: mul     edx
0x493B05: seto    cl
0x493B08: neg     ecx
0x493B0A: or      ecx, eax
0x493B0C: push    ecx; Size
0x493B0D: call    FormHeapAlloc
0x493B12: mov     [esi+0Ch], eax
0x493B15: mov     eax, [esi]
0x493B17: imul    eax, 110h
0x493B1D: xor     ecx, ecx
0x493B1F: mov     edx, 4
0x493B24: mul     edx
0x493B26: seto    cl
0x493B29: neg     ecx
0x493B2B: or      ecx, eax
0x493B2D: push    ecx; Size
0x493B2E: call    FormHeapAlloc
0x493B33: mov     edi, eax
0x493B35: mov     eax, [esi]
0x493B37: imul    eax, 440h
0x493B3D: push    eax
0x493B3E: push    0
0x493B40: push    edi
0x493B41: call    __memset
0x493B46: xor     eax, eax
0x493B48: add     esp, 18h
0x493B4B: cmp     [esi], eax
0x493B4D: jbe     short loc_493B69
0x493B4F: nop
0x493B50: mov     ecx, [esi+8]
0x493B53: mov     [ecx+eax*4], edi
0x493B56: mov     edx, [esi+0Ch]
0x493B59: add     edi, 40h ; '@'
0x493B5C: mov     [edx+eax*4], edi
0x493B5F: add     eax, 1
0x493B62: add     edi, 44h ; 'D'
0x493B65: cmp     eax, [esi]
0x493B67: jb      short loc_493B50
0x493B69: pop     edi
0x493B6A: mov     eax, esi
0x493B6C: pop     esi
0x493B6D: retn    8
