0x502890: push    ecx
0x502891: mov     ecx, [esp+4+l]
0x502895: mov     edx, [esp+4+arg_10]
0x502899: push    esi
0x50289A: mov     esi, [esp+8+a4]
0x50289E: lea     eax, [esp+8+var_4]
0x5028A2: push    eax; UInt16
0x5028A3: mov     eax, [esp+0Ch+arg_C]
0x5028A7: push    ecx; l
0x5028A8: mov     ecx, [esp+10h+a3]
0x5028AC: push    edx; a6
0x5028AD: mov     edx, [esp+14h+arg_4]
0x5028B1: push    eax; a5
0x5028B2: mov     eax, [esp+18h+a1]
0x5028B6: push    esi; a4
0x5028B7: push    ecx; a3
0x5028B8: push    edx; a2
0x5028B9: push    eax; a1
0x5028BA: mov     dword ptr [esp+28h+var_4], 0
0x5028C2: call    Script_ExtractArgs
0x5028C7: add     esp, 20h
0x5028CA: test    al, al
0x5028CC: jnz     short loc_5028D1
0x5028CE: pop     esi
0x5028CF: pop     ecx
0x5028D0: retn
0x5028D1: mov     ecx, [esp+8+arg_18]
0x5028D5: mov     edx, dword ptr [esp+8+var_4]
0x5028D9: push    ecx
0x5028DA: push    0
0x5028DC: push    edx
0x5028DD: push    esi
0x5028DE: call    Cmd_GetItemCount
0x5028E3: add     esp, 10h
0x5028E6: pop     esi
0x5028E7: pop     ecx
0x5028E8: retn
