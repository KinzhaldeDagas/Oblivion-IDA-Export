0x51F570: push    0FFFFFFFFh
0x51F572: push    offset SEH_51F570
0x51F577: mov     eax, large fs:0
0x51F57D: push    eax
0x51F57E: push    ecx
0x51F57F: push    esi
0x51F580: mov     eax, ds:0B30AACh
0x51F585: xor     eax, esp
0x51F587: push    eax
0x51F588: lea     eax, [esp+18h+var_C]
0x51F58C: mov     large fs:0, eax
0x51F592: mov     esi, ecx
0x51F594: mov     [esp+18h+var_10], esi
0x51F598: xor     eax, eax
0x51F59A: mov     [esi], eax
0x51F59C: mov     [esi+4], ax
0x51F5A0: mov     [esi+6], ax
0x51F5A4: mov     [esp+18h+var_4], eax
0x51F5A8: mov     [esi+8], eax
0x51F5AB: mov     [esi+0Ch], ax
0x51F5AF: mov     [esi+0Eh], ax
0x51F5B3: lea     ecx, [esi+10h]
0x51F5B6: mov     byte ptr [esp+18h+var_4], 1
0x51F5BB: call    TESTexture_constr
0x51F5C0: mov     eax, esi
0x51F5C2: mov     ecx, [esp+18h+var_C]
0x51F5C6: mov     large fs:0, ecx
0x51F5CD: pop     ecx
0x51F5CE: pop     esi
0x51F5CF: add     esp, 10h
0x51F5D2: retn
