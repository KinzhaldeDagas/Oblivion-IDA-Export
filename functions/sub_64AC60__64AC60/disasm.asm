0x64AC60: push    0FFFFFFFFh
0x64AC62: push    offset SEH_64AC60
0x64AC67: mov     eax, large fs:0
0x64AC6D: push    eax
0x64AC6E: push    ecx
0x64AC6F: push    esi
0x64AC70: mov     eax, ds:0B30AACh
0x64AC75: xor     eax, esp
0x64AC77: push    eax
0x64AC78: lea     eax, [esp+18h+var_C]
0x64AC7C: mov     large fs:0, eax
0x64AC82: mov     esi, ecx
0x64AC84: mov     [esp+18h+var_10], esi
0x64AC88: mov     dword ptr [esi], offset ??_7?$NiTMap@PAVLowProcess@@ULP_LOCK_DATA@@@@6B@; const NiTMap<LowProcess *,LP_LOCK_DATA>::`vftable'
0x64AC8E: mov     [esp+18h+var_4], 0
0x64AC96: call    NiTMap_Clear
0x64AC9B: mov     ecx, esi
0x64AC9D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x64ACA5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULP_LOCK_DATA@@@@PAVLowProcess@@ULP_LOCK_DATA@@@@6B@; const NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable'
0x64ACAB: call    NiTMap_Clear
0x64ACB0: mov     eax, [esi+8]
0x64ACB3: push    eax
0x64ACB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x64ACB9: add     esp, 4
0x64ACBC: mov     ecx, [esp+18h+var_C]
0x64ACC0: mov     large fs:0, ecx
0x64ACC7: pop     ecx
0x64ACC8: pop     esi
0x64ACC9: add     esp, 10h
0x64ACCC: retn
0x9C3A60: mov     ecx, [ebp-10h]
0x9C3A63: jmp     sub_648C60
0x9C3A68: mov     edx, [esp+arg_4]
0x9C3A6C: lea     eax, [edx-8]
0x9C3A6F: mov     ecx, [edx-0Ch]
0x9C3A72: xor     ecx, eax
0x9C3A74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3A79: mov     eax, offset stru_AEC5CC
0x9C3A7E: jmp     ___CxxFrameHandler3
