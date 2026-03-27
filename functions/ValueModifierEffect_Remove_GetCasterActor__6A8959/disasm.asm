0x6A8959: mov     ecx, [esi+24h]; this
0x6A895C: test    ecx, ecx
0x6A895E: jz      short loc_6A8967
0x6A8960: call    MagicCaster_GetParentActor
0x6A8965: jmp     short loc_6A8969
0x6A8967: xor     eax, eax
0x6A8969: mov     edx, [edi]
0x6A896B: fld     [esp+arg_4]
0x6A896F: mov     edx, [edx+2A4h]
0x6A8975: push    eax
0x6A8976: mov     eax, [esi+38h]
0x6A8979: push    ecx
0x6A897A: fstp    [esp+8+var_8]
0x6A897D: push    eax
0x6A897E: mov     ecx, edi
0x6A8980: call    edx
