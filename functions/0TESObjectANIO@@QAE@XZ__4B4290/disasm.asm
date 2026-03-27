0x4B4290: push    0FFFFFFFFh
0x4B4292: push    offset ??0TESObjectANIO@@QAE@XZ_SEH
0x4B4297: mov     eax, large fs:0
0x4B429D: push    eax
0x4B429E: push    ecx
0x4B429F: push    esi
0x4B42A0: push    edi
0x4B42A1: mov     eax, ds:0B30AACh
0x4B42A6: xor     eax, esp
0x4B42A8: push    eax
0x4B42A9: lea     eax, [esp+1Ch+var_C]
0x4B42AD: mov     large fs:0, eax
0x4B42B3: mov     esi, ecx
0x4B42B5: mov     [esp+1Ch+var_10], esi
0x4B42B9: call    TESForm_constr
0x4B42BE: lea     edi, [esi+18h]
0x4B42C1: mov     ecx, edi; this
0x4B42C3: mov     [esp+1Ch+var_4], 0
0x4B42CB: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B42D0: mov     dword ptr [esi], offset ??_7TESObjectANIO@@6BTESObjectANIO@@@; const TESObjectANIO::`vftable'{for `TESObjectANIO'}
0x4B42D6: mov     dword ptr [edi], offset ??_7TESObjectANIO@@6BTESModel@@@; const TESObjectANIO::`vftable'{for `TESModel'}
0x4B42DC: mov     byte ptr [esi+4], 41h ; 'A'
0x4B42E0: mov     dword ptr [esi+30h], 0
0x4B42E7: mov     eax, esi
0x4B42E9: mov     ecx, [esp+1Ch+var_C]
0x4B42ED: mov     large fs:0, ecx
0x4B42F4: pop     ecx
0x4B42F5: pop     edi
0x4B42F6: pop     esi
0x4B42F7: add     esp, 10h
0x4B42FA: retn
