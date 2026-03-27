0x4849C0: push    ecx
0x4849C1: push    esi
0x4849C2: push    edi
0x4849C3: push    0; int
0x4849C5: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x4849CA: mov     esi, ecx
0x4849CC: mov     eax, [esi+8]
0x4849CF: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4849D4: push    0; int
0x4849D6: push    eax; void *
0x4849D7: call    OblivionDynamicCast
0x4849DC: mov     edi, eax
0x4849DE: add     esp, 14h
0x4849E1: test    edi, edi
0x4849E3: jz      short loc_484A2F
0x4849E5: mov     eax, [esi]
0x4849E7: test    eax, eax
0x4849E9: jz      short loc_484A20
0x4849EB: mov     esi, [eax]
0x4849ED: test    esi, esi
0x4849EF: jz      short loc_484A20
0x4849F1: mov     ecx, esi
0x4849F3: call    ExtraDataList_GetCharge
0x4849F8: fcomp   dword ptr ds:0A30634h
0x4849FE: fnstsw  ax
0x484A00: test    ah, 44h
0x484A03: jnp     short loc_484A11
0x484A05: pop     edi
0x484A06: mov     ecx, esi
0x484A08: pop     esi
0x484A09: add     esp, 4
0x484A0C: jmp     ExtraDataList_GetCharge
0x484A11: movzx   ecx, word ptr [edi+8]
0x484A15: mov     [esp+0Ch+var_4], ecx
0x484A19: pop     edi
0x484A1A: pop     esi
0x484A1B: fild    [esp+4+var_4]
0x484A1E: pop     ecx
0x484A1F: retn
0x484A20: movzx   edx, word ptr [edi+8]
0x484A24: mov     [esp+0Ch+var_4], edx
0x484A28: pop     edi
0x484A29: pop     esi
0x484A2A: fild    [esp+4+var_4]
0x484A2D: pop     ecx
0x484A2E: retn
0x484A2F: fld     dword ptr ds:0A30634h
0x484A35: pop     edi
0x484A36: pop     esi
0x484A37: pop     ecx
0x484A38: retn
