0x424DE0: push    0FFFFFFFFh
0x424DE2: push    offset SEH_6E3250
0x424DE7: mov     eax, large fs:0
0x424DED: push    eax
0x424DEE: push    esi
0x424DEF: push    edi
0x424DF0: mov     eax, ___security_cookie
0x424DF5: xor     eax, esp
0x424DF7: push    eax
0x424DF8: lea     eax, [esp+18h+var_C]
0x424DFC: mov     large fs:0, eax
0x424E02: mov     edi, ecx
0x424E04: push    4Ah ; 'J'
0x424E06: call    BaseExtraList_RemoveExtraByType
0x424E0B: mov     esi, [esp+18h+arg_0]
0x424E0F: test    esi, esi
0x424E11: jz      short loc_424E49
0x424E13: push    10h; Size
0x424E15: call    FormHeapAlloc
0x424E1A: add     esp, 4
0x424E1D: mov     [esp+18h+arg_0], eax
0x424E21: test    eax, eax
0x424E23: mov     [esp+18h+var_4], 0
0x424E2B: jz      short loc_424E37
0x424E2D: push    esi
0x424E2E: mov     ecx, eax; this
0x424E30: call    ??0ExtraLastFinishedSequence@@QAE@XZ; ExtraLastFinishedSequence::ExtraLastFinishedSequence(void)
0x424E35: jmp     short loc_424E39
0x424E37: xor     eax, eax
0x424E39: push    eax; BSExtraData *
0x424E3A: mov     ecx, edi; ExtraDataList *
0x424E3C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x424E44: call    BaseExtraList_AddExtra
0x424E49: mov     ecx, [esp+18h+var_C]
0x424E4D: mov     large fs:0, ecx
0x424E54: pop     ecx
0x424E55: pop     edi
0x424E56: pop     esi
0x424E57: add     esp, 0Ch
0x424E5A: retn    4
