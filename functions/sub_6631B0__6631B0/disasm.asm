0x6631B0: push    ecx
0x6631B1: fld     [esp+4+arg_4]
0x6631B5: push    ebx
0x6631B6: mov     bl, byte ptr [esp+8+a2]
0x6631BA: fst     [esp+8+var_4]
0x6631BE: test    bl, bl
0x6631C0: fldz
0x6631C2: push    esi
0x6631C3: push    edi
0x6631C4: mov     esi, ecx
0x6631C6: jz      short loc_6631EE
0x6631C8: fcom    st(1)
0x6631CA: fnstsw  ax
0x6631CC: fstp    st(1)
0x6631CE: test    ah, 1
0x6631D1: jnz     short loc_6631F0
0x6631D3: mov     ecx, [esi+58h]
0x6631D6: test    ecx, ecx
0x6631D8: jz      short loc_6631F0
0x6631DA: mov     eax, [ecx]
0x6631DC: fstp    st
0x6631DE: mov     edx, [eax+438h]
0x6631E4: call    edx
0x6631E6: fstp    [esp+10h+var_4]
0x6631EA: fldz
0x6631EC: jmp     short loc_6631F0
0x6631EE: fstp    st(1)
0x6631F0: test    bl, bl
0x6631F2: fld     [esp+10h+var_4]
0x6631F6: mov     byte ptr [esp+10h+a2], bl
0x6631FA: jz      short loc_66320A
0x6631FC: fcom    st(1)
0x6631FE: fnstsw  ax
0x663200: test    ah, 41h
0x663203: jp      short loc_66320A
0x663205: mov     byte ptr [esp+10h+a2], 0
0x66320A: mov     edi, [esp+10h+a2]
0x66320E: fxch    st(1)
0x663210: mov     eax, [esi+5D0h]
0x663216: push    ecx
0x663217: fstp    [esp+14h+a5]; a5
0x66321A: push    0; a4
0x66321C: push    ecx
0x66321D: fstp    [esp+1Ch+a3]; a3
0x663220: push    edi; a2
0x663221: push    eax; a1
0x663222: call    sub_7D92C0
0x663227: add     esp, 14h
0x66322A: mov     ecx, esi; this
0x66322C: call    TESObjectREFR__GetNiNode
0x663231: fldz
0x663233: push    ecx
0x663234: fstp    [esp+14h+a5]; a5
0x663237: fld     [esp+14h+var_4]
0x66323B: push    0; a4
0x66323D: push    ecx
0x66323E: fstp    [esp+1Ch+a3]; a3
0x663241: push    edi; a2
0x663242: push    eax; a1
0x663243: call    sub_7D92C0
0x663248: lea     ecx, [esi+44h]; this
0x66324B: add     esp, 14h
0x66324E: test    ecx, ecx
0x663250: jz      short loc_663260
0x663252: fld     [esp+10h+arg_4]
0x663256: push    ecx
0x663257: fstp    [esp+14h+a5]; a3
0x66325A: push    edi; enable
0x66325B: call    ExtraDataList_ToggleRefractionProperty
0x663260: pop     edi
0x663261: pop     esi
0x663262: pop     ebx
0x663263: pop     ecx
0x663264: retn    8
