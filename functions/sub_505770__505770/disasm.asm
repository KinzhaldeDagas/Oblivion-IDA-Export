0x505770: push    ecx
0x505771: mov     ecx, [esp+4+l]
0x505775: mov     edx, [esp+4+arg_10]
0x505779: push    esi
0x50577A: mov     esi, [esp+8+a4]
0x50577E: lea     eax, [esp+8+var_4]
0x505782: push    eax; UInt16
0x505783: mov     eax, [esp+0Ch+arg_C]
0x505787: push    ecx; l
0x505788: mov     ecx, [esp+10h+a3]
0x50578C: push    edx; a6
0x50578D: mov     edx, [esp+14h+arg_4]
0x505791: push    eax; a5
0x505792: mov     eax, [esp+18h+a1]
0x505796: push    esi; a4
0x505797: push    ecx; a3
0x505798: push    edx; a2
0x505799: push    eax; a1
0x50579A: mov     dword ptr [esp+28h+var_4], 0
0x5057A2: call    Script_ExtractArgs
0x5057A7: add     esp, 20h
0x5057AA: test    al, al
0x5057AC: jnz     short loc_5057B1
0x5057AE: pop     esi
0x5057AF: pop     ecx
0x5057B0: retn
0x5057B1: mov     ecx, [esp+8+arg_18]
0x5057B5: mov     edx, dword ptr [esp+8+var_4]
0x5057B9: push    ecx
0x5057BA: push    0
0x5057BC: push    edx
0x5057BD: push    esi
0x5057BE: call    sub_4F5730
0x5057C3: add     esp, 10h
0x5057C6: pop     esi
0x5057C7: pop     ecx
0x5057C8: retn
