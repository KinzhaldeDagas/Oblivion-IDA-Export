0x504CE0: mov     eax, [esp+arg_8]
0x504CE4: test    eax, eax
0x504CE6: jnz     short loc_504CEB
0x504CE8: xor     al, al
0x504CEA: retn
0x504CEB: mov     ecx, [esp+arg_18]
0x504CEF: push    ecx
0x504CF0: push    0
0x504CF2: push    0
0x504CF4: push    eax
0x504CF5: call    sub_4F5230
0x504CFA: add     esp, 10h
0x504CFD: retn
