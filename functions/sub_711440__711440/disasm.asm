0x711440: push    ecx
0x711441: push    esi
0x711442: mov     esi, ecx
0x711444: fld     dword ptr [esi+1Ch]
0x711447: fstp    [esp+8+var_4]
0x71144B: fld     [esp+8+var_4]
0x71144F: fcom    qword ptr ds:0A3D360h
0x711455: fnstsw  ax
0x711457: test    ah, 41h
0x71145A: jnz     short loc_711480
0x71145C: fld1
0x71145E: fcomp   st(1)
0x711460: fnstsw  ax
0x711462: test    ah, 41h
0x711465: jnz     short loc_711476
0x711467: call    __CIasin
0x71146C: fstp    [esp+8+var_4]
0x711470: fld     [esp+8+var_4]
0x711474: jmp     short loc_71148A
0x711476: fstp    st
0x711478: fld     dword ptr ds:0B3F99Ch
0x71147E: jmp     short loc_71148A
0x711480: fstp    st
0x711482: fld     dword ptr ds:0B3F99Ch
0x711488: fchs
0x71148A: mov     eax, [esp+8+arg_4]
0x71148E: fstp    [esp+8+var_4]
0x711492: fld     [esp+8+var_4]
0x711496: sub     esp, 8
0x711499: fchs
0x71149B: fstp    [esp+10h+var_4]
0x71149F: fld     [esp+10h+var_4]
0x7114A3: fst     dword ptr [eax]
0x7114A5: fld     dword ptr ds:0B3F99Ch
0x7114AB: fcom    st(1)
0x7114AD: fnstsw  ax
0x7114AF: test    ah, 41h
0x7114B2: jnz     loc_71153C
0x7114B8: fchs
0x7114BA: fcompp
0x7114BC: fnstsw  ax
0x7114BE: test    ah, 5
0x7114C1: jp      short loc_711505
0x7114C3: fld     dword ptr [esi+10h]
0x7114C6: fstp    [esp+10h+var_C]; float
0x7114CA: fld     dword ptr [esi+4]
0x7114CD: fchs
0x7114CF: fstp    [esp+10h+var_10]; float
0x7114D2: call    sub_7070B0
0x7114D7: mov     ecx, [esp+10h+arg_0]
0x7114DB: fchs
0x7114DD: fstp    dword ptr [ecx]
0x7114DF: fld     dword ptr [esi+20h]
0x7114E2: fstp    [esp+10h+var_C]; float
0x7114E6: fld     dword ptr [esi+18h]
0x7114E9: fchs
0x7114EB: fstp    [esp+10h+var_10]; float
0x7114EE: call    sub_7070B0
0x7114F3: mov     edx, [esp+10h+arg_8]
0x7114F7: fchs
0x7114F9: add     esp, 8
0x7114FC: fstp    dword ptr [edx]
0x7114FE: mov     al, 1
0x711500: pop     esi
0x711501: pop     ecx
0x711502: retn    0Ch
0x711505: fld     dword ptr [esi]
0x711507: fstp    [esp+10h+var_C]; float
0x71150B: fld     dword ptr [esi+8]
0x71150E: fstp    [esp+10h+var_10]; float
0x711511: call    sub_7070B0
0x711516: mov     eax, [esp+10h+arg_8]
0x71151A: fstp    [esp+10h+arg_4]
0x71151E: fldz
0x711520: mov     ecx, [esp+10h+arg_0]
0x711524: fstp    dword ptr [eax]
0x711526: add     esp, 8
0x711529: fld     [esp+8+arg_4]
0x71152D: xor     al, al
0x71152F: fsub    qword ptr ds:0A2FC68h
0x711535: pop     esi
0x711536: fstp    dword ptr [ecx]
0x711538: pop     ecx
0x711539: retn    0Ch
0x71153C: fstp    st(1)
0x71153E: fstp    st
0x711540: fld     dword ptr [esi]
0x711542: fstp    [esp+10h+var_C]; float
0x711546: fld     dword ptr [esi+8]
0x711549: fstp    [esp+10h+var_10]; float
0x71154C: call    sub_7070B0
0x711551: mov     edx, [esp+10h+arg_8]
0x711555: fstp    [esp+10h+arg_4]
0x711559: fldz
0x71155B: mov     eax, [esp+10h+arg_0]
0x71155F: fstp    dword ptr [edx]
0x711561: add     esp, 8
0x711564: fld     [esp+8+arg_4]
0x711568: pop     esi
0x711569: fldz
0x71156B: fsubrp  st(1), st
0x71156D: fstp    dword ptr [eax]
0x71156F: xor     al, al
0x711571: pop     ecx
0x711572: retn    0Ch
