0x6B83B0: push    0FFFFFFFFh
0x6B83B2: push    offset SEH_6B83B0
0x6B83B7: mov     eax, large fs:0
0x6B83BD: push    eax
0x6B83BE: push    ecx
0x6B83BF: push    ebx
0x6B83C0: push    esi
0x6B83C1: push    edi
0x6B83C2: mov     eax, ds:0B30AACh
0x6B83C7: xor     eax, esp
0x6B83C9: push    eax
0x6B83CA: lea     eax, [esp+20h+var_C]
0x6B83CE: mov     large fs:0, eax
0x6B83D4: mov     esi, ecx
0x6B83D6: mov     [esp+20h+var_10], esi
0x6B83DA: xor     eax, eax
0x6B83DC: mov     [esi], eax
0x6B83DE: mov     [esi+4], ax
0x6B83E2: mov     [esi+6], ax
0x6B83E6: lea     edi, [esi+10h]
0x6B83E9: mov     [esp+20h+var_4], eax
0x6B83ED: mov     [edi], eax
0x6B83EF: mov     [edi+4], ax
0x6B83F3: mov     [edi+6], ax
0x6B83F7: mov     ebx, [esp+20h+a6]
0x6B83FB: cmp     ebx, eax
0x6B83FD: mov     byte ptr [esp+20h+var_4], 1
0x6B8402: jz      short loc_6B843B
0x6B8404: push    eax; a3
0x6B8405: mov     ecx, ebx
0x6B8407: call    sub_52E100; ?what@runtime_error@@UBEPBDXZ
0x6B840C: push    eax; a2
0x6B840D: mov     ecx, esi; this
0x6B840F: call    BSStringT_Set
0x6B8414: mov     eax, [ebx]
0x6B8416: mov     edx, [esp+20h+a4]
0x6B841A: push    edi
0x6B841B: mov     [esi+8], eax
0x6B841E: mov     ecx, [ebx+4]
0x6B8421: mov     eax, [esp+24h+a3]
0x6B8425: push    edx
0x6B8426: mov     edx, [esp+28h+a5]
0x6B842A: mov     [esi+0Ch], ecx
0x6B842D: mov     ecx, [esp+28h+a2]
0x6B8431: push    eax
0x6B8432: push    ecx
0x6B8433: push    edx
0x6B8434: mov     ecx, ebx
0x6B8436: call    GenerateVoiceAudioString
0x6B843B: mov     eax, esi
0x6B843D: mov     ecx, [esp+20h+var_C]
0x6B8441: mov     large fs:0, ecx
0x6B8448: pop     ecx
0x6B8449: pop     edi
0x6B844A: pop     esi
0x6B844B: pop     ebx
0x6B844C: add     esp, 10h
0x6B844F: retn    14h
