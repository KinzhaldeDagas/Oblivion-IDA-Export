0x450080: push    ecx
0x450081: push    esi
0x450082: mov     esi, ecx
0x450084: mov     eax, [esi+10h]
0x450087: test    eax, eax
0x450089: jnz     short loc_450090
0x45008B: xor     al, al
0x45008D: pop     esi
0x45008E: pop     ecx
0x45008F: retn
0x450090: mov     edx, [eax+4]
0x450093: push    edi
0x450094: push    1
0x450096: lea     ecx, [esp+10h+var_4]
0x45009A: push    ecx
0x45009B: push    14h
0x45009D: lea     edi, [esi+23Ch]
0x4500A3: push    edi
0x4500A4: push    eax
0x4500A5: mov     [esp+20h+var_4], 1
0x4500AD: call    edx
0x4500AF: add     esp, 14h
0x4500B2: test    eax, eax
0x4500B4: jnz     short loc_4500CA
0x4500B6: mov     [edi], eax
0x4500B8: mov     [edi+4], eax
0x4500BB: mov     [edi+8], eax
0x4500BE: mov     [edi+0Ch], eax
0x4500C1: mov     [edi+10h], eax
0x4500C4: pop     edi
0x4500C5: xor     al, al
0x4500C7: pop     esi
0x4500C8: pop     ecx
0x4500C9: retn
0x4500CA: mov     edi, [edi]
0x4500CC: cmp     edi, ds:0B05E20h
0x4500D2: jz      loc_45017E
0x4500D8: cmp     edi, ds:0B06138h
0x4500DE: jz      loc_45017E
0x4500E4: xor     eax, eax
0x4500E6: cmp     [esi+3F4h], eax
0x4500EC: jz      short loc_450100
0x4500EE: movzx   eax, byte ptr [esi+24Bh]
0x4500F5: add     eax, 1
0x4500F8: push    eax
0x4500F9: mov     ecx, esi
0x4500FB: call    TESFile_GetMasterByIndex
0x450100: mov     ecx, [esi+248h]
0x450106: mov     edi, ecx
0x450108: and     edi, 0FF000000h
0x45010E: cmp     edi, 0FF000000h
0x450114: mov     dl, 1
0x450116: jnz     short loc_45011A
0x450118: xor     dl, dl
0x45011A: test    eax, eax
0x45011C: jz      short loc_45013C
0x45011E: movzx   edx, byte ptr [eax+400h]
0x450125: shl     edx, 18h
0x450128: and     ecx, 0FFFFFFh
0x45012E: or      edx, ecx
0x450130: pop     edi
0x450131: mov     [esi+248h], edx
0x450137: mov     al, 1
0x450139: pop     esi
0x45013A: pop     ecx
0x45013B: retn
0x45013C: test    dl, dl
0x45013E: jz      short loc_450160
0x450140: and     ecx, 0FFFFFFh
0x450146: push    ecx
0x450147: call    TESForm_IsFormIDBuiltin
0x45014C: add     esp, 4
0x45014F: test    al, al
0x450151: jz      short loc_450160
0x450153: pop     edi
0x450154: mov     byte ptr [esi+24Bh], 0
0x45015B: mov     al, 1
0x45015D: pop     esi
0x45015E: pop     ecx
0x45015F: retn
0x450160: movzx   eax, byte ptr [esi+400h]
0x450167: mov     ecx, [esi+248h]
0x45016D: shl     eax, 18h
0x450170: and     ecx, 0FFFFFFh
0x450176: or      eax, ecx
0x450178: mov     [esi+248h], eax
0x45017E: pop     edi
0x45017F: mov     al, 1
0x450181: pop     esi
0x450182: pop     ecx
0x450183: retn
