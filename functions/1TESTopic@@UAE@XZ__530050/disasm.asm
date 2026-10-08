0x530050: push    0FFFFFFFFh
0x530052: push    offset ??1TESTopic@@UAE@XZ_SEH
0x530057: mov     eax, large fs:0
0x53005D: push    eax
0x53005E: sub     esp, 8
0x530061: push    ebx
0x530062: push    ebp
0x530063: push    esi
0x530064: push    edi
0x530065: mov     eax, ds:0B30AACh
0x53006A: xor     eax, esp
0x53006C: push    eax
0x53006D: lea     eax, [esp+28h+var_C]
0x530071: mov     large fs:0, eax
0x530077: mov     ebp, ecx
0x530079: mov     [esp+28h+var_10], ebp
0x53007D: mov     dword ptr [ebp+0], offset ??_7TESTopic@@6BTESTopic@@@; const TESTopic::`vftable'{for `TESTopic'}
0x530084: mov     dword ptr [ebp+18h], offset ??_7TESTopic@@6BTESFullName@@@; const TESTopic::`vftable'{for `TESFullName'}
0x53008B: lea     eax, [ebp+28h]
0x53008E: xor     edi, edi
0x530090: cmp     eax, edi
0x530092: mov     [esp+28h+var_4], 2
0x53009A: jz      loc_530141
0x5300A0: mov     esi, [ebp+28h]
0x5300A3: cmp     esi, edi
0x5300A5: jz      loc_530141
0x5300AB: mov     ebx, [esi+10h]
0x5300AE: test    ebx, ebx
0x5300B0: jbe     short loc_5300F8
0x5300B2: cmp     edi, [esi+10h]
0x5300B5: jnb     short loc_5300F1
0x5300B7: mov     eax, [esi+8]
0x5300BA: mov     ecx, [eax+edi*4]
0x5300BD: test    ecx, ecx
0x5300BF: jz      short loc_5300F1
0x5300C1: cmp     edi, [esi+10h]
0x5300C4: jb      short loc_5300CE
0x5300C6: lea     edx, [edi+1]
0x5300C9: mov     [esi+10h], edx
0x5300CC: jmp     short loc_5300D8
0x5300CE: cmp     dword ptr [eax+edi*4], 0
0x5300D2: jz      short loc_5300D8
0x5300D4: add     dword ptr [esi+14h], 0FFFFFFFFh
0x5300D8: mov     edx, [esi+8]
0x5300DB: mov     dword ptr [edx+edi*4], 0
0x5300E2: mov     word ptr [ecx+20h], 0FFFFh
0x5300E8: mov     eax, [ecx]
0x5300EA: mov     edx, [eax+10h]
0x5300ED: push    1
0x5300EF: call    edx
0x5300F1: add     edi, 1
0x5300F4: cmp     edi, ebx
0x5300F6: jb      short loc_5300B2
0x5300F8: mov     eax, [esi+8]
0x5300FB: push    eax
0x5300FC: mov     dword ptr [esi+4], offset ??_7?$NiTLargeArray@PAVTESTopicInfo@@@@6B@; const NiTLargeArray<TESTopicInfo *>::`vftable'
0x530103: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x530108: push    esi
0x530109: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x53010E: mov     eax, [ebp+2Ch]
0x530111: add     esp, 8
0x530114: test    eax, eax
0x530116: jz      short loc_530133
0x530118: mov     ecx, [eax+4]
0x53011B: mov     [ebp+2Ch], ecx
0x53011E: mov     edx, [eax]
0x530120: push    eax
0x530121: mov     [ebp+28h], edx
0x530124: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x530129: add     esp, 4
0x53012C: xor     edi, edi
0x53012E: jmp     loc_5300A0
0x530133: mov     dword ptr [ebp+28h], 0
0x53013A: xor     edi, edi
0x53013C: jmp     loc_5300A0
0x530141: mov     eax, ds:0B36510h
0x530146: cmp     eax, edi
0x530148: jz      short loc_53017E
0x53014A: cmp     [eax+4], edi
0x53014D: lea     esi, [eax+4]
0x530150: mov     ebx, eax
0x530152: jz      short loc_530168
0x530154: mov     eax, [esi]
0x530156: mov     edi, [eax+4]
0x530159: push    eax
0x53015A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x53015F: add     esp, 4
0x530162: test    edi, edi
0x530164: mov     [esi], edi
0x530166: jnz     short loc_530154
0x530168: mov     [ebx], edi
0x53016A: mov     eax, ds:0B36510h
0x53016F: push    eax
0x530170: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x530175: add     esp, 4
0x530178: mov     ds:0B36510h, edi
0x53017E: mov     ecx, ebp
0x530180: call    j_TESForm_ClearComponentReferences
0x530185: mov     eax, [ebp+34h]
0x530188: push    eax
0x530189: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x53018E: mov     [ebp+34h], edi
0x530191: mov     [ebp+3Ah], di
0x530195: mov     [ebp+38h], di
0x530199: mov     eax, [ebp+1Ch]
0x53019C: push    eax
0x53019D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5301A2: add     esp, 8
0x5301A5: mov     ecx, ebp; this
0x5301A7: mov     [ebp+1Ch], edi
0x5301AA: mov     [ebp+22h], di
0x5301AE: mov     [ebp+20h], di
0x5301B2: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5301BA: call    TESForm_destr
0x5301BF: mov     ecx, [esp+28h+var_C]
0x5301C3: mov     large fs:0, ecx
0x5301CA: pop     ecx
0x5301CB: pop     edi
0x5301CC: pop     esi
0x5301CD: pop     ebp
0x5301CE: pop     ebx
0x5301CF: add     esp, 14h
0x5301D2: retn
0x9B8AD0: mov     ecx, [ebp-10h]; this
0x9B8AD3: jmp     TESForm_destr
0x9B8AD8: cmp     dword ptr [ebp-10h], 0
0x9B8ADC: jz      loc_9B8AF0
0x9B8AE2: mov     eax, [ebp-10h]
0x9B8AE5: add     eax, 18h
0x9B8AE8: mov     [ebp-14h], eax
0x9B8AEB: jmp     loc_9B8AF7
0x9B8AF0: mov     dword ptr [ebp-14h], 0
0x9B8AF7: mov     ecx, [ebp-14h]
0x9B8AFA: jmp     TESFullName_Initialize
0x9B8AFF: mov     ecx, [ebp-10h]
0x9B8B02: add     ecx, 34h ; '4'; void *
0x9B8B05: jmp     BSStringT_Clear
0x9B8B0A: mov     edx, [esp+arg_4]
0x9B8B0E: lea     eax, [edx-18h]
0x9B8B11: mov     ecx, [edx-1Ch]
0x9B8B14: xor     ecx, eax
0x9B8B16: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8B1B: mov     eax, offset stru_AE2F9C
0x9B8B20: jmp     ___CxxFrameHandler3
