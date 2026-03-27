0x54A540: sub     esp, 0Ch
0x54A543: mov     eax, [ecx+0A4h]
0x54A549: mov     edx, [eax+48h]
0x54A54C: push    esi
0x54A54D: lea     esi, [ecx+0A4h]
0x54A553: push    10h
0x54A555: mov     ecx, esi
0x54A557: call    edx
0x54A559: fstp    [esp+10h+var_8]
0x54A55D: mov     eax, [esi]
0x54A55F: mov     edx, [eax+48h]
0x54A562: push    0Fh
0x54A564: mov     ecx, esi
0x54A566: call    edx
0x54A568: fstp    [esp+10h+var_C]
0x54A56C: mov     eax, [esi]
0x54A56E: mov     edx, [eax+48h]
0x54A571: push    0Eh
0x54A573: mov     ecx, esi
0x54A575: call    edx
0x54A577: fstp    [esp+10h+var_4]
0x54A57B: fld     [esp+10h+var_8]
0x54A57F: fld     st
0x54A581: fld     qword ptr ds:0A3A5B0h
0x54A587: fucom   st(1)
0x54A589: fnstsw  ax
0x54A58B: fstp    st(1)
0x54A58D: test    ah, 44h
0x54A590: fldz
0x54A592: jp      short loc_54A5A4
0x54A594: fstp    st(2)
0x54A596: fxch    st(1)
0x54A598: fst     [esp+10h+var_8]
0x54A59C: fld     [esp+10h+var_8]
0x54A5A0: fxch    st(2)
0x54A5A2: fxch    st(1)
0x54A5A4: fld     qword ptr ds:0A641E8h
0x54A5AA: fcom    st(3)
0x54A5AC: fnstsw  ax
0x54A5AE: fld     qword ptr ds:0A641E0h
0x54A5B4: test    ah, 5
0x54A5B7: jp      short loc_54A5C8
0x54A5B9: fcom    st(4)
0x54A5BB: fnstsw  ax
0x54A5BD: test    ah, 41h
0x54A5C0: jz      short loc_54A5CE
0x54A5C2: fstp    st(4)
0x54A5C4: fld     st(3)
0x54A5C6: jmp     short loc_54A5CC
0x54A5C8: fstp    st(4)
0x54A5CA: fld     st
0x54A5CC: fxch    st(4)
0x54A5CE: fxch    st(4)
0x54A5D0: fstp    [esp+10h+var_8]
0x54A5D4: fld     [esp+10h+var_C]
0x54A5D8: fld     st
0x54A5DA: fucomp  st(4)
0x54A5DC: fnstsw  ax
0x54A5DE: test    ah, 44h
0x54A5E1: jp      short loc_54A5F5
0x54A5E3: fstp    st
0x54A5E5: fxch    st(1)
0x54A5E7: fst     [esp+10h+var_C]
0x54A5EB: fld     [esp+10h+var_C]
0x54A5EF: fxch    st(1)
0x54A5F1: fxch    st(2)
0x54A5F3: fxch    st(1)
0x54A5F5: fcom    st(1)
0x54A5F7: fnstsw  ax
0x54A5F9: test    ah, 41h
0x54A5FC: jnz     short loc_54A60D
0x54A5FE: fcom    st(4)
0x54A600: fnstsw  ax
0x54A602: test    ah, 5
0x54A605: jnp     short loc_54A611
0x54A607: fstp    st
0x54A609: fld     st(3)
0x54A60B: jmp     short loc_54A611
0x54A60D: fstp    st
0x54A60F: fld     st
0x54A611: fstp    [esp+10h+var_C]
0x54A615: fld     [esp+10h+var_4]
0x54A619: fld     st
0x54A61B: fucomp  st(4)
0x54A61D: fnstsw  ax
0x54A61F: fstp    st(3)
0x54A621: test    ah, 44h
0x54A624: jp      short loc_54A64A
0x54A626: fstp    st(2)
0x54A628: fstp    [esp+10h+var_4]
0x54A62C: fld     [esp+10h+var_4]
0x54A630: fxch    st(1)
0x54A632: fcom    st(1)
0x54A634: fnstsw  ax
0x54A636: test    ah, 5
0x54A639: jp      short loc_54A64E
0x54A63B: fstp    st
0x54A63D: fcom    st(1)
0x54A63F: fnstsw  ax
0x54A641: test    ah, 5
0x54A644: jnp     short loc_54A650
0x54A646: fstp    st
0x54A648: jmp     short loc_54A652
0x54A64A: fstp    st(1)
0x54A64C: jmp     short loc_54A632
0x54A64E: fstp    st(1)
0x54A650: fstp    st(1)
0x54A652: mov     esi, [esp+10h+arg_0]
0x54A656: fstp    [esp+10h+var_4]
0x54A65A: fld     [esp+10h+var_4]
0x54A65E: sub     esp, 0Ch
0x54A661: fstp    [esp+1Ch+var_14]; float
0x54A665: mov     ecx, esi
0x54A667: fld     [esp+1Ch+var_C]
0x54A66B: fstp    [esp+1Ch+var_18]; float
0x54A66F: fld     [esp+1Ch+var_8]
0x54A673: fstp    [esp+1Ch+var_1C]; float
0x54A676: call    sub_711580
0x54A67B: push    (offset stru_B26AF0.unk2C+2A8h)
0x54A680: mov     ecx, esi
0x54A682: call    sub_70FF20
0x54A687: neg     al
0x54A689: pop     esi
0x54A68A: sbb     eax, eax
0x54A68C: add     eax, 1
0x54A68F: add     esp, 0Ch
0x54A692: retn    4
