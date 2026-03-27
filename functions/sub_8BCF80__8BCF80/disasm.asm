0x8BCF80: push    0FFFFFFFFh
0x8BCF82: push    offset SEH_8C62B0
0x8BCF87: mov     eax, large fs:0
0x8BCF8D: push    eax
0x8BCF8E: push    ecx
0x8BCF8F: push    esi
0x8BCF90: mov     eax, ds:0B30AACh
0x8BCF95: xor     eax, esp
0x8BCF97: push    eax
0x8BCF98: lea     eax, [esp+18h+var_C]
0x8BCF9C: mov     large fs:0, eax
0x8BCFA2: push    24h ; '$'; Size
0x8BCFA4: call    FormHeapAlloc
0x8BCFA9: add     esp, 4
0x8BCFAC: mov     [esp+18h+var_10], eax
0x8BCFB0: test    eax, eax
0x8BCFB2: mov     [esp+18h+var_4], 0
0x8BCFBA: jz      short loc_8BCFC7
0x8BCFBC: mov     ecx, eax; this
0x8BCFBE: call    ??0bhkExtraData@@QAE@XZ; bhkExtraData::bhkExtraData(void)
0x8BCFC3: mov     esi, eax
0x8BCFC5: jmp     short loc_8BCFC9
0x8BCFC7: xor     esi, esi
0x8BCFC9: push    0; Src
0x8BCFCB: mov     ecx, esi
0x8BCFCD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8BCFD5: call    sub_721440
0x8BCFDA: mov     eax, esi
0x8BCFDC: mov     ecx, [esp+18h+var_C]
0x8BCFE0: mov     large fs:0, ecx
0x8BCFE7: pop     ecx
0x8BCFE8: pop     esi
0x8BCFE9: add     esp, 10h
0x8BCFEC: retn
