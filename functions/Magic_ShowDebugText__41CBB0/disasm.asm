0x41CBB0: push    ebp
0x41CBB1: mov     ebp, esp
0x41CBB3: and     esp, 0FFFFFFC0h
0x41CBB6: sub     esp, 234h
0x41CBBC: mov     eax, ___security_cookie
0x41CBC1: xor     eax, esp
0x41CBC3: mov     [esp+234h+var_4], eax
0x41CBCA: mov     eax, [ebp+arg_8]
0x41CBCD: mov     ecx, [ebp+arg_C]
0x41CBD0: push    ebx
0x41CBD1: mov     ebx, [eax]
0x41CBD3: push    esi
0x41CBD4: push    edi
0x41CBD5: mov     edi, [ebp+arg_0]
0x41CBD8: push    0FFFFFFFFh; int
0x41CBDA: mov     [esp+244h+var_228], ebx
0x41CBDE: fild    [esp+244h+var_228]
0x41CBE2: push    1; int
0x41CBE4: sub     esp, 8
0x41CBE7: mov     [esp+250h+var_220], eax
0x41CBEB: mov     eax, [ecx]
0x41CBED: fstp    [esp+250h+var_24C]; float
0x41CBF1: fild    iDebugTextLeftRightOffset
0x41CBF7: mov     [esp+250h+var_218], ecx
0x41CBFB: mov     [esp+250h+var_21C], eax
0x41CBFF: fstp    [esp+250h+var_250]; float
0x41CC02: push    offset aMagicInfo; "MAGIC INFO"
0x41CC07: call    InterfaceMgr_DebugTextLine
0x41CC0C: mov     esi, [ebp+arg_4]
0x41CC0F: add     esp, 14h
0x41CC12: add     ebx, esi
0x41CC14: push    0FFFFFFFFh; int
0x41CC16: mov     [esp+244h+var_228], ebx
0x41CC1A: fild    [esp+244h+var_228]
0x41CC1E: push    1; int
0x41CC20: sub     esp, 8
0x41CC23: mov     ecx, edi; this
0x41CC25: fstp    [esp+250h+var_24C]; float
0x41CC29: fild    iDebugTextLeftRightOffset
0x41CC2F: fstp    [esp+250h+var_250]; float
0x41CC32: call    TESObjectREFR_GetName
0x41CC37: push    eax; int
0x41CC38: call    InterfaceMgr_DebugTextLine
