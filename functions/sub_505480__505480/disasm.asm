0x505480: push    ecx
0x505481: mov     ecx, [esp+4+l]
0x505485: mov     edx, [esp+4+arg_10]
0x505489: push    esi
0x50548A: mov     esi, [esp+8+a4]
0x50548E: lea     eax, [esp+8+var_4]
0x505492: push    eax; UInt16
0x505493: mov     eax, [esp+0Ch+arg_C]
0x505497: push    ecx; l
0x505498: mov     ecx, [esp+10h+a3]
0x50549C: push    edx; a6
0x50549D: mov     edx, [esp+14h+arg_4]
0x5054A1: push    eax; a5
0x5054A2: mov     eax, [esp+18h+a1]
0x5054A6: push    esi; a4
0x5054A7: push    ecx; a3
0x5054A8: push    edx; a2
0x5054A9: push    eax; a1
0x5054AA: mov     dword ptr [esp+28h+var_4], 0
0x5054B2: call    Script_ExtractArgs
0x5054B7: add     esp, 20h
0x5054BA: test    al, al
0x5054BC: jnz     short loc_5054C1
0x5054BE: pop     esi
0x5054BF: pop     ecx
0x5054C0: retn
0x5054C1: mov     ecx, [esp+8+arg_18]
0x5054C5: mov     edx, dword ptr [esp+8+var_4]
0x5054C9: push    ecx
0x5054CA: push    0
0x5054CC: push    edx
0x5054CD: push    esi
0x5054CE: call    sub_4F80E0
0x5054D3: add     esp, 10h
0x5054D6: mov     al, 1
0x5054D8: pop     esi
0x5054D9: pop     ecx
0x5054DA: retn
