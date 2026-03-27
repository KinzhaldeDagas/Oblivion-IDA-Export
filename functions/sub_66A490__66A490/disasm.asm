0x66A490: sub     esp, 104h
0x66A496: mov     eax, ds:0B30AACh
0x66A49B: xor     eax, esp
0x66A49D: mov     [esp+104h+var_4], eax
0x66A4A4: push    ebx
0x66A4A5: push    ebp
0x66A4A6: mov     ebp, [esp+10Ch+arg_0]
0x66A4AD: test    ebp, ebp
0x66A4AF: mov     ebx, ecx
0x66A4B1: jz      loc_66A5C5
0x66A4B7: mov     ecx, [ebx+58h]
0x66A4BA: mov     eax, [ecx]
0x66A4BC: mov     edx, [eax+0ECh]
0x66A4C2: push    esi
0x66A4C3: push    edi
0x66A4C4: push    1
0x66A4C6: call    edx
0x66A4C8: mov     esi, eax
0x66A4CA: test    esi, esi
0x66A4CC: jz      short loc_66A4EE
0x66A4CE: mov     eax, [esi+8]
0x66A4D1: push    0; int
0x66A4D3: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x66A4D8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x66A4DD: push    0; int
0x66A4DF: push    eax; void *
0x66A4E0: call    OblivionDynamicCast
0x66A4E5: mov     edi, eax
0x66A4E7: add     esp, 14h
0x66A4EA: test    edi, edi
0x66A4EC: jnz     short loc_66A511
0x66A4EE: mov     eax, ds:0B38CF0h
0x66A4F3: mov     ecx, ds:0B388B0h
0x66A4F9: push    0
0x66A4FB: push    eax
0x66A4FC: push    1
0x66A4FE: push    offset PoisonConfirmCallback
0x66A503: push    ecx
0x66A504: call    ShowUIMessageBox
0x66A509: add     esp, 14h
0x66A50C: jmp     loc_66A5C3
0x66A511: mov     ecx, esi
0x66A513: call    sub_484DF0
0x66A518: test    eax, eax
0x66A51A: jz      short loc_66A53F
0x66A51C: mov     edx, ds:0B38CF0h
0x66A522: mov     eax, ds:0B388B8h
0x66A527: push    0
0x66A529: push    edx
0x66A52A: push    1
0x66A52C: push    offset PoisonConfirmCallback
0x66A531: push    eax
0x66A532: call    ShowUIMessageBox
0x66A537: add     esp, 14h
0x66A53A: jmp     loc_66A5C3
0x66A53F: cmp     byte ptr [edi+90h], 4
0x66A546: jnz     short loc_66A569
0x66A548: mov     ecx, ds:0B38CF0h
0x66A54E: mov     edx, ds:0B388D0h
0x66A554: push    0
0x66A556: push    ecx
0x66A557: push    1
0x66A559: push    offset PoisonConfirmCallback
0x66A55E: push    edx
0x66A55F: call    ShowUIMessageBox
0x66A564: add     esp, 14h
0x66A567: jmp     short loc_66A5C3
0x66A569: mov     [ebx+6E0h], ebp
0x66A56F: cmp     byte ptr [edi+90h], 5
0x66A576: mov     eax, ds:0B388C8h
0x66A57B: jz      short loc_66A582
0x66A57D: mov     eax, ds:0B388C0h
0x66A582: mov     edi, [edi+28h]
0x66A585: test    edi, edi
0x66A587: jnz     short loc_66A58E
0x66A589: mov     edi, offset EmptyString
0x66A58E: push    edi
0x66A58F: push    eax
0x66A590: lea     eax, [esp+11Ch+var_104]
0x66A594: push    offset aSS?_0; "%s%s?"
0x66A599: push    eax
0x66A59A: call    __sprintf
0x66A59F: mov     ecx, ds:0B38D00h
0x66A5A5: mov     edx, ds:0B38CF8h
0x66A5AB: push    0
0x66A5AD: push    ecx
0x66A5AE: push    edx
0x66A5AF: push    2
0x66A5B1: lea     eax, [esp+134h+var_104]
0x66A5B5: push    offset PoisonConfirmCallback
0x66A5BA: push    eax
0x66A5BB: call    ShowUIMessageBox
0x66A5C0: add     esp, 28h
0x66A5C3: pop     edi
0x66A5C4: pop     esi
0x66A5C5: mov     ecx, [esp+10Ch+var_4]
0x66A5CC: pop     ebp
0x66A5CD: pop     ebx
0x66A5CE: xor     ecx, esp
0x66A5D0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x66A5D5: add     esp, 104h
0x66A5DB: retn    4
