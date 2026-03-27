0x783040: mov     edx, [esp+arg_8]
0x783044: mov     eax, [ecx+0FF8h]
0x78304A: mov     ecx, [eax]
0x78304C: push    edx
0x78304D: mov     edx, [esp+4+arg_4]
0x783051: push    edx
0x783052: mov     edx, [esp+8+arg_0]
0x783056: push    edx
0x783057: push    eax
0x783058: mov     eax, [ecx+180h]
0x78305E: call    eax
0x783060: xor     ecx, ecx
0x783062: test    eax, eax
0x783064: setnl   cl
0x783067: mov     al, cl
0x783069: retn    10h
