0x5052D0: push    ecx
0x5052D1: mov     eax, dword ptr [esp+4+arg_18]
0x5052D5: fldz
0x5052D7: lea     ecx, [esp+4+var_4]
0x5052DA: fstp    qword ptr [eax]
0x5052DC: mov     eax, [esp+4+l]
0x5052E0: push    ecx
0x5052E1: mov     ecx, [esp+8+arg_10]
0x5052E5: lea     edx, [esp+8+arg_18]
0x5052E9: push    edx; UInt16
0x5052EA: mov     edx, [esp+0Ch+arg_C]
0x5052EE: push    eax; l
0x5052EF: mov     eax, [esp+10h+a4]
0x5052F3: push    ecx; a6
0x5052F4: mov     ecx, [esp+14h+a3]
0x5052F8: push    edx; a5
0x5052F9: mov     edx, [esp+18h+arg_4]
0x5052FD: push    eax; a4
0x5052FE: mov     eax, [esp+1Ch+a1]
0x505302: push    ecx; a3
0x505303: push    edx; a2
0x505304: push    eax; a1
0x505305: mov     dword ptr [esp+28h+arg_18], 0
0x50530D: mov     [esp+28h+var_4], 0
0x505315: call    Script_ExtractArgs
0x50531A: add     esp, 24h
0x50531D: test    al, al
0x50531F: jnz     short loc_505323
0x505321: pop     ecx
0x505322: retn
0x505323: mov     ecx, dword ptr [esp+4+arg_18]
0x505327: test    ecx, ecx
0x505329: jz      short loc_50533D
0x50532B: cmp     [esp+4+var_4], 0
0x50532F: mov     edx, [ecx]
0x505331: mov     edx, [edx+94h]
0x505337: setnle  al
0x50533A: push    eax
0x50533B: call    edx
0x50533D: mov     al, 1
0x50533F: pop     ecx
0x505340: retn
