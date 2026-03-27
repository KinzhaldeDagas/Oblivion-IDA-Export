0x519530: push    0FFFFFFFFh
0x519532: push    offset ??1BirthSign@@UAE@XZ_SEH
0x519537: mov     eax, large fs:0
0x51953D: push    eax
0x51953E: sub     esp, 10h
0x519541: push    ebx
0x519542: push    esi
0x519543: push    edi
0x519544: mov     eax, ds:0B30AACh
0x519549: xor     eax, esp
0x51954B: push    eax
0x51954C: lea     eax, [esp+2Ch+var_C]
0x519550: mov     large fs:0, eax
0x519556: mov     esi, ecx
0x519558: mov     [esp+2Ch+var_10], esi
0x51955C: lea     edi, [esi+24h]
0x51955F: lea     ebx, [esi+38h]
0x519562: mov     dword ptr [esi], offset ??_7BirthSign@@6BBirthSign@@@; const BirthSign::`vftable'{for `BirthSign'}
0x519568: mov     dword ptr [esi+18h], offset ??_7BirthSign@@6BTESFullName@@@; const BirthSign::`vftable'{for `TESFullName'}
0x51956F: mov     dword ptr [edi], offset ??_7BirthSign@@6BTESTexture@@@; const BirthSign::`vftable'{for `TESTexture'}
0x519575: mov     dword ptr [esi+30h], offset ??_7BirthSign@@6BTESDescription@@@; const BirthSign::`vftable'{for `TESDescription'}
0x51957C: mov     dword ptr [ebx], offset ??_7BirthSign@@6BTESSpellList@@@; const BirthSign::`vftable'{for `TESSpellList'}
0x519582: mov     [esp+2Ch+var_4], 3
0x51958A: call    j_TESForm_ClearComponentReferences
0x51958F: mov     ecx, ebx
0x519591: mov     byte ptr [esp+2Ch+var_4], 2
0x519596: call    TESSpellList_destr?
0x51959B: mov     ecx, edi; void *
0x51959D: mov     byte ptr [esp+2Ch+var_4], 1
0x5195A2: call    TESTexture_destr
0x5195A7: mov     eax, [esi+1Ch]
0x5195AA: push    eax
0x5195AB: call    FormHeapFree
0x5195B0: xor     eax, eax
0x5195B2: add     esp, 4
0x5195B5: mov     ecx, esi; this
0x5195B7: mov     [esi+1Ch], eax
0x5195BA: mov     [esi+22h], ax
0x5195BE: mov     [esi+20h], ax
0x5195C2: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5195CA: call    TESForm_destr
0x5195CF: mov     ecx, [esp+2Ch+var_C]
0x5195D3: mov     large fs:0, ecx
0x5195DA: pop     ecx
0x5195DB: pop     edi
0x5195DC: pop     esi
0x5195DD: pop     ebx
0x5195DE: add     esp, 1Ch
0x5195E1: retn
