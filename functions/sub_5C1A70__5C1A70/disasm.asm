0x5C1A70: push    ecx
0x5C1A71: cmp     [esp+4+arg_0], 0
0x5C1A76: jz      loc_5C1B77
0x5C1A7C: call    sub_5C1100
0x5C1A81: shl     eax, 4
0x5C1A84: cmp     ds:dword_B3B44C[eax], 0
0x5C1A8B: jz      loc_5C1B77
0x5C1A91: push    ebp
0x5C1A92: push    esi
0x5C1A93: push    edi
0x5C1A94: call    sub_5C1100
0x5C1A99: shl     eax, 4
0x5C1A9C: mov     esi, ds:dword_B3B44C[eax]
0x5C1AA2: call    sub_5C1100
0x5C1AA7: mov     ecx, ds:0B333C4h; this
0x5C1AAD: shl     eax, 4
0x5C1AB0: mov     edi, ds:dword_B3B444[eax]
0x5C1AB6: call    TESObjectREFR_GetContainer
0x5C1ABB: push    eax
0x5C1ABC: mov     eax, ds:0B333C4h
0x5C1AC1: push    eax; a1
0x5C1AC2: call    ContainerExtraData_GetContainerExtraDataForRef
0x5C1AC7: add     esp, 8
0x5C1ACA: test    esi, esi
0x5C1ACC: mov     ebp, eax
0x5C1ACE: jbe     loc_5C1B74
0x5C1AD4: push    ebx
0x5C1AD5: mov     bl, byte ptr [esp+14h+arg_4]
0x5C1AD9: mov     [esp+14h+var_4], esi
0x5C1ADD: lea     ecx, [ecx+0]
0x5C1AE0: mov     esi, [edi+8]
0x5C1AE3: cmp     byte ptr [esi+4], 10h
0x5C1AE7: lea     eax, [edi+8]
0x5C1AEA: mov     edi, [edi]
0x5C1AEC: mov     [esp+14h+arg_4], esi
0x5C1AF0: jz      short loc_5C1B04
0x5C1AF2: test    ebp, ebp
0x5C1AF4: jz      short loc_5C1B04
0x5C1AF6: call    sub_5C1100
0x5C1AFB: push    eax
0x5C1AFC: push    esi
0x5C1AFD: mov     ecx, ebp
0x5C1AFF: call    sub_4895B0
0x5C1B04: movzx   ecx, byte ptr [esi+4]
0x5C1B08: cmp     ecx, [esp+14h+arg_0]
0x5C1B0C: jnz     short loc_5C1B68
0x5C1B0E: push    0; int
0x5C1B10: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5C1B15: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1B1A: push    0; int
0x5C1B1C: push    esi; void *
0x5C1B1D: call    OblivionDynamicCast
0x5C1B22: add     esp, 14h
0x5C1B25: test    eax, eax
0x5C1B27: jz      short loc_5C1B4E
0x5C1B29: test    byte ptr [eax+88h], 1
0x5C1B30: jz      short loc_5C1B43
0x5C1B32: cmp     dword ptr [eax+64h], 0
0x5C1B36: jz      short loc_5C1B43
0x5C1B38: test    bl, bl
0x5C1B3A: jz      short loc_5C1B68
0x5C1B3C: lea     edx, [esp+14h+arg_4]
0x5C1B40: push    edx
0x5C1B41: jmp     short loc_5C1B53
0x5C1B43: test    bl, bl
0x5C1B45: jnz     short loc_5C1B68
0x5C1B47: lea     eax, [esp+14h+arg_4]
0x5C1B4B: push    eax
0x5C1B4C: jmp     short loc_5C1B53
0x5C1B4E: lea     ecx, [esp+14h+arg_4]
0x5C1B52: push    ecx
0x5C1B53: call    sub_5C1100
0x5C1B58: mov     ecx, eax
0x5C1B5A: shl     ecx, 4
0x5C1B5D: add     ecx, offset quickKeyList_ptr
0x5C1B63: call    sub_776690
0x5C1B68: sub     [esp+14h+var_4], 1
0x5C1B6D: jnz     loc_5C1AE0
0x5C1B73: pop     ebx
0x5C1B74: pop     edi
0x5C1B75: pop     esi
0x5C1B76: pop     ebp
0x5C1B77: pop     ecx
0x5C1B78: retn    8
