0x6D2A80: push    ecx
0x6D2A81: push    ebp
0x6D2A82: mov     ebp, ecx
0x6D2A84: mov     eax, [ebp+10h]
0x6D2A87: test    eax, eax
0x6D2A89: jz      loc_6D2B22
0x6D2A8F: mov     ecx, [eax+10h]
0x6D2A92: push    ebx
0x6D2A93: mov     bl, [eax+14h]
0x6D2A96: push    esi
0x6D2A97: mov     esi, [eax+8]
0x6D2A9A: test    esi, esi
0x6D2A9C: push    edi
0x6D2A9D: mov     edi, [eax+0Ch]
0x6D2AA0: jnz     short loc_6D2ADA
0x6D2AA2: mov     esi, eax
0x6D2AA4: test    esi, esi
0x6D2AA6: jz      short loc_6D2ACB
0x6D2AA8: lea     eax, [esi+4]
0x6D2AAB: push    eax; lpAddend
0x6D2AAC: call    dword ptr ds:0A2807Ch
0x6D2AB2: test    eax, eax
0x6D2AB4: jnz     short loc_6D2AC4
0x6D2AB6: test    esi, esi
0x6D2AB8: jz      short loc_6D2AC4
0x6D2ABA: mov     edx, [esi]
0x6D2ABC: mov     eax, [edx]
0x6D2ABE: push    1
0x6D2AC0: mov     ecx, esi
0x6D2AC2: call    eax
0x6D2AC4: mov     dword ptr [ebp+10h], 0
0x6D2ACB: fld     dword ptr ds:0A7C6B0h
0x6D2AD1: pop     edi
0x6D2AD2: pop     esi
0x6D2AD3: fstp    dword ptr [ebp+0Ch]
0x6D2AD6: pop     ebx
0x6D2AD7: pop     ebp
0x6D2AD8: pop     ecx
0x6D2AD9: retn
0x6D2ADA: cmp     esi, 1
0x6D2ADD: fld     dword ptr [edi+4]
0x6D2AE0: fstp    [esp+14h+var_4]
0x6D2AE4: fld     [esp+14h+var_4]
0x6D2AE8: jz      short loc_6D2B29
0x6D2AEA: cmp     ecx, 1
0x6D2AED: jz      short loc_6D2AF4
0x6D2AEF: cmp     ecx, 5
0x6D2AF2: jnz     short loc_6D2B1D
0x6D2AF4: mov     dl, 1
0x6D2AF6: mov     ecx, 1
0x6D2AFB: cmp     ecx, esi
0x6D2AFD: jnb     short loc_6D2B25
0x6D2AFF: movzx   eax, bl
0x6D2B02: imul    eax, ecx
0x6D2B05: fld     dword ptr [eax+edi+4]
0x6D2B09: fld     st(1)
0x6D2B0B: fucompp
0x6D2B0D: fnstsw  ax
0x6D2B0F: test    ah, 44h
0x6D2B12: jnp     short loc_6D2B16
0x6D2B14: xor     dl, dl
0x6D2B16: add     ecx, 1
0x6D2B19: test    dl, dl
0x6D2B1B: jnz     short loc_6D2AFB
0x6D2B1D: pop     edi
0x6D2B1E: fstp    st
0x6D2B20: pop     esi
0x6D2B21: pop     ebx
0x6D2B22: pop     ebp
0x6D2B23: pop     ecx
0x6D2B24: retn
0x6D2B25: test    dl, dl
0x6D2B27: jz      short loc_6D2B1D
0x6D2B29: mov     esi, [ebp+10h]
0x6D2B2C: test    esi, esi
0x6D2B2E: jz      short loc_6D2B59
0x6D2B30: lea     ecx, [esi+4]
0x6D2B33: fstp    st
0x6D2B35: push    ecx; lpAddend
0x6D2B36: call    dword ptr ds:0A2807Ch
0x6D2B3C: test    eax, eax
0x6D2B3E: jnz     short loc_6D2B4E
0x6D2B40: test    esi, esi
0x6D2B42: jz      short loc_6D2B4E
0x6D2B44: mov     edx, [esi]
0x6D2B46: mov     eax, [edx]
0x6D2B48: push    1
0x6D2B4A: mov     ecx, esi
0x6D2B4C: call    eax
0x6D2B4E: fld     [esp+14h+var_4]
0x6D2B52: mov     dword ptr [ebp+10h], 0
0x6D2B59: pop     edi
0x6D2B5A: fstp    dword ptr [ebp+0Ch]
0x6D2B5D: pop     esi
0x6D2B5E: pop     ebx
0x6D2B5F: pop     ebp
0x6D2B60: pop     ecx
0x6D2B61: retn
