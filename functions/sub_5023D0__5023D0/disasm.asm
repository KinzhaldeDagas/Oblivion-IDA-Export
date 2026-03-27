0x5023D0: sub     esp, 310h
0x5023D6: mov     eax, ds:0B30AACh
0x5023DB: xor     eax, esp
0x5023DD: mov     [esp+310h+var_4], eax
0x5023E4: mov     edx, [esp+310h+a4]
0x5023EB: push    ebx
0x5023EC: mov     ebx, [esp+314h+l]
0x5023F3: push    ebp
0x5023F4: mov     ebp, [esp+318h+arg_1C]
0x5023FB: mov     ecx, [esp+318h+arg_4]
0x502402: mov     eax, [esp+318h+a1]
0x502409: push    esi
0x50240A: mov     esi, [esp+31Ch+arg_C]
0x502411: push    edi
0x502412: mov     edi, [esp+320h+arg_10]
0x502419: mov     [esp+320h+a3], ebp
0x50241D: lea     ebp, [esp+320h+var_310]
0x502421: push    ebp
0x502422: lea     ebp, [esp+324h+Str]
0x502429: push    ebp; UInt16
0x50242A: push    ebx; l
0x50242B: push    edi; a6
0x50242C: push    esi; a5
0x50242D: push    edx; a4
0x50242E: mov     edx, [esp+338h+a3]
0x502432: push    edx; a3
0x502433: push    ecx; a2
0x502434: push    eax; a1
0x502435: mov     [esp+344h+var_310], 0
0x50243D: call    Script_ExtractArgs
0x502442: add     esp, 24h
0x502445: test    al, al
0x502447: jz      loc_5024D9
0x50244D: push    offset EmptyString; lpString2
0x502452: lea     eax, [esp+324h+String1]
0x502456: push    eax; lpString1
0x502457: call    dword ptr ds:0A28164h
0x50245D: lea     ecx, [esp+320h+Str]
0x502464: push    2Eh ; '.'; Val
0x502466: push    ecx; Str
0x502467: call    _strchr
0x50246C: add     esp, 8
0x50246F: mov     esi, eax
0x502471: test    esi, esi
0x502473: lea     edx, [esp+320h+Str]
0x50247A: lea     eax, [esp+320h+String1]
0x50247E: push    edx; lpString2
0x50247F: push    eax; lpString1
0x502480: jz      short loc_50249E
0x502482: mov     edi, ds:0A28160h
0x502488: mov     byte ptr [esi], 0
0x50248B: call    edi ; lstrcatA
0x50248D: push    offset a_ess; ".ess"
0x502492: lea     ecx, [esp+324h+String1]
0x502496: push    ecx; lpString1
0x502497: call    edi ; lstrcatA
0x502499: mov     byte ptr [esi], 2Eh ; '.'
0x50249C: jmp     short loc_5024A4
0x50249E: call    dword ptr ds:0A28160h
0x5024A4: cmp     [esp+320h+var_310], 0
0x5024A9: lea     edx, [esp+320h+String1]
0x5024AD: setnz   cl
0x5024B0: push    ecx; int
0x5024B1: mov     ecx, ds:0B33B00h
0x5024B7: push    edx; Str
0x5024B8: push    0; int
0x5024BA: call    TESSaveLoadGame_SaveGame?
0x5024BF: test    al, al
0x5024C1: jz      short loc_5024CA
0x5024C3: push    offset aGameSaved; "Game Saved"
0x5024C8: jmp     short loc_5024CF
0x5024CA: push    offset aYouCannotSaveR; "You cannot save right now"
0x5024CF: call    Interface_ConsolePrint
0x5024D4: add     esp, 4
0x5024D7: mov     al, 1
0x5024D9: mov     ecx, [esp+320h+var_4]
0x5024E0: pop     edi
0x5024E1: pop     esi
0x5024E2: pop     ebp
0x5024E3: pop     ebx
0x5024E4: xor     ecx, esp
0x5024E6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5024EB: add     esp, 310h
0x5024F1: retn
