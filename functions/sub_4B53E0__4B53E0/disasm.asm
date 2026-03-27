0x4B53E0: push    esi
0x4B53E1: mov     esi, ecx
0x4B53E3: mov     eax, [esi+8]
0x4B53E6: shr     eax, 3
0x4B53E9: test    al, 1
0x4B53EB: jnz     short loc_4B542F
0x4B53ED: push    esi
0x4B53EE: lea     ecx, [esi+54h]
0x4B53F1: call    TESScriptableForm_Link
0x4B53F6: push    esi
0x4B53F7: lea     ecx, [esi+60h]
0x4B53FA: call    TESEnchantableForm_LinkComponent
0x4B53FF: movzx   eax, byte ptr [esi+89h]
0x4B5406: cmp     al, 0FFh
0x4B5408: jz      short loc_4B5426
0x4B540A: push    eax
0x4B540B: push    2
0x4B540D: call    ActorValue_GetAVFromGroupOffset
0x4B5412: add     esp, 8
0x4B5415: cmp     eax, 0Ch
0x4B5418: jl      short loc_4B541F
0x4B541A: cmp     eax, 21h ; '!'
0x4B541D: jle     short loc_4B5426
0x4B541F: mov     byte ptr [esi+89h], 0FFh
0x4B5426: push    1; a2
0x4B5428: mov     ecx, esi; this
0x4B542A: call    TESForm_SetIsLinked
0x4B542F: pop     esi
0x4B5430: retn
