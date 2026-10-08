0x573E70: push    0FFFFFFFFh
0x573E72: push    offset SEH_573E70
0x573E77: mov     eax, large fs:0
0x573E7D: push    eax
0x573E7E: push    ecx
0x573E7F: push    esi
0x573E80: mov     eax, ds:0B30AACh
0x573E85: xor     eax, esp
0x573E87: push    eax
0x573E88: lea     eax, [esp+18h+var_C]
0x573E8C: mov     large fs:0, eax
0x573E92: mov     esi, ecx
0x573E94: mov     [esp+18h+var_10], esi
0x573E98: mov     eax, ds:0B3A6B4h
0x573E9D: push    eax; void *
0x573E9E: mov     ecx, offset FormHeap
0x573EA3: mov     [esp+1Ch+var_4], 0
0x573EAB: call    MemoryHeap_Free_checked
0x573EB0: mov     ecx, esi
0x573EB2: mov     dword ptr ds:0B3A6B8h, 0
0x573EBC: mov     dword ptr ds:0B3A6B4h, 0
0x573EC6: call    sub_573950
0x573ECB: mov     eax, [esi+4]
0x573ECE: push    eax
0x573ECF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x573ED4: add     esp, 4
0x573ED7: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x573EDC: push    8; int
0x573EDE: push    4; unsigned int
0x573EE0: add     esi, 0Ch
0x573EE3: push    esi; void *
0x573EE4: mov     [esp+28h+var_4], 0FFFFFFFFh
0x573EEC: call    $LN21
0x573EF1: mov     ecx, [esp+18h+var_C]
0x573EF5: mov     large fs:0, ecx
0x573EFC: pop     ecx
0x573EFD: pop     esi
0x573EFE: add     esp, 10h
0x573F01: retn
0x9BE1B0: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9BE1B5: push    8; int
0x9BE1B7: push    4; unsigned int
0x9BE1B9: mov     eax, [ebp-10h]
0x9BE1BC: add     eax, 0Ch
0x9BE1BF: push    eax; void *
0x9BE1C0: call    $LN21
0x9BE1C5: retn
0x9BE1C6: mov     edx, [esp+arg_4]
0x9BE1CA: lea     eax, [edx-8]
0x9BE1CD: mov     ecx, [edx-0Ch]
0x9BE1D0: xor     ecx, eax
0x9BE1D2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE1D7: mov     eax, offset stru_AE7998
0x9BE1DC: jmp     ___CxxFrameHandler3
