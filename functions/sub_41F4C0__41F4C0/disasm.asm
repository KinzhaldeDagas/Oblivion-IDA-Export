0x41F4C0: push    0FFFFFFFFh
0x41F4C2: push    offset SEH_8C62B0
0x41F4C7: mov     eax, large fs:0
0x41F4CD: push    eax
0x41F4CE: push    ecx
0x41F4CF: push    esi
0x41F4D0: mov     eax, ___security_cookie
0x41F4D5: xor     eax, esp
0x41F4D7: push    eax
0x41F4D8: lea     eax, [esp+18h+var_C]
0x41F4DC: mov     large fs:0, eax
0x41F4E2: mov     esi, ecx
0x41F4E4: push    1Eh; a2
0x41F4E6: call    BaseExtraList_GetExtraData
0x41F4EB: test    eax, eax
0x41F4ED: jnz     short loc_41F54E
0x41F4EF: push    20h ; ' '; Size
0x41F4F1: call    FormHeapAlloc
0x41F4F6: add     esp, 4
0x41F4F9: mov     [esp+18h+var_10], eax
0x41F4FD: test    eax, eax
0x41F4FF: mov     [esp+18h+var_4], 0
0x41F507: jz      short loc_41F529
0x41F509: fld     [esp+18h+arg_C]
0x41F50D: mov     edx, [esp+18h+arg_4]
0x41F511: push    ecx
0x41F512: mov     ecx, [esp+1Ch+arg_8]
0x41F516: fstp    [esp+1Ch+var_1C]; float
0x41F519: push    ecx; int
0x41F51A: mov     ecx, [esp+20h+arg_0]
0x41F51E: push    edx; int
0x41F51F: push    ecx; int
0x41F520: mov     ecx, eax
0x41F522: call    sub_42AE70
0x41F527: jmp     short loc_41F52B
0x41F529: xor     eax, eax
0x41F52B: push    eax; BSExtraData *
0x41F52C: mov     ecx, esi; ExtraDataList *
0x41F52E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41F536: call    BaseExtraList_AddExtra
0x41F53B: mov     ecx, [esp+18h+var_C]
0x41F53F: mov     large fs:0, ecx
0x41F546: pop     ecx
0x41F547: pop     esi
0x41F548: add     esp, 10h
0x41F54B: retn    10h
0x41F54E: mov     ecx, [esp+18h+arg_0]
0x41F552: test    ecx, ecx
0x41F554: jz      short loc_41F55B
0x41F556: mov     [eax+0Ch], ecx
0x41F559: jmp     short loc_41F562
0x41F55B: mov     edx, [esp+18h+arg_4]
0x41F55F: mov     [eax+0Ch], edx
0x41F562: mov     ecx, [esp+18h+arg_8]
0x41F566: mov     edx, [ecx]
0x41F568: mov     [eax+10h], edx
0x41F56B: mov     edx, [ecx+4]
0x41F56E: mov     [eax+14h], edx
0x41F571: mov     ecx, [ecx+8]
0x41F574: mov     [eax+18h], ecx
0x41F577: mov     ecx, [esp+18h+var_C]
0x41F57B: mov     large fs:0, ecx
0x41F582: pop     ecx
0x41F583: pop     esi
0x41F584: add     esp, 10h
0x41F587: retn    10h
