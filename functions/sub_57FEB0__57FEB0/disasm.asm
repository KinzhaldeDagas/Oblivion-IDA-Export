0x57FEB0: push    0FFFFFFFFh
0x57FEB2: push    offset SEH_57FEB0
0x57FEB7: mov     eax, large fs:0
0x57FEBD: push    eax
0x57FEBE: push    ecx
0x57FEBF: push    esi
0x57FEC0: push    edi
0x57FEC1: mov     eax, ds:0B30AACh
0x57FEC6: xor     eax, esp
0x57FEC8: push    eax
0x57FEC9: lea     eax, [esp+1Ch+var_C]
0x57FECD: mov     large fs:0, eax
0x57FED3: mov     esi, ecx
0x57FED5: mov     eax, [esi+20h]
0x57FED8: push    eax
0x57FED9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x57FEDE: xor     edi, edi
0x57FEE0: mov     [esi+20h], edi
0x57FEE3: mov     [esi+26h], di
0x57FEE7: mov     [esi+24h], di
0x57FEEB: mov     eax, [esi+18h]
0x57FEEE: push    eax
0x57FEEF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x57FEF4: add     esp, 8
0x57FEF7: mov     [esi+18h], edi
0x57FEFA: mov     [esi+1Eh], di
0x57FEFE: mov     [esi+1Ch], di
0x57FF02: mov     ecx, [esp+1Ch+var_C]
0x57FF06: mov     large fs:0, ecx
0x57FF0D: pop     ecx
0x57FF0E: pop     edi
0x57FF0F: pop     esi
0x57FF10: add     esp, 10h
0x57FF13: retn
0x9BEB10: mov     ecx, [ebp-10h]
0x9BEB13: add     ecx, 18h; void *
0x9BEB16: jmp     BSStringT_Clear
0x9BEB1B: mov     edx, [esp+arg_4]
0x9BEB1F: lea     eax, [edx-0Ch]
0x9BEB22: mov     ecx, [edx-10h]
0x9BEB25: xor     ecx, eax
0x9BEB27: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEB2C: mov     eax, offset stru_AE81B0
0x9BEB31: jmp     ___CxxFrameHandler3
