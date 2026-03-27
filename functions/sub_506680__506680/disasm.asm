0x506680: sub     esp, 1Ch
0x506683: lea     eax, [esp+1Ch+var_14]
0x506687: push    eax
0x506688: mov     eax, [esp+20h+l]
0x50668C: lea     ecx, [esp+20h+var_18]
0x506690: push    ecx
0x506691: mov     ecx, [esp+24h+arg_10]
0x506695: lea     edx, [esp+24h+var_1C]
0x506699: push    edx; UInt16
0x50669A: mov     edx, [esp+28h+arg_C]
0x50669E: push    eax; l
0x50669F: mov     eax, [esp+2Ch+a4]
0x5066A3: push    ecx; a6
0x5066A4: mov     ecx, [esp+30h+a3]
0x5066A8: push    edx; a5
0x5066A9: mov     edx, [esp+34h+arg_4]
0x5066AD: push    eax; a4
0x5066AE: mov     eax, [esp+38h+a1]
0x5066B2: push    ecx; a3
0x5066B3: push    edx; a2
0x5066B4: push    eax; a1
0x5066B5: call    Script_ExtractArgs
0x5066BA: add     esp, 28h
0x5066BD: test    al, al
0x5066BF: jnz     short loc_5066C5
0x5066C1: add     esp, 1Ch
0x5066C4: retn
0x5066C5: mov     edx, dword ptr [esp+1Ch+var_1C]
0x5066C8: test    edx, edx
0x5066CA: jl      short loc_506743
0x5066CC: mov     ecx, [esp+1Ch+var_18]
0x5066D0: test    ecx, ecx
0x5066D2: jl      short loc_506743
0x5066D4: mov     eax, [esp+1Ch+var_14]
0x5066D8: test    eax, eax
0x5066DA: jl      short loc_506743
0x5066DC: cmp     edx, 0FFh
0x5066E2: jg      short loc_506743
0x5066E4: cmp     ecx, 0FFh
0x5066EA: jg      short loc_506743
0x5066EC: cmp     eax, 0FFh
0x5066F1: jg      short loc_506743
0x5066F3: fild    dword ptr [esp+1Ch+var_1C]
0x5066F6: fld     qword ptr ds:0A3DDD8h
0x5066FC: fdiv    st(1), st
0x5066FE: fxch    st(1)
0x506700: fstp    [esp+1Ch+var_10]
0x506704: fild    [esp+1Ch+var_18]
0x506708: mov     ecx, [esp+1Ch+var_10]
0x50670C: mov     ds:0B45E34h, ecx
0x506712: fdiv    st, st(1)
0x506714: fstp    [esp+1Ch+var_C]
0x506718: mov     edx, [esp+1Ch+var_C]
0x50671C: mov     ds:0B45E38h, edx
0x506722: fidivr  [esp+1Ch+var_14]
0x506726: fstp    [esp+1Ch+var_8]
0x50672A: fld1
0x50672C: mov     eax, [esp+1Ch+var_8]
0x506730: fstp    [esp+1Ch+var_4]
0x506734: mov     ds:0B45E3Ch, eax
0x506739: mov     ecx, [esp+1Ch+var_4]
0x50673D: mov     ds:0B45E40h, ecx
0x506743: mov     al, 1
0x506745: add     esp, 1Ch
0x506748: retn
