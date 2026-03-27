0x746F20: push    ebx
0x746F21: push    esi
0x746F22: push    edi
0x746F23: mov     ebx, ecx
0x746F25: mov     esi, edx
0x746F27: call    sub_746EA0
0x746F2C: cmp     [esp+0Ch+arg_0], 0
0x746F31: mov     dword ptr [eax+16ACh], 8
0x746F3B: mov     edi, 1
0x746F40: jz      short loc_746F7C
0x746F42: mov     ecx, [eax+14h]
0x746F45: mov     edx, [eax+8]
0x746F48: mov     [ecx+edx], bl
0x746F4B: add     [eax+14h], edi
0x746F4E: mov     ecx, [eax+14h]
0x746F51: mov     edx, [eax+8]
0x746F54: mov     [ecx+edx], bh
0x746F57: add     [eax+14h], edi
0x746F5A: mov     edx, [eax+8]
0x746F5D: push    ebp
0x746F5E: mov     ebp, [eax+14h]
0x746F61: mov     cl, bl
0x746F63: not     cl
0x746F65: mov     [edx+ebp], cl
0x746F68: add     [eax+14h], edi
0x746F6B: mov     ebp, [eax+14h]
0x746F6E: mov     edx, [eax+8]
0x746F71: mov     ecx, ebx
0x746F73: not     ecx
0x746F75: mov     [edx+ebp], ch
0x746F78: add     [eax+14h], edi
0x746F7B: pop     ebp
0x746F7C: test    ebx, ebx
0x746F7E: jz      short loc_746F9E
0x746F80: mov     ecx, [eax+14h]
0x746F83: mov     edx, [eax+8]
0x746F86: sub     ebx, edi
0x746F88: mov     [esp+0Ch+arg_0], ebx
0x746F8C: mov     bl, [esi]
0x746F8E: mov     [ecx+edx], bl
0x746F91: mov     ebx, [esp+0Ch+arg_0]
0x746F95: add     [eax+14h], edi
0x746F98: add     esi, edi
0x746F9A: test    ebx, ebx
0x746F9C: jnz     short loc_746F80
0x746F9E: pop     edi
0x746F9F: pop     esi
0x746FA0: pop     ebx
0x746FA1: retn
