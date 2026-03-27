0x992CBF: push    ebp; int
0x992CC0: mov     ebp, esp
0x992CC2: push    0; int
0x992CC4: push    [ebp+arg_14]; int
0x992CC7: push    [ebp+arg_10]; int
0x992CCA: push    [ebp+arg_C]; dwExceptionCode
0x992CCD: push    [ebp+dwExceptionCode]; int
0x992CD0: push    [ebp+arg_4]; int
0x992CD3: push    [ebp+Arguments]; Arguments
0x992CD6: call    __raise_exc_ex
0x992CDB: add     esp, 1Ch
0x992CDE: pop     ebp
0x992CDF: retn
