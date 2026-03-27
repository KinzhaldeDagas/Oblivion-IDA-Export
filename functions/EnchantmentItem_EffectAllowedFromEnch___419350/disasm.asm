0x419350: push    esi
0x419351: push    edi
0x419352: mov     edi, [esp+8+arg_0]
0x419356: test    edi, edi
0x419358: jz      EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x41935E: mov     esi, [esp+8+arg_8]
0x419362: test    esi, esi
0x419364: jz      short EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x419366: push    0; int
0x419368: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x41936D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x419372: push    0; int
0x419374: push    edi; void *
0x419375: call    OblivionDynamicCast
0x41937A: add     esp, 14h
0x41937D: test    eax, eax
0x41937F: jz      short EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x419381: cmp     [esp+8+arg_C], 0
0x419386: jz      short loc_419392
0x419388: mov     eax, [esi+58h]
0x41938B: shr     eax, 0Ch
0x41938E: test    al, 1
0x419390: jz      short EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x419392: movzx   eax, byte ptr [edi+4]
0x419396: add     eax, 0FFFFFFECh; switch 15 cases
0x419399: cmp     eax, 0Eh
0x41939C: ja      EnchantmentItem_EffectAllowedFromEnch??___Return_1; jumptable 004193A9 default case, cases 21,23-32
0x4193A2: movzx   ecx, ds:byte_41949C[eax]
0x4193A9: jmp     ds:jpt_4193A9[ecx*4]; switch jump
0x4193B0: mov     edx, [esi+58h]; jumptable 004193A9 cases 33,34
0x4193B3: shr     edx, 5
0x4193B6: test    dl, 1
0x4193B9: jz      short EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x4193BB: mov     ecx, [esp+8+arg_4]
0x4193BF: test    ecx, ecx
0x4193C1: jz      short loc_4193CC
0x4193C3: call    sub_41DF40
0x4193C8: test    al, al
0x4193CA: jnz     short EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x4193CC: mov     eax, [esi+98h]
0x4193D2: cmp     eax, 4B434F4Ch
0x4193D7: jz      short EnchantmentItem_EffectAllowedFromEnch??___Return_0
0x4193D9: cmp     eax, 4E45504Fh
0x4193DE: jnz     EnchantmentItem_EffectAllowedFromEnch??___Return_1; jumptable 004193A9 default case, cases 21,23-32
