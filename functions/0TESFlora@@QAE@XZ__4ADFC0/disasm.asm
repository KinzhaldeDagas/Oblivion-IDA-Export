0x4ADFC0: push    0FFFFFFFFh
0x4ADFC2: push    offset ??0TESFlora@@QAE@XZ_SEH
0x4ADFC7: mov     eax, large fs:0
0x4ADFCD: push    eax
0x4ADFCE: push    ecx
0x4ADFCF: push    esi
0x4ADFD0: push    edi
0x4ADFD1: mov     eax, ds:0B30AACh
0x4ADFD6: xor     eax, esp
0x4ADFD8: push    eax
0x4ADFD9: lea     eax, [esp+1Ch+var_C]
0x4ADFDD: mov     large fs:0, eax
0x4ADFE3: mov     esi, ecx
0x4ADFE5: mov     [esp+1Ch+var_10], esi
0x4ADFE9: call    sub_46E0B0
0x4ADFEE: lea     edi, [esi+0Ch]
0x4ADFF1: mov     ecx, edi; this
0x4ADFF3: call    ??0TESObjectACTI@@QAE@XZ; TESObjectACTI::TESObjectACTI(void)
0x4ADFF8: push    1; a2
0x4ADFFA: mov     ecx, edi; this
0x4ADFFC: mov     [esp+20h+var_4], 0
0x4AE004: mov     dword ptr [esi], offset ??_7TESFlora@@6BTESFlora@@@; const TESFlora::`vftable'{for `TESFlora'}
0x4AE00A: mov     dword ptr [edi], offset ??_7TESFlora@@6BTESObjectACTI@@@; const TESFlora::`vftable'{for `TESObjectACTI'}
0x4AE010: mov     dword ptr [esi+30h], offset ??_7TESFlora@@6BTESFullName@@@; const TESFlora::`vftable'{for `TESFullName'}
0x4AE017: mov     dword ptr [esi+3Ch], offset ??_7TESFlora@@6BTESModel@@@; const TESFlora::`vftable'{for `TESModel'}
0x4AE01E: mov     dword ptr [esi+54h], offset ??_7TESFlora@@6BTESScriptableForm@@@; const TESFlora::`vftable'{for `TESScriptableForm'}
0x4AE025: mov     byte ptr [esi+10h], 1Fh
0x4AE029: call    TESForm_SetIsLinked
0x4AE02E: mov     eax, esi
0x4AE030: mov     ecx, [esp+1Ch+var_C]
0x4AE034: mov     large fs:0, ecx
0x4AE03B: pop     ecx
0x4AE03C: pop     edi
0x4AE03D: pop     esi
0x4AE03E: add     esp, 10h
0x4AE041: retn
