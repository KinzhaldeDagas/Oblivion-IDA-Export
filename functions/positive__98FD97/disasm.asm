0x98FD97: fldz
0x98FD99: mov     eax, [esp+arg_0]
0x98FD9D: fcomp   qword ptr [eax]
0x98FD9F: fnstsw  ax
0x98FDA1: test    ah, 41h
0x98FDA4: jp      short loc_98FDAA
0x98FDA6: xor     eax, eax
0x98FDA8: inc     eax
0x98FDA9: retn
0x98FDAA: xor     eax, eax
0x98FDAC: retn
