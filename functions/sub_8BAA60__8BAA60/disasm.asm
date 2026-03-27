0x8BAA60: push    ebx
0x8BAA61: mov     ebx, large fs:2Ch
0x8BAA68: push    ebp
0x8BAA69: mov     ebp, ds:0BA9DE4h
0x8BAA6F: mov     eax, [ebx+ebp*4]
0x8BAA72: mov     ecx, [eax+1ACh]
0x8BAA78: mov     edx, [eax+1A0h]
0x8BAA7E: push    esi
0x8BAA7F: mov     esi, [esp+0Ch+arg_0]
0x8BAA83: sub     ecx, edx
0x8BAA85: cmp     esi, ecx
0x8BAA87: jz      short loc_8BAADD
0x8BAA89: push    edi
0x8BAA8A: mov     edi, eax
0x8BAA8C: mov     eax, [edi+1A0h]
0x8BAA92: test    eax, eax
0x8BAA94: jz      short loc_8BAAA2
0x8BAA96: mov     ecx, ds:0BA7D98h
0x8BAA9C: mov     edx, [ecx]
0x8BAA9E: push    eax
0x8BAA9F: call    dword ptr [edx+4]
0x8BAAA2: mov     ecx, ds:0BA7D98h
0x8BAAA8: mov     eax, [ecx]
0x8BAAAA: push    18h
0x8BAAAC: push    esi
0x8BAAAD: call    dword ptr [eax]
0x8BAAAF: mov     [edi+1A0h], eax
0x8BAAB5: mov     eax, [ebx+ebp*4]
0x8BAAB8: mov     ecx, [eax+1A0h]
0x8BAABE: mov     [eax+1A4h], ecx
0x8BAAC4: mov     edx, [eax+1A0h]
0x8BAACA: lea     ecx, [edx+esi]
0x8BAACD: mov     [eax+1ACh], ecx
0x8BAAD3: add     ecx, 0FFFFFFF0h
0x8BAAD6: mov     [eax+1A8h], ecx
0x8BAADC: pop     edi
0x8BAADD: pop     esi
0x8BAADE: pop     ebp
0x8BAADF: pop     ebx
0x8BAAE0: retn
