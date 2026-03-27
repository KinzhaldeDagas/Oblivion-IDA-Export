0x5E4010: push    ecx
0x5E4011: push    esi
0x5E4012: mov     esi, ecx
0x5E4014: mov     ecx, [esi+58h]
0x5E4017: test    ecx, ecx
0x5E4019: jz      short loc_5E4030
0x5E401B: mov     eax, [ecx]
0x5E401D: mov     edx, [eax+0ECh]
0x5E4023: push    1
0x5E4025: call    edx
0x5E4027: test    eax, eax
0x5E4029: jz      short loc_5E4030
0x5E402B: mov     eax, [eax+8]
0x5E402E: jmp     short loc_5E4032
0x5E4030: xor     eax, eax
0x5E4032: test    eax, eax
0x5E4034: jz      short loc_5E404B
0x5E4036: mov     cl, [eax+90h]
0x5E403C: cmp     cl, 5
0x5E403F: jz      short loc_5E407A
0x5E4041: cmp     cl, 4
0x5E4044: jz      short loc_5E407A
0x5E4046: fld     dword ptr [eax+7Ch]
0x5E4049: jmp     short loc_5E404D
0x5E404B: fldz
0x5E404D: mov     eax, dword ptr [esp+8+arg_0]
0x5E4051: fstp    [esp+8+var_4]
0x5E4055: fld     [esp+8+var_4]
0x5E4059: push    eax; char
0x5E405A: push    ecx
0x5E405B: fstp    [esp+10h+var_10]; float
0x5E405E: call    sub_547560
0x5E4063: fstp    dword ptr [esp+10h+arg_0]
0x5E4067: add     esp, 4
0x5E406A: fld     dword ptr [esp+0Ch+arg_0]
0x5E406E: mov     ecx, esi
0x5E4070: fchs
0x5E4072: fstp    [esp+0Ch+var_C]; float
0x5E4075: call    Actor_ModFatigue?
0x5E407A: pop     esi
0x5E407B: pop     ecx
0x5E407C: retn    4
