0x4D9A70: push    0FFFFFFFFh
0x4D9A72: push    offset TESObjectREFR_constr_SEH
0x4D9A77: mov     eax, large fs:0
0x4D9A7D: push    eax
0x4D9A7E: push    ecx
0x4D9A7F: push    esi
0x4D9A80: mov     eax, ds:0B30AACh
0x4D9A85: xor     eax, esp
0x4D9A87: push    eax
0x4D9A88: lea     eax, [esp+18h+var_C]
0x4D9A8C: mov     large fs:0, eax
0x4D9A92: mov     esi, ecx
0x4D9A94: mov     [esp+18h+var_10], esi
0x4D9A98: call    TESForm_constr
0x4D9A9D: mov     dword ptr [esi+18h], offset ??_7TESChildCell@@6B@; const TESChildCell::`vftable'
0x4D9AA4: mov     dword ptr [esi], offset ??_7TESObjectREFR@@6BTESObjectREFR@@@; const TESObjectREFR::`vftable'{for `TESObjectREFR'}
0x4D9AAA: mov     dword ptr [esi+18h], offset ??_7TESObjectREFR@@6BTESChildCell@@@; const TESObjectREFR::`vftable'{for `TESChildCell'}
0x4D9AB1: mov     [esp+18h+var_4], 0
0x4D9AB9: mov     dword ptr [esi+3Ch], 0
0x4D9AC0: lea     ecx, [esi+44h]
0x4D9AC3: mov     byte ptr [esp+18h+var_4], 1
0x4D9AC8: call    ExtraDataList_constr
0x4D9ACD: mov     ecx, esi
0x4D9ACF: mov     byte ptr [esp+18h+var_4], 2
0x4D9AD4: mov     byte ptr [esi+4], 31h ; '1'
0x4D9AD8: call    TESObjectREFR_InitializeAllComponents
0x4D9ADD: xor     eax, eax
0x4D9ADF: mov     [esi+1Ch], eax
0x4D9AE2: mov     [esi+20h], eax
0x4D9AE5: mov     [esi+24h], eax
0x4D9AE8: mov     [esi+28h], eax
0x4D9AEB: mov     [esi+2Ch], eax
0x4D9AEE: mov     [esi+30h], eax
0x4D9AF1: mov     [esi+34h], eax
0x4D9AF4: mov     [esi+40h], eax
0x4D9AF7: mov     eax, esi
0x4D9AF9: mov     ecx, [esp+18h+var_C]
0x4D9AFD: mov     large fs:0, ecx
0x4D9B04: pop     ecx
0x4D9B05: pop     esi
0x4D9B06: add     esp, 10h
0x4D9B09: retn
