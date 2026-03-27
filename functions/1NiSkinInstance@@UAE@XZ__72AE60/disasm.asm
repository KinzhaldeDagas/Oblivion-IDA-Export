0x72AE60: push    0FFFFFFFFh
0x72AE62: push    offset ??1NiSkinInstance@@UAE@XZ_SEH
0x72AE67: mov     eax, large fs:0
0x72AE6D: push    eax
0x72AE6E: push    ecx
0x72AE6F: push    ebx
0x72AE70: push    esi
0x72AE71: push    edi
0x72AE72: mov     eax, ds:0B30AACh
0x72AE77: xor     eax, esp
0x72AE79: push    eax
0x72AE7A: lea     eax, [esp+20h+var_C]
0x72AE7E: mov     large fs:0, eax
0x72AE84: mov     esi, ecx
0x72AE86: mov     [esp+20h+var_10], esi
0x72AE8A: mov     dword ptr [esi], offset ??_7NiSkinInstance@@6B@; const NiSkinInstance::`vftable'
0x72AE90: mov     eax, [esi+14h]
0x72AE93: push    eax
0x72AE94: mov     [esp+24h+var_4], 2
0x72AE9C: call    FormHeapFree
0x72AEA1: push    esi
0x72AEA2: call    sub_701520
0x72AEA7: mov     edi, [esi+0Ch]
0x72AEAA: mov     ebx, ds:0A2807Ch
0x72AEB0: add     esp, 8
0x72AEB3: test    edi, edi
0x72AEB5: mov     byte ptr [esp+20h+var_4], 1
0x72AEBA: jz      short loc_72AED4
0x72AEBC: lea     eax, [edi+4]
0x72AEBF: push    eax; lpAddend
0x72AEC0: call    ebx ; InterlockedDecrement
0x72AEC2: test    eax, eax
0x72AEC4: jnz     short loc_72AED4
0x72AEC6: test    edi, edi
0x72AEC8: jz      short loc_72AED4
0x72AECA: mov     edx, [edi]
0x72AECC: mov     eax, [edx]
0x72AECE: push    1
0x72AED0: mov     ecx, edi
0x72AED2: call    eax
0x72AED4: mov     edi, [esi+8]
0x72AED7: test    edi, edi
0x72AED9: mov     byte ptr [esp+20h+var_4], 0
0x72AEDE: jz      short loc_72AEF8
0x72AEE0: lea     ecx, [edi+4]
0x72AEE3: push    ecx; lpAddend
0x72AEE4: call    ebx ; InterlockedDecrement
0x72AEE6: test    eax, eax
0x72AEE8: jnz     short loc_72AEF8
0x72AEEA: test    edi, edi
0x72AEEC: jz      short loc_72AEF8
0x72AEEE: mov     edx, [edi]
0x72AEF0: mov     eax, [edx]
0x72AEF2: push    1
0x72AEF4: mov     ecx, edi
0x72AEF6: call    eax
0x72AEF8: mov     ecx, esi
0x72AEFA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x72AF02: call    NiRefObject_destr
0x72AF07: mov     ecx, [esp+20h+var_C]
0x72AF0B: mov     large fs:0, ecx
0x72AF12: pop     ecx
0x72AF13: pop     edi
0x72AF14: pop     esi
0x72AF15: pop     ebx
0x72AF16: add     esp, 10h
0x72AF19: retn
