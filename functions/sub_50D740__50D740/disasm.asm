0x50D740: sub     esp, 8
0x50D743: mov     edx, [esp+8+l]
0x50D747: xor     eax, eax
0x50D749: mov     dword ptr [esp+8+var_8], eax
0x50D74C: mov     [esp+8+var_4], eax
0x50D750: lea     eax, [esp+8+var_4]
0x50D754: push    eax
0x50D755: mov     eax, [esp+0Ch+arg_10]
0x50D759: lea     ecx, [esp+0Ch+var_8]
0x50D75D: push    ecx; UInt16
0x50D75E: mov     ecx, [esp+10h+arg_C]
0x50D762: push    edx; l
0x50D763: mov     edx, [esp+14h+a4]
0x50D767: push    eax; a6
0x50D768: mov     eax, [esp+18h+a3]
0x50D76C: push    ecx; a5
0x50D76D: mov     ecx, [esp+1Ch+arg_4]
0x50D771: push    edx; a4
0x50D772: mov     edx, [esp+20h+a1]
0x50D776: push    eax; a3
0x50D777: push    ecx; a2
0x50D778: push    edx; a1
0x50D779: call    Script_ExtractArgs
0x50D77E: add     esp, 24h
0x50D781: test    al, al
0x50D783: jnz     short loc_50D789
0x50D785: add     esp, 8
0x50D788: retn
0x50D789: mov     eax, ds:0B333C4h
0x50D78E: mov     ecx, dword ptr [esp+8+var_8]
0x50D791: mov     edx, [esp+8+var_4]
0x50D795: add     [eax+ecx*4+658h], edx
0x50D79C: mov     al, 1
0x50D79E: add     esp, 8
0x50D7A1: retn
