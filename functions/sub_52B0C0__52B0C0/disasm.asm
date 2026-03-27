0x52B0C0: push    ebx
0x52B0C1: push    ebp
0x52B0C2: push    esi
0x52B0C3: mov     esi, [esp+0Ch+arg_0]
0x52B0C7: push    edi
0x52B0C8: mov     edi, ecx
0x52B0CA: lea     ecx, [edi+4]
0x52B0CD: test    ecx, ecx
0x52B0CF: jz      short loc_52B0D7
0x52B0D1: push    esi
0x52B0D2: call    sub_56A480
0x52B0D7: mov     bl, ds:0B06B18h
0x52B0DD: mov     ebp, ds:0B34D88h
0x52B0E3: push    esi
0x52B0E4: lea     ecx, [edi+0Ch]
0x52B0E7: mov     byte ptr ds:0B06B18h, 1
0x52B0EE: mov     dword ptr ds:0B34D88h, 0
0x52B0F8: call    sub_4FBB60
0x52B0FD: mov     eax, ds:0B34D88h
0x52B102: test    eax, eax
0x52B104: mov     ds:0B06B18h, bl
0x52B10A: mov     ds:0B34D88h, ebp
0x52B110: jz      short loc_52B13A
0x52B112: mov     eax, [esi+0Ch]
0x52B115: mov     ecx, [esp+10h+arg_4]
0x52B119: mov     edx, [esi]
0x52B11B: mov     bl, [ecx]
0x52B11D: push    eax
0x52B11E: mov     eax, [edx+0D4h]
0x52B124: mov     ecx, esi
0x52B126: call    eax
0x52B128: movzx   ecx, bl
0x52B12B: push    eax
0x52B12C: push    ecx; ArgList
0x52B12D: push    offset aErrorsWereEn_5; "Errors were encountered during InitItem"...
0x52B132: call    PrintError
0x52B137: add     esp, 10h
0x52B13A: push    0; int
0x52B13C: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x52B141: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52B146: push    0; int
0x52B148: push    esi; void *
0x52B149: call    OblivionDynamicCast
0x52B14E: add     esp, 14h
0x52B151: mov     [edi+68h], eax
0x52B154: pop     edi
0x52B155: pop     esi
0x52B156: pop     ebp
0x52B157: pop     ebx
0x52B158: retn    8
