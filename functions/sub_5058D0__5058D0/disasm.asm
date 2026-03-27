0x5058D0: push    ecx
0x5058D1: mov     ecx, [esp+4+l]
0x5058D5: mov     edx, [esp+4+arg_10]
0x5058D9: push    esi
0x5058DA: mov     esi, [esp+8+a4]
0x5058DE: lea     eax, [esp+8+var_4]
0x5058E2: push    eax; UInt16
0x5058E3: mov     eax, [esp+0Ch+arg_C]
0x5058E7: push    ecx; l
0x5058E8: mov     ecx, [esp+10h+a3]
0x5058EC: push    edx; a6
0x5058ED: mov     edx, [esp+14h+arg_4]
0x5058F1: push    eax; a5
0x5058F2: mov     eax, [esp+18h+a1]
0x5058F6: push    esi; a4
0x5058F7: push    ecx; a3
0x5058F8: push    edx; a2
0x5058F9: push    eax; a1
0x5058FA: mov     dword ptr [esp+28h+var_4], 0
0x505902: call    Script_ExtractArgs
0x505907: add     esp, 20h
0x50590A: test    al, al
0x50590C: jnz     short loc_505911
0x50590E: pop     esi
0x50590F: pop     ecx
0x505910: retn
0x505911: mov     ecx, [esp+8+arg_18]
0x505915: mov     edx, dword ptr [esp+8+var_4]
0x505919: push    ecx
0x50591A: push    0
0x50591C: push    edx
0x50591D: push    esi
0x50591E: call    sub_4F8370
0x505923: add     esp, 10h
0x505926: pop     esi
0x505927: pop     ecx
0x505928: retn
