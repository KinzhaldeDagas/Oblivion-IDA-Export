0x889810: fld     [esp+arg_0]
0x889814: sub     esp, 8
0x889817: fst     dword ptr ds:0B2E2E4h
0x88981D: fadd    dword ptr ds:0BA7910h
0x889823: fstp    dword ptr ds:0B2E2E0h
0x889829: fld     dword ptr ds:0A3D14Ch
0x88982F: fld     dword ptr ds:0B2E2E0h
0x889835: fcom    st(1)
0x889837: fnstsw  ax
0x889839: fldz
0x88983B: test    ah, 41h
0x88983E: jnz     short loc_8898A0
0x889840: fstp    st(1)
0x889842: fxch    st(1)
0x889844: fstp    dword ptr ds:0B2E2E0h
0x88984A: fld     dword ptr ds:0B2E2E0h
0x889850: mov     cl, [esp+8+arg_4]
0x889854: mov     eax, ds:0BA7918h
0x889859: neg     cl
0x88985B: sbb     ecx, ecx
0x88985D: add     ecx, 3
0x889860: test    eax, eax
0x889862: jz      loc_88996D
0x889868: cmp     eax, 0Ah
0x88986B: jz      loc_889933
0x889871: fld     dword ptr ds:0A95CA8h
0x889877: fcomp   st(1)
0x889879: fnstsw  ax
0x88987B: test    ah, 41h
0x88987E: jnz     short loc_8898C1
0x889880: fstp    dword ptr ds:0BA7910h
0x889886: mov     dword ptr ds:0BA7914h, 0
0x889890: fst     dword ptr ds:0B2E2E0h
0x889896: fstp    dword ptr ds:0BA790Ch
0x88989C: add     esp, 8
0x88989F: retn
0x8898A0: fstp    st(2)
0x8898A2: fcom    st(1)
0x8898A4: fnstsw  ax
0x8898A6: test    ah, 41h
0x8898A9: jp      short loc_889850
0x8898AB: fstp    st
0x8898AD: mov     dword ptr ds:0BA7914h, 0
0x8898B7: fstp    dword ptr ds:0BA790Ch
0x8898BD: add     esp, 8
0x8898C0: retn
0x8898C1: fxch    st(1)
0x8898C3: fstp    dword ptr ds:0BA7910h
0x8898C9: fnstcw  word ptr [esp+8+arg_0]
0x8898CD: movzx   eax, word ptr [esp+8+arg_0]
0x8898D2: fld     st
0x8898D4: fdiv    dword ptr ds:0B2E2E8h
0x8898DA: or      eax, 0C00h
0x8898DF: mov     dword ptr [esp+8+var_8], eax
0x8898E2: fldcw   word ptr [esp+8+var_8]
0x8898E5: fistp   [esp+8+var_8]
0x8898E8: mov     eax, dword ptr [esp+8+var_8]
0x8898EB: cmp     eax, ecx
0x8898ED: mov     ds:0BA7914h, eax
0x8898F2: fldcw   word ptr [esp+8+arg_0]
0x8898F6: jbe     short loc_8898FF
0x8898F8: mov     eax, ecx
0x8898FA: mov     ds:0BA7914h, eax
0x8898FF: test    eax, eax
0x889901: jz      short loc_88991F
0x889903: mov     [esp+8+arg_0], eax
0x889907: fild    [esp+8+arg_0]
0x88990B: jge     short loc_889913
0x88990D: fadd    dword ptr ds:0A2FC78h
0x889913: fdivp   st(1), st
0x889915: fstp    dword ptr ds:0BA790Ch
0x88991B: add     esp, 8
0x88991E: retn
0x88991F: fstp    dword ptr ds:0BA790Ch
0x889925: mov     dword ptr ds:0BA7914h, 1
0x88992F: add     esp, 8
0x889932: retn
0x889933: fld     dword ptr ds:0B2E2ECh
0x889939: fld     st
0x88993B: fsubp   st(2), st
0x88993D: fld     dword ptr ds:0B2E2F0h
0x889943: fmulp   st(2), st
0x889945: faddp   st(1), st
0x889947: fstp    dword ptr ds:0B2E2ECh
0x88994D: fld     dword ptr ds:0B2E2ECh
0x889953: fstp    dword ptr ds:0BA790Ch
0x889959: mov     dword ptr ds:0BA7914h, 1
0x889963: fstp    dword ptr ds:0BA7910h
0x889969: add     esp, 8
0x88996C: retn
0x88996D: fld     dword ptr ds:0B2E2E8h
0x889973: fst     dword ptr ds:0BA790Ch
0x889979: fld     st(1)
0x88997B: fdiv    st, st(1)
0x88997D: fnstcw  word ptr [esp+8+arg_0]
0x889981: movzx   eax, word ptr [esp+8+arg_0]
0x889986: or      eax, 0C00h
0x88998B: mov     dword ptr [esp+8+var_8], eax
0x88998E: fldcw   word ptr [esp+8+var_8]
0x889991: fistp   [esp+8+var_8]
0x889994: mov     eax, dword ptr [esp+8+var_8]
0x889997: cmp     eax, ecx
0x889999: mov     ds:0BA7914h, eax
0x88999E: fldcw   word ptr [esp+8+arg_0]
0x8899A2: jbe     short loc_8899AB
0x8899A4: mov     eax, ecx
0x8899A6: mov     ds:0BA7914h, eax
0x8899AB: test    eax, eax
0x8899AD: jz      short loc_8899F2
0x8899AF: fstp    st(2)
0x8899B1: mov     [esp+8+arg_0], eax
0x8899B5: fld     st
0x8899B7: fild    [esp+8+arg_0]
0x8899BB: jge     short loc_8899C3
0x8899BD: fadd    dword ptr ds:0A2FC78h
0x8899C3: fmul    st, st(3)
0x8899C5: fsubp   st(1), st
0x8899C7: fstp    dword ptr ds:0BA7910h
0x8899CD: fld     dword ptr ds:0BA7910h
0x8899D3: fld     st
0x8899D5: fsubp   st(2), st
0x8899D7: fxch    st(1)
0x8899D9: fstp    dword ptr ds:0B2E2E0h
0x8899DF: fcomp   st(1)
0x8899E1: fnstsw  ax
0x8899E3: test    ah, 5
0x8899E6: jnp     short loc_889A1B
0x8899E8: fstp    dword ptr ds:0BA7910h
0x8899EE: add     esp, 8
0x8899F1: retn
0x8899F2: fmul    qword ptr ds:0A2FAA0h
0x8899F8: fcomp   st(1)
0x8899FA: fnstsw  ax
0x8899FC: test    ah, 41h
0x8899FF: jnz     loc_889953
0x889A05: fstp    dword ptr ds:0BA7910h
0x889A0B: fst     dword ptr ds:0B2E2E0h
0x889A11: fstp    dword ptr ds:0BA790Ch
0x889A17: add     esp, 8
0x889A1A: retn
0x889A1B: fstp    st
0x889A1D: add     esp, 8
0x889A20: retn
