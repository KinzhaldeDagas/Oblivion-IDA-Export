0x50B700: push    ecx
0x50B701: mov     ecx, [esp+4+l]
0x50B705: mov     edx, [esp+4+arg_10]
0x50B709: lea     eax, [esp+4+var_4]
0x50B70C: push    eax; UInt16
0x50B70D: mov     eax, [esp+8+arg_C]
0x50B711: push    ecx; l
0x50B712: mov     ecx, [esp+0Ch+a4]
0x50B716: push    edx; a6
0x50B717: mov     edx, [esp+10h+a3]
0x50B71B: push    eax; a5
0x50B71C: mov     eax, [esp+14h+arg_4]
0x50B720: push    ecx; a4
0x50B721: mov     ecx, [esp+18h+a1]
0x50B725: push    edx; a3
0x50B726: push    eax; a2
0x50B727: push    ecx; a1
0x50B728: mov     dword ptr [esp+24h+var_4], 0
0x50B730: call    Script_ExtractArgs
0x50B735: add     esp, 20h
0x50B738: test    al, al
0x50B73A: jnz     short loc_50B73E
0x50B73C: pop     ecx
0x50B73D: retn
0x50B73E: mov     eax, ds:0B333C4h
0x50B743: cmp     byte ptr [eax+594h], 0
0x50B74A: jz      short loc_50B770
0x50B74C: mov     ecx, dword ptr [esp+4+var_4]
0x50B74F: test    ecx, ecx
0x50B751: jge     short loc_50B758
0x50B753: xor     ecx, ecx
0x50B755: mov     dword ptr [esp+4+var_4], ecx
0x50B758: mov     [eax+590h], ecx
0x50B75E: mov     byte ptr [eax+594h], 1
0x50B765: cmp     dword ptr [esp+4+var_4], 0
0x50B769: jnz     short loc_50B770
0x50B76B: call    sub_57B4C0
0x50B770: mov     al, 1
0x50B772: pop     ecx
0x50B773: retn
