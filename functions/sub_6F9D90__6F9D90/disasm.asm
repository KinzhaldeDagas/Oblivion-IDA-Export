0x6F9D90: push    0FFFFFFFFh
0x6F9D92: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6F9D97: mov     eax, large fs:0
0x6F9D9D: push    eax
0x6F9D9E: push    ecx
0x6F9D9F: push    ebx
0x6F9DA0: push    esi
0x6F9DA1: push    edi
0x6F9DA2: mov     eax, ds:0B30AACh
0x6F9DA7: xor     eax, esp
0x6F9DA9: push    eax
0x6F9DAA: lea     eax, [esp+20h+var_C]
0x6F9DAE: mov     large fs:0, eax
0x6F9DB4: mov     esi, ecx
0x6F9DB6: cmp     dword ptr [esi+488h], 0
0x6F9DBD: jz      short loc_6F9E04
0x6F9DBF: push    18h; Size
0x6F9DC1: call    FormHeapAlloc
0x6F9DC6: add     esp, 4
0x6F9DC9: mov     [esp+20h+var_10], eax
0x6F9DCD: test    eax, eax
0x6F9DCF: mov     [esp+20h+var_4], 0
0x6F9DD7: jz      short loc_6F9DE2
0x6F9DD9: mov     ecx, eax; this
0x6F9DDB: call    ??0BSNodeReferences@@QAE@XZ; BSNodeReferences::BSNodeReferences(void)
0x6F9DE0: jmp     short loc_6F9DE4
0x6F9DE2: xor     eax, eax
0x6F9DE4: lea     edi, [esi+48Ch]
0x6F9DEA: push    eax; a2
0x6F9DEB: mov     ecx, edi; this
0x6F9DED: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6F9DF5: call    NiSmartPointer_Set??
0x6F9DFA: mov     eax, [edi]
0x6F9DFC: push    eax
0x6F9DFD: mov     ecx, esi
0x6F9DFF: call    sub_713E50
0x6F9E04: mov     ecx, esi
0x6F9E06: call    sub_714B20
0x6F9E0B: mov     edi, [esi+48Ch]
0x6F9E11: test    edi, edi
0x6F9E13: mov     bl, al
0x6F9E15: jz      short loc_6F9E3D
0x6F9E17: lea     ecx, [edi+4]
0x6F9E1A: push    ecx; lpAddend
0x6F9E1B: call    dword ptr ds:0A2807Ch
0x6F9E21: test    eax, eax
0x6F9E23: jnz     short loc_6F9E33
0x6F9E25: test    edi, edi
0x6F9E27: jz      short loc_6F9E33
0x6F9E29: mov     edx, [edi]
0x6F9E2B: mov     eax, [edx]
0x6F9E2D: push    1
0x6F9E2F: mov     ecx, edi
0x6F9E31: call    eax
0x6F9E33: mov     dword ptr [esi+48Ch], 0
0x6F9E3D: mov     al, bl
0x6F9E3F: mov     ecx, dword ptr [esp+20h+var_C]
0x6F9E43: mov     large fs:0, ecx
0x6F9E4A: pop     ecx
0x6F9E4B: pop     edi
0x6F9E4C: pop     esi
0x6F9E4D: pop     ebx
0x6F9E4E: add     esp, 10h
0x6F9E51: retn
