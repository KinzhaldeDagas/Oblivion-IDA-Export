0x4B5690: mov     eax, [esp+arg_0]
0x4B5694: push    esi
0x4B5695: push    edi
0x4B5696: push    0; int
0x4B5698: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x4B569D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B56A2: push    0; int
0x4B56A4: push    eax; void *
0x4B56A5: mov     edi, ecx
0x4B56A7: call    OblivionDynamicCast
0x4B56AC: mov     esi, eax
0x4B56AE: add     esp, 14h
0x4B56B1: test    esi, esi
0x4B56B3: jnz     short loc_4B56BC
0x4B56B5: pop     edi
0x4B56B6: mov     al, 1
0x4B56B8: pop     esi
0x4B56B9: retn    4
0x4B56BC: push    esi; a2
0x4B56BD: mov     ecx, edi; this
0x4B56BF: call    TESForm_CompareAllComponentsTo
0x4B56C4: test    al, al
0x4B56C6: jnz     short loc_4B56B5
0x4B56C8: movzx   eax, byte ptr [edi+88h]
0x4B56CF: lea     ecx, [esi+88h]
0x4B56D5: movzx   esi, byte ptr [ecx]
0x4B56D8: sub     eax, esi
0x4B56DA: lea     edx, [edi+88h]
0x4B56E0: jnz     short loc_4B56F3
0x4B56E2: movzx   eax, byte ptr [edx+1]
0x4B56E6: add     ecx, 1
0x4B56E9: movzx   ecx, byte ptr [ecx]
0x4B56EC: add     edx, 1
0x4B56EF: sub     eax, ecx
0x4B56F1: jz      short loc_4B5709
0x4B56F3: test    eax, eax
0x4B56F5: mov     ecx, 1
0x4B56FA: jg      short loc_4B570B
0x4B56FC: or      ecx, 0FFFFFFFFh
0x4B56FF: test    ecx, ecx
0x4B5701: pop     edi
0x4B5702: setnz   al
0x4B5705: pop     esi
0x4B5706: retn    4
0x4B5709: xor     ecx, ecx
0x4B570B: test    ecx, ecx
0x4B570D: pop     edi
0x4B570E: setnz   al
0x4B5711: pop     esi
0x4B5712: retn    4
