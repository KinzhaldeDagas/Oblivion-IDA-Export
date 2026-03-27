0x6D84A0: push    0FFFFFFFFh
0x6D84A2: push    offset SEH_8C8900
0x6D84A7: mov     eax, large fs:0
0x6D84AD: push    eax
0x6D84AE: push    ecx
0x6D84AF: mov     eax, ds:0B30AACh
0x6D84B4: xor     eax, esp
0x6D84B6: push    eax
0x6D84B7: lea     eax, [esp+14h+var_C]
0x6D84BB: mov     large fs:0, eax
0x6D84C1: push    34h ; '4'; Size
0x6D84C3: call    FormHeapAlloc
0x6D84C8: add     esp, 4
0x6D84CB: mov     [esp+14h+var_10], eax
0x6D84CF: test    eax, eax
0x6D84D1: mov     [esp+14h+var_4], 0
0x6D84D9: jz      short loc_6D84F8
0x6D84DB: push    0Ch
0x6D84DD: push    0Ch
0x6D84DF: push    0
0x6D84E1: mov     ecx, eax; this
0x6D84E3: call    ??0NiSequence@@QAE@XZ; NiSequence::NiSequence(void)
0x6D84E8: mov     ecx, [esp+14h+var_C]
0x6D84EC: mov     large fs:0, ecx
0x6D84F3: pop     ecx
0x6D84F4: add     esp, 10h
0x6D84F7: retn
0x6D84F8: xor     eax, eax
0x6D84FA: mov     ecx, [esp+14h+var_C]
0x6D84FE: mov     large fs:0, ecx
0x6D8505: pop     ecx
0x6D8506: add     esp, 10h
0x6D8509: retn
