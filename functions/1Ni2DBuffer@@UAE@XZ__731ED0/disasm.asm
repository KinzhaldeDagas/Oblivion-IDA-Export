0x731ED0: push    0FFFFFFFFh
0x731ED2: push    offset ??1Ni2DBuffer@@UAE@XZ_SEH
0x731ED7: mov     eax, large fs:0
0x731EDD: push    eax
0x731EDE: push    ecx
0x731EDF: push    ebp
0x731EE0: push    esi
0x731EE1: push    edi
0x731EE2: mov     eax, ds:0B30AACh
0x731EE7: xor     eax, esp
0x731EE9: push    eax
0x731EEA: lea     eax, [esp+20h+var_C]
0x731EEE: mov     large fs:0, eax
0x731EF4: mov     edi, ecx
0x731EF6: mov     [esp+20h+var_10], edi
0x731EFA: mov     dword ptr [edi], offset ??_7Ni2DBuffer@@6B@; const Ni2DBuffer::`vftable'
0x731F00: mov     esi, [edi+10h]
0x731F03: test    esi, esi
0x731F05: mov     ebp, ds:0A2807Ch
0x731F0B: mov     [esp+20h+var_4], 1
0x731F13: jz      short loc_731F34
0x731F15: lea     eax, [esi+4]
0x731F18: push    eax; lpAddend
0x731F19: call    ebp ; InterlockedDecrement
0x731F1B: test    eax, eax
0x731F1D: jnz     short loc_731F2D
0x731F1F: test    esi, esi
0x731F21: jz      short loc_731F2D
0x731F23: mov     edx, [esi]
0x731F25: mov     eax, [edx]
0x731F27: push    1
0x731F29: mov     ecx, esi
0x731F2B: call    eax
0x731F2D: mov     dword ptr [edi+10h], 0
0x731F34: mov     esi, [edi+10h]
0x731F37: test    esi, esi
0x731F39: mov     byte ptr [esp+20h+var_4], 0
0x731F3E: jz      short loc_731F58
0x731F40: lea     ecx, [esi+4]
0x731F43: push    ecx; lpAddend
0x731F44: call    ebp ; InterlockedDecrement
0x731F46: test    eax, eax
0x731F48: jnz     short loc_731F58
0x731F4A: test    esi, esi
0x731F4C: jz      short loc_731F58
0x731F4E: mov     edx, [esi]
0x731F50: mov     eax, [edx]
0x731F52: push    1
0x731F54: mov     ecx, esi
0x731F56: call    eax
0x731F58: mov     ecx, edi
0x731F5A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x731F62: call    NiRefObject_destr
0x731F67: mov     ecx, [esp+20h+var_C]
0x731F6B: mov     large fs:0, ecx
0x731F72: pop     ecx
0x731F73: pop     edi
0x731F74: pop     esi
0x731F75: pop     ebp
0x731F76: add     esp, 10h
0x731F79: retn
