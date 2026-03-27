0x4AE660: push    0FFFFFFFFh
0x4AE662: push    offset ??0TESFurniture@@QAE@XZ_SEH
0x4AE667: mov     eax, large fs:0
0x4AE66D: push    eax
0x4AE66E: push    ecx
0x4AE66F: push    esi
0x4AE670: mov     eax, ds:0B30AACh
0x4AE675: xor     eax, esp
0x4AE677: push    eax
0x4AE678: lea     eax, [esp+18h+var_C]
0x4AE67C: mov     large fs:0, eax
0x4AE682: mov     esi, ecx
0x4AE684: mov     [esp+18h+var_10], esi
0x4AE688: call    ??0TESObjectACTI@@QAE@XZ; TESObjectACTI::TESObjectACTI(void)
0x4AE68D: xor     eax, eax
0x4AE68F: mov     ecx, esi
0x4AE691: mov     [esp+18h+var_4], eax
0x4AE695: mov     dword ptr [esi], offset ??_7TESFurniture@@6BTESFurniture@@@; const TESFurniture::`vftable'{for `TESFurniture'}
0x4AE69B: mov     dword ptr [esi+24h], offset ??_7TESFurniture@@6BTESFullName@@@; const TESFurniture::`vftable'{for `TESFullName'}
0x4AE6A2: mov     dword ptr [esi+30h], offset ??_7TESFurniture@@6BTESModel@@@; const TESFurniture::`vftable'{for `TESModel'}
0x4AE6A9: mov     dword ptr [esi+48h], offset ??_7TESFurniture@@6BTESScriptableForm@@@; const TESFurniture::`vftable'{for `TESScriptableForm'}
0x4AE6B0: mov     byte ptr [esi+4], 20h ; ' '
0x4AE6B4: mov     [esi+58h], eax
0x4AE6B7: call    sub_4B3C90
0x4AE6BC: push    1; a2
0x4AE6BE: mov     ecx, esi; this
0x4AE6C0: call    TESForm_SetIsLinked
0x4AE6C5: mov     eax, esi
0x4AE6C7: mov     ecx, [esp+18h+var_C]
0x4AE6CB: mov     large fs:0, ecx
0x4AE6D2: pop     ecx
0x4AE6D3: pop     esi
0x4AE6D4: add     esp, 10h
0x4AE6D7: retn
