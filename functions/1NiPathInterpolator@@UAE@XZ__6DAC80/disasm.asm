0x6DAC80: push    0FFFFFFFFh
0x6DAC82: push    offset ??0NiPathInterpolator@@QAE@XZ_SEH
0x6DAC87: mov     eax, large fs:0
0x6DAC8D: push    eax
0x6DAC8E: push    ecx
0x6DAC8F: push    ebp
0x6DAC90: push    esi
0x6DAC91: push    edi
0x6DAC92: mov     eax, ds:0B30AACh
0x6DAC97: xor     eax, esp
0x6DAC99: push    eax
0x6DAC9A: lea     eax, [esp+20h+var_C]
0x6DAC9E: mov     large fs:0, eax
0x6DACA4: mov     esi, ecx
0x6DACA6: mov     [esp+20h+var_10], esi
0x6DACAA: mov     dword ptr [esi], offset ??_7NiPathInterpolator@@6B@; const NiPathInterpolator::`vftable'
0x6DACB0: mov     edi, [esi+18h]
0x6DACB3: test    edi, edi
0x6DACB5: mov     ebp, ds:0A2807Ch
0x6DACBB: mov     [esp+20h+var_4], 2
0x6DACC3: jz      short loc_6DACE4
0x6DACC5: lea     eax, [edi+4]
0x6DACC8: push    eax; lpAddend
0x6DACC9: call    ebp ; InterlockedDecrement
0x6DACCB: test    eax, eax
0x6DACCD: jnz     short loc_6DACDD
0x6DACCF: test    edi, edi
0x6DACD1: jz      short loc_6DACDD
0x6DACD3: mov     edx, [edi]
0x6DACD5: mov     eax, [edx]
0x6DACD7: push    1
0x6DACD9: mov     ecx, edi
0x6DACDB: call    eax
0x6DACDD: mov     dword ptr [esi+18h], 0
0x6DACE4: mov     edi, [esi+1Ch]
0x6DACE7: test    edi, edi
0x6DACE9: jz      short loc_6DAD0A
0x6DACEB: lea     ecx, [edi+4]
0x6DACEE: push    ecx; lpAddend
0x6DACEF: call    ebp ; InterlockedDecrement
0x6DACF1: test    eax, eax
0x6DACF3: jnz     short loc_6DAD03
0x6DACF5: test    edi, edi
0x6DACF7: jz      short loc_6DAD03
0x6DACF9: mov     edx, [edi]
0x6DACFB: mov     eax, [edx]
0x6DACFD: push    1
0x6DACFF: mov     ecx, edi
0x6DAD01: call    eax
0x6DAD03: mov     dword ptr [esi+1Ch], 0
0x6DAD0A: mov     eax, [esi+20h]
0x6DAD0D: push    eax
0x6DAD0E: call    FormHeapFree
0x6DAD13: mov     edi, [esi+1Ch]
0x6DAD16: add     esp, 4
0x6DAD19: test    edi, edi
0x6DAD1B: mov     byte ptr [esp+20h+var_4], 1
0x6DAD20: jz      short loc_6DAD3A
0x6DAD22: lea     ecx, [edi+4]
0x6DAD25: push    ecx; lpAddend
0x6DAD26: call    ebp ; InterlockedDecrement
0x6DAD28: test    eax, eax
0x6DAD2A: jnz     short loc_6DAD3A
0x6DAD2C: test    edi, edi
0x6DAD2E: jz      short loc_6DAD3A
0x6DAD30: mov     edx, [edi]
0x6DAD32: mov     eax, [edx]
0x6DAD34: push    1
0x6DAD36: mov     ecx, edi
0x6DAD38: call    eax
0x6DAD3A: mov     edi, [esi+18h]
0x6DAD3D: test    edi, edi
0x6DAD3F: mov     byte ptr [esp+20h+var_4], 0
0x6DAD44: jz      short loc_6DAD5E
0x6DAD46: lea     ecx, [edi+4]
0x6DAD49: push    ecx; lpAddend
0x6DAD4A: call    ebp ; InterlockedDecrement
0x6DAD4C: test    eax, eax
0x6DAD4E: jnz     short loc_6DAD5E
0x6DAD50: test    edi, edi
0x6DAD52: jz      short loc_6DAD5E
0x6DAD54: mov     edx, [edi]
0x6DAD56: mov     eax, [edx]
0x6DAD58: push    1
0x6DAD5A: mov     ecx, edi
0x6DAD5C: call    eax
0x6DAD5E: mov     ecx, esi
0x6DAD60: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6DAD68: call    sub_6EC250
0x6DAD6D: mov     ecx, dword ptr [esp+20h+var_C]
0x6DAD71: mov     large fs:0, ecx
0x6DAD78: pop     ecx
0x6DAD79: pop     edi
0x6DAD7A: pop     esi
0x6DAD7B: pop     ebp
0x6DAD7C: add     esp, 10h
0x6DAD7F: retn
