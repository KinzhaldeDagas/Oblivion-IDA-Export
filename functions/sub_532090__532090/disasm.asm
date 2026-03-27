0x532090: push    0FFFFFFFFh
0x532092: push    offset SEH_532090
0x532097: mov     eax, large fs:0
0x53209D: push    eax
0x53209E: sub     esp, 0Ch
0x5320A1: push    esi
0x5320A2: mov     eax, ds:0B30AACh
0x5320A7: xor     eax, esp
0x5320A9: push    eax
0x5320AA: lea     eax, [esp+20h+var_C]
0x5320AE: mov     large fs:0, eax
0x5320B4: mov     esi, ecx
0x5320B6: mov     [esp+20h+var_18], esi
0x5320BA: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x5320BF: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x5320C5: xor     eax, eax
0x5320C7: mov     ecx, 1
0x5320CC: mov     [esi+0Ch], eax
0x5320CF: mov     [esi+10h], eax
0x5320D2: add     ds:0BA7D70h, ecx
0x5320D8: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x5320DE: add     ds:0BA7F44h, ecx
0x5320E4: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x5320EA: add     ds:0BA7F50h, ecx
0x5320F0: mov     dword ptr [esi], offset ??_7bhkSphereShape@@6B@; const bhkSphereShape::`vftable'
0x5320F6: add     ds:0BA7F80h, ecx
0x5320FC: cmp     byte ptr [esp+20h+arg_4], al
0x532100: mov     [esp+20h+var_4], eax
0x532104: jz      short loc_532112
0x532106: fld     [esp+20h+arg_0]
0x53210A: fmul    qword ptr ds:0A39088h
0x532110: jmp     short loc_532116
0x532112: fld     [esp+20h+arg_0]
0x532116: fstp    [esp+20h+arg_4]
0x53211A: mov     [esp+20h+var_14], eax
0x53211E: mov     eax, [esi]
0x532120: fld     [esp+20h+arg_4]
0x532124: mov     edx, [eax+70h]
0x532127: fstp    [esp+20h+var_10]
0x53212B: lea     ecx, [esp+20h+var_14]
0x53212F: push    ecx
0x532130: mov     ecx, esi
0x532132: call    edx
0x532134: mov     eax, esi
0x532136: mov     ecx, dword ptr [esp+20h+var_C]
0x53213A: mov     large fs:0, ecx
0x532141: pop     ecx
0x532142: pop     esi
0x532143: add     esp, 18h
0x532146: retn    8
