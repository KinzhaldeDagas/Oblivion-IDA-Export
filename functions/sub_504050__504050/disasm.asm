0x504050: push    ecx
0x504051: mov     ecx, [esp+4+arg_10]
0x504055: mov     edx, [esp+4+arg_C]
0x504059: push    esi
0x50405A: mov     esi, [esp+8+a4]
0x50405E: push    edi
0x50405F: mov     edi, [esp+0Ch+l]
0x504063: lea     eax, [esp+0Ch+var_4]
0x504067: push    eax; UInt16
0x504068: mov     eax, [esp+10h+a3]
0x50406C: push    edi; l
0x50406D: push    ecx; a6
0x50406E: mov     ecx, [esp+18h+arg_4]
0x504072: push    edx; a5
0x504073: mov     edx, [esp+1Ch+a1]
0x504077: push    esi; a4
0x504078: push    eax; a3
0x504079: push    ecx; a2
0x50407A: push    edx; a1
0x50407B: mov     dword ptr [esp+2Ch+var_4], 0
0x504083: call    Script_ExtractArgs
0x504088: add     esp, 20h
0x50408B: test    al, al
0x50408D: jnz     short loc_504093
0x50408F: pop     edi
0x504090: pop     esi
0x504091: pop     ecx
0x504092: retn
0x504093: test    esi, esi
0x504095: fldz
0x504097: push    ebx
0x504098: mov     ebx, [esp+10h+arg_18]
0x50409C: fstp    qword ptr [ebx]
0x50409E: jz      short loc_5040BD
0x5040A0: test    edi, edi
0x5040A2: jz      short loc_5040BD
0x5040A4: mov     eax, dword ptr [esp+10h+var_4]
0x5040A8: push    80h ; '€'
0x5040AD: push    eax
0x5040AE: mov     ecx, edi
0x5040B0: call    sub_4FB5F0
0x5040B5: test    al, al
0x5040B7: jz      short loc_5040BD
0x5040B9: fld1
0x5040BB: fstp    qword ptr [ebx]
0x5040BD: pop     ebx
0x5040BE: pop     edi
0x5040BF: mov     al, 1
0x5040C1: pop     esi
0x5040C2: pop     ecx
0x5040C3: retn
