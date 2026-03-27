0x6BB960: push    0FFFFFFFFh
0x6BB962: push    offset SEH_6BB960
0x6BB967: mov     eax, large fs:0
0x6BB96D: push    eax
0x6BB96E: sub     esp, 8
0x6BB971: push    ebx
0x6BB972: push    ebp
0x6BB973: push    esi
0x6BB974: push    edi
0x6BB975: mov     eax, ds:0B30AACh
0x6BB97A: xor     eax, esp
0x6BB97C: push    eax
0x6BB97D: lea     eax, [esp+28h+var_C]
0x6BB981: mov     large fs:0, eax
0x6BB987: mov     ebp, [esp+28h+size]
0x6BB98B: xor     ecx, ecx
0x6BB98D: mov     eax, ebp
0x6BB98F: mov     edx, 10h
0x6BB994: mul     edx
0x6BB996: seto    cl
0x6BB999: mov     ebx, 4
0x6BB99E: neg     ecx
0x6BB9A0: or      ecx, eax
0x6BB9A2: xor     eax, eax
0x6BB9A4: add     ecx, ebx
0x6BB9A6: setb    al
0x6BB9A9: neg     eax
0x6BB9AB: or      eax, ecx
0x6BB9AD: push    eax; Size
0x6BB9AE: call    FormHeapAlloc
0x6BB9B3: add     esp, 4
0x6BB9B6: mov     [esp+28h+size], eax
0x6BB9BA: xor     edi, edi
0x6BB9BC: cmp     eax, edi
0x6BB9BE: mov     [esp+28h+var_4], edi
0x6BB9C2: jz      short loc_6BB9E2
0x6BB9C4: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BB9C9: push    offset sub_7616D0; a4
0x6BB9CE: push    ebp; size
0x6BB9CF: lea     esi, [eax+4]
0x6BB9D2: push    10h; a2
0x6BB9D4: push    esi; a1
0x6BB9D5: mov     [eax], ebp
0x6BB9D7: call    ArrayConstructor
0x6BB9DC: mov     [esp+28h+size], esi
0x6BB9E0: jmp     short loc_6BB9E8
0x6BB9E2: mov     [esp+28h+size], edi
0x6BB9E6: mov     esi, edi
0x6BB9E8: cmp     ebp, edi
0x6BB9EA: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6BB9F2: jbe     short loc_6BBA61
0x6BB9F4: mov     edi, [esp+28h+arg_0]
0x6BB9F8: add     esi, 0Ch
0x6BB9FB: jmp     short loc_6BBA00
0x6BB9FD: align 10h
0x6BBA00: push    edi
0x6BBA01: lea     ecx, [esi-0Ch]
0x6BBA04: call    sub_6BB5E0
0x6BBA09: mov     eax, [edi+21Ch]
0x6BBA0F: push    1
0x6BBA11: lea     ecx, [esp+2Ch+var_14]
0x6BBA15: push    ecx
0x6BBA16: push    ebx
0x6BBA17: lea     edx, [esi-4]
0x6BBA1A: push    edx
0x6BBA1B: push    eax
0x6BBA1C: mov     eax, [eax+4]
0x6BBA1F: mov     [esp+3Ch+var_14], ebx
0x6BBA23: call    eax
0x6BBA25: mov     eax, [edi+21Ch]
0x6BBA2B: mov     edx, [eax+4]
0x6BBA2E: push    1
0x6BBA30: lea     ecx, [esp+40h+var_10]
0x6BBA34: push    ecx
0x6BBA35: push    ebx
0x6BBA36: push    esi
0x6BBA37: push    eax
0x6BBA38: mov     [esp+50h+var_10], ebx
0x6BBA3C: call    edx
0x6BBA3E: add     esp, 28h
0x6BBA41: add     esi, 10h
0x6BBA44: sub     ebp, 1
0x6BBA47: jnz     short loc_6BBA00
0x6BBA49: mov     eax, [esp+28h+size]
0x6BBA4D: mov     ecx, [esp+28h+var_C]
0x6BBA51: mov     large fs:0, ecx
0x6BBA58: pop     ecx
0x6BBA59: pop     edi
0x6BBA5A: pop     esi
0x6BBA5B: pop     ebp
0x6BBA5C: pop     ebx
0x6BBA5D: add     esp, 14h
0x6BBA60: retn
0x6BBA61: mov     eax, esi
0x6BBA63: mov     ecx, [esp+28h+var_C]
0x6BBA67: mov     large fs:0, ecx
0x6BBA6E: pop     ecx
0x6BBA6F: pop     edi
0x6BBA70: pop     esi
0x6BBA71: pop     ebp
0x6BBA72: pop     ebx
0x6BBA73: add     esp, 14h
0x6BBA76: retn
