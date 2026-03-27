0x7B3BE0: push    0FFFFFFFFh
0x7B3BE2: push    offset SEH_7B3BE0
0x7B3BE7: mov     eax, large fs:0
0x7B3BED: push    eax
0x7B3BEE: push    ecx
0x7B3BEF: push    ebx
0x7B3BF0: push    ebp
0x7B3BF1: push    esi
0x7B3BF2: push    edi
0x7B3BF3: mov     eax, ds:0B30AACh
0x7B3BF8: xor     eax, esp
0x7B3BFA: push    eax
0x7B3BFB: lea     eax, [esp+24h+var_C]
0x7B3BFF: mov     large fs:0, eax
0x7B3C05: mov     edi, ds:0B2C35Ch
0x7B3C0B: cmp     edi, 1
0x7B3C0E: jg      short loc_7B3C14
0x7B3C10: mov     ebp, edi
0x7B3C12: jmp     short loc_7B3C4A
0x7B3C14: mov     ebx, [esp+24h+arg_4]
0x7B3C18: mov     eax, edi
0x7B3C1A: cdq
0x7B3C1B: sub     eax, edx
0x7B3C1D: mov     ecx, eax
0x7B3C1F: mov     esi, ebx
0x7B3C21: shr     esi, 10h
0x7B3C24: movsx   eax, si
0x7B3C27: cdq
0x7B3C28: idiv    edi
0x7B3C2A: sar     ecx, 1
0x7B3C2C: mov     eax, ecx
0x7B3C2E: sub     eax, edx
0x7B3C30: add     esi, eax
0x7B3C32: movsx   eax, bx
0x7B3C35: cdq
0x7B3C36: idiv    edi
0x7B3C38: movsx   eax, si
0x7B3C3B: shl     eax, 10h
0x7B3C3E: sub     ecx, edx
0x7B3C40: add     ecx, ebx
0x7B3C42: movzx   ecx, cx
0x7B3C45: movzx   ebp, cx
0x7B3C48: or      ebp, eax
0x7B3C4A: mov     ebx, [esp+24h+arg_0]
0x7B3C4E: mov     edi, [esp+24h+arg_8]
0x7B3C52: xor     esi, esi
0x7B3C54: push    ebx
0x7B3C55: mov     [edi], esi
0x7B3C57: call    sub_7B2AA0
0x7B3C5C: add     esp, 4
0x7B3C5F: cmp     eax, esi
0x7B3C61: mov     [esp+24h+a2], eax
0x7B3C65: jnz     short loc_7B3C7E
0x7B3C67: xor     ax, ax
0x7B3C6A: mov     ecx, [esp+24h+var_C]
0x7B3C6E: mov     large fs:0, ecx
0x7B3C75: pop     ecx
0x7B3C76: pop     edi
0x7B3C77: pop     esi
0x7B3C78: pop     ebp
0x7B3C79: pop     ebx
0x7B3C7A: add     esp, 10h
0x7B3C7D: retn
0x7B3C7E: mov     edx, [ebx+8]
0x7B3C81: lea     ecx, [esp+24h+arg_8]
0x7B3C85: push    ecx
0x7B3C86: push    edx
0x7B3C87: mov     ecx, offset off_B2C33C
0x7B3C8C: mov     [esp+2Ch+arg_8], esi
0x7B3C90: call    NiTMap_GetAt
0x7B3C95: test    al, al
0x7B3C97: jnz     short loc_7B3CDE
0x7B3C99: push    30h ; '0'; Size
0x7B3C9B: call    FormHeapAlloc
0x7B3CA0: add     esp, 4
0x7B3CA3: cmp     eax, esi
0x7B3CA5: jz      short loc_7B3CB0
0x7B3CA7: mov     ecx, eax
0x7B3CA9: call    sub_7B3B70
0x7B3CAE: mov     esi, eax
0x7B3CB0: mov     eax, [esp+24h+a2]
0x7B3CB4: push    eax; a2
0x7B3CB5: lea     ecx, [esi+1Ch]; this
0x7B3CB8: call    NiSmartPointer_Set??
0x7B3CBD: mov     ecx, [ebx]
0x7B3CBF: mov     [esi], ecx
0x7B3CC1: mov     edx, [ebx+4]
0x7B3CC4: mov     [esi+4], edx
0x7B3CC7: mov     eax, [ebx+8]
0x7B3CCA: mov     [esi+8], eax
0x7B3CCD: mov     ecx, [ebx+8]
0x7B3CD0: push    esi; a3
0x7B3CD1: push    ecx; a2
0x7B3CD2: mov     ecx, offset off_B2C33C; this
0x7B3CD7: call    NiTMap_SetAt
0x7B3CDC: jmp     short loc_7B3CE2
0x7B3CDE: mov     esi, [esp+24h+arg_8]
0x7B3CE2: mov     ecx, [edi]
0x7B3CE4: mov     eax, [esi+10h]
0x7B3CE7: add     esi, 0Ch
0x7B3CEA: test    ecx, ecx
0x7B3CEC: jnz     short loc_7B3D17
0x7B3CEE: test    eax, eax
0x7B3CF0: jz      short loc_7B3D11
0x7B3CF2: lea     ecx, [eax+8]
0x7B3CF5: mov     ecx, [ecx]
0x7B3CF7: mov     dx, [ecx+0Eh]
0x7B3CFB: cmp     dx, [ecx+0Ch]
0x7B3CFF: mov     eax, [eax]
0x7B3D01: jz      short loc_7B3D08
0x7B3D03: cmp     ebp, [ecx+24h]
0x7B3D06: jz      short loc_7B3D0F
0x7B3D08: cmp     dword ptr [edi], 0
0x7B3D0B: jz      short loc_7B3CEE
0x7B3D0D: jmp     short loc_7B3D11
0x7B3D0F: mov     [edi], ecx
0x7B3D11: mov     ecx, [edi]
0x7B3D13: test    ecx, ecx
0x7B3D15: jz      short loc_7B3D21
0x7B3D17: mov     ax, [ecx+0Ch]
0x7B3D1B: sub     ax, [ecx+0Eh]
0x7B3D1F: jnz     short loc_7B3D86
0x7B3D21: push    28h ; '('; Size
0x7B3D23: call    FormHeapAlloc
0x7B3D28: add     esp, 4
0x7B3D2B: mov     [esp+24h+arg_8], eax
0x7B3D2F: test    eax, eax
0x7B3D31: mov     [esp+24h+var_4], 0
0x7B3D39: jz      short loc_7B3D4C
0x7B3D3B: mov     ecx, [esp+24h+a2]
0x7B3D3F: push    0
0x7B3D41: push    ebp
0x7B3D42: push    ecx
0x7B3D43: mov     ecx, eax
0x7B3D45: call    sub_802E00
0x7B3D4A: jmp     short loc_7B3D4E
0x7B3D4C: xor     eax, eax
0x7B3D4E: mov     [edi], eax
0x7B3D50: add     dword ptr ds:0B42D5Ch, 1
0x7B3D57: mov     ecx, [edi]
0x7B3D59: push    ebx
0x7B3D5A: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7B3D62: call    sub_802A90
0x7B3D67: push    edi
0x7B3D68: mov     ecx, esi
0x7B3D6A: call    sub_5B1E20
0x7B3D6F: mov     ecx, ds:0B42D64h
0x7B3D75: mov     eax, [edi]
0x7B3D77: mov     edx, [ecx]
0x7B3D79: mov     eax, [eax]
0x7B3D7B: mov     edx, [edx+84h]
0x7B3D81: push    1
0x7B3D83: push    eax
0x7B3D84: call    edx
0x7B3D86: mov     edi, [edi]
0x7B3D88: movzx   ecx, word ptr [edi+0Eh]
0x7B3D8C: movzx   eax, word ptr [edi+0Ch]
0x7B3D90: sub     eax, ecx
0x7B3D92: mov     ecx, [esp+24h+var_C]
0x7B3D96: mov     large fs:0, ecx
0x7B3D9D: pop     ecx
0x7B3D9E: pop     edi
0x7B3D9F: pop     esi
0x7B3DA0: pop     ebp
0x7B3DA1: pop     ebx
0x7B3DA2: add     esp, 10h
0x7B3DA5: retn
