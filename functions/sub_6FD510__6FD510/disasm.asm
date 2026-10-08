0x6FD510: mov     eax, [esp+arg_0]
0x6FD514: push    eax
0x6FD515: call    NiTimeController_RegisterStreamables; Registers the NiObject base first and, on success, registers the refcounted next-controller object at +0x34. The target at +0x30 is a link, not recursively registered here.
0x6FD51A: test    al, al
0x6FD51C: setnz   al
0x6FD51F: retn    4
