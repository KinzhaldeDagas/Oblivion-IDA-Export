0x541630: push    ebx
0x541631: push    ebp
0x541632: push    esi
0x541633: mov     esi, [esp+0Ch+arg_0]
0x541637: test    esi, esi
0x541639: push    edi
0x54163A: jz      loc_541787
0x541640: movzx   eax, word ptr [esi+0B6h]
0x541647: xor     ebp, ebp
0x541649: test    eax, eax
0x54164B: jbe     loc_541787
0x541651: cmp     eax, ebp
0x541653: mov     ebx, [esp+10h+arg_10]
0x541657: jbe     loc_541775
0x54165D: mov     eax, [esi+0B0h]
0x541663: mov     edi, [eax+ebp*4]
0x541666: test    edi, edi
0x541668: jz      loc_541775
0x54166E: mov     edx, [edi]
0x541670: mov     eax, [edx+10h]
0x541673: mov     ecx, edi
0x541675: call    eax
0x541677: test    eax, eax
0x541679: jz      loc_541745
0x54167F: mov     eax, [edi+0B4h]
0x541685: mov     ecx, [eax+24h]
0x541688: test    ecx, ecx
0x54168A: movzx   esi, word ptr [eax+8]
0x54168E: jnz     short loc_5416DF
0x541690: push    ecx
0x541691: mov     ecx, eax
0x541693: call    sub_7287C0
0x541698: test    si, si
0x54169B: mov     ecx, [edi+0B4h]
0x5416A1: mov     ecx, [ecx+24h]
0x5416A4: jbe     loc_541730
0x5416AA: mov     eax, ecx
0x5416AC: movzx   edx, si
0x5416AF: nop
0x5416B0: mov     ebx, ds:0B25AE0h
0x5416B6: mov     [eax], ebx
0x5416B8: mov     ebx, ds:0B25AE4h
0x5416BE: mov     [eax+4], ebx
0x5416C1: mov     ebx, ds:0B25AE8h
0x5416C7: mov     [eax+8], ebx
0x5416CA: mov     ebx, ds:0B25AECh
0x5416D0: mov     [eax+0Ch], ebx
0x5416D3: add     eax, 10h
0x5416D6: sub     edx, 1
0x5416D9: jnz     short loc_5416B0
0x5416DB: mov     ebx, [esp+10h+arg_10]
0x5416DF: test    si, si
0x5416E2: jbe     short loc_541730
0x5416E4: fld     [esp+10h+arg_C]
0x5416E8: lea     eax, [ecx+8]
0x5416EB: fld     [esp+10h+arg_8]
0x5416EF: movzx   ecx, si
0x5416F2: fld     [esp+10h+arg_4]
0x5416F6: test    bl, bl
0x5416F8: jz      short loc_541712
0x5416FA: fld     dword ptr [eax-8]
0x5416FD: fadd    st, st(1)
0x5416FF: fstp    dword ptr [eax-8]
0x541702: fld     dword ptr [eax-4]
0x541705: fadd    st, st(2)
0x541707: fstp    dword ptr [eax-4]
0x54170A: fld     dword ptr [eax]
0x54170C: fadd    st, st(3)
0x54170E: fstp    dword ptr [eax]
0x541710: jmp     short loc_541722
0x541712: fst     dword ptr [eax-8]
0x541715: fxch    st(1)
0x541717: fst     dword ptr [eax-4]
0x54171A: fxch    st(2)
0x54171C: fst     dword ptr [eax]
0x54171E: fxch    st(2)
0x541720: fxch    st(1)
0x541722: add     eax, 10h
0x541725: sub     ecx, 1
0x541728: jnz     short loc_5416F6
0x54172A: fstp    st(2)
0x54172C: fstp    st
0x54172E: fstp    st
0x541730: mov     edi, [edi+0B4h]
0x541736: test    edi, edi
0x541738: mov     esi, [esp+10h+arg_0]
0x54173C: jz      short loc_541775
0x54173E: or      word ptr [edi+2Eh], 4
0x541743: jmp     short loc_541775
0x541745: mov     edx, [edi]
0x541747: mov     eax, [edx+8]
0x54174A: mov     ecx, edi
0x54174C: call    eax
0x54174E: test    eax, eax
0x541750: jz      short loc_541775
0x541752: mov     edx, [esp+10h+arg_4]
0x541756: push    ebx; int
0x541757: sub     esp, 0Ch
0x54175A: mov     ecx, esp
0x54175C: mov     [ecx], edx
0x54175E: mov     edx, [esp+20h+arg_8]
0x541762: mov     [ecx+4], edx
0x541765: mov     edx, [esp+20h+arg_C]
0x541769: push    eax; int
0x54176A: mov     [ecx+8], edx
0x54176D: call    sub_541630
0x541772: add     esp, 14h
0x541775: movzx   eax, word ptr [esi+0B6h]
0x54177C: add     ebp, 1
0x54177F: cmp     eax, ebp
0x541781: ja      loc_54165D
0x541787: pop     edi
0x541788: pop     esi
0x541789: pop     ebp
0x54178A: pop     ebx
0x54178B: retn
