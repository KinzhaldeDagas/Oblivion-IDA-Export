0x5E7A60: push    ecx
0x5E7A61: push    ebx
0x5E7A62: push    esi
0x5E7A63: add     ecx, 9Ch ; 'œ'
0x5E7A69: push    edi
0x5E7A6A: push    8; Size
0x5E7A6C: mov     [esp+14h+var_4], ecx
0x5E7A70: mov     ebx, ecx
0x5E7A72: call    FormHeapAlloc
0x5E7A77: add     esp, 4
0x5E7A7A: test    eax, eax
0x5E7A7C: jz      short loc_5E7A8F
0x5E7A7E: mov     dword ptr [eax], 0
0x5E7A84: mov     dword ptr [eax+4], 0
0x5E7A8B: mov     esi, eax
0x5E7A8D: jmp     short loc_5E7A91
0x5E7A8F: xor     esi, esi
0x5E7A91: test    ebx, ebx
0x5E7A93: jz      short loc_5E7AF2
0x5E7A95: mov     edi, [ebx]
0x5E7A97: test    edi, edi
0x5E7A99: mov     ebx, [ebx+4]
0x5E7A9C: jz      short loc_5E7AEE
0x5E7A9E: fldz
0x5E7AA0: fcomp   dword ptr [edi+4]
0x5E7AA3: fnstsw  ax
0x5E7AA5: test    ah, 1
0x5E7AA8: jnz     short loc_5E7AE4
0x5E7AAA: cmp     dword ptr [esi], 0
0x5E7AAD: jz      short loc_5E7AE0
0x5E7AAF: push    8; Size
0x5E7AB1: call    FormHeapAlloc
0x5E7AB6: add     esp, 4
0x5E7AB9: test    eax, eax
0x5E7ABB: jz      short loc_5E7AD5
0x5E7ABD: mov     ecx, [esi]
0x5E7ABF: mov     [eax], ecx
0x5E7AC1: mov     dword ptr [eax+4], 0
0x5E7AC8: mov     edx, [esi+4]
0x5E7ACB: mov     [eax+4], edx
0x5E7ACE: mov     [esi+4], eax
0x5E7AD1: mov     [esi], edi
0x5E7AD3: jmp     short loc_5E7AEE
0x5E7AD5: mov     edx, [esi+4]
0x5E7AD8: xor     eax, eax
0x5E7ADA: mov     [eax+4], edx
0x5E7ADD: mov     [esi+4], eax
0x5E7AE0: mov     [esi], edi
0x5E7AE2: jmp     short loc_5E7AEE
0x5E7AE4: fld     dword ptr [edi+4]
0x5E7AE7: fsub    [esp+10h+arg_0]
0x5E7AEB: fstp    dword ptr [edi+4]
0x5E7AEE: test    ebx, ebx
0x5E7AF0: jnz     short loc_5E7A95
0x5E7AF2: test    esi, esi
0x5E7AF4: mov     edi, esi
0x5E7AF6: jz      short loc_5E7B0F
0x5E7AF8: mov     eax, [edi]
0x5E7AFA: test    eax, eax
0x5E7AFC: jz      short loc_5E7B0F
0x5E7AFE: mov     ecx, [esp+10h+var_4]
0x5E7B02: push    eax
0x5E7B03: call    BSSimpleList_Remove
0x5E7B08: mov     edi, [edi+4]
0x5E7B0B: test    edi, edi
0x5E7B0D: jnz     short loc_5E7AF8
0x5E7B0F: cmp     dword ptr [esi+4], 0
0x5E7B13: jz      short loc_5E7B2B
0x5E7B15: mov     eax, [esi+4]
0x5E7B18: mov     edi, [eax+4]
0x5E7B1B: push    eax
0x5E7B1C: call    FormHeapFree
0x5E7B21: add     esp, 4
0x5E7B24: test    edi, edi
0x5E7B26: mov     [esi+4], edi
0x5E7B29: jnz     short loc_5E7B15
0x5E7B2B: push    esi
0x5E7B2C: mov     dword ptr [esi], 0
0x5E7B32: call    FormHeapFree
0x5E7B37: add     esp, 4
0x5E7B3A: pop     edi
0x5E7B3B: pop     esi
0x5E7B3C: pop     ebx
0x5E7B3D: pop     ecx
0x5E7B3E: retn    4
