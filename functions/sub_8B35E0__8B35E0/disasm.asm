0x8B35E0: push    ebp
0x8B35E1: mov     ebp, esp
0x8B35E3: and     esp, 0FFFFFFF0h
0x8B35E6: sub     esp, 10h
0x8B35E9: fld     [ebp+arg_4]
0x8B35EC: fcomp   dword ptr ds:0A2FAA8h
0x8B35F2: fnstsw  ax
0x8B35F4: test    ah, 41h
0x8B35F7: jp      short loc_8B3602
0x8B35F9: mov     eax, 1
0x8B35FE: mov     esp, ebp
0x8B3600: pop     ebp
0x8B3601: retn
0x8B3602: mov     eax, [ebp+arg_0]
0x8B3605: fld     dword ptr [eax]
0x8B3607: xorps   xmm0, xmm0
0x8B360A: fld     dword ptr [eax+4]
0x8B360D: mov     ecx, 3F800000h
0x8B3612: fld     dword ptr [eax+8]
0x8B3615: mov     eax, [ebp+arg_8]
0x8B3618: fld     [ebp+arg_4]
0x8B361B: movaps  xmmword ptr [eax+20h], xmm0
0x8B361F: fmul    dword ptr ds:0A7C038h
0x8B3625: movaps  xmmword ptr [eax+30h], xmm0
0x8B3629: fld     st(1)
0x8B362B: movaps  xmmword ptr [eax+40h], xmm0
0x8B362F: fmul    st, st(2)
0x8B3631: mov     [eax+20h], ecx
0x8B3634: fld     st(3)
0x8B3636: mov     [eax+34h], ecx
0x8B3639: fmul    st, st(4)
0x8B363B: mov     [eax+48h], ecx
0x8B363E: mov     ecx, [ebp+arg_4]
0x8B3641: fst     [esp+10h+var_4]
0x8B3645: fadd    st, st(1)
0x8B3647: fmul    st, st(2)
0x8B3649: fstp    dword ptr [eax+20h]
0x8B364C: fld     st(4)
0x8B364E: fmul    st, st(5)
0x8B3650: fst     [esp+10h+var_8]
0x8B3654: fadd    st, st(1)
0x8B3656: fmul    st, st(2)
0x8B3658: fstp    dword ptr [eax+34h]
0x8B365B: fstp    st
0x8B365D: fld     [esp+10h+var_8]
0x8B3661: fadd    [esp+10h+var_4]
0x8B3665: fmul    st, st(1)
0x8B3667: fstp    dword ptr [eax+48h]
0x8B366A: movaps  xmmword ptr [eax+10h], xmm0
0x8B366E: mov     [eax+4], ecx
0x8B3671: fstp    st
0x8B3673: fmul    st, st(1)
0x8B3675: fmul    st, st(2)
0x8B3677: fmul    dword ptr ds:0A58E1Ch
0x8B367D: fstp    dword ptr [eax]
0x8B367F: xor     eax, eax
0x8B3681: fstp    st
0x8B3683: fstp    st
0x8B3685: mov     esp, ebp
0x8B3687: pop     ebp
0x8B3688: retn
