0x4190C0: push    esi
0x4190C1: mov     esi, [esp+4+arg_0]
0x4190C5: push    edi
0x4190C6: push    0; int
0x4190C8: push    offset ??_R0?AVTESObject@@@8; struct TypeDescriptor *
0x4190CD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4190D2: push    0; int
0x4190D4: push    esi; void *
0x4190D5: mov     edi, ecx
0x4190D7: call    OblivionDynamicCast
0x4190DC: add     esp, 14h
0x4190DF: test    eax, eax
0x4190E1: jz      def_4190FE; jumptable 004190FE default case, cases 23-32
0x4190E7: movzx   ecx, byte ptr [eax+4]
0x4190EB: add     ecx, 0FFFFFFECh; switch 15 cases
0x4190EE: cmp     ecx, 0Eh
0x4190F1: ja      def_4190FE; jumptable 004190FE default case, cases 23-32
0x4190F7: movzx   ecx, ds:byte_4191EC[ecx]
0x4190FE: jmp     ds:jpt_4190FE[ecx*4]; switch jump
0x419105: xor     eax, eax; jumptable 004190FE case 34
0x419107: cmp     dword ptr [edi+34h], 2
0x41910B: pop     edi
0x41910C: setz    al
0x41910F: pop     esi
0x419110: retn    4
0x419113: push    0; jumptable 004190FE case 33
0x419115: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x41911A: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x41911F: push    0; int
0x419121: push    eax; void *
0x419122: call    OblivionDynamicCast
0x419127: add     esp, 14h
0x41912A: test    eax, eax
0x41912C: jz      def_4190FE; jumptable 004190FE default case, cases 23-32
0x419132: cmp     byte ptr [eax+90h], 4
0x419139: jnz     short loc_419105; jumptable 004190FE case 34
0x41913B: xor     eax, eax
0x41913D: cmp     dword ptr [edi+34h], 1
0x419141: pop     edi
0x419142: setz    al
0x419145: pop     esi
0x419146: retn    4
0x419149: push    20000h; jumptable 004190FE case 20
0x41914E: lea     ecx, [edi+24h]
0x419151: call    EffectItemList_HasEffectWithFlags
0x419156: test    al, al
0x419158: jnz     short loc_41916A
0x41915A: cmp     dword ptr [edi+34h], 3
0x41915E: jnz     short loc_41916A
0x419160: pop     edi
0x419161: mov     eax, 1
0x419166: pop     esi
0x419167: retn    4
0x41916A: pop     edi
0x41916B: xor     eax, eax
0x41916D: pop     esi
0x41916E: retn    4
0x419171: push    0; jumptable 004190FE case 22
0x419173: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x419178: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41917D: push    0; int
0x41917F: push    esi; void *
0x419180: call    OblivionDynamicCast
0x419185: add     esp, 14h
0x419188: test    eax, eax
0x41918A: jz      short def_4190FE; jumptable 004190FE default case, cases 23-32
0x41918C: mov     ecx, eax
0x41918E: call    sub_469050
0x419193: test    al, al
0x419195: jnz     short loc_4191A8
0x419197: push    20000h
0x41919C: lea     ecx, [edi+24h]
0x41919F: call    EffectItemList_HasEffectWithFlags
0x4191A4: test    al, al
0x4191A6: jnz     short def_4190FE; jumptable 004190FE default case, cases 23-32
0x4191A8: xor     eax, eax
0x4191AA: cmp     dword ptr [edi+34h], 3
0x4191AE: pop     edi
0x4191AF: setz    al
0x4191B2: pop     esi
0x4191B3: retn    4
0x4191B6: test    byte ptr [eax+88h], 1; jumptable 004190FE case 21
0x4191BD: jz      short def_4190FE; jumptable 004190FE default case, cases 23-32
0x4191BF: xor     eax, eax
0x4191C1: cmp     [edi+34h], eax
0x4191C4: pop     edi
0x4191C5: setz    al
0x4191C8: pop     esi
0x4191C9: retn    4
0x4191CC: pop     edi; jumptable 004190FE default case, cases 23-32
0x4191CD: xor     al, al
0x4191CF: pop     esi
0x4191D0: retn    4
