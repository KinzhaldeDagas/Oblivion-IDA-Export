0x4B4780: mov     eax, [esp+arg_0]
0x4B4784: push    esi
0x4B4785: push    edi
0x4B4786: push    0; int
0x4B4788: push    offset ??_R0?AVTESObjectAPPA@@@8; struct TypeDescriptor *
0x4B478D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B4792: push    0; int
0x4B4794: push    eax; void *
0x4B4795: mov     edi, ecx
0x4B4797: call    OblivionDynamicCast
0x4B479C: mov     esi, eax
0x4B479E: add     esp, 14h
0x4B47A1: test    esi, esi
0x4B47A3: jnz     short loc_4B47AC
0x4B47A5: pop     edi
0x4B47A6: mov     al, 1
0x4B47A8: pop     esi
0x4B47A9: retn    4
0x4B47AC: push    esi; a2
0x4B47AD: mov     ecx, edi; this
0x4B47AF: call    TESForm_CompareAllComponentsTo
0x4B47B4: test    al, al
0x4B47B6: jnz     short loc_4B47A5
0x4B47B8: movzx   eax, byte ptr [edi+78h]
0x4B47BC: movzx   ecx, byte ptr [esi+78h]
0x4B47C0: sub     eax, ecx
0x4B47C2: jz      short loc_4B47DA
0x4B47C4: test    eax, eax
0x4B47C6: mov     ecx, 1
0x4B47CB: jg      short loc_4B47DC
0x4B47CD: or      ecx, 0FFFFFFFFh
0x4B47D0: test    ecx, ecx
0x4B47D2: pop     edi
0x4B47D3: setnz   al
0x4B47D6: pop     esi
0x4B47D7: retn    4
0x4B47DA: xor     ecx, ecx
0x4B47DC: test    ecx, ecx
0x4B47DE: pop     edi
0x4B47DF: setnz   al
0x4B47E2: pop     esi
0x4B47E3: retn    4
