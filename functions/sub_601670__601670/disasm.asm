0x601670: sub     esp, 14h
0x601673: push    ebx
0x601674: push    ebp
0x601675: push    esi
0x601676: push    edi
0x601677: xor     ebp, ebp
0x601679: mov     [esp+24h+var_14], ecx
0x60167D: xor     ebx, ebx
0x60167F: push    ebp; a2
0x601680: mov     ecx, offset ActorProcessManager_ptr; this
0x601685: mov     [esp+28h+var_8], ebx
0x601689: mov     [esp+28h+var_4], ebp
0x60168D: call    sub_673A50
0x601692: mov     ecx, eax; this
0x601694: call    sub_7616D0
0x601699: mov     esi, eax
0x60169B: test    esi, esi
0x60169D: jz      short loc_6016F6
0x60169F: nop
0x6016A0: cmp     dword ptr [esi+4], 0
0x6016A4: jnz     short loc_6016AB
0x6016A6: cmp     dword ptr [esi], 0
0x6016A9: jz      short loc_6016EE
0x6016AB: mov     edi, [esi]
0x6016AD: mov     ecx, [esp+24h+var_14]; int
0x6016B1: push    1; int
0x6016B3: push    edi; int
0x6016B4: call    sub_5F7A80
0x6016B9: test    al, al
0x6016BB: jz      short loc_6016E7
0x6016BD: test    edi, edi
0x6016BF: jz      short loc_6016E7
0x6016C1: test    ebx, ebx
0x6016C3: jz      short loc_6016E5
0x6016C5: push    8; Size
0x6016C7: call    FormHeapAlloc
0x6016CC: add     esp, 4
0x6016CF: test    eax, eax
0x6016D1: jz      short loc_6016DE
0x6016D3: mov     [eax], ebx
0x6016D5: mov     dword ptr [eax+4], 0
0x6016DC: jmp     short loc_6016E0
0x6016DE: xor     eax, eax
0x6016E0: mov     [eax+4], ebp
0x6016E3: mov     ebp, eax
0x6016E5: mov     ebx, edi
0x6016E7: mov     esi, [esi+4]
0x6016EA: test    esi, esi
0x6016EC: jnz     short loc_6016A0
0x6016EE: mov     [esp+24h+var_4], ebp
0x6016F2: mov     [esp+24h+var_8], ebx
0x6016F6: mov     eax, ds:0B333C4h
0x6016FB: mov     ecx, [esp+24h+var_14]; int
0x6016FF: push    1; int
0x601701: push    eax; int
0x601702: call    sub_5F7A80
0x601707: test    al, al
0x601709: jz      short loc_60171F
0x60170B: mov     ecx, ds:0B333C4h
0x601711: push    ecx
0x601712: lea     ecx, [esp+28h+var_8]
0x601716: call    BSSimpleList_PushFront
0x60171B: mov     ebp, [esp+24h+var_4]
0x60171F: fldz
0x601721: xor     ebx, ebx
0x601723: fstp    [esp+24h+var_10]
0x601727: lea     esi, [esp+24h+var_8]
0x60172B: jmp     short loc_601730
0x60172D: align 10h
0x601730: cmp     dword ptr [esi+4], 0
0x601734: jnz     short loc_60173B
0x601736: cmp     dword ptr [esi], 0
0x601739: jz      short loc_60176D
0x60173B: mov     edi, [esi]
0x60173D: mov     ecx, [esp+24h+var_14]
0x601741: push    edi
0x601742: call    sub_5E68A0
0x601747: fstp    [esp+24h+var_C]
0x60174B: fld     [esp+24h+var_C]
0x60174F: fld     [esp+24h+var_10]
0x601753: fcomp   st(1)
0x601755: fnstsw  ax
0x601757: test    ah, 5
0x60175A: jp      short loc_601764
0x60175C: fstp    [esp+24h+var_10]
0x601760: mov     ebx, edi
0x601762: jmp     short loc_601766
0x601764: fstp    st
0x601766: mov     esi, [esi+4]
0x601769: test    esi, esi
0x60176B: jnz     short loc_601730
0x60176D: test    ebp, ebp
0x60176F: jz      short loc_601783
0x601771: mov     esi, [ebp+4]
0x601774: push    ebp
0x601775: call    FormHeapFree
0x60177A: add     esp, 4
0x60177D: test    esi, esi
0x60177F: mov     ebp, esi
0x601781: jnz     short loc_601771
0x601783: pop     edi
0x601784: pop     esi
0x601785: pop     ebp
0x601786: mov     eax, ebx
0x601788: pop     ebx
0x601789: add     esp, 14h
0x60178C: retn
