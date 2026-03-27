0x4CC980: push    ecx
0x4CC981: push    ebx
0x4CC982: push    ebp
0x4CC983: mov     ebp, [esp+0Ch+arg_0]
0x4CC987: push    esi
0x4CC988: mov     esi, ecx
0x4CC98A: xor     bl, bl
0x4CC98C: test    ebp, ebp
0x4CC98E: mov     [esp+10h+var_4], esi
0x4CC992: jz      loc_4CCA3E
0x4CC998: mov     eax, [ebp+0]
0x4CC99B: mov     edx, [eax+170h]
0x4CC9A1: mov     ecx, ebp
0x4CC9A3: call    edx
0x4CC9A5: cmp     eax, ds:0B33AA8h
0x4CC9AB: jnz     loc_4CCA3E
0x4CC9B1: push    edi
0x4CC9B2: push    esi; a2
0x4CC9B3: mov     ecx, offset stru_B35C80; this
0x4CC9B8: call    sub_496EA0
0x4CC9BD: lea     edi, [esi+48h]
0x4CC9C0: test    edi, edi
0x4CC9C2: jz      short loc_4CCA32
0x4CC9C4: mov     esi, [edi]
0x4CC9C6: test    esi, esi
0x4CC9C8: jz      short loc_4CCA27
0x4CC9CA: mov     eax, [esi+8]
0x4CC9CD: mov     ecx, eax
0x4CC9CF: shr     ecx, 5
0x4CC9D2: test    cl, 1
0x4CC9D5: jnz     short loc_4CCA27
0x4CC9D7: shr     eax, 0Bh
0x4CC9DA: test    al, 1
0x4CC9DC: jnz     short loc_4CCA27
0x4CC9DE: mov     edx, [esi]
0x4CC9E0: mov     eax, [edx+170h]
0x4CC9E6: mov     ecx, esi
0x4CC9E8: call    eax
0x4CC9EA: mov     al, [eax+4]
0x4CC9ED: cmp     al, 1Ah
0x4CC9EF: mov     byte ptr [esp+14h+arg_0], al
0x4CC9F3: jz      short loc_4CCA47
0x4CC9F5: mov     ecx, [esp+14h+arg_0]
0x4CC9F9: push    ecx
0x4CC9FA: call    TESContainer_IsInventoryItemType
0x4CC9FF: add     esp, 4
0x4CCA02: test    al, al
0x4CCA04: jz      short loc_4CCA27
0x4CCA06: push    0
0x4CCA08: push    0
0x4CCA0A: lea     ecx, [esi+44h]
0x4CCA0D: call    ExtraDataList_GetExtraCount
0x4CCA12: movsx   edx, ax
0x4CCA15: push    edx
0x4CCA16: push    esi
0x4CCA17: mov     ecx, ebp
0x4CCA19: call    sub_4DDC40
0x4CCA1E: mov     ecx, esi
0x4CCA20: call    sub_4D7D80
0x4CCA25: mov     bl, 1
0x4CCA27: mov     edi, [edi+4]
0x4CCA2A: test    edi, edi
0x4CCA2C: jnz     short loc_4CC9C4
0x4CCA2E: mov     esi, [esp+14h+var_4]
0x4CCA32: push    esi; a2
0x4CCA33: mov     ecx, offset stru_B35C80; this
0x4CCA38: call    sub_496F50
0x4CCA3D: pop     edi
0x4CCA3E: pop     esi
0x4CCA3F: pop     ebp
0x4CCA40: mov     al, bl
0x4CCA42: pop     ebx
0x4CCA43: pop     ecx
0x4CCA44: retn    4
0x4CCA47: mov     edx, [esi]
0x4CCA49: mov     eax, [edx+170h]
0x4CCA4F: mov     ecx, esi
0x4CCA51: call    eax
0x4CCA53: mov     ecx, [eax+7Ch]
0x4CCA56: shr     ecx, 1
0x4CCA58: test    cl, 1
0x4CCA5B: jmp     short loc_4CCA04
