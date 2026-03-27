0x5E95D0: push    ecx
0x5E95D1: fld     [esp+4+a3]
0x5E95D5: push    ebx
0x5E95D6: mov     bl, [esp+8+a2]
0x5E95DA: fst     [esp+8+var_4]
0x5E95DE: test    bl, bl
0x5E95E0: fldz
0x5E95E2: push    esi
0x5E95E3: push    edi
0x5E95E4: mov     esi, ecx
0x5E95E6: jz      short loc_5E960E
0x5E95E8: fcom    st(1)
0x5E95EA: fnstsw  ax
0x5E95EC: fstp    st(1)
0x5E95EE: test    ah, 1
0x5E95F1: jnz     short loc_5E9610
0x5E95F3: mov     ecx, [esi+58h]
0x5E95F6: test    ecx, ecx
0x5E95F8: jz      short loc_5E9610
0x5E95FA: mov     eax, [ecx]
0x5E95FC: fstp    st
0x5E95FE: mov     edx, [eax+438h]
0x5E9604: call    edx
0x5E9606: fstp    [esp+10h+var_4]
0x5E960A: fldz
0x5E960C: jmp     short loc_5E9610
0x5E960E: fstp    st(1)
0x5E9610: test    bl, bl
0x5E9612: fld     [esp+10h+var_4]
0x5E9616: mov     [esp+10h+a2], bl
0x5E961A: jz      short loc_5E962A
0x5E961C: fcom    st(1)
0x5E961E: fnstsw  ax
0x5E9620: test    ah, 41h
0x5E9623: jp      short loc_5E962A
0x5E9625: mov     [esp+10h+a2], 0
0x5E962A: mov     eax, [esi]
0x5E962C: fxch    st(1)
0x5E962E: mov     edi, dword ptr [esp+10h+a2]
0x5E9632: mov     edx, [eax+154h]
0x5E9638: push    ecx
0x5E9639: fstp    [esp+14h+a5]; a5
0x5E963C: push    0; a4
0x5E963E: push    ecx
0x5E963F: fstp    [esp+1Ch+var_1C]; a3
0x5E9642: push    edi; a2
0x5E9643: mov     ecx, esi
0x5E9645: call    edx
0x5E9647: push    eax; a1
0x5E9648: call    sub_7D92C0
0x5E964D: lea     ecx, [esi+44h]; this
0x5E9650: add     esp, 14h
0x5E9653: test    ecx, ecx
0x5E9655: jz      short loc_5E9665
0x5E9657: fld     [esp+10h+a3]
0x5E965B: push    ecx
0x5E965C: fstp    [esp+14h+a5]; a3
0x5E965F: push    edi; enable
0x5E9660: call    ExtraDataList_ToggleRefractionProperty
0x5E9665: pop     edi
0x5E9666: pop     esi
0x5E9667: pop     ebx
0x5E9668: pop     ecx
0x5E9669: retn    8
