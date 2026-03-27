0x4CB8C0: sub     esp, 8
0x4CB8C3: push    ebp
0x4CB8C4: mov     ebp, ecx
0x4CB8C6: push    edi
0x4CB8C7: push    ebp; a2
0x4CB8C8: mov     ecx, offset stru_B35C80; this
0x4CB8CD: mov     [esp+14h+var_5], 0
0x4CB8D2: call    sub_496EA0
0x4CB8D7: mov     ecx, ds:0B333C4h; this
0x4CB8DD: call    TESObjectREFR_GetParentCell
0x4CB8E2: lea     edi, [ebp+48h]
0x4CB8E5: test    edi, edi
0x4CB8E7: mov     [esp+10h+var_4], eax
0x4CB8EB: jz      short loc_4CB95E
0x4CB8ED: push    ebx
0x4CB8EE: mov     bl, [esp+14h+arg_0]
0x4CB8F2: push    esi
0x4CB8F3: mov     esi, [edi]
0x4CB8F5: test    esi, esi
0x4CB8F7: mov     edi, [edi+4]
0x4CB8FA: jz      short loc_4CB951
0x4CB8FC: test    bl, bl
0x4CB8FE: jnz     short loc_4CB91A
0x4CB900: mov     eax, [esi]
0x4CB902: mov     edx, [eax+154h]
0x4CB908: mov     ecx, esi
0x4CB90A: call    edx
0x4CB90C: test    eax, eax
0x4CB90E: jnz     short loc_4CB91A
0x4CB910: mov     eax, [esi+8]
0x4CB913: shr     eax, 0Bh
0x4CB916: test    al, 1
0x4CB918: jz      short loc_4CB951
0x4CB91A: mov     edx, [esi]
0x4CB91C: mov     eax, [edx+190h]
0x4CB922: mov     ecx, esi
0x4CB924: call    eax
0x4CB926: test    al, al
0x4CB928: jz      short loc_4CB931
0x4CB92A: cmp     [esp+18h+arg_4], 0
0x4CB92F: jnz     short loc_4CB951
0x4CB931: mov     ecx, esi
0x4CB933: call    RunScripts
0x4CB938: test    al, al
0x4CB93A: jz      short loc_4CB940
0x4CB93C: test    bl, bl
0x4CB93E: jz      short loc_4CB957
0x4CB940: mov     ecx, ds:0B333C4h; this
0x4CB946: call    TESObjectREFR_GetParentCell
0x4CB94B: cmp     [esp+18h+var_4], eax
0x4CB94F: jnz     short loc_4CB957
0x4CB951: test    edi, edi
0x4CB953: jnz     short loc_4CB8F3
0x4CB955: jmp     short loc_4CB95C
0x4CB957: mov     [esp+18h+var_5], 1
0x4CB95C: pop     esi
0x4CB95D: pop     ebx
0x4CB95E: push    ebp; a2
0x4CB95F: mov     ecx, offset stru_B35C80; this
0x4CB964: call    sub_496F50
0x4CB969: mov     al, [esp+10h+var_5]
0x4CB96D: pop     edi
0x4CB96E: pop     ebp
0x4CB96F: add     esp, 8
0x4CB972: retn    8
