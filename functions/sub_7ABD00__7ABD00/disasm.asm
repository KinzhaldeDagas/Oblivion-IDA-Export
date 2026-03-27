0x7ABD00: push    ebx
0x7ABD01: push    ebp
0x7ABD02: mov     ebp, ecx
0x7ABD04: mov     eax, [ebp+2230h]
0x7ABD0A: xor     ebx, ebx
0x7ABD0C: cmp     eax, ebx
0x7ABD0E: push    esi
0x7ABD0F: mov     esi, [esp+0Ch+arg_0]
0x7ABD13: jz      short loc_7ABD29
0x7ABD15: lea     ecx, [eax+8]
0x7ABD18: mov     ecx, [ecx]
0x7ABD1A: cmp     ecx, ebx
0x7ABD1C: mov     eax, [eax]
0x7ABD1E: jz      short loc_7ABD25
0x7ABD20: cmp     [ecx+10h], esi
0x7ABD23: jz      short loc_7ABD71
0x7ABD25: cmp     eax, ebx
0x7ABD27: jnz     short loc_7ABD15
0x7ABD29: push    edi
0x7ABD2A: push    20h ; ' '; Size
0x7ABD2C: call    FormHeapAlloc
0x7ABD31: add     esp, 4
0x7ABD34: cmp     eax, ebx
0x7ABD36: jz      short loc_7ABD98
0x7ABD38: mov     ecx, [esp+10h+arg_4]
0x7ABD3C: mov     edx, [ecx]
0x7ABD3E: fld     dword ptr [ecx+0Ch]
0x7ABD41: mov     [eax], edx
0x7ABD43: fstp    [esp+10h+arg_8]
0x7ABD47: mov     edx, [ecx+4]
0x7ABD4A: fld     [esp+10h+arg_8]
0x7ABD4E: mov     [eax+4], edx
0x7ABD51: mov     ecx, [ecx+8]
0x7ABD54: fstp    dword ptr [eax+0Ch]
0x7ABD57: mov     [eax+8], ecx
0x7ABD5A: mov     [eax+10h], esi
0x7ABD5D: mov     [eax+14h], ebx
0x7ABD60: mov     [eax+18h], bl
0x7ABD63: mov     [eax+19h], bl
0x7ABD66: mov     byte ptr [eax+1Ah], 1
0x7ABD6A: mov     [eax+1Ch], ebx
0x7ABD6D: mov     edi, eax
0x7ABD6F: jmp     short loc_7ABD9A
0x7ABD71: mov     eax, [esp+0Ch+arg_4]
0x7ABD75: mov     edx, [eax]
0x7ABD77: mov     [ecx], edx
0x7ABD79: mov     edx, [eax+4]
0x7ABD7C: mov     [ecx+4], edx
0x7ABD7F: mov     edx, [eax+8]
0x7ABD82: pop     esi
0x7ABD83: mov     [ecx+8], edx
0x7ABD86: fld     dword ptr [eax+0Ch]
0x7ABD89: mov     al, byte ptr [esp+8+arg_8]
0x7ABD8D: fstp    dword ptr [ecx+0Ch]
0x7ABD90: pop     ebp
0x7ABD91: mov     [ecx+1Ah], al
0x7ABD94: pop     ebx
0x7ABD95: retn    0Ch
0x7ABD98: xor     edi, edi
0x7ABD9A: mov     edx, [ebp+222Ch]
0x7ABDA0: mov     eax, [edx+4]
0x7ABDA3: lea     esi, [ebp+222Ch]
0x7ABDA9: mov     ecx, esi
0x7ABDAB: call    eax
0x7ABDAD: mov     [eax+8], edi
0x7ABDB0: mov     [eax+4], ebx
0x7ABDB3: mov     ecx, [esi+4]
0x7ABDB6: mov     [eax], ecx
0x7ABDB8: mov     ecx, [esi+4]
0x7ABDBB: cmp     ecx, ebx
0x7ABDBD: pop     edi
0x7ABDBE: jz      short loc_7ABDD0
0x7ABDC0: mov     [ecx+4], eax
0x7ABDC3: add     dword ptr [esi+0Ch], 1
0x7ABDC7: mov     [esi+4], eax
0x7ABDCA: pop     esi
0x7ABDCB: pop     ebp
0x7ABDCC: pop     ebx
0x7ABDCD: retn    0Ch
0x7ABDD0: add     dword ptr [esi+0Ch], 1
0x7ABDD4: mov     [esi+8], eax
0x7ABDD7: mov     [esi+4], eax
0x7ABDDA: pop     esi
0x7ABDDB: pop     ebp
0x7ABDDC: pop     ebx
0x7ABDDD: retn    0Ch
