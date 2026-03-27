0x982897: call    __cfltcvt_init_0
0x98289C: call    __ms_p5_mp_test_fdiv
0x9828A1: cmp     [esp+arg_0], 0
0x9828A6: mov     ds:0BA9DE0h, eax
0x9828AB: jz      short loc_9828B2
0x9828AD: call    __setdefaultprecision
0x9828B2: fnclex
0x9828B4: retn
