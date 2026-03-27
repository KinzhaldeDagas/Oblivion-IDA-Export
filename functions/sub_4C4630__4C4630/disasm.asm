0x4C4630: fld     dword ptr ds:0A32048h
0x4C4636: sub     esp, 0Ch
0x4C4639: push    ebx
0x4C463A: push    ebp
0x4C463B: mov     ebp, [esp+14h+arg_4]
0x4C463F: cmp     ebp, 10h
0x4C4642: push    esi
0x4C4643: mov     esi, [esp+18h+arg_0]
0x4C4647: fstp    dword ptr [esi]
0x4C4649: mov     ebx, ecx
0x4C464B: fld     dword ptr ds:0A3B888h
0x4C4651: fstp    dword ptr [esi+4]
0x4C4654: jge     short loc_4C469E
0x4C4656: push    edi
0x4C4657: xor     edi, edi
0x4C4659: lea     esp, [esp+0]
0x4C4660: lea     eax, [esp+1Ch+var_C]
0x4C4664: push    eax
0x4C4665: push    edi
0x4C4666: push    ebp
0x4C4667: mov     ecx, ebx
0x4C4669: call    sub_4C1DD0
0x4C466E: fld     [esp+1Ch+var_4]
0x4C4672: fld     dword ptr [esi]
0x4C4674: fcomp   st(1)
0x4C4676: fnstsw  ax
0x4C4678: test    ah, 41h
0x4C467B: jnz     short loc_4C467F
0x4C467D: fst     dword ptr [esi]
0x4C467F: fld     dword ptr [esi+4]
0x4C4682: fcomp   st(1)
0x4C4684: fnstsw  ax
0x4C4686: test    ah, 5
0x4C4689: jp      short loc_4C4690
0x4C468B: fstp    dword ptr [esi+4]
0x4C468E: jmp     short loc_4C4692
0x4C4690: fstp    st
0x4C4692: add     edi, 1
0x4C4695: cmp     edi, 121h
0x4C469B: jl      short loc_4C4660
0x4C469D: pop     edi
0x4C469E: mov     eax, esi
0x4C46A0: pop     esi
0x4C46A1: pop     ebp
0x4C46A2: pop     ebx
0x4C46A3: add     esp, 0Ch
0x4C46A6: retn    8
