0x485353: test    ebx, ebx
0x485355: jz      short ContainerEntryExtraData_GetHealthFracOrUses___Return
0x485357: test    eax, eax
0x485359: jnz     short ContainerEntryExtraData_GetHealthFracOrUses___Return
0x48535B: cmp     byte ptr [esp+arg_14], al
0x48535F: jz      short ContainerEntryExtraData_GetHealthFracOrUses___Return_BaseUseCount
0x485361: mov     ecx, esi
0x485363: call    ContainerEntryExtraData_GetUses
0x485368: test    eax, eax
0x48536A: jz      short ContainerEntryExtraData_GetHealthFracOrUses___Return
0x48536C: mov     ecx, esi
0x48536E: call    ContainerEntryExtraData_GetUses
0x485373: mov     [esp+arg_14], eax
0x485377: fild    [esp+arg_14]
0x48537B: pop     edi
0x48537C: pop     esi
0x48537D: pop     ebx
0x48537E: fstp    [esp-0Ch+arg_8]
0x485381: fld     [esp-0Ch+arg_8]
0x485384: add     esp, 8
0x485387: retn    10h
