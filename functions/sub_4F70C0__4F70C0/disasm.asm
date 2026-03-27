0x4F70C0: fldz
0x4F70C2: mov     eax, [esp+arg_4]
0x4F70C6: push    ebx
0x4F70C7: mov     ebx, [esp+4+arg_C]
0x4F70CB: push    esi
0x4F70CC: fstp    qword ptr [ebx]
0x4F70CE: push    edi
0x4F70CF: xor     edi, edi
0x4F70D1: test    eax, eax
0x4F70D3: jz      short loc_4F70DD
0x4F70D5: cmp     byte ptr [eax+4], 6
0x4F70D9: jnz     short loc_4F70DD
0x4F70DB: mov     edi, eax
0x4F70DD: mov     esi, [esp+0Ch+arg_0]
0x4F70E1: cmp     esi, ds:0B3619Ch
0x4F70E7: jnz     short loc_4F70FB
0x4F70E9: cmp     edi, ds:0B36198h
0x4F70EF: jnz     short loc_4F70FB
0x4F70F1: fld     dword ptr ds:0B361A0h
0x4F70F7: fstp    qword ptr [ebx]
0x4F70F9: jmp     short loc_4F7169
0x4F70FB: test    esi, esi
0x4F70FD: jz      loc_4F7187
0x4F7103: mov     eax, [esi]
0x4F7105: mov     edx, [eax+190h]
0x4F710B: mov     ecx, esi
0x4F710D: call    edx
0x4F710F: test    al, al
0x4F7111: jz      short loc_4F7187
0x4F7113: push    1; a2
0x4F7115: mov     ecx, esi; this
0x4F7117: call    Actor_GetActorBaseForm
0x4F711C: cmp     dword ptr [eax+40h], 0
0x4F7120: jnz     short loc_4F7131
0x4F7122: cmp     dword ptr [eax+3Ch], 0
0x4F7126: jnz     short loc_4F7131
0x4F7128: push    0; a2
0x4F712A: mov     ecx, esi; this
0x4F712C: call    Actor_GetActorBaseForm
0x4F7131: test    eax, eax
0x4F7133: jz      short loc_4F7155
0x4F7135: test    edi, edi
0x4F7137: jz      short loc_4F7155
0x4F7139: cmp     esi, ds:0B333C4h
0x4F713F: setz    cl
0x4F7142: push    ecx
0x4F7143: push    edi
0x4F7144: lea     ecx, [eax+24h]
0x4F7147: call    TESActorBaseData_GetFactionRank
0x4F714C: cmp     eax, 0FFFFFFFFh
0x4F714F: jz      short loc_4F7155
0x4F7151: fld1
0x4F7153: fstp    qword ptr [ebx]
0x4F7155: fld     qword ptr [ebx]
0x4F7157: mov     ds:0B3619Ch, esi
0x4F715D: fstp    dword ptr ds:0B361A0h
0x4F7163: mov     ds:0B36198h, edi
0x4F7169: cmp     byte ptr ds:0B361ACh, 0
0x4F7170: jz      short loc_4F7187
0x4F7172: fld     qword ptr [ebx]
0x4F7174: sub     esp, 8
0x4F7177: fstp    [esp+14h+var_14]
0x4F717A: push    offset aGetinfaction0_; "GetInFaction >> %0.2f"
0x4F717F: call    Interface_ConsolePrint
0x4F7184: add     esp, 0Ch
0x4F7187: pop     edi
0x4F7188: pop     esi
0x4F7189: mov     al, 1
0x4F718B: pop     ebx
0x4F718C: retn
