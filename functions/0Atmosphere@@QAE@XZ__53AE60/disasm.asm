0x53AE60: push    0FFFFFFFFh
0x53AE62: push    offset ??1Atmosphere@@UAE@XZ_SEH
0x53AE67: mov     eax, large fs:0
0x53AE6D: push    eax
0x53AE6E: push    ecx
0x53AE6F: push    ebx
0x53AE70: push    ebp
0x53AE71: push    esi
0x53AE72: push    edi
0x53AE73: mov     eax, ds:0B30AACh
0x53AE78: xor     eax, esp
0x53AE7A: push    eax
0x53AE7B: lea     eax, [esp+24h+var_C]
0x53AE7F: mov     large fs:0, eax
0x53AE85: mov     esi, ecx
0x53AE87: mov     [esp+24h+var_10], esi
0x53AE8B: call    ??0SkyObject@@QAE@XZ; SkyObject::SkyObject(void)
0x53AE90: xor     ebp, ebp
0x53AE92: mov     dword ptr [esi], offset ??_7Atmosphere@@6B@; const Atmosphere::`vftable'
0x53AE98: mov     [esp+24h+var_4], ebp
0x53AE9C: mov     [esi+8], ebp
0x53AE9F: mov     [esi+0Ch], ebp
0x53AEA2: mov     [esi+10h], ebp
0x53AEA5: mov     [esi+14h], ebp
0x53AEA8: mov     edi, [esi+8]
0x53AEAB: cmp     edi, ebp
0x53AEAD: mov     ebx, ds:0A2807Ch
0x53AEB3: mov     byte ptr [esp+24h+var_4], 4
0x53AEB8: jz      short loc_53AED5
0x53AEBA: lea     eax, [edi+4]
0x53AEBD: push    eax; lpAddend
0x53AEBE: call    ebx ; InterlockedDecrement
0x53AEC0: test    eax, eax
0x53AEC2: jnz     short loc_53AED2
0x53AEC4: cmp     edi, ebp
0x53AEC6: jz      short loc_53AED2
0x53AEC8: mov     edx, [edi]
0x53AECA: mov     eax, [edx]
0x53AECC: push    1
0x53AECE: mov     ecx, edi
0x53AED0: call    eax
0x53AED2: mov     [esi+8], ebp
0x53AED5: mov     edi, [esi+14h]
0x53AED8: cmp     edi, ebp
0x53AEDA: jz      short loc_53AEF7
0x53AEDC: lea     ecx, [edi+4]
0x53AEDF: push    ecx; lpAddend
0x53AEE0: call    ebx ; InterlockedDecrement
0x53AEE2: test    eax, eax
0x53AEE4: jnz     short loc_53AEF4
0x53AEE6: cmp     edi, ebp
0x53AEE8: jz      short loc_53AEF4
0x53AEEA: mov     edx, [edi]
0x53AEEC: mov     eax, [edx]
0x53AEEE: push    1
0x53AEF0: mov     ecx, edi
0x53AEF2: call    eax
0x53AEF4: mov     [esi+14h], ebp
0x53AEF7: mov     edi, [esi+10h]
0x53AEFA: cmp     edi, ebp
0x53AEFC: jz      short loc_53AF19
0x53AEFE: lea     ecx, [edi+4]
0x53AF01: push    ecx; lpAddend
0x53AF02: call    ebx ; InterlockedDecrement
0x53AF04: test    eax, eax
0x53AF06: jnz     short loc_53AF16
0x53AF08: cmp     edi, ebp
0x53AF0A: jz      short loc_53AF16
0x53AF0C: mov     edx, [edi]
0x53AF0E: mov     eax, [edx]
0x53AF10: push    1
0x53AF12: mov     ecx, edi
0x53AF14: call    eax
0x53AF16: mov     [esi+10h], ebp
0x53AF19: mov     edi, [esi+0Ch]
0x53AF1C: cmp     edi, ebp
0x53AF1E: jz      short loc_53AF3B
0x53AF20: lea     ecx, [edi+4]
0x53AF23: push    ecx; lpAddend
0x53AF24: call    ebx ; InterlockedDecrement
0x53AF26: test    eax, eax
0x53AF28: jnz     short loc_53AF38
0x53AF2A: cmp     edi, ebp
0x53AF2C: jz      short loc_53AF38
0x53AF2E: mov     edx, [edi]
0x53AF30: mov     eax, [edx]
0x53AF32: push    1
0x53AF34: mov     ecx, edi
0x53AF36: call    eax
0x53AF38: mov     [esi+0Ch], ebp
0x53AF3B: mov     eax, esi
0x53AF3D: mov     byte ptr [esi+18h], 1
0x53AF41: mov     ecx, dword ptr [esp+24h+var_C]
0x53AF45: mov     large fs:0, ecx
0x53AF4C: pop     ecx
0x53AF4D: pop     edi
0x53AF4E: pop     esi
0x53AF4F: pop     ebp
0x53AF50: pop     ebx
0x53AF51: add     esp, 10h
0x53AF54: retn
