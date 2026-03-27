0x746E20: mov     ecx, [eax+16B4h]
0x746E26: cmp     ecx, 10h
0x746E29: push    ebx
0x746E2A: jnz     short loc_746E65
0x746E2C: movzx   ebx, byte ptr [eax+16B0h]
0x746E33: mov     edx, [eax+14h]
0x746E36: mov     ecx, [eax+8]
0x746E39: mov     [ecx+edx], bl
0x746E3C: add     dword ptr [eax+14h], 1
0x746E40: movzx   ebx, byte ptr [eax+16B1h]
0x746E47: mov     ecx, [eax+14h]
0x746E4A: mov     edx, [eax+8]
0x746E4D: mov     [ecx+edx], bl
0x746E50: add     dword ptr [eax+14h], 1
0x746E54: xor     ecx, ecx
0x746E56: mov     [eax+16B4h], ecx
0x746E5C: mov     [eax+16B0h], cx
0x746E63: pop     ebx
0x746E64: retn
0x746E65: cmp     ecx, 8
0x746E68: jl      short loc_746E93
0x746E6A: mov     ecx, [eax+8]
0x746E6D: mov     edx, [eax+14h]
0x746E70: mov     bl, [eax+16B0h]
0x746E76: mov     [ecx+edx], bl
0x746E79: movzx   cx, byte ptr [eax+16B1h]
0x746E81: add     dword ptr [eax+14h], 1
0x746E85: add     dword ptr [eax+16B4h], 0FFFFFFF8h
0x746E8C: mov     [eax+16B0h], cx
0x746E93: pop     ebx
0x746E94: retn
