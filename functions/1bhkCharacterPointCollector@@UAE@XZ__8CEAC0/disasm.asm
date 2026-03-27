0x8CEAC0: push    0FFFFFFFFh
0x8CEAC2: push    offset ??1bhkCharacterPointCollector@@UAE@XZ_SEH
0x8CEAC7: mov     eax, large fs:0
0x8CEACD: push    eax
0x8CEACE: push    ecx
0x8CEACF: push    ebx
0x8CEAD0: push    ebp
0x8CEAD1: push    esi
0x8CEAD2: push    edi
0x8CEAD3: mov     eax, ds:0B30AACh
0x8CEAD8: xor     eax, esp
0x8CEADA: push    eax
0x8CEADB: lea     eax, [esp+24h+var_C]
0x8CEADF: mov     large fs:0, eax
0x8CEAE5: mov     esi, ecx
0x8CEAE7: mov     [esp+24h+var_10], esi
0x8CEAEB: mov     dword ptr [esi], offset ??_7bhkCharacterPointCollector@@6B@; const bhkCharacterPointCollector::`vftable'
0x8CEAF1: mov     eax, [esi+1A8h]
0x8CEAF7: xor     ebx, ebx
0x8CEAF9: xor     edi, edi
0x8CEAFB: cmp     eax, ebx
0x8CEAFD: mov     [esp+24h+var_4], 3
0x8CEB05: jle     short loc_8CEB29
0x8CEB07: jmp     short loc_8CEB10
0x8CEB09: align 10h
0x8CEB10: mov     eax, [esi+1A4h]
0x8CEB16: mov     ecx, [eax+edi*4]
0x8CEB19: call    sub_8BC730
0x8CEB1E: add     edi, 1
0x8CEB21: cmp     edi, [esi+1A8h]
0x8CEB27: jl      short loc_8CEB10
0x8CEB29: mov     eax, [esi+1ACh]
0x8CEB2F: test    eax, eax
0x8CEB31: mov     edi, ds:0BA9DE4h
0x8CEB37: mov     ebp, large fs:2Ch
0x8CEB3E: js      short loc_8CEB6C
0x8CEB40: mov     ecx, [ebp+edi*4+0]
0x8CEB44: mov     ecx, [ecx+19Ch]
0x8CEB4A: cmp     ecx, ebx
0x8CEB4C: jnz     short loc_8CEB54
0x8CEB4E: mov     ecx, ds:0BA7D9Ch
0x8CEB54: mov     edx, [esi+1A4h]
0x8CEB5A: and     eax, 3FFFFFFFh
0x8CEB5F: add     eax, eax
0x8CEB61: push    14h
0x8CEB63: add     eax, eax
0x8CEB65: push    eax
0x8CEB66: push    edx
0x8CEB67: call    sub_8A75D0
0x8CEB6C: mov     eax, [esi+1ACh]
0x8CEB72: and     eax, 0C0000000h
0x8CEB77: or      eax, 80000000h
0x8CEB7C: mov     [esi+1A4h], ebx
0x8CEB82: mov     [esi+1A8h], ebx
0x8CEB88: mov     [esi+1ACh], eax
0x8CEB8E: mov     eax, [esi+1C4h]
0x8CEB94: test    eax, eax
0x8CEB96: js      short loc_8CEBC6
0x8CEB98: mov     ecx, [ebp+edi*4+0]
0x8CEB9C: mov     ecx, [ecx+19Ch]
0x8CEBA2: cmp     ecx, ebx
0x8CEBA4: jnz     short loc_8CEBAC
0x8CEBA6: mov     ecx, ds:0BA7D9Ch
0x8CEBAC: and     eax, 3FFFFFFFh
0x8CEBB1: lea     edx, [eax+eax*2]
0x8CEBB4: mov     eax, [esi+1BCh]
0x8CEBBA: push    14h
0x8CEBBC: shl     edx, 4
0x8CEBBF: push    edx
0x8CEBC0: push    eax
0x8CEBC1: call    sub_8A75D0
0x8CEBC6: mov     ecx, [esi+1C4h]
0x8CEBCC: and     ecx, 0C0000000h
0x8CEBD2: or      ecx, 80000000h
0x8CEBD8: mov     [esi+1BCh], ebx
0x8CEBDE: mov     [esi+1C0h], ebx
0x8CEBE4: mov     [esi+1C4h], ecx
0x8CEBEA: mov     eax, [esi+1B8h]
0x8CEBF0: test    eax, eax
0x8CEBF2: js      short loc_8CEC20
0x8CEBF4: mov     edx, [ebp+edi*4+0]
0x8CEBF8: mov     ecx, [edx+19Ch]
0x8CEBFE: cmp     ecx, ebx
0x8CEC00: jnz     short loc_8CEC08
0x8CEC02: mov     ecx, ds:0BA7D9Ch
0x8CEC08: and     eax, 3FFFFFFFh
0x8CEC0D: add     eax, eax
0x8CEC0F: push    14h
0x8CEC11: add     eax, eax
0x8CEC13: push    eax
0x8CEC14: mov     eax, [esi+1B0h]
0x8CEC1A: push    eax
0x8CEC1B: call    sub_8A75D0
0x8CEC20: mov     ecx, [esi+1B8h]
0x8CEC26: and     ecx, 0C0000000h
0x8CEC2C: or      ecx, 80000000h
0x8CEC32: mov     [esi+1B0h], ebx
0x8CEC38: mov     [esi+1B4h], ebx
0x8CEC3E: mov     [esi+1B8h], ecx
0x8CEC44: mov     eax, [esi+1C4h]
0x8CEC4A: test    eax, eax
0x8CEC4C: mov     byte ptr [esp+24h+var_4], 2
0x8CEC51: js      short loc_8CEC81
0x8CEC53: mov     edx, [ebp+edi*4+0]
0x8CEC57: mov     ecx, [edx+19Ch]
0x8CEC5D: cmp     ecx, ebx
0x8CEC5F: jnz     short loc_8CEC67
0x8CEC61: mov     ecx, ds:0BA7D9Ch
0x8CEC67: mov     edx, [esi+1BCh]
0x8CEC6D: and     eax, 3FFFFFFFh
0x8CEC72: lea     eax, [eax+eax*2]
0x8CEC75: push    14h
0x8CEC77: shl     eax, 4
0x8CEC7A: push    eax
0x8CEC7B: push    edx
0x8CEC7C: call    sub_8A75D0
0x8CEC81: mov     eax, [esi+1B8h]
0x8CEC87: test    eax, eax
0x8CEC89: mov     byte ptr [esp+24h+var_4], 1
0x8CEC8E: js      short loc_8CECBC
0x8CEC90: mov     ecx, [ebp+edi*4+0]
0x8CEC94: mov     ecx, [ecx+19Ch]
0x8CEC9A: cmp     ecx, ebx
0x8CEC9C: jnz     short loc_8CECA4
0x8CEC9E: mov     ecx, ds:0BA7D9Ch
0x8CECA4: mov     edx, [esi+1B0h]
0x8CECAA: and     eax, 3FFFFFFFh
0x8CECAF: add     eax, eax
0x8CECB1: push    14h
0x8CECB3: add     eax, eax
0x8CECB5: push    eax
0x8CECB6: push    edx
0x8CECB7: call    sub_8A75D0
0x8CECBC: mov     eax, [esi+1ACh]
0x8CECC2: test    eax, eax
0x8CECC4: mov     byte ptr [esp+24h+var_4], bl
0x8CECC8: js      short loc_8CECF6
0x8CECCA: mov     ecx, [ebp+edi*4+0]
0x8CECCE: mov     ecx, [ecx+19Ch]
0x8CECD4: cmp     ecx, ebx
0x8CECD6: jnz     short loc_8CECDE
0x8CECD8: mov     ecx, ds:0BA7D9Ch
0x8CECDE: mov     edx, [esi+1A4h]
0x8CECE4: and     eax, 3FFFFFFFh
0x8CECE9: add     eax, eax
0x8CECEB: push    14h
0x8CECED: add     eax, eax
0x8CECEF: push    eax
0x8CECF0: push    edx
0x8CECF1: call    sub_8A75D0
0x8CECF6: mov     ecx, esi; this
0x8CECF8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8CED00: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x8CED05: mov     ecx, [esp+24h+var_C]
0x8CED09: mov     large fs:0, ecx
0x8CED10: pop     ecx
0x8CED11: pop     edi
0x8CED12: pop     esi
0x8CED13: pop     ebp
0x8CED14: pop     ebx
0x8CED15: add     esp, 10h
0x8CED18: retn
