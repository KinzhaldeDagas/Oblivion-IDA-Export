0x4C1080: sub     esp, 0Ch
0x4C1083: push    ebx
0x4C1084: mov     ebx, [esp+10h+arg_0]
0x4C1088: test    ebx, ebx
0x4C108A: push    edi
0x4C108B: mov     edi, ecx
0x4C108D: jz      loc_4C114F
0x4C1093: mov     eax, [edi+24h]
0x4C1096: test    eax, eax
0x4C1098: push    esi
0x4C1099: jz      short loc_4C10A3
0x4C109B: mov     esi, [eax+9Ch]
0x4C10A1: jmp     short loc_4C10B5
0x4C10A3: mov     ecx, [edi+20h]; this
0x4C10A6: test    ecx, ecx
0x4C10A8: jz      short loc_4C10B3
0x4C10AA: call    TESObjectCELL_GetYCoordinate
0x4C10AF: mov     esi, eax
0x4C10B1: jmp     short loc_4C10B5
0x4C10B3: xor     esi, esi
0x4C10B5: mov     eax, [edi+24h]
0x4C10B8: test    eax, eax
0x4C10BA: jz      short loc_4C10C4
0x4C10BC: mov     eax, [eax+98h]
0x4C10C2: jmp     short loc_4C10D4
0x4C10C4: mov     ecx, [edi+20h]; this
0x4C10C7: test    ecx, ecx
0x4C10C9: jz      short loc_4C10D2
0x4C10CB: call    TESObjectCELL_GetXCoordinate
0x4C10D0: jmp     short loc_4C10D4
0x4C10D2: xor     eax, eax
0x4C10D4: shl     eax, 0Ch
0x4C10D7: mov     [esp+18h+arg_0], eax
0x4C10DB: fild    [esp+18h+arg_0]
0x4C10DF: mov     eax, [esp+18h+arg_4]
0x4C10E3: fld     qword ptr ds:0A30F70h
0x4C10E9: shl     esi, 0Ch
0x4C10EC: mov     [esp+18h+arg_0], esi
0x4C10F0: fadd    st(1), st
0x4C10F2: pop     esi
0x4C10F3: fxch    st(1)
0x4C10F5: fstp    [esp+14h+var_C]
0x4C10F9: fiadd   [esp+14h+arg_0]
0x4C10FD: fstp    [esp+14h+var_8]
0x4C1101: fld     dword ptr [eax]
0x4C1103: fadd    [esp+14h+var_C]
0x4C1107: fstp    [esp+14h+var_C]
0x4C110B: fld     dword ptr [eax+4]
0x4C110E: fadd    [esp+14h+var_8]
0x4C1112: fstp    [esp+14h+var_8]
0x4C1116: fld     [esp+14h+var_C]
0x4C111A: fild    dword ptr [ebx+8]
0x4C111D: fcomp   st(1)
0x4C111F: fnstsw  ax
0x4C1121: test    ah, 5
0x4C1124: jnp     short loc_4C115B
0x4C1126: fld     [esp+14h+var_8]
0x4C112A: fild    dword ptr [ebx+4]
0x4C112D: fcomp   st(1)
0x4C112F: fnstsw  ax
0x4C1131: test    ah, 5
0x4C1134: jnp     short loc_4C1159
0x4C1136: fild    dword ptr [ebx]
0x4C1138: fcomp   st(2)
0x4C113A: fnstsw  ax
0x4C113C: fstp    st(1)
0x4C113E: test    ah, 41h
0x4C1141: jz      short loc_4C115B
0x4C1143: fild    dword ptr [ebx+0Ch]
0x4C1146: fcompp
0x4C1148: fnstsw  ax
0x4C114A: test    ah, 41h
0x4C114D: jz      short loc_4C115D
0x4C114F: pop     edi
0x4C1150: mov     al, 1
0x4C1152: pop     ebx
0x4C1153: add     esp, 0Ch
0x4C1156: retn    8
0x4C1159: fstp    st(1)
0x4C115B: fstp    st
0x4C115D: pop     edi
0x4C115E: xor     al, al
0x4C1160: pop     ebx
0x4C1161: add     esp, 0Ch
0x4C1164: retn    8
