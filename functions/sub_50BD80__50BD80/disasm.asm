0x50BD80: sub     esp, 8
0x50BD83: mov     edx, [esp+8+l]
0x50BD87: lea     eax, [esp+8+var_4]
0x50BD8B: push    eax
0x50BD8C: mov     eax, [esp+0Ch+arg_10]
0x50BD90: lea     ecx, [esp+0Ch+var_8]
0x50BD94: push    ecx; UInt16
0x50BD95: mov     ecx, [esp+10h+arg_C]
0x50BD99: push    edx; l
0x50BD9A: mov     edx, [esp+14h+a4]
0x50BD9E: push    eax; a6
0x50BD9F: mov     eax, [esp+18h+a3]
0x50BDA3: push    ecx; a5
0x50BDA4: mov     ecx, [esp+1Ch+arg_4]
0x50BDA8: push    edx; a4
0x50BDA9: mov     edx, [esp+20h+a1]
0x50BDAD: push    eax; a3
0x50BDAE: push    ecx; a2
0x50BDAF: push    edx; a1
0x50BDB0: mov     dword ptr [esp+2Ch+var_8], 0
0x50BDB8: mov     [esp+2Ch+var_4], 0
0x50BDC0: call    Script_ExtractArgs
0x50BDC5: add     esp, 24h
0x50BDC8: test    al, al
0x50BDCA: jnz     short loc_50BDD0
0x50BDCC: add     esp, 8
0x50BDCF: retn
0x50BDD0: cmp     [esp+8+var_4], 0
0x50BDD5: mov     eax, dword ptr [esp+8+var_8]
0x50BDD8: push    4
0x50BDDA: mov     ecx, eax
0x50BDDC: jz      short loc_50BDEF
0x50BDDE: or      byte ptr [eax+34h], 40h
0x50BDE2: mov     eax, [ecx]
0x50BDE4: mov     edx, [eax+40h]
0x50BDE7: call    edx
0x50BDE9: mov     al, 1
0x50BDEB: add     esp, 8
0x50BDEE: retn
0x50BDEF: and     byte ptr [eax+34h], 0BFh
0x50BDF3: mov     eax, [ecx]
0x50BDF5: mov     edx, [eax+40h]
0x50BDF8: call    edx
0x50BDFA: mov     al, 1
0x50BDFC: add     esp, 8
0x50BDFF: retn
