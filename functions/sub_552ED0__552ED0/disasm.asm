0x552ED0: push    0FFFFFFFFh
0x552ED2: push    offset SEH_552ED0
0x552ED7: mov     eax, large fs:0
0x552EDD: push    eax
0x552EDE: push    ecx
0x552EDF: push    esi
0x552EE0: mov     eax, ds:0B30AACh
0x552EE5: xor     eax, esp
0x552EE7: push    eax
0x552EE8: lea     eax, [esp+18h+var_C]
0x552EEC: mov     large fs:0, eax
0x552EF2: mov     esi, ecx
0x552EF4: push    offset sub_43ACE0; a5
0x552EF9: push    offset sub_43EB30; a4
0x552EFE: push    4; size
0x552F00: push    18h; a2
0x552F02: lea     eax, [esi+8]
0x552F05: push    eax; a1
0x552F06: call    ArrayConstructor
0x552F0B: xor     eax, eax
0x552F0D: mov     [esi+6Ch], eax
0x552F10: mov     [esi+70h], eax
0x552F13: mov     [esi+74h], eax
0x552F16: mov     [esi+7Ch], eax
0x552F19: mov     [esi+80h], eax
0x552F1F: mov     [esi+84h], eax
0x552F25: mov     eax, esi
0x552F27: mov     ecx, [esp+18h+var_C]
0x552F2B: mov     large fs:0, ecx
0x552F32: pop     ecx
0x552F33: pop     esi
0x552F34: add     esp, 10h
0x552F37: retn
