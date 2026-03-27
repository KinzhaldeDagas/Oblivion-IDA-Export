0x422E20: push    esi
0x422E21: mov     esi, [esp+4+arg_0]
0x422E25: test    esi, esi
0x422E27: push    edi
0x422E28: mov     edi, ecx
0x422E2A: jz      loc_422ECE
0x422E30: push    ebx
0x422E31: push    offset aBaseextralistR; lpCriticalSection
0x422E36: mov     ecx, offset BSExtraDataCS
0x422E3B: call    NiEnterCriticalSection
0x422E40: movzx   ebx, byte ptr [esi+4]
0x422E44: push    ebx
0x422E45: mov     ecx, edi
0x422E47: call    BaseExtraList_GetPrevExtraData
0x422E4C: test    eax, eax
0x422E4E: jz      short loc_422E58
0x422E50: mov     ecx, [esi+8]
0x422E53: mov     [eax+8], ecx
0x422E56: jmp     short loc_422E5E
0x422E58: mov     edx, [esi+8]
0x422E5B: mov     [edi+4], edx
0x422E5E: cmp     [esp+0Ch+arg_4], 0
0x422E63: jz      short loc_422E71
0x422E65: mov     eax, [esi]
0x422E67: mov     edx, [eax]
0x422E69: push    1
0x422E6B: mov     ecx, esi
0x422E6D: call    edx
0x422E6F: jmp     short loc_422E78
0x422E71: mov     dword ptr [esi+8], 0
0x422E78: movzx   ecx, bl
0x422E7B: mov     eax, ecx
0x422E7D: shr     eax, 3
0x422E80: cmp     eax, 0Ch
0x422E83: jnb     short loc_422E9C
0x422E85: and     ecx, 80000007h
0x422E8B: jns     short loc_422E92
0x422E8D: dec     ecx
0x422E8E: or      ecx, 0FFFFFFF8h
0x422E91: inc     ecx
0x422E92: mov     dl, 1
0x422E94: shl     dl, cl
0x422E96: not     dl
0x422E98: and     [eax+edi+8], dl
0x422E9C: mov     eax, TlsIndex
0x422EA1: mov     ecx, large fs:2Ch
0x422EA8: mov     eax, [ecx+eax*4]
0x422EAB: cmp     edi, [eax+8]
0x422EB1: jnz     short loc_422EC3
0x422EB3: cmp     ebx, 5Ch ; '\'
0x422EB6: ja      short loc_422EC3
0x422EB8: mov     dword ptr [eax+ebx*4+10h], 0
0x422EC3: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x422EC8: call    NiLeaveCriticalSection_0
0x422ECD: pop     ebx
0x422ECE: pop     edi
0x422ECF: pop     esi
0x422ED0: retn    8
