0x50B780: push    ecx
0x50B781: mov     eax, dword ptr [esp+4+arg_18]
0x50B785: fldz
0x50B787: lea     ecx, [esp+4+var_4]
0x50B78A: fstp    qword ptr [eax]
0x50B78C: mov     eax, [esp+4+l]
0x50B790: push    ecx
0x50B791: mov     ecx, [esp+8+arg_10]
0x50B795: lea     edx, [esp+8+arg_18]
0x50B799: push    edx; UInt16
0x50B79A: mov     edx, [esp+0Ch+arg_C]
0x50B79E: push    eax; l
0x50B79F: mov     eax, [esp+10h+a4]
0x50B7A3: push    ecx; a6
0x50B7A4: mov     ecx, [esp+14h+a3]
0x50B7A8: push    edx; a5
0x50B7A9: mov     edx, [esp+18h+arg_4]
0x50B7AD: push    eax; a4
0x50B7AE: mov     eax, [esp+1Ch+a1]
0x50B7B2: push    ecx; a3
0x50B7B3: push    edx; a2
0x50B7B4: push    eax; a1
0x50B7B5: mov     dword ptr [esp+28h+arg_18], 0
0x50B7BD: mov     [esp+28h+var_4], 0
0x50B7C5: call    Script_ExtractArgs
0x50B7CA: add     esp, 24h
0x50B7CD: test    al, al
0x50B7CF: jnz     short loc_50B7D3
0x50B7D1: pop     ecx
0x50B7D2: retn
0x50B7D3: mov     eax, dword ptr [esp+4+arg_18]
0x50B7D7: test    eax, eax
0x50B7D9: jz      short loc_50B802
0x50B7DB: cmp     [esp+4+var_4], 0
0x50B7DF: lea     ecx, [eax+24h]
0x50B7E2: jle     short loc_50B7F5
0x50B7E4: mov     edx, [ecx]
0x50B7E6: mov     eax, [edx+50h]
0x50B7E9: or      dword ptr [ecx+4], 2
0x50B7ED: push    10h
0x50B7EF: call    eax
0x50B7F1: mov     al, 1
0x50B7F3: pop     ecx
0x50B7F4: retn
0x50B7F5: mov     edx, [ecx]
0x50B7F7: mov     eax, [edx+50h]
0x50B7FA: and     dword ptr [ecx+4], 0FFFFFFFDh
0x50B7FE: push    10h
0x50B800: call    eax
0x50B802: mov     al, 1
0x50B804: pop     ecx
0x50B805: retn
