0x548130: push    ecx
0x548131: fldz
0x548133: fcomp   [esp+4+arg_C]
0x548137: fnstsw  ax
0x548139: test    ah, 44h
0x54813C: jp      short loc_548142
0x54813E: mov     al, 1
0x548140: pop     ecx
0x548141: retn
0x548142: mov     eax, [esp+4+arg_4]
0x548146: sub     eax, [esp+4+arg_0]
0x54814A: add     eax, 64h ; 'd'
0x54814D: mov     [esp+4+var_4], eax
0x548150: fild    [esp+4+var_4]
0x548153: fdiv    qword ptr ds:0A3F3E8h
0x548159: fld     dword ptr ds:0B375D0h
0x54815F: call    __CIpow
0x548164: fld     dword ptr ds:0B375C0h
0x54816A: mov     ecx, [esp+4+arg_8]
0x54816E: fmul    [esp+4+arg_C]
0x548172: add     ecx, 0FFFFFFF6h
0x548175: mov     eax, 66666667h
0x54817A: imul    ecx
0x54817C: fsubp   st(1), st
0x54817E: sar     edx, 2
0x548181: mov     ecx, edx
0x548183: shr     ecx, 1Fh
0x548186: add     ecx, edx
0x548188: mov     [esp+4+arg_C], ecx
0x54818C: fild    [esp+4+arg_C]
0x548190: fmul    dword ptr ds:0B37598h
0x548196: faddp   st(1), st
0x548198: fstp    [esp+4+arg_C]
0x54819C: fld     [esp+4+arg_C]
0x5481A0: fcomp   dword ptr ds:0A2FAA8h
0x5481A6: fnstsw  ax
0x5481A8: test    ah, 1
0x5481AB: jz      short loc_54813E
0x5481AD: xor     al, al
0x5481AF: pop     ecx
0x5481B0: retn
