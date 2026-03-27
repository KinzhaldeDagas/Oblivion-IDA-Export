0x513160: mov     eax, [esp+arg_0]
0x513164: push    esi
0x513165: mov     esi, [eax+10h]
0x513168: test    esi, esi
0x51316A: jz      short loc_5131DB
0x51316C: mov     edx, [esi]
0x51316E: mov     eax, [edx+4]
0x513171: mov     ecx, esi
0x513173: call    eax
0x513175: test    eax, eax
0x513177: jz      short loc_51318E
0x513179: lea     esp, [esp+0]
0x513180: cmp     eax, offset dword_BA7D84
0x513185: jz      short loc_5131DD
0x513187: mov     eax, [eax+4]
0x51318A: test    eax, eax
0x51318C: jnz     short loc_513180
0x51318E: xor     al, al
0x513190: neg     al
0x513192: sbb     eax, eax
0x513194: and     eax, esi
0x513196: mov     esi, eax
0x513198: jz      short loc_5131DB
0x51319A: mov     ecx, [esi+8]
0x51319D: test    ecx, ecx
0x51319F: push    edi
0x5131A0: mov     edi, [esp+8+arg_4]
0x5131A4: fld     dword ptr [edi+0Ch]
0x5131A7: fstp    [esp+8+arg_0]
0x5131AB: jz      short loc_5131BA
0x5131AD: fld     [esp+8+arg_0]
0x5131B1: push    ecx
0x5131B2: fstp    [esp+0Ch+var_C]
0x5131B5: call    sub_8A9900
0x5131BA: mov     ecx, [esi+8]
0x5131BD: test    ecx, ecx
0x5131BF: jz      short loc_5131DA
0x5131C1: call    sub_8A98D0
0x5131C6: test    eax, eax
0x5131C8: jz      short loc_5131DA
0x5131CA: mov     edx, [eax]
0x5131CC: fld     dword ptr [edi+0Ch]
0x5131CF: push    ecx
0x5131D0: mov     ecx, eax
0x5131D2: fstp    [esp+0Ch+var_C]
0x5131D5: mov     eax, [edx+20h]
0x5131D8: call    eax
0x5131DA: pop     edi
0x5131DB: pop     esi
0x5131DC: retn
0x5131DD: mov     al, 1
0x5131DF: jmp     short loc_513190
