0x8DCF10: push    ebx
0x8DCF11: push    esi
0x8DCF12: mov     esi, [esp+8+arg_0]
0x8DCF16: push    edi
0x8DCF17: mov     edi, [esi+134h]
0x8DCF1D: dec     edi
0x8DCF1E: js      short loc_8DCF48
0x8DCF20: mov     ebx, [esp+0Ch+arg_8]
0x8DCF24: push    ebp
0x8DCF25: mov     ebp, [esp+10h+arg_4]
0x8DCF29: lea     esp, [esp+0]
0x8DCF30: mov     eax, [esi+130h]
0x8DCF36: mov     ecx, [eax+edi*4]
0x8DCF39: test    ecx, ecx
0x8DCF3B: jz      short loc_8DCF44
0x8DCF3D: mov     edx, [ecx]
0x8DCF3F: push    ebx
0x8DCF40: push    ebp
0x8DCF41: call    dword ptr [edx+4]
0x8DCF44: dec     edi
0x8DCF45: jns     short loc_8DCF30
0x8DCF47: pop     ebp
0x8DCF48: mov     edx, [esi+134h]
0x8DCF4E: dec     edx
0x8DCF4F: js      short loc_8DCF8F
0x8DCF51: mov     eax, [esi+130h]
0x8DCF57: cmp     dword ptr [eax+edx*4], 0
0x8DCF5B: jnz     short loc_8DCF8C
0x8DCF5D: mov     ebx, [esi+134h]
0x8DCF63: dec     ebx
0x8DCF64: mov     ecx, ebx
0x8DCF66: cmp     edx, ecx
0x8DCF68: mov     [esi+134h], ebx
0x8DCF6E: mov     eax, edx
0x8DCF70: jge     short loc_8DCF8C
0x8DCF72: mov     ecx, [esi+130h]
0x8DCF78: mov     edi, [ecx+eax*4+4]
0x8DCF7C: lea     ecx, [ecx+eax*4]
0x8DCF7F: mov     [ecx], edi
0x8DCF81: mov     ecx, [esi+134h]
0x8DCF87: inc     eax
0x8DCF88: cmp     eax, ecx
0x8DCF8A: jl      short loc_8DCF72
0x8DCF8C: dec     edx
0x8DCF8D: jns     short loc_8DCF51
0x8DCF8F: pop     edi
0x8DCF90: pop     esi
0x8DCF91: pop     ebx
0x8DCF92: retn
