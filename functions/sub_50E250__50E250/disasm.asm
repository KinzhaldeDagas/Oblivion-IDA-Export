0x50E250: sub     esp, 1Ch
0x50E253: lea     eax, [esp+1Ch+var_14]
0x50E257: push    eax
0x50E258: mov     eax, [esp+20h+l]
0x50E25C: lea     ecx, [esp+20h+var_18]
0x50E260: push    ecx
0x50E261: mov     ecx, [esp+24h+arg_10]
0x50E265: lea     edx, [esp+24h+var_1C]
0x50E269: push    edx; UInt16
0x50E26A: mov     edx, [esp+28h+arg_C]
0x50E26E: push    eax; l
0x50E26F: mov     eax, [esp+2Ch+a4]
0x50E273: push    ecx; a6
0x50E274: mov     ecx, [esp+30h+a3]
0x50E278: push    edx; a5
0x50E279: mov     edx, [esp+34h+arg_4]
0x50E27D: push    eax; a4
0x50E27E: mov     eax, [esp+38h+a1]
0x50E282: push    ecx; a3
0x50E283: push    edx; a2
0x50E284: push    eax; a1
0x50E285: call    Script_ExtractArgs
0x50E28A: add     esp, 28h
0x50E28D: test    al, al
0x50E28F: jnz     short loc_50E295
0x50E291: add     esp, 1Ch
0x50E294: retn
0x50E295: mov     edx, dword ptr [esp+1Ch+var_1C]
0x50E298: test    edx, edx
0x50E29A: jl      short loc_50E313
0x50E29C: mov     ecx, [esp+1Ch+var_18]
0x50E2A0: test    ecx, ecx
0x50E2A2: jl      short loc_50E313
0x50E2A4: mov     eax, [esp+1Ch+var_14]
0x50E2A8: test    eax, eax
0x50E2AA: jl      short loc_50E313
0x50E2AC: cmp     edx, 0FFh
0x50E2B2: jg      short loc_50E313
0x50E2B4: cmp     ecx, 0FFh
0x50E2BA: jg      short loc_50E313
0x50E2BC: cmp     eax, 0FFh
0x50E2C1: jg      short loc_50E313
0x50E2C3: fild    dword ptr [esp+1Ch+var_1C]
0x50E2C6: fld     qword ptr ds:0A3DDD8h
0x50E2CC: fdiv    st(1), st
0x50E2CE: fxch    st(1)
0x50E2D0: fstp    [esp+1Ch+var_10]
0x50E2D4: fild    [esp+1Ch+var_18]
0x50E2D8: mov     ecx, [esp+1Ch+var_10]
0x50E2DC: mov     ds:0B45E14h, ecx
0x50E2E2: fdiv    st, st(1)
0x50E2E4: fstp    [esp+1Ch+var_C]
0x50E2E8: mov     edx, [esp+1Ch+var_C]
0x50E2EC: mov     ds:0B45E18h, edx
0x50E2F2: fidivr  [esp+1Ch+var_14]
0x50E2F6: fstp    [esp+1Ch+var_8]
0x50E2FA: fld1
0x50E2FC: mov     eax, [esp+1Ch+var_8]
0x50E300: fstp    [esp+1Ch+var_4]
0x50E304: mov     ds:0B45E1Ch, eax
0x50E309: mov     ecx, [esp+1Ch+var_4]
0x50E30D: mov     ds:0B45E20h, ecx
0x50E313: mov     al, 1
0x50E315: add     esp, 1Ch
0x50E318: retn
