0x4F9640: push    0FFFFFFFFh
0x4F9642: push    offset ??1TESGlobal@@UAE@XZ_SEH
0x4F9647: mov     eax, large fs:0
0x4F964D: push    eax
0x4F964E: push    ecx
0x4F964F: push    esi
0x4F9650: mov     eax, ds:0B30AACh
0x4F9655: xor     eax, esp
0x4F9657: push    eax
0x4F9658: lea     eax, [esp+18h+var_C]
0x4F965C: mov     large fs:0, eax
0x4F9662: mov     esi, ecx
0x4F9664: mov     [esp+18h+var_10], esi
0x4F9668: mov     dword ptr [esi], offset ??_7TESGlobal@@6B@; const TESGlobal::`vftable'
0x4F966E: mov     [esp+18h+var_4], 1
0x4F9676: call    j_TESForm_ClearComponentReferences
0x4F967B: mov     eax, [esi+18h]
0x4F967E: push    eax
0x4F967F: call    FormHeapFree
0x4F9684: xor     eax, eax
0x4F9686: add     esp, 4
0x4F9689: mov     ecx, esi; this
0x4F968B: mov     [esi+18h], eax
0x4F968E: mov     [esi+1Eh], ax
0x4F9692: mov     [esi+1Ch], ax
0x4F9696: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4F969E: call    TESForm_destr
0x4F96A3: mov     ecx, [esp+18h+var_C]
0x4F96A7: mov     large fs:0, ecx
0x4F96AE: pop     ecx
0x4F96AF: pop     esi
0x4F96B0: add     esp, 10h
0x4F96B3: retn
