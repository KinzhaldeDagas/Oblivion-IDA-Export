0x5F1A60: push    ebp
0x5F1A61: push    esi
0x5F1A62: mov     esi, ecx
0x5F1A64: mov     ebp, [esi+58h]
0x5F1A67: test    ebp, ebp
0x5F1A69: jz      loc_5F1B2A
0x5F1A6F: cmp     [esp+8+arg_0], 9
0x5F1A74: mov     eax, [esi]
0x5F1A76: push    ebx
0x5F1A77: push    edi
0x5F1A78: jnz     short loc_5F1AED
0x5F1AED: mov     edx, [eax+170h]
0x5F1AF3: xor     edi, edi
0x5F1AF5: call    edx
0x5F1AF7: mov     ebx, eax
0x5F1AF9: test    ebx, ebx
0x5F1AFB: jz      short loc_5F1B0F
0x5F1AFD: mov     eax, [esi]
0x5F1AFF: mov     edx, [eax+190h]
0x5F1B05: mov     ecx, esi
0x5F1B07: call    edx
0x5F1B09: test    al, al
0x5F1B0B: jz      short loc_5F1B0F
0x5F1B0D: mov     edi, ebx
0x5F1B0F: mov     ecx, [esp+8+arg_8]
0x5F1B13: mov     eax, [ebp+0]
0x5F1B16: mov     edx, [eax+26Ch]
0x5F1B1C: push    esi
0x5F1B1D: push    ecx
0x5F1B1E: push    edi
0x5F1B1F: mov     ecx, ebp
0x5F1B21: call    edx
0x5F1B23: pop     edi
0x5F1B24: pop     ebx
0x5F1B25: pop     esi
0x5F1B26: pop     ebp
0x5F1B27: retn    4
0x5F1B2A: mov     eax, [esp+8+arg_0]
0x5F1B2E: push    eax
0x5F1B2F: call    Actor_GetBaseCalcAVi
0x5F1B34: mov     [esp+8+arg_0], eax
0x5F1B38: fild    [esp+8+arg_0]
0x5F1B3C: pop     esi
0x5F1B3D: pop     ebp
0x5F1B3E: retn    4
