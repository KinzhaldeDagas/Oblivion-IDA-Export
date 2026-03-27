0x4847F0: push    ebx
0x4847F1: push    ebp
0x4847F2: mov     ebp, ecx
0x4847F4: push    edi
0x4847F5: mov     edi, [ebp+0]
0x4847F8: xor     ebx, ebx
0x4847FA: test    edi, edi
0x4847FC: jz      short loc_48483E
0x4847FE: push    esi
0x4847FF: nop
0x484800: mov     esi, [edi]
0x484802: test    esi, esi
0x484804: jz      short loc_48483D
0x484806: mov     ecx, esi
0x484808: call    sub_41E850
0x48480D: test    eax, eax
0x48480F: jz      short loc_484836
0x484811: mov     ecx, esi
0x484813: call    sub_41E850
0x484818: mov     ebx, eax
0x48481A: push    0
0x48481C: push    ebx
0x48481D: mov     ecx, esi
0x48481F: call    BaseExtraList_RemoveExtraByPtr
0x484824: cmp     dword ptr [esi+4], 0
0x484828: jnz     short loc_484833
0x48482A: mov     ecx, [ebp+0]
0x48482D: push    esi
0x48482E: call    BSSimpleList_Remove
0x484833: mov     edi, [ebp+0]
0x484836: mov     edi, [edi+4]
0x484839: test    edi, edi
0x48483B: jnz     short loc_484800
0x48483D: pop     esi
0x48483E: pop     edi
0x48483F: pop     ebp
0x484840: mov     eax, ebx
0x484842: pop     ebx
0x484843: retn
