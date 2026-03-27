0x746EA0: mov     edx, [eax+16B4h]
0x746EA6: cmp     edx, 8
0x746EA9: push    ebx
0x746EAA: push    esi
0x746EAB: jle     short loc_746EEA
0x746EAD: movzx   ebx, byte ptr [eax+16B0h]
0x746EB4: mov     edx, [eax+14h]
0x746EB7: mov     ecx, [eax+8]
0x746EBA: mov     [ecx+edx], bl
0x746EBD: movzx   ebx, byte ptr [eax+16B1h]
0x746EC4: mov     edx, [eax+8]
0x746EC7: mov     esi, 1
0x746ECC: add     [eax+14h], esi
0x746ECF: mov     ecx, [eax+14h]
0x746ED2: mov     [ecx+edx], bl
0x746ED5: add     [eax+14h], esi
0x746ED8: xor     ecx, ecx
0x746EDA: pop     esi
0x746EDB: mov     [eax+16B0h], cx
0x746EE2: mov     [eax+16B4h], ecx
0x746EE8: pop     ebx
0x746EE9: retn
0x746EEA: xor     ecx, ecx
0x746EEC: cmp     edx, ecx
0x746EEE: jle     short loc_746F03
0x746EF0: mov     esi, [eax+14h]
0x746EF3: mov     edx, [eax+8]
0x746EF6: mov     bl, [eax+16B0h]
0x746EFC: mov     [edx+esi], bl
0x746EFF: add     dword ptr [eax+14h], 1
0x746F03: pop     esi
0x746F04: mov     [eax+16B0h], cx
0x746F0B: mov     [eax+16B4h], ecx
0x746F11: pop     ebx
0x746F12: retn
