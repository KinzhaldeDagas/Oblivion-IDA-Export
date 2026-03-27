0x5030D0: sub     esp, 8
0x5030D3: mov     edx, [esp+8+l]
0x5030D7: push    esi
0x5030D8: mov     esi, [esp+0Ch+a4]
0x5030DC: xor     eax, eax
0x5030DE: mov     [esp+0Ch+var_8], eax
0x5030E2: mov     dword ptr [esp+0Ch+var_4], eax
0x5030E6: lea     eax, [esp+0Ch+var_8]
0x5030EA: push    eax
0x5030EB: mov     eax, [esp+10h+arg_10]
0x5030EF: lea     ecx, [esp+10h+var_4]
0x5030F3: push    ecx; UInt16
0x5030F4: mov     ecx, [esp+14h+arg_C]
0x5030F8: push    edx; l
0x5030F9: mov     edx, [esp+18h+a3]
0x5030FD: push    eax; a6
0x5030FE: mov     eax, [esp+1Ch+arg_4]
0x503102: push    ecx; a5
0x503103: mov     ecx, [esp+20h+a1]
0x503107: push    esi; a4
0x503108: push    edx; a3
0x503109: push    eax; a2
0x50310A: push    ecx; a1
0x50310B: call    Script_ExtractArgs
0x503110: add     esp, 24h
0x503113: test    al, al
0x503115: jnz     short loc_50311C
0x503117: pop     esi
0x503118: add     esp, 8
0x50311B: retn
0x50311C: mov     edx, [esp+0Ch+arg_18]
0x503120: mov     eax, [esp+0Ch+var_8]
0x503124: mov     ecx, dword ptr [esp+0Ch+var_4]
0x503128: push    edx
0x503129: push    eax
0x50312A: push    ecx
0x50312B: push    esi
0x50312C: call    sub_4F6D70
0x503131: add     esp, 10h
0x503134: pop     esi
0x503135: add     esp, 8
0x503138: retn
