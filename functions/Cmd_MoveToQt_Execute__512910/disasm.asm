0x512910: push    ecx
0x512911: mov     ecx, [esp+4+l]
0x512915: mov     edx, [esp+4+arg_10]
0x512919: lea     eax, [esp+4+var_4]
0x51291C: push    eax; UInt16
0x51291D: mov     eax, [esp+8+arg_C]
0x512921: push    ecx; l
0x512922: mov     ecx, [esp+0Ch+a4]
0x512926: push    edx; a6
0x512927: mov     edx, [esp+10h+a3]
0x51292B: push    eax; a5
0x51292C: mov     eax, [esp+14h+arg_4]
0x512930: push    ecx; a4
0x512931: mov     ecx, [esp+18h+a1]
0x512935: push    edx; a3
0x512936: push    eax; a2
0x512937: push    ecx; a1
0x512938: mov     dword ptr [esp+24h+var_4], 1
0x512940: call    Script_ExtractArgs
0x512945: add     esp, 20h
0x512948: test    al, al
0x51294A: jnz     short loc_51294E
0x51294C: pop     ecx
0x51294D: retn
0x51294E: mov     ecx, ds:0B333C4h
0x512954: push    ebx
0x512955: xor     ebx, ebx
0x512957: cmp     [ecx+5F4h], ebx
0x51295D: jz      short loc_5129CA
0x51295F: push    esi
0x512960: call    sub_65D830
0x512965: mov     esi, eax
0x512967: test    esi, esi
0x512969: jnz     short loc_512978
0x51296B: push    offset aNoCurrentTarge; "No current targets"
0x512970: call    Interface_ConsolePrint
0x512975: add     esp, 4
0x512978: push    edi
0x512979: xor     edi, edi
0x51297B: test    esi, esi
0x51297D: jz      short loc_5129C3
0x51297F: nop
0x512980: mov     ecx, [esi]
0x512982: test    ecx, ecx
0x512984: jz      short loc_51299F
0x512986: cmp     edi, dword ptr [esp+10h+var_4]
0x51298A: jge     short loc_51299F
0x51298C: mov     esi, [esi+4]
0x51298F: push    1
0x512991: call    sub_52B440
0x512996: add     edi, 1
0x512999: test    esi, esi
0x51299B: mov     ebx, eax
0x51299D: jnz     short loc_512980
0x51299F: test    ebx, ebx
0x5129A1: jz      short loc_5129C3
0x5129A3: fldz
0x5129A5: mov     edx, ds:0B333C4h
0x5129AB: sub     esp, 0Ch
0x5129AE: fst     [esp+1Ch+var_14]
0x5129B2: fst     [esp+1Ch+var_18]
0x5129B6: fstp    [esp+1Ch+var_1C]
0x5129B9: push    ebx
0x5129BA: push    edx
0x5129BB: call    TESObjectREFR_Move?
0x5129C0: add     esp, 14h
0x5129C3: pop     edi
0x5129C4: pop     esi
0x5129C5: mov     al, 1
0x5129C7: pop     ebx
0x5129C8: pop     ecx
0x5129C9: retn
0x5129CA: push    offset aNoActiveQuest; "No active quest"
0x5129CF: call    Interface_ConsolePrint
0x5129D4: add     esp, 4
0x5129D7: mov     al, 1
0x5129D9: pop     ebx
0x5129DA: pop     ecx
0x5129DB: retn
