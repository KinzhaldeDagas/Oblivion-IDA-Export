0x503140: push    ecx
0x503141: mov     ecx, [esp+4+l]
0x503145: mov     edx, [esp+4+arg_10]
0x503149: push    esi
0x50314A: mov     esi, [esp+8+a4]
0x50314E: lea     eax, [esp+8+var_4]
0x503152: push    eax; UInt16
0x503153: mov     eax, [esp+0Ch+arg_C]
0x503157: push    ecx; l
0x503158: mov     ecx, [esp+10h+a3]
0x50315C: push    edx; a6
0x50315D: mov     edx, [esp+14h+arg_4]
0x503161: push    eax; a5
0x503162: mov     eax, [esp+18h+a1]
0x503166: push    esi; a4
0x503167: push    ecx; a3
0x503168: push    edx; a2
0x503169: push    eax; a1
0x50316A: mov     dword ptr [esp+28h+var_4], 0
0x503172: call    Script_ExtractArgs
0x503177: add     esp, 20h
0x50317A: test    al, al
0x50317C: jnz     short loc_503181
0x50317E: pop     esi
0x50317F: pop     ecx
0x503180: retn
0x503181: mov     ecx, [esp+8+arg_18]
0x503185: mov     edx, dword ptr [esp+8+var_4]
0x503189: push    ecx
0x50318A: push    0
0x50318C: push    edx
0x50318D: push    esi
0x50318E: call    sub_4F6E50
0x503193: add     esp, 10h
0x503196: pop     esi
0x503197: pop     ecx
0x503198: retn
