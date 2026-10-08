0x58FEC0: push    0FFFFFFFFh
0x58FEC2: push    offset SEH_8C8900
0x58FEC7: mov     eax, large fs:0
0x58FECD: push    eax
0x58FECE: push    ecx
0x58FECF: mov     eax, ds:0B30AACh
0x58FED4: xor     eax, esp
0x58FED6: push    eax
0x58FED7: lea     eax, [esp+14h+var_C]
0x58FEDB: mov     large fs:0, eax
0x58FEE1: push    54h ; 'T'; Size
0x58FEE3: call    FormHeapAlloc
0x58FEE8: add     esp, 4
0x58FEEB: mov     [esp+14h+var_10], eax
0x58FEEF: test    eax, eax
0x58FEF1: mov     [esp+14h+var_4], 0
0x58FEF9: jz      short loc_58FF14
0x58FEFB: push    0
0x58FEFD: mov     ecx, eax; this
0x58FEFF: call    ??0TileText@@QAE@XZ; TileText::TileText(void)
0x58FF04: mov     ecx, [esp+14h+var_C]
0x58FF08: mov     large fs:0, ecx
0x58FF0F: pop     ecx
0x58FF10: add     esp, 10h
0x58FF13: retn
0x58FF14: xor     eax, eax
0x58FF16: mov     ecx, [esp+14h+var_C]
0x58FF1A: mov     large fs:0, ecx
0x58FF21: pop     ecx
0x58FF22: add     esp, 10h
0x58FF25: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
