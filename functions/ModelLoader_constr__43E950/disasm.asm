0x43E950: push    0FFFFFFFFh
0x43E952: push    offset ModelLoader_constr_SEH
0x43E957: mov     eax, large fs:0
0x43E95D: push    eax
0x43E95E: push    ecx
0x43E95F: push    ebx
0x43E960: push    esi; a4
0x43E961: push    edi; a3
0x43E962: mov     eax, ___security_cookie
0x43E967: xor     eax, esp
0x43E969: push    eax; a2
0x43E96A: lea     eax, [esp+20h+var_C]
0x43E96E: mov     large fs:0, eax
0x43E974: mov     esi, ecx
0x43E976: push    1Ch; Size
0x43E978: call    FormHeapAlloc
0x43E97D: mov     edi, eax
0x43E97F: add     esp, 4
0x43E982: mov     [esp+20h+var_10], edi
0x43E986: test    edi, edi
0x43E988: mov     [esp+20h+var_4], 0
0x43E990: jz      short loc_43E9AA
0x43E992: push    0Ch; a4
0x43E994: push    3F1h; a3
0x43E999: push    4; a2
0x43E99B: mov     ecx, edi; this
0x43E99D: call    ??0?$LockFreeMap@PBDPAVModel@@@@QAE@XZ; LockFreeMap<char const *,Model *>::LockFreeMap<char const *,Model *>(void)
0x43E9A2: mov     dword ptr [edi], offset ??_7?$LockFreeCaseInsensitiveStringMap@PAVModel@@@@6B@; const LockFreeCaseInsensitiveStringMap<Model *>::`vftable'
0x43E9A8: jmp     short loc_43E9AC
0x43E9AA: xor     edi, edi
0x43E9AC: or      ebx, 0FFFFFFFFh
0x43E9AF: push    1Ch; Size
0x43E9B1: mov     [esp+24h+var_4], ebx
0x43E9B5: mov     [esi], edi
0x43E9B7: call    FormHeapAlloc
0x43E9BC: mov     edi, eax
0x43E9BE: add     esp, 4
0x43E9C1: mov     [esp+20h+var_10], edi
0x43E9C5: test    edi, edi
0x43E9C7: mov     [esp+20h+var_4], 1
0x43E9CF: jz      short loc_43E9E9
0x43E9D1: push    0Ch; a4
0x43E9D3: push    3F1h; a3
0x43E9D8: push    4; a2
0x43E9DA: mov     ecx, edi; this
0x43E9DC: call    ??0?$LockFreeMap@PBDPAVKFModel@@@@QAE@XZ; LockFreeMap<char const *,KFModel *>::LockFreeMap<char const *,KFModel *>(void)
0x43E9E1: mov     dword ptr [edi], offset ??_7?$LockFreeCaseInsensitiveStringMap@PAVKFModel@@@@6B@; const LockFreeCaseInsensitiveStringMap<KFModel *>::`vftable'
0x43E9E7: jmp     short loc_43E9EB
0x43E9E9: xor     edi, edi
0x43E9EB: push    1Ch; Size
0x43E9ED: mov     [esp+24h+var_4], ebx
0x43E9F1: mov     [esi+4], edi
0x43E9F4: call    FormHeapAlloc
0x43E9F9: add     esp, 4
0x43E9FC: mov     [esp+20h+var_10], eax
0x43EA00: test    eax, eax
0x43EA02: mov     [esp+20h+var_4], 2
0x43EA0A: jz      short loc_43EA1B
0x43EA0C: push    0Ch; a4
0x43EA0E: push    25h ; '%'; a3
0x43EA10: push    3; a2
0x43EA12: mov     ecx, eax; this
0x43EA14: call    sub_438930
0x43EA19: jmp     short loc_43EA1D
0x43EA1B: xor     eax, eax
0x43EA1D: push    1Ch; Size
0x43EA1F: mov     [esp+24h+var_4], ebx
0x43EA23: mov     [esi+8], eax
0x43EA26: call    FormHeapAlloc
0x43EA2B: add     esp, 4
0x43EA2E: mov     [esp+20h+var_10], eax
0x43EA32: test    eax, eax
0x43EA34: mov     [esp+20h+var_4], 3
0x43EA3C: jz      short loc_43EA4D
0x43EA3E: push    0Ch
0x43EA40: push    25h ; '%'
0x43EA42: push    3
0x43EA44: mov     ecx, eax
0x43EA46: call    sub_438A30
0x43EA4B: jmp     short loc_43EA4F
0x43EA4D: xor     eax, eax
0x43EA4F: push    1Ch; Size
0x43EA51: mov     [esp+24h+var_4], ebx
0x43EA55: mov     [esi+0Ch], eax
0x43EA58: call    FormHeapAlloc
0x43EA5D: add     esp, 4
0x43EA60: mov     [esp+20h+var_10], eax
0x43EA64: test    eax, eax
0x43EA66: mov     [esp+20h+var_4], 4
0x43EA6E: jz      short loc_43EA7F
0x43EA70: push    0Ch
0x43EA72: push    25h ; '%'
0x43EA74: push    3
0x43EA76: mov     ecx, eax
0x43EA78: call    sub_438B20
0x43EA7D: jmp     short loc_43EA81
0x43EA7F: xor     eax, eax
0x43EA81: push    1Ch; Size
0x43EA83: mov     [esp+24h+var_4], ebx
0x43EA87: mov     [esi+10h], eax
0x43EA8A: call    FormHeapAlloc
0x43EA8F: add     esp, 4
0x43EA92: mov     [esp+20h+var_10], eax
0x43EA96: test    eax, eax
0x43EA98: mov     [esp+20h+var_4], 5
0x43EAA0: jz      short loc_43EAAF
0x43EAA2: push    8; a3
0x43EAA4: push    3; a2
0x43EAA6: mov     ecx, eax; this
0x43EAA8: call    sub_438CF0
0x43EAAD: jmp     short loc_43EAB1
0x43EAAF: xor     eax, eax
0x43EAB1: push    2Ch ; ','; Size
0x43EAB3: mov     [esp+24h+var_4], ebx
0x43EAB7: mov     [esi+14h], eax
0x43EABA: call    FormHeapAlloc
0x43EABF: add     esp, 4
0x43EAC2: mov     [esp+20h+var_10], eax
0x43EAC6: test    eax, eax
0x43EAC8: mov     [esp+20h+var_4], 6
0x43EAD0: jz      short loc_43EADD
0x43EAD2: push    3
0x43EAD4: mov     ecx, eax; this
0x43EAD6: call    ??0BackgroundCloneThread@@QAE@XZ; BackgroundCloneThread::BackgroundCloneThread(void)
0x43EADB: jmp     short loc_43EADF
0x43EADD: xor     eax, eax
0x43EADF: mov     ecx, eax; this
0x43EAE1: mov     [esp+20h+var_4], ebx
0x43EAE5: mov     [esi+18h], eax
0x43EAE8: call    BSTaskThread__Resume
0x43EAED: mov     eax, esi
0x43EAEF: mov     ecx, [esp+20h+var_C]
0x43EAF3: mov     large fs:0, ecx
0x43EAFA: pop     ecx
0x43EAFB: pop     edi
0x43EAFC: pop     esi
0x43EAFD: pop     ebx
0x43EAFE: add     esp, 10h
0x43EB01: retn
