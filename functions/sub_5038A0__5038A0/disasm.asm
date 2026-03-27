0x5038A0: sub     esp, 0Ch
0x5038A3: lea     eax, [esp+0Ch+var_4]
0x5038A7: push    eax
0x5038A8: mov     eax, [esp+10h+l]
0x5038AC: lea     ecx, [esp+10h+var_C]
0x5038B0: push    ecx
0x5038B1: mov     ecx, [esp+14h+arg_10]
0x5038B5: lea     edx, [esp+14h+var_8]
0x5038B9: push    edx; UInt16
0x5038BA: mov     edx, [esp+18h+arg_C]
0x5038BE: push    eax; l
0x5038BF: mov     eax, [esp+1Ch+a4]
0x5038C3: push    ecx; a6
0x5038C4: mov     ecx, [esp+20h+a3]
0x5038C8: push    edx; a5
0x5038C9: mov     edx, [esp+24h+arg_4]
0x5038CD: push    eax; a4
0x5038CE: mov     eax, [esp+28h+a1]
0x5038D2: push    ecx; a3
0x5038D3: push    edx; a2
0x5038D4: push    eax; a1
0x5038D5: mov     dword ptr [esp+34h+var_8], 0
0x5038DD: mov     [esp+34h+var_C], 0
0x5038E5: mov     [esp+34h+var_4], 0
0x5038ED: call    Script_ExtractArgs
0x5038F2: add     esp, 28h
0x5038F5: test    al, al
0x5038F7: jnz     short loc_5038FD
0x5038F9: add     esp, 0Ch
0x5038FC: retn
0x5038FD: fldz
0x5038FF: mov     eax, [esp+0Ch+var_C]
0x503902: test    eax, eax
0x503904: mov     ecx, [esp+0Ch+arg_18]
0x503908: fstp    qword ptr [ecx]
0x50390A: jz      short loc_50391F
0x50390C: mov     ecx, dword ptr [esp+0Ch+var_8]
0x503910: test    ecx, ecx
0x503912: jz      short loc_50391F
0x503914: mov     edx, [esp+0Ch+var_4]
0x503918: push    edx
0x503919: push    eax
0x50391A: call    sub_51F0F0
0x50391F: mov     al, 1
0x503921: add     esp, 0Ch
0x503924: retn
