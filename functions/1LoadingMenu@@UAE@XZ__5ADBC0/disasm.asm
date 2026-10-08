0x5ADBC0: push    0FFFFFFFFh
0x5ADBC2: push    offset ??1LoadingMenu@@UAE@XZ_SEH
0x5ADBC7: mov     eax, large fs:0
0x5ADBCD: push    eax
0x5ADBCE: push    ecx
0x5ADBCF: push    ebx
0x5ADBD0: push    ebp
0x5ADBD1: push    esi
0x5ADBD2: push    edi
0x5ADBD3: mov     eax, ds:0B30AACh
0x5ADBD8: xor     eax, esp
0x5ADBDA: push    eax
0x5ADBDB: lea     eax, [esp+24h+var_C]
0x5ADBDF: mov     large fs:0, eax
0x5ADBE5: mov     esi, ecx
0x5ADBE7: mov     [esp+24h+var_10], esi
0x5ADBEB: mov     dword ptr [esi], offset ??_7LoadingMenu@@6B@; const LoadingMenu::`vftable'
0x5ADBF1: xor     ebx, ebx
0x5ADBF3: mov     [esp+24h+var_4], ebx
0x5ADBF7: mov     dword ptr [esi+3Ch], 64h ; 'd'
0x5ADBFE: call    sub_40FDA0
0x5ADC03: test    al, al
0x5ADC05: jnz     short loc_5ADC0C
0x5ADC07: call    sub_5ADB40
0x5ADC0C: push    0FFh
0x5ADC11: call    sub_583DF0
0x5ADC16: add     esp, 4
0x5ADC19: cmp     [esi+50h], ebx
0x5ADC1C: jz      short loc_5ADC36
0x5ADC1E: mov     edi, edi
0x5ADC20: mov     eax, [esi+50h]
0x5ADC23: mov     edi, [eax+4]
0x5ADC26: push    eax
0x5ADC27: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5ADC2C: add     esp, 4
0x5ADC2F: cmp     edi, ebx
0x5ADC31: mov     [esi+50h], edi
0x5ADC34: jnz     short loc_5ADC20
0x5ADC36: mov     [esi+4Ch], ebx
0x5ADC39: mov     eax, [esi+54h]
0x5ADC3C: push    eax
0x5ADC3D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5ADC42: mov     eax, ds:0B33398h
0x5ADC47: mov     ds:0B3A6D3h, bl
0x5ADC4D: mov     ecx, [eax+24h]
0x5ADC50: add     esp, 4
0x5ADC53: cmp     ecx, ebx
0x5ADC55: jz      short loc_5ADC76
0x5ADC57: mov     eax, ds:0B33428h
0x5ADC5C: cmp     eax, ebx
0x5ADC5E: jz      short loc_5ADC71
0x5ADC60: mov     eax, [eax+20h]
0x5ADC63: cmp     eax, ebx
0x5ADC65: setnz   dl
0x5ADC68: test    dl, dl
0x5ADC6A: jz      short loc_5ADC71
0x5ADC6C: cmp     eax, 2
0x5ADC6F: jnz     short loc_5ADC76
0x5ADC71: call    sub_6A9C00
0x5ADC76: push    1
0x5ADC78: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x5ADC7D: mov     ebx, ds:0B3F928h
0x5ADC83: add     esp, 4
0x5ADC86: call    BSShaderAccumulator_GetOrCreateGlobal
0x5ADC8B: mov     edi, [ebx+8]
0x5ADC8E: mov     ebp, eax
0x5ADC90: cmp     edi, ebp
0x5ADC92: jz      short loc_5ADCC5
0x5ADC94: test    edi, edi
0x5ADC96: jz      short loc_5ADCB4
0x5ADC98: lea     ecx, [edi+4]
0x5ADC9B: push    ecx; lpAddend
0x5ADC9C: call    dword ptr ds:0A2807Ch
0x5ADCA2: test    eax, eax
0x5ADCA4: jnz     short loc_5ADCB4
0x5ADCA6: test    edi, edi
0x5ADCA8: jz      short loc_5ADCB4
0x5ADCAA: mov     edx, [edi]
0x5ADCAC: mov     eax, [edx]
0x5ADCAE: push    1
0x5ADCB0: mov     ecx, edi
0x5ADCB2: call    eax
0x5ADCB4: test    ebp, ebp
0x5ADCB6: mov     [ebx+8], ebp
0x5ADCB9: jz      short loc_5ADCC5
0x5ADCBB: add     ebp, 4
0x5ADCBE: push    ebp; lpAddend
0x5ADCBF: call    dword ptr ds:0A28078h
0x5ADCC5: mov     ecx, esi; this
0x5ADCC7: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5ADCCF: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5ADCD4: mov     ecx, dword ptr [esp+24h+var_C]
0x5ADCD8: mov     large fs:0, ecx
0x5ADCDF: pop     ecx
0x5ADCE0: pop     edi
0x5ADCE1: pop     esi
0x5ADCE2: pop     ebp
0x5ADCE3: pop     ebx
0x5ADCE4: add     esp, 10h
0x5ADCE7: retn
0x9C0620: mov     ecx, [ebp-10h]; this
0x9C0623: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0628: mov     edx, [esp+arg_4]
0x9C062C: lea     eax, [edx-14h]
0x9C062F: mov     ecx, [edx-18h]
0x9C0632: xor     ecx, eax
0x9C0634: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0639: mov     eax, offset stru_AE98A8
0x9C063E: jmp     ___CxxFrameHandler3
