0x505350: push    ecx
0x505351: mov     ecx, [esp+4+l]
0x505355: mov     edx, [esp+4+arg_10]
0x505359: push    esi
0x50535A: mov     esi, [esp+8+a4]
0x50535E: lea     eax, [esp+8+var_4]
0x505362: push    eax; UInt16
0x505363: mov     eax, [esp+0Ch+arg_C]
0x505367: push    ecx; l
0x505368: mov     ecx, [esp+10h+a3]
0x50536C: push    edx; a6
0x50536D: mov     edx, [esp+14h+arg_4]
0x505371: push    eax; a5
0x505372: mov     eax, [esp+18h+a1]
0x505376: push    esi; a4
0x505377: push    ecx; a3
0x505378: push    edx; a2
0x505379: push    eax; a1
0x50537A: mov     dword ptr [esp+28h+var_4], 0
0x505382: call    Script_ExtractArgs
0x505387: add     esp, 20h
0x50538A: test    al, al
0x50538C: jnz     short loc_505391
0x50538E: pop     esi
0x50538F: pop     ecx
0x505390: retn
0x505391: mov     ecx, [esp+8+arg_18]
0x505395: mov     edx, dword ptr [esp+8+var_4]
0x505399: push    ecx
0x50539A: push    0
0x50539C: push    edx
0x50539D: push    esi
0x50539E: call    sub_4F5650
0x5053A3: add     esp, 10h
0x5053A6: pop     esi
0x5053A7: pop     ecx
0x5053A8: retn
