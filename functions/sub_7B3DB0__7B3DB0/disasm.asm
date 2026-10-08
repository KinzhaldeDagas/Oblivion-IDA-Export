0x7B3DB0: mov     edx, ds:0B2C340h
0x7B3DB6: sub     esp, 0Ch
0x7B3DB9: xor     eax, eax
0x7B3DBB: test    edx, edx
0x7B3DBD: jbe     short loc_7B3DD6
0x7B3DBF: mov     ecx, ds:0B2C344h
0x7B3DC5: cmp     dword ptr [ecx+eax*4], 0
0x7B3DC9: jnz     loc_7B3E4C
0x7B3DCF: add     eax, 1
0x7B3DD2: cmp     eax, edx
0x7B3DD4: jb      short loc_7B3DC5
0x7B3DD6: xor     eax, eax
0x7B3DD8: cmp     dword ptr ds:0B2C348h, 0
0x7B3DDF: mov     [esp+0Ch+position], eax
0x7B3DE3: mov     [esp+0Ch+valueOut], 0
0x7B3DEA: jbe     short loc_7B3E2A
0x7B3DEC: test    eax, eax
0x7B3DEE: jz      short loc_7B3E2A
0x7B3DF0: push    esi
0x7B3DF1: lea     eax, [esp+10h+valueOut]
0x7B3DF5: push    eax; valueOut
0x7B3DF6: lea     ecx, [esp+14h+keyOut]
0x7B3DFA: push    ecx; keyOut
0x7B3DFB: lea     edx, [esp+18h+position]
0x7B3DFF: push    edx; position
0x7B3E00: mov     ecx, offset stru_B2C33C; self
0x7B3E05: call    NiTMap_U32Pointer_GetNextEntry
0x7B3E0A: mov     esi, [esp+10h+valueOut]
0x7B3E0E: test    esi, esi
0x7B3E10: jz      short loc_7B3E22
0x7B3E12: mov     ecx, esi
0x7B3E14: call    sub_7B3940
0x7B3E19: push    esi
0x7B3E1A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7B3E1F: add     esp, 4
0x7B3E22: cmp     [esp+10h+position], 0
0x7B3E27: jnz     short loc_7B3DF1
0x7B3E29: pop     esi
0x7B3E2A: mov     ecx, offset stru_B2C33C
0x7B3E2F: call    NiTMap_Clear
0x7B3E34: mov     dword ptr ds:0B42D5Ch, 0
0x7B3E3E: mov     dword ptr ds:0B42D60h, 0
0x7B3E48: add     esp, 0Ch
0x7B3E4B: retn
0x7B3E4C: mov     eax, [ecx+eax*4]
0x7B3E4F: jmp     short loc_7B3DD8
