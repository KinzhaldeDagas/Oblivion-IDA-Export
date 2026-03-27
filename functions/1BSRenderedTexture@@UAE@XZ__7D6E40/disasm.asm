0x7D6E40: push    0FFFFFFFFh
0x7D6E42: push    offset ??1BSRenderedTexture@@UAE@XZ_SEH
0x7D6E47: mov     eax, large fs:0
0x7D6E4D: push    eax
0x7D6E4E: push    ecx
0x7D6E4F: push    ebx
0x7D6E50: push    ebp
0x7D6E51: push    esi
0x7D6E52: push    edi
0x7D6E53: mov     eax, ds:0B30AACh
0x7D6E58: xor     eax, esp
0x7D6E5A: push    eax
0x7D6E5B: lea     eax, [esp+24h+var_C]
0x7D6E5F: mov     large fs:0, eax
0x7D6E65: mov     ebp, ecx
0x7D6E67: mov     [esp+24h+var_10], ebp
0x7D6E6B: mov     dword ptr [ebp+0], offset ??_7BSRenderedTexture@@6B@; const BSRenderedTexture::`vftable'
0x7D6E72: mov     [esp+24h+var_4], 2
0x7D6E7A: lea     edi, [ebp+8]
0x7D6E7D: mov     ebx, 6
0x7D6E82: mov     esi, [edi]
0x7D6E84: test    esi, esi
0x7D6E86: jz      short loc_7D6EAA
0x7D6E88: lea     eax, [esi+4]
0x7D6E8B: push    eax; lpAddend
0x7D6E8C: call    dword ptr ds:0A2807Ch
0x7D6E92: test    eax, eax
0x7D6E94: jnz     short loc_7D6EA4
0x7D6E96: test    esi, esi
0x7D6E98: jz      short loc_7D6EA4
0x7D6E9A: mov     edx, [esi]
0x7D6E9C: mov     eax, [edx]
0x7D6E9E: push    1
0x7D6EA0: mov     ecx, esi
0x7D6EA2: call    eax
0x7D6EA4: mov     dword ptr [edi], 0
0x7D6EAA: add     edi, 4
0x7D6EAD: sub     ebx, 1
0x7D6EB0: jnz     short loc_7D6E82
0x7D6EB2: mov     esi, [ebp+20h]
0x7D6EB5: test    esi, esi
0x7D6EB7: mov     edi, ds:0A2807Ch
0x7D6EBD: jz      short loc_7D6EDE
0x7D6EBF: lea     ecx, [esi+4]
0x7D6EC2: push    ecx; lpAddend
0x7D6EC3: call    edi ; InterlockedDecrement
0x7D6EC5: test    eax, eax
0x7D6EC7: jnz     short loc_7D6ED7
0x7D6EC9: test    esi, esi
0x7D6ECB: jz      short loc_7D6ED7
0x7D6ECD: mov     edx, [esi]
0x7D6ECF: mov     eax, [edx]
0x7D6ED1: push    1
0x7D6ED3: mov     ecx, esi
0x7D6ED5: call    eax
0x7D6ED7: mov     dword ptr [ebp+20h], 0
0x7D6EDE: mov     esi, [ebp+20h]
0x7D6EE1: test    esi, esi
0x7D6EE3: mov     byte ptr [esp+24h+var_4], 1
0x7D6EE8: jz      short loc_7D6F02
0x7D6EEA: lea     ecx, [esi+4]
0x7D6EED: push    ecx; lpAddend
0x7D6EEE: call    edi ; InterlockedDecrement
0x7D6EF0: test    eax, eax
0x7D6EF2: jnz     short loc_7D6F02
0x7D6EF4: test    esi, esi
0x7D6EF6: jz      short loc_7D6F02
0x7D6EF8: mov     edx, [esi]
0x7D6EFA: mov     eax, [edx]
0x7D6EFC: push    1
0x7D6EFE: mov     ecx, esi
0x7D6F00: call    eax
0x7D6F02: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D6F07: push    6; int
0x7D6F09: push    4; unsigned int
0x7D6F0B: lea     eax, [ebp+8]
0x7D6F0E: push    eax; void *
0x7D6F0F: mov     byte ptr [esp+34h+var_4], 0
0x7D6F14: call    $LN21
0x7D6F19: push    offset NiRefObject_objcount; lpAddend
0x7D6F1E: mov     dword ptr [ebp+0], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D6F25: call    edi ; InterlockedDecrement
0x7D6F27: mov     ecx, dword ptr [esp+24h+var_C]
0x7D6F2B: mov     large fs:0, ecx
0x7D6F32: pop     ecx
0x7D6F33: pop     edi
0x7D6F34: pop     esi
0x7D6F35: pop     ebp
0x7D6F36: pop     ebx
0x7D6F37: add     esp, 10h
0x7D6F3A: retn
