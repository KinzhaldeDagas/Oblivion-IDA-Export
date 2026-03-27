0x65E3C0: cmp     byte ptr ds:0B3BB06h, 0
0x65E3C7: fld     [esp+arg_4]
0x65E3CB: push    esi
0x65E3CC: mov     esi, [esp+4+a2]
0x65E3D0: push    edi
0x65E3D1: mov     edi, ecx
0x65E3D3: jz      short loc_65E3EE
0x65E3D5: fldz
0x65E3D7: fcomp   st(1)
0x65E3D9: fnstsw  ax
0x65E3DB: test    ah, 41h
0x65E3DE: jnz     short loc_65E3EE
0x65E3E0: cmp     esi, 8
0x65E3E3: jl      short loc_65E3EE
0x65E3E5: cmp     esi, 0Ah
0x65E3E8: jle     loc_65E47F
0x65E3EE: push    ebx
0x65E3EF: mov     ebx, [esp+0Ch+arg_8]
0x65E3F3: push    ebx; int
0x65E3F4: push    ecx
0x65E3F5: fstp    [esp+14h+var_14]; float
0x65E3F8: push    esi; int
0x65E3F9: call    sub_5E02D0
0x65E3FE: fstp    [esp+0Ch+arg_4]
0x65E402: cmp     esi, 0FFFFFFFFh
0x65E405: jz      short loc_65E42D
0x65E407: fld     [esp+0Ch+arg_4]
0x65E40B: push    1; int
0x65E40D: sub     esp, 8
0x65E410: fstp    [esp+18h+var_14]; float
0x65E414: fld     dword ptr [edi+esi*4+324h]
0x65E41B: fstp    [esp+18h+var_18]; float
0x65E41E: call    Player_ModAVNode
0x65E423: fstp    dword ptr [edi+esi*4+324h]
0x65E42A: add     esp, 0Ch
0x65E42D: push    esi; a2
0x65E42E: call    sub_57A6F0
0x65E433: add     esp, 4
0x65E436: cmp     esi, 8
0x65E439: jnz     short loc_65E46F
0x65E43B: fldz
0x65E43D: fld     [esp+0Ch+arg_4]
0x65E441: fcom    st(1)
0x65E443: fnstsw  ax
0x65E445: fstp    st(1)
0x65E447: test    ah, 5
0x65E44A: jp      short loc_65E46D
0x65E44C: mov     eax, [edi]
0x65E44E: mov     edx, [eax+3B8h]
0x65E454: push    ecx
0x65E455: fstp    [esp+10h+var_10]
0x65E458: push    ebx
0x65E459: mov     ecx, edi
0x65E45B: call    edx
0x65E45D: push    0
0x65E45F: push    esi
0x65E460: mov     ecx, edi
0x65E462: call    sub_5E2670
0x65E467: pop     ebx
0x65E468: pop     edi
0x65E469: pop     esi
0x65E46A: retn    0Ch
0x65E46D: fstp    st
0x65E46F: push    0
0x65E471: push    esi
0x65E472: mov     ecx, edi
0x65E474: call    sub_5E2670
0x65E479: pop     ebx
0x65E47A: pop     edi
0x65E47B: pop     esi
0x65E47C: retn    0Ch
0x65E47F: pop     edi
0x65E480: fstp    st
0x65E482: pop     esi
