0x8B3550: push    ebp
0x8B3551: mov     ebp, esp
0x8B3553: fld     [ebp+arg_4]
0x8B3556: and     esp, 0FFFFFFF0h
0x8B3559: fcomp   dword ptr ds:0A2FAA8h
0x8B355F: fnstsw  ax
0x8B3561: test    ah, 41h
0x8B3564: jnp     short loc_8B3576
0x8B3566: fld     [ebp+arg_0]
0x8B3569: fcomp   dword ptr ds:0A2FAA8h
0x8B356F: fnstsw  ax
0x8B3571: test    ah, 41h
0x8B3574: jp      short loc_8B357F
0x8B3576: mov     eax, 1
0x8B357B: mov     esp, ebp
0x8B357D: pop     ebp
0x8B357E: retn
0x8B357F: mov     eax, [ebp+arg_8]
0x8B3582: fld     [ebp+arg_0]
0x8B3585: fmul    [ebp+arg_0]
0x8B3588: xorps   xmm0, xmm0
0x8B358B: fld     [ebp+arg_4]
0x8B358E: movaps  xmmword ptr [eax+20h], xmm0
0x8B3592: movaps  xmmword ptr [eax+30h], xmm0
0x8B3596: movaps  xmmword ptr [eax+40h], xmm0
0x8B359A: fmul    st, st(1)
0x8B359C: mov     ecx, 3F800000h
0x8B35A1: mov     [eax+20h], ecx
0x8B35A4: fmul    dword ptr ds:0A47E6Ch
0x8B35AA: mov     [eax+34h], ecx
0x8B35AD: mov     [eax+48h], ecx
0x8B35B0: mov     ecx, [ebp+arg_4]
0x8B35B3: fst     dword ptr [eax+20h]
0x8B35B6: fst     dword ptr [eax+34h]
0x8B35B9: fstp    dword ptr [eax+48h]
0x8B35BC: movaps  xmmword ptr [eax+10h], xmm0
0x8B35C0: mov     [eax+4], ecx
0x8B35C3: fmul    [ebp+arg_0]
0x8B35C6: fmul    dword ptr ds:0A97F2Ch
0x8B35CC: fstp    dword ptr [eax]
0x8B35CE: xor     eax, eax
0x8B35D0: mov     esp, ebp
0x8B35D2: pop     ebp
0x8B35D3: retn
