0x5195F0: push    0FFFFFFFFh
0x5195F2: push    offset ??0BirthSign@@QAE@XZ_SEH
0x5195F7: mov     eax, large fs:0
0x5195FD: push    eax
0x5195FE: push    ecx
0x5195FF: push    ebx
0x519600: push    ebp
0x519601: push    esi
0x519602: push    edi
0x519603: mov     eax, ds:0B30AACh
0x519608: xor     eax, esp
0x51960A: push    eax
0x51960B: lea     eax, [esp+24h+var_C]
0x51960F: mov     large fs:0, eax
0x519615: mov     esi, ecx
0x519617: mov     [esp+24h+var_10], esi
0x51961B: call    TESForm_constr
0x519620: xor     eax, eax
0x519622: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x519629: mov     [esp+24h+var_4], eax
0x51962D: mov     [esi+1Ch], eax
0x519630: mov     [esi+20h], ax
0x519634: mov     [esi+22h], ax
0x519638: lea     edi, [esi+24h]
0x51963B: mov     ecx, edi
0x51963D: mov     byte ptr [esp+24h+var_4], 1
0x519642: call    TESTexture_constr
0x519647: lea     ebx, [esi+30h]
0x51964A: mov     ecx, ebx
0x51964C: mov     byte ptr [esp+24h+var_4], 2
0x519651: call    TESDescription_constr
0x519656: lea     ebp, [esi+38h]
0x519659: mov     ecx, ebp
0x51965B: call    TESSpellList_constr
0x519660: push    1; a2
0x519662: mov     ecx, esi; this
0x519664: mov     byte ptr [esp+28h+var_4], 3
0x519669: mov     dword ptr [esi], offset ??_7BirthSign@@6BBirthSign@@@; const BirthSign::`vftable'{for `BirthSign'}
0x51966F: mov     dword ptr [esi+18h], offset ??_7BirthSign@@6BTESFullName@@@; const BirthSign::`vftable'{for `TESFullName'}
0x519676: mov     dword ptr [edi], offset ??_7BirthSign@@6BTESTexture@@@; const BirthSign::`vftable'{for `TESTexture'}
0x51967C: mov     dword ptr [ebx], offset ??_7BirthSign@@6BTESDescription@@@; const BirthSign::`vftable'{for `TESDescription'}
0x519682: mov     dword ptr [ebp+0], offset ??_7BirthSign@@6BTESSpellList@@@; const BirthSign::`vftable'{for `TESSpellList'}
0x519689: mov     byte ptr [esi+4], 11h
0x51968D: call    TESForm_SetIsLinked
0x519692: mov     eax, esi
0x519694: mov     ecx, [esp+24h+var_C]
0x519698: mov     large fs:0, ecx
0x51969F: pop     ecx
0x5196A0: pop     edi
0x5196A1: pop     esi
0x5196A2: pop     ebp
0x5196A3: pop     ebx
0x5196A4: add     esp, 10h
0x5196A7: retn
