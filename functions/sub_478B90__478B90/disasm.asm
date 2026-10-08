0x478B90: push    0FFFFFFFFh
0x478B92: push    offset SEH_478B90
0x478B97: mov     eax, large fs:0
0x478B9D: push    eax
0x478B9E: push    ecx
0x478B9F: push    esi
0x478BA0: mov     eax, ds:0B30AACh
0x478BA5: xor     eax, esp
0x478BA7: push    eax
0x478BA8: lea     eax, [esp+18h+var_C]
0x478BAC: mov     large fs:0, eax
0x478BB2: mov     esi, ecx
0x478BB4: push    10h; Size
0x478BB6: call    FormHeapAlloc
0x478BBB: add     esp, 4
0x478BBE: mov     [esp+18h+var_10], eax
0x478BC2: test    eax, eax
0x478BC4: mov     [esp+18h+var_4], 0
0x478BCC: jz      short loc_478BDC
0x478BCE: push    101h
0x478BD3: mov     ecx, eax
0x478BD5: call    ??0?$NiTPointerMap@PAVNiObject@@PAV1@@@QAE@XZ; NiTPointerMap<NiObject *,NiObject *>::NiTPointerMap<NiObject *,NiObject *>(void)
0x478BDA: jmp     short loc_478BDE
0x478BDC: xor     eax, eax
0x478BDE: push    10h; Size
0x478BE0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x478BE8: mov     [esi], eax
0x478BEA: call    FormHeapAlloc
0x478BEF: add     esp, 4
0x478BF2: mov     [esp+18h+var_10], eax
0x478BF6: test    eax, eax
0x478BF8: mov     [esp+18h+var_4], 1
0x478C00: jz      short loc_478C0D
0x478C02: push    25h ; '%'
0x478C04: mov     ecx, eax
0x478C06: call    ??0?$NiTPointerMap@PAVNiObject@@_N@@QAE@XZ; NiTPointerMap<NiObject *,bool>::NiTPointerMap<NiObject *,bool>(void)
0x478C0B: jmp     short loc_478C0F
0x478C0D: xor     eax, eax
0x478C0F: mov     [esi+4], eax
0x478C12: mov     eax, ds:0B3F580h
0x478C17: mov     [esi+8], eax
0x478C1A: mov     cl, ds:0B25648h
0x478C20: mov     [esi+0Ch], cl
0x478C23: mov     eax, esi
0x478C25: mov     ecx, [esp+18h+var_C]
0x478C29: mov     large fs:0, ecx
0x478C30: pop     ecx
0x478C31: pop     esi
0x478C32: add     esp, 10h
0x478C35: retn
0x9BFAD0: mov     eax, [ebp-10h]
0x9BFAD3: push    eax
0x9BFAD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BFAD9: pop     ecx
0x9BFADA: retn
0x9BFADB: mov     eax, [ebp-10h]
0x9BFADE: push    eax
0x9BFADF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BFAE4: pop     ecx
0x9BFAE5: retn
0x9BFAE6: mov     edx, [esp+arg_4]
0x9BFAEA: lea     eax, [edx-8]
0x9BFAED: mov     ecx, [edx-0Ch]
0x9BFAF0: xor     ecx, eax
0x9BFAF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BFAF7: mov     eax, offset stru_AE8F8C
0x9BFAFC: jmp     ___CxxFrameHandler3
