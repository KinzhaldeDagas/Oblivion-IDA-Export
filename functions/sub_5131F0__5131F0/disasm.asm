0x5131F0: mov     ecx, [esp+l]
0x5131F4: mov     edx, [esp+arg_10]
0x5131F8: sub     esp, 20h
0x5131FB: push    esi
0x5131FC: mov     esi, [esp+24h+a4]
0x513200: lea     eax, [esp+24h+var_20]
0x513204: push    eax; UInt16
0x513205: mov     eax, [esp+28h+arg_C]
0x513209: push    ecx; l
0x51320A: mov     ecx, [esp+2Ch+a3]
0x51320E: push    edx; a6
0x51320F: mov     edx, [esp+30h+arg_4]
0x513213: push    eax; a5
0x513214: mov     eax, [esp+34h+a1]
0x513218: push    esi; a4
0x513219: push    ecx; a3
0x51321A: push    edx; a2
0x51321B: push    eax; a1
0x51321C: call    Script_ExtractArgs
0x513221: add     esp, 20h
0x513224: test    al, al
0x513226: jnz     short loc_51322F
0x513228: xor     al, al
0x51322A: pop     esi
0x51322B: add     esp, 20h
0x51322E: retn
0x51322F: test    esi, esi
0x513231: jz      short loc_513228
0x513233: mov     edx, [esi]
0x513235: fld     dword ptr [esp+24h+var_20]
0x513239: mov     eax, [edx+154h]
0x51323F: fstp    [esp+24h+var_10]
0x513243: push    offset sub_513160
0x513248: lea     ecx, [esp+28h+var_1C]
0x51324C: push    ecx
0x51324D: mov     ecx, esi
0x51324F: mov     [esp+2Ch+var_1C], 0
0x513257: mov     [esp+2Ch+var_14], 0Fh
0x51325F: mov     byte ptr [esp+2Ch+var_18], 1
0x513264: call    eax
0x513266: push    eax
0x513267: call    sub_88BBE0
0x51326C: add     esp, 0Ch
0x51326F: mov     al, 1
0x513271: pop     esi
0x513272: add     esp, 20h
0x513275: retn
