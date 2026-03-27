0x70BF30: push    0FFFFFFFFh
0x70BF32: push    offset SEH_88E880
0x70BF37: mov     eax, large fs:0
0x70BF3D: push    eax
0x70BF3E: push    ecx
0x70BF3F: push    ebx
0x70BF40: push    ebp
0x70BF41: push    esi
0x70BF42: push    edi
0x70BF43: mov     eax, ds:0B30AACh
0x70BF48: xor     eax, esp
0x70BF4A: push    eax
0x70BF4B: lea     eax, [esp+24h+var_C]
0x70BF4F: mov     large fs:0, eax
0x70BF55: mov     ebp, ds:0B3F928h
0x70BF5B: test    ebp, ebp
0x70BF5D: jz      loc_70BFE0
0x70BF63: mov     esi, [ebp+8]
0x70BF66: test    esi, esi
0x70BF68: mov     [esp+24h+var_10], esi
0x70BF6C: jz      short loc_70BF78
0x70BF6E: lea     eax, [esi+4]
0x70BF71: push    eax; lpAddend
0x70BF72: call    dword ptr ds:0A28078h
0x70BF78: test    esi, esi
0x70BF7A: mov     [esp+24h+var_4], 0
0x70BF82: jz      short loc_70BF94
0x70BF84: mov     edx, [esi]
0x70BF86: mov     eax, [esp+24h+arg_0]
0x70BF8A: mov     edx, [edx+54h]
0x70BF8D: push    eax
0x70BF8E: mov     ecx, esi
0x70BF90: call    edx
0x70BF92: jmp     short loc_70BFBC
0x70BF94: mov     ebx, [esp+24h+arg_0]
0x70BF98: mov     edi, [ebx+4]
0x70BF9B: xor     esi, esi
0x70BF9D: test    edi, edi
0x70BF9F: jbe     short loc_70BFB8
0x70BFA1: mov     eax, [ebx]
0x70BFA3: mov     ecx, [eax+esi*4]
0x70BFA6: mov     edx, [ecx]
0x70BFA8: mov     eax, [edx+84h]
0x70BFAE: push    ebp
0x70BFAF: call    eax
0x70BFB1: add     esi, 1
0x70BFB4: cmp     esi, edi
0x70BFB6: jb      short loc_70BFA1
0x70BFB8: mov     esi, [esp+24h+var_10]
0x70BFBC: test    esi, esi
0x70BFBE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70BFC6: jz      short loc_70BFE0
0x70BFC8: lea     ecx, [esi+4]
0x70BFCB: push    ecx; lpAddend
0x70BFCC: call    dword ptr ds:0A2807Ch
0x70BFD2: test    eax, eax
0x70BFD4: jnz     short loc_70BFE0
0x70BFD6: mov     edx, [esi]
0x70BFD8: mov     eax, [edx]
0x70BFDA: push    1
0x70BFDC: mov     ecx, esi
0x70BFDE: call    eax
0x70BFE0: mov     ecx, dword ptr [esp+24h+var_C]
0x70BFE4: mov     large fs:0, ecx
0x70BFEB: pop     ecx
0x70BFEC: pop     edi
0x70BFED: pop     esi
0x70BFEE: pop     ebp
0x70BFEF: pop     ebx
0x70BFF0: add     esp, 10h
0x70BFF3: retn
