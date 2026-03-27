0x511720: sub     esp, 8
0x511723: mov     ecx, [esp+8+eventList]
0x511727: mov     edx, [esp+8+arg_10]
0x51172B: lea     eax, [esp+8+var_8]
0x51172E: push    eax; UInt16
0x51172F: mov     eax, [esp+0Ch+contObj]
0x511733: push    ecx; l
0x511734: mov     ecx, [esp+10h+thisObj]
0x511738: push    edx; a6
0x511739: mov     edx, [esp+14h+opcodeoffsetPtr]
0x51173D: push    eax; a5
0x51173E: mov     eax, [esp+18h+arg1]
0x511742: push    ecx; a4
0x511743: mov     ecx, [esp+1Ch+paramInfo]
0x511747: push    edx; a3
0x511748: push    eax; a2
0x511749: push    ecx; a1
0x51174A: mov     [esp+28h+var_8], 0FFFFFFFFh
0x511752: call    Script_ExtractArgs
0x511757: add     esp, 20h
0x51175A: test    al, al
0x51175C: jnz     short loc_511762
0x51175E: add     esp, 8
0x511761: retn
0x511762: mov     eax, [esp+8+var_8]
0x511765: cmp     eax, 0A0h ; ' '
0x51176A: jl      short loc_511778
0x51176C: mov     [esp+8+var_8], 0A0h ; ' '
0x511773: fild    [esp+8+var_8]
0x511776: jmp     short loc_51179D
0x511778: test    eax, eax
0x51177A: jnz     short loc_511788
0x51177C: mov     [esp+8+var_8], 4Bh ; 'K'
0x511783: fild    [esp+8+var_8]
0x511786: jmp     short loc_51179D
0x511788: jle     short loc_51178F
0x51178A: fild    [esp+8+var_8]
0x51178D: jmp     short loc_51179D
0x51178F: neg     eax
0x511791: mov     [esp+8+var_4], eax
0x511795: fild    [esp+8+var_4]
0x511799: fld1
0x51179B: fdivrp  st(1), st
0x51179D: fstp    [esp+8+var_4]
0x5117A1: push    0; a3
0x5117A3: fld     [esp+0Ch+var_4]
0x5117A7: push    ecx
0x5117A8: mov     ecx, ds:0B333CCh; this
0x5117AE: fstp    [esp+10h+a2]; a2
0x5117B1: call    SetCameraFOV_0
0x5117B6: fld     [esp+8+var_4]
0x5117BA: push    ecx
0x5117BB: fstp    [esp+0Ch+var_C]; float
0x5117BE: call    UpdateParticleShaderFOVData
0x5117C3: add     esp, 4
0x5117C6: mov     al, 1
0x5117C8: add     esp, 8
0x5117CB: retn
