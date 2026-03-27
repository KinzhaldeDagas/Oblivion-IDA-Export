0x73DB40: push    0FFFFFFFFh
0x73DB42: push    offset SEH_8C62B0
0x73DB47: mov     eax, large fs:0
0x73DB4D: push    eax
0x73DB4E: push    ecx
0x73DB4F: push    esi
0x73DB50: mov     eax, ds:0B30AACh
0x73DB55: xor     eax, esp
0x73DB57: push    eax
0x73DB58: lea     eax, [esp+18h+var_C]
0x73DB5C: mov     large fs:0, eax
0x73DB62: push    1Ch; Size
0x73DB64: call    FormHeapAlloc
0x73DB69: mov     esi, eax
0x73DB6B: add     esp, 4
0x73DB6E: mov     [esp+18h+var_10], esi
0x73DB72: xor     eax, eax
0x73DB74: cmp     esi, eax
0x73DB76: mov     [esp+18h+var_4], eax
0x73DB7A: jz      short loc_73DB91
0x73DB7C: mov     ecx, esi; this
0x73DB7E: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73DB83: mov     dword ptr [esi], offset ??_7NiShadeProperty@@6B@; const NiShadeProperty::`vftable'
0x73DB89: mov     word ptr [esi+18h], 1
0x73DB8F: mov     eax, esi
0x73DB91: mov     ecx, [esp+18h+var_C]
0x73DB95: mov     large fs:0, ecx
0x73DB9C: pop     ecx
0x73DB9D: pop     esi
0x73DB9E: add     esp, 10h
0x73DBA1: retn
