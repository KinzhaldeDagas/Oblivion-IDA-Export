0x51D4C0: call    TESActorBase_CanUseWeaponAndShield
0x51D4C5: test    al, al
0x51D4C7: jz      short def_51D4E0; jumptable 0051D4E0 default case, cases 21-25,27-32
0x51D4C9: mov     ecx, [esp+arg_0]
0x51D4CD: movzx   eax, byte ptr [ecx+4]
0x51D4D1: add     eax, 0FFFFFFECh; switch 15 cases
0x51D4D4: cmp     eax, 0Eh
0x51D4D7: ja      short def_51D4E0; jumptable 0051D4E0 default case, cases 21-25,27-32
0x51D4D9: movzx   eax, ds:byte_51D528[eax]
0x51D4E0: jmp     ds:jpt_51D4E0[eax*4]; switch jump
0x51D4E7: push    0; jumptable 0051D4E0 case 20
0x51D4E9: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x51D4EE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51D4F3: push    0; int
0x51D4F5: push    ecx; void *
0x51D4F6: call    OblivionDynamicCast
0x51D4FB: add     esp, 14h
0x51D4FE: test    eax, eax
0x51D500: jz      short def_51D4E0; jumptable 0051D4E0 default case, cases 21-25,27-32
0x51D502: push    0
0x51D504: push    0Dh
0x51D506: lea     ecx, [eax+64h]
0x51D509: call    TESBipedModelForm_CoversSlot
0x51D50E: test    al, al
0x51D510: jz      short def_51D4E0; jumptable 0051D4E0 default case, cases 21-25,27-32
0x51D512: mov     al, 1; jumptable 0051D4E0 cases 26,33,34
0x51D514: retn    4
0x51D517: xor     al, al; jumptable 0051D4E0 default case, cases 21-25,27-32
0x51D519: retn    4
