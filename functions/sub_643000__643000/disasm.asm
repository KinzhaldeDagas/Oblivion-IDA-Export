0x643000: push    0FFFFFFFFh
0x643002: push    offset SEH_798CC0
0x643007: mov     eax, large fs:0
0x64300D: push    eax
0x64300E: sub     esp, 0Ch
0x643011: push    ebx
0x643012: push    ebp
0x643013: push    esi
0x643014: push    edi
0x643015: mov     eax, ds:0B30AACh
0x64301A: xor     eax, esp
0x64301C: push    eax
0x64301D: lea     eax, [esp+2Ch+var_C]
0x643021: mov     large fs:0, eax
0x643027: mov     esi, ecx
0x643029: mov     ebx, [esp+2Ch+Comperand]
0x64302D: mov     eax, [esp+2Ch+arg_0]
0x643031: push    ebx; int
0x643032: push    eax; Comperand
0x643033: mov     [esp+34h+var_15], 1
0x643038: xor     edi, edi
0x64303A: call    sub_43C070
0x64303F: test    al, al
0x643041: jnz     loc_643115
0x643047: test    edi, edi
0x643049: jnz     short loc_64308C
0x64304B: push    0Ch; Size
0x64304D: call    FormHeapAlloc
0x643052: mov     edi, eax
0x643054: add     esp, 4
0x643057: mov     [esp+2Ch+var_10], edi
0x64305B: test    edi, edi
0x64305D: mov     [esp+2Ch+var_4], 0
0x643065: jz      short loc_643080
0x643067: mov     ecx, [esi]
0x643069: mov     edx, [esp+2Ch+arg_8]
0x64306D: mov     eax, [ecx]
0x64306F: push    edx
0x643070: mov     edx, [eax+24h]
0x643073: push    ebx
0x643074: call    edx
0x643076: push    eax
0x643077: mov     ecx, edi
0x643079: call    sub_4BD150
0x64307E: jmp     short loc_643082
0x643080: xor     eax, eax
0x643082: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x64308A: mov     edi, eax
0x64308C: mov     eax, [esi+14h]
0x64308F: and     eax, 0FFFFFFFEh
0x643092: mov     [esp+2Ch+Comperand], eax
0x643096: mov     eax, [esp+2Ch+Comperand]
0x64309A: and     eax, 0FFFFFFFEh
0x64309D: mov     [esp+2Ch+Comperand], eax
0x6430A1: mov     [esp+2Ch+Exchange], edi
0x6430A5: mov     ecx, [esp+2Ch+Exchange]
0x6430A9: mov     ebp, [esp+2Ch+Comperand]
0x6430AD: mov     edx, [esp+2Ch+Comperand]
0x6430B1: and     ecx, 0FFFFFFFEh
0x6430B4: mov     [esp+2Ch+Exchange], ecx
0x6430B8: mov     eax, [esp+2Ch+Exchange]
0x6430BC: push    ebp; Comperand
0x6430BD: mov     [edi+8], edx
0x6430C0: mov     ecx, [esi+10h]
0x6430C3: push    eax; Exchange
0x6430C4: push    ecx; Destination
0x6430C5: call    dword ptr ds:0A2813Ch
0x6430CB: cmp     eax, ebp
0x6430CD: jz      short loc_643138
0x6430CF: mov     eax, [esp+2Ch+arg_0]
0x6430D3: push    ebx; int
0x6430D4: push    eax; Comperand
0x6430D5: mov     ecx, esi
0x6430D7: call    sub_43C070
0x6430DC: test    al, al
0x6430DE: jz      loc_643047
0x6430E4: test    edi, edi
0x6430E6: jz      short loc_643115
0x6430E8: mov     ebp, [edi+4]
0x6430EB: test    ebp, ebp
0x6430ED: jz      short loc_64310C
0x6430EF: lea     ecx, [ebp+8]
0x6430F2: push    ecx; lpAddend
0x6430F3: call    dword ptr ds:0A2807Ch
0x6430F9: test    eax, eax
0x6430FB: jnz     short loc_64310C
0x6430FD: test    ebp, ebp
0x6430FF: jz      short loc_64310C
0x643101: mov     edx, [ebp+0]
0x643104: mov     eax, [edx]
0x643106: push    1
0x643108: mov     ecx, ebp
0x64310A: call    eax
0x64310C: push    edi
0x64310D: call    FormHeapFree
0x643112: add     esp, 4
0x643115: cmp     [esp+2Ch+arg_C], 0
0x64311A: jz      short loc_643131
0x64311C: mov     ecx, [esp+2Ch+arg_8]
0x643120: push    ecx
0x643121: mov     ecx, [esi+14h]
0x643124: and     ecx, 0FFFFFFFEh
0x643127: add     ecx, 4
0x64312A: call    sub_4348B0
0x64312F: jmp     short loc_643141
0x643131: mov     [esp+2Ch+var_15], 0
0x643136: jmp     short loc_643141
0x643138: mov     ecx, [esi]
0x64313A: mov     edx, [ecx]
0x64313C: mov     eax, [edx+30h]
0x64313F: call    eax
0x643141: mov     ecx, [esi+4]
0x643144: mov     dword ptr [ecx], 0
0x64314A: mov     edx, [esi+8]
0x64314D: mov     dword ptr [edx], 0
0x643153: mov     eax, [esi+0Ch]
0x643156: mov     dword ptr [eax], 0
0x64315C: mov     al, [esp+2Ch+var_15]
0x643160: mov     ecx, [esp+2Ch+var_C]
0x643164: mov     large fs:0, ecx
0x64316B: pop     ecx
0x64316C: pop     edi
0x64316D: pop     esi
0x64316E: pop     ebp
0x64316F: pop     ebx
0x643170: add     esp, 18h
0x643173: retn    10h
