0x4ED950: push    0FFFFFFFFh
0x4ED952: push    offset ??1TESWaterForm@@UAE@XZ_SEH
0x4ED957: mov     eax, large fs:0
0x4ED95D: push    eax
0x4ED95E: sub     esp, 8
0x4ED961: push    ebx
0x4ED962: push    esi
0x4ED963: push    edi
0x4ED964: mov     eax, ds:0B30AACh
0x4ED969: xor     eax, esp
0x4ED96B: push    eax
0x4ED96C: lea     eax, [esp+24h+var_C]
0x4ED970: mov     large fs:0, eax
0x4ED976: mov     esi, ecx
0x4ED978: mov     [esp+24h+var_10], esi
0x4ED97C: lea     edi, [esi+18h]
0x4ED97F: mov     dword ptr [esi], offset ??_7TESWaterForm@@6BTESWaterForm@@@; const TESWaterForm::`vftable'{for `TESWaterForm'}
0x4ED985: mov     dword ptr [edi], offset ??_7TESWaterForm@@6BTESAttackDamageForm@@@; const TESWaterForm::`vftable'{for `TESAttackDamageForm'}
0x4ED98B: mov     [esp+24h+var_4], 3
0x4ED993: call    j_TESForm_ClearComponentReferences
0x4ED998: mov     eax, [esi+30h]
0x4ED99B: push    eax
0x4ED99C: call    FormHeapFree
0x4ED9A1: xor     ebx, ebx
0x4ED9A3: add     esp, 4
0x4ED9A6: lea     ecx, [esi+20h]; void *
0x4ED9A9: mov     [esi+30h], ebx
0x4ED9AC: mov     [esi+36h], bx
0x4ED9B0: mov     [esi+34h], bx
0x4ED9B4: mov     byte ptr [esp+24h+var_4], 1
0x4ED9B9: call    TESTexture_destr
0x4ED9BE: mov     ecx, edi
0x4ED9C0: mov     byte ptr [esp+24h+var_4], bl
0x4ED9C4: call    TESAttackDamageForm_destr
0x4ED9C9: mov     ecx, esi; this
0x4ED9CB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4ED9D3: call    TESForm_destr
0x4ED9D8: mov     ecx, [esp+24h+var_C]
0x4ED9DC: mov     large fs:0, ecx
0x4ED9E3: pop     ecx
0x4ED9E4: pop     edi
0x4ED9E5: pop     esi
0x4ED9E6: pop     ebx
0x4ED9E7: add     esp, 14h
0x4ED9EA: retn
