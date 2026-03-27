0x4BC710: mov     eax, [esp+arg_0]
0x4BC714: sub     esp, 18h
0x4BC717: push    esi
0x4BC718: push    edi
0x4BC719: push    0; int
0x4BC71B: push    offset ??_R0?AVTESSubSpace@@@8; struct TypeDescriptor *
0x4BC720: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BC725: push    0; int
0x4BC727: push    eax; void *
0x4BC728: mov     edi, ecx
0x4BC72A: call    OblivionDynamicCast
0x4BC72F: mov     esi, eax
0x4BC731: add     esp, 14h
0x4BC734: test    esi, esi
0x4BC736: jnz     short loc_4BC742
0x4BC738: pop     edi
0x4BC739: mov     al, 1
0x4BC73B: pop     esi
0x4BC73C: add     esp, 18h
0x4BC73F: retn    4
0x4BC742: push    esi; a2
0x4BC743: mov     ecx, edi; this
0x4BC745: call    TESForm_CompareAllComponentsTo
0x4BC74A: test    al, al
0x4BC74C: jnz     short loc_4BC738
0x4BC74E: movzx   ecx, word ptr [esi+24h]
0x4BC752: movzx   edx, word ptr [esi+26h]
0x4BC756: movzx   eax, word ptr [esi+28h]
0x4BC75A: mov     [esp+20h+arg_0], ecx
0x4BC75E: movzx   ecx, word ptr [edi+24h]
0x4BC762: fild    [esp+20h+arg_0]
0x4BC766: mov     [esp+20h+arg_0], edx
0x4BC76A: movzx   edx, word ptr [edi+26h]
0x4BC76E: fstp    [esp+20h+var_18]
0x4BC772: fild    [esp+20h+arg_0]
0x4BC776: mov     [esp+20h+arg_0], eax
0x4BC77A: movzx   eax, word ptr [edi+28h]
0x4BC77E: fstp    [esp+20h+var_14]
0x4BC782: fild    [esp+20h+arg_0]
0x4BC786: mov     [esp+20h+arg_0], ecx
0x4BC78A: lea     ecx, [esp+20h+var_18]
0x4BC78E: fstp    [esp+20h+var_10]
0x4BC792: push    ecx
0x4BC793: fild    [esp+24h+arg_0]
0x4BC797: mov     [esp+24h+arg_0], edx
0x4BC79B: lea     ecx, [esp+24h+var_C]
0x4BC79F: fstp    [esp+24h+var_C]
0x4BC7A3: fild    [esp+24h+arg_0]
0x4BC7A7: mov     [esp+24h+arg_0], eax
0x4BC7AB: fstp    [esp+24h+var_8]
0x4BC7AF: fild    [esp+24h+arg_0]
0x4BC7B3: fstp    [esp+24h+var_4]
0x4BC7B7: call    sub_8AA390
0x4BC7BC: test    al, al
0x4BC7BE: pop     edi
0x4BC7BF: setnz   al
0x4BC7C2: pop     esi
0x4BC7C3: add     esp, 18h
0x4BC7C6: retn    4
