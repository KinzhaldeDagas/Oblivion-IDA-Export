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
0x573ECF: call    FormHeapFree
0x573ED4: add     esp, 4
0x573ED7: push    offset sub_7016A0; void (__thiscall *)(void *)
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
