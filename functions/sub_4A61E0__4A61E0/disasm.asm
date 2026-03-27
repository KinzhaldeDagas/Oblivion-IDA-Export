0x4A61E0: fld1
0x4A61E2: push    edi
0x4A61E3: fld     [esp+4+arg_0]
0x4A61E7: mov     edi, ecx
0x4A61E9: fcom    st(1)
0x4A61EB: fnstsw  ax
0x4A61ED: fld     qword ptr ds:0A309F0h
0x4A61F3: test    ah, 41h
0x4A61F6: jnz     short loc_4A61FA
0x4A61F8: fdiv    st(1), st
0x4A61FA: fxch    st(1)
0x4A61FC: fstp    [esp+4+arg_0]
0x4A6200: fld     [esp+4+arg_8]
0x4A6204: fcom    st(2)
0x4A6206: fnstsw  ax
0x4A6208: test    ah, 41h
0x4A620B: jnz     short loc_4A6211
0x4A620D: fdivrp  st(1), st
0x4A620F: jmp     short loc_4A6213
0x4A6211: fstp    st(1)
0x4A6213: mov     ecx, [esp+4+arg_4]
0x4A6217: fstp    [esp+4+arg_8]
0x4A621B: test    ecx, ecx
0x4A621D: jz      short loc_4A6293
0x4A621F: fldz
0x4A6221: fld     [esp+4+arg_0]
0x4A6225: fcom    st(1)
0x4A6227: fnstsw  ax
0x4A6229: test    ah, 5
0x4A622C: jnp     short loc_4A6287
0x4A622E: fcomp   st(2)
0x4A6230: fnstsw  ax
0x4A6232: test    ah, 41h
0x4A6235: jz      short loc_4A6289
0x4A6237: fld     [esp+4+arg_8]
0x4A623B: fcom    st(1)
0x4A623D: fnstsw  ax
0x4A623F: fstp    st(1)
0x4A6241: test    ah, 5
0x4A6244: jnp     short loc_4A6291
0x4A6246: fcompp
0x4A6248: fnstsw  ax
0x4A624A: test    ah, 41h
0x4A624D: jz      short loc_4A6295
0x4A624F: push    esi
0x4A6250: lea     esi, [ecx+4]
0x4A6253: test    esi, esi
0x4A6255: jz      short loc_4A6282
0x4A6257: mov     ecx, [esi]
0x4A6259: test    ecx, ecx
0x4A625B: jz      short loc_4A6282
0x4A625D: mov     eax, [ecx]
0x4A625F: mov     edx, [eax+4]
0x4A6262: call    edx
0x4A6264: test    eax, eax
0x4A6266: jz      short loc_4A627B
0x4A6268: mov     ecx, [esi]
0x4A626A: mov     eax, [ecx]
0x4A626C: mov     edx, [eax+14h]
0x4A626F: push    0
0x4A6271: call    edx
0x4A6273: push    eax
0x4A6274: mov     ecx, edi
0x4A6276: call    sub_4A60E0
0x4A627B: mov     esi, [esi+4]
0x4A627E: test    esi, esi
0x4A6280: jnz     short loc_4A6257
0x4A6282: pop     esi
0x4A6283: pop     edi
0x4A6284: retn    0Ch
0x4A6287: fstp    st
0x4A6289: fstp    st(1)
0x4A628B: pop     edi
0x4A628C: fstp    st
0x4A628E: retn    0Ch
0x4A6291: fstp    st
0x4A6293: fstp    st
0x4A6295: pop     edi
0x4A6296: retn    0Ch
