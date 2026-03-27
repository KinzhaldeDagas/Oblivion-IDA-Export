0x52E660: push    0FFFFFFFFh
0x52E662: push    offset ??1TESSkill@@UAE@XZ_SEH
0x52E667: mov     eax, large fs:0
0x52E66D: push    eax
0x52E66E: sub     esp, 8
0x52E671: push    esi
0x52E672: push    edi
0x52E673: mov     eax, ds:0B30AACh
0x52E678: xor     eax, esp
0x52E67A: push    eax
0x52E67B: lea     eax, [esp+20h+var_C]
0x52E67F: mov     large fs:0, eax
0x52E685: mov     esi, ecx
0x52E687: mov     [esp+20h+var_10], esi
0x52E68B: lea     edi, [esi+20h]
0x52E68E: mov     dword ptr [esi], offset ??_7TESSkill@@6BTESSkill@@@; const TESSkill::`vftable'{for `TESSkill'}
0x52E694: mov     dword ptr [esi+18h], offset ??_7TESSkill@@6BTESDescription@@@; const TESSkill::`vftable'{for `TESDescription'}
0x52E69B: mov     dword ptr [edi], offset ??_7TESSkill@@6BTESTexture@@@; const TESSkill::`vftable'{for `TESTexture'}
0x52E6A1: mov     [esp+20h+var_4], 1
0x52E6A9: call    j_TESForm_ClearComponentReferences
0x52E6AE: mov     ecx, edi; void *
0x52E6B0: mov     byte ptr [esp+20h+var_4], 0
0x52E6B5: call    TESTexture_destr
0x52E6BA: mov     ecx, esi; this
0x52E6BC: mov     [esp+20h+var_4], 0FFFFFFFFh
0x52E6C4: call    TESForm_destr
0x52E6C9: mov     ecx, [esp+20h+var_C]
0x52E6CD: mov     large fs:0, ecx
0x52E6D4: pop     ecx
0x52E6D5: pop     edi
0x52E6D6: pop     esi
0x52E6D7: add     esp, 14h
0x52E6DA: retn
