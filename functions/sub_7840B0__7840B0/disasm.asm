0x7840B0: push    esi
0x7840B1: mov     esi, ecx
0x7840B3: cmp     dword ptr [esi], 0
0x7840B6: jnz     short loc_7840BD
0x7840B8: call    __invalid_parameter_noinfo
0x7840BD: mov     eax, [esi+4]
0x7840C0: cmp     byte ptr [eax+2Dh], 0
0x7840C4: jz      short loc_7840D8
0x7840C6: mov     eax, [eax+8]
0x7840C9: mov     [esi+4], eax
0x7840CC: cmp     byte ptr [eax+2Dh], 0
0x7840D0: jz      short loc_784137
0x7840D2: pop     esi
0x7840D3: jmp     __invalid_parameter_noinfo
0x7840D8: mov     ecx, [eax]
0x7840DA: cmp     byte ptr [ecx+2Dh], 0
0x7840DE: jnz     short loc_784100
0x7840E0: mov     eax, [ecx+8]
0x7840E3: cmp     byte ptr [eax+2Dh], 0
0x7840E7: jnz     short loc_7840FB
0x7840E9: lea     esp, [esp+0]
0x7840F0: mov     ecx, eax
0x7840F2: mov     eax, [ecx+8]
0x7840F5: cmp     byte ptr [eax+2Dh], 0
0x7840F9: jz      short loc_7840F0
0x7840FB: mov     [esi+4], ecx
0x7840FE: pop     esi
0x7840FF: retn
0x784100: mov     eax, [eax+4]
0x784103: cmp     byte ptr [eax+2Dh], 0
0x784107: jnz     short loc_784125
0x784109: lea     esp, [esp+0]
0x784110: mov     ecx, [esi+4]
0x784113: cmp     ecx, [eax]
0x784115: jnz     short loc_784125
0x784117: mov     [esi+4], eax
0x78411A: mov     edx, eax
0x78411C: mov     eax, [edx+4]
0x78411F: cmp     byte ptr [eax+2Dh], 0
0x784123: jz      short loc_784110
0x784125: mov     ecx, [esi+4]
0x784128: cmp     byte ptr [ecx+2Dh], 0
0x78412C: jz      short loc_784134
0x78412E: pop     esi
0x78412F: jmp     __invalid_parameter_noinfo
0x784134: mov     [esi+4], eax
0x784137: pop     esi
0x784138: retn
