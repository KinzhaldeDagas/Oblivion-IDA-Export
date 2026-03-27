0x481320: mov     eax, [esp+arg_4]
0x481324: cmp     eax, 0FFFFFFFFh
0x481327: jnz     short loc_48132C
0x481329: xor     eax, eax
0x48132B: retn
0x48132C: mov     ecx, [esp+arg_8]
0x481330: mov     [esp+arg_4], eax
0x481334: mov     eax, [esp+arg_C]
0x481338: push    eax
0x481339: mov     eax, [esp+4+arg_0]
0x48133D: push    ecx
0x48133E: lea     edx, [esp+8+arg_4]
0x481342: push    edx
0x481343: push    eax
0x481344: call    sub_481250
0x481349: add     esp, 10h
0x48134C: retn
