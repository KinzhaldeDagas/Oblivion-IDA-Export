0x44A8C0: push    108h; Size
0x44A8C5: call    FormHeapAlloc
0x44A8CA: add     esp, 4
0x44A8CD: mov     [esp+arg_54], eax
0x44A8D1: test    eax, eax
0x44A8D3: mov     [esp+arg_3C], 1
0x44A8DB: jz      short loc_44A90C
0x44A8DD: mov     ecx, eax
0x44A8DF: call    Creature_constr
0x44A8E4: jmp     short loc_44A90E
