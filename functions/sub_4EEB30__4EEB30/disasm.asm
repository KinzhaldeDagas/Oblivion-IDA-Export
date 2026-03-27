0x4EEB30: push    edi
0x4EEB31: mov     edi, ecx
0x4EEB33: xor     eax, eax
0x4EEB35: test    edi, edi
0x4EEB37: jz      short loc_4EEBAB
0x4EEB39: lea     esp, [esp+0]
0x4EEB40: cmp     dword ptr [ecx], 0
0x4EEB43: jz      short loc_4EEB48
0x4EEB45: add     eax, 1
0x4EEB48: mov     ecx, [ecx+4]
0x4EEB4B: test    ecx, ecx
0x4EEB4D: jnz     short loc_4EEB40
0x4EEB4F: test    eax, eax
0x4EEB51: jbe     short loc_4EEBAB
0x4EEB53: mov     edx, 8
0x4EEB58: mul     edx
0x4EEB5A: seto    cl
0x4EEB5D: push    esi
0x4EEB5E: neg     ecx
0x4EEB60: or      ecx, eax
0x4EEB62: push    ecx; Size
0x4EEB63: call    FormHeapAlloc
0x4EEB68: add     esp, 4
0x4EEB6B: mov     esi, eax
0x4EEB6D: xor     ecx, ecx
0x4EEB6F: mov     eax, edi
0x4EEB71: mov     edx, [eax]
0x4EEB73: mov     edx, [edx]
0x4EEB75: mov     edx, [edx+0Ch]
0x4EEB78: mov     [esi+ecx*8], edx
0x4EEB7B: mov     edx, [eax]
0x4EEB7D: mov     edx, [edx+4]
0x4EEB80: mov     [esi+ecx*8+4], edx
0x4EEB84: mov     eax, [eax+4]
0x4EEB87: add     ecx, 1
0x4EEB8A: test    eax, eax
0x4EEB8C: jnz     short loc_4EEB71
0x4EEB8E: lea     eax, ds:0[ecx*8]
0x4EEB95: mov     ecx, [esp+8+arg_0]
0x4EEB99: push    eax; Size
0x4EEB9A: push    esi; Src
0x4EEB9B: push    ecx; int
0x4EEB9C: call    TESForm_PutFormRecordChunkData
0x4EEBA1: push    esi
0x4EEBA2: call    FormHeapFree
0x4EEBA7: add     esp, 10h
0x4EEBAA: pop     esi
0x4EEBAB: pop     edi
0x4EEBAC: retn    4
