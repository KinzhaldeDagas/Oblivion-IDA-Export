0x6E9030: push    0FFFFFFFFh
0x6E9032: push    offset SEH_8C8900
0x6E9037: mov     eax, large fs:0
0x6E903D: push    eax
0x6E903E: push    ecx
0x6E903F: mov     eax, ds:0B30AACh
0x6E9044: xor     eax, esp
0x6E9046: push    eax
0x6E9047: lea     eax, [esp+14h+var_C]
0x6E904B: mov     large fs:0, eax
0x6E9051: push    70h ; 'p'; Size
0x6E9053: call    FormHeapAlloc
0x6E9058: add     esp, 4
0x6E905B: mov     [esp+14h+var_10], eax
0x6E905F: test    eax, eax
0x6E9061: mov     [esp+14h+var_4], 0
0x6E9069: jz      short loc_6E9082
0x6E906B: mov     ecx, eax; this
0x6E906D: call    ??0NiBoneLODController@@QAE@XZ; NiBoneLODController::NiBoneLODController(void)
0x6E9072: mov     ecx, [esp+14h+var_C]
0x6E9076: mov     large fs:0, ecx
0x6E907D: pop     ecx
0x6E907E: add     esp, 10h
0x6E9081: retn
0x6E9082: xor     eax, eax
0x6E9084: mov     ecx, [esp+14h+var_C]
0x6E9088: mov     large fs:0, ecx
0x6E908F: pop     ecx
0x6E9090: add     esp, 10h
0x6E9093: retn
