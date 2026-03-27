0x4DB520: push    ecx
0x4DB521: push    esi
0x4DB522: mov     esi, ecx
0x4DB524: mov     ecx, [esi+1Ch]
0x4DB527: test    ecx, ecx
0x4DB529: push    edi
0x4DB52A: jz      short loc_4DB550
0x4DB52C: mov     eax, [ecx]
0x4DB52E: mov     edx, [eax+0F4h]
0x4DB534: call    edx
0x4DB536: test    al, al
0x4DB538: jz      short loc_4DB550
0x4DB53A: mov     eax, [esi]
0x4DB53C: mov     edx, [eax+170h]
0x4DB542: mov     ecx, esi
0x4DB544: call    edx
0x4DB546: cmp     byte ptr [eax+4], 29h ; ')'
0x4DB54A: jnz     loc_4DB6A0
0x4DB550: mov     ecx, offset stru_B34448; this
0x4DB555: call    sub_7616D0
0x4DB55A: fld     [esp+0Ch+arg_0]
0x4DB55E: sub     esp, 8
0x4DB561: fstp    qword ptr [esp+14h+a2]
0x4DB564: mov     edi, eax
0x4DB566: push    offset a_2f; "%.2f"
0x4DB56B: push    edi
0x4DB56C: call    __sprintf
0x4DB571: push    edi; String
0x4DB572: call    _atof
0x4DB577: fstp    [esp+20h+arg_0]
0x4DB57B: fld     dword ptr ds:0A34BA0h
0x4DB581: add     esp, 14h
0x4DB584: fld     [esp+0Ch+arg_0]
0x4DB588: fcom    st(1)
0x4DB58A: fnstsw  ax
0x4DB58C: test    ah, 5
0x4DB58F: jp      short loc_4DB599
0x4DB591: fstp    st
0x4DB593: fstp    [esp+0Ch+arg_0]
0x4DB597: jmp     short loc_4DB5B4
0x4DB599: fstp    st(1)
0x4DB59B: fld     dword ptr ds:0A31C80h
0x4DB5A1: fcom    st(1)
0x4DB5A3: fnstsw  ax
0x4DB5A5: fstp    st(1)
0x4DB5A7: test    ah, 5
0x4DB5AA: jp      short loc_4DB5B2
0x4DB5AC: fstp    [esp+0Ch+arg_0]
0x4DB5B0: jmp     short loc_4DB5B4
0x4DB5B2: fstp    st
0x4DB5B4: mov     eax, [esi]
0x4DB5B6: fld     [esp+0Ch+arg_0]
0x4DB5BA: mov     edx, [eax+40h]
0x4DB5BD: fstp    dword ptr [esi+38h]
0x4DB5C0: push    10h
0x4DB5C2: mov     ecx, esi
0x4DB5C4: call    edx
0x4DB5C6: mov     eax, [esi]
0x4DB5C8: mov     edx, [eax+0ECh]
0x4DB5CE: mov     ecx, esi
0x4DB5D0: call    edx
0x4DB5D2: fstp    [esp+0Ch+arg_0]
0x4DB5D6: mov     eax, [esi]
0x4DB5D8: mov     edx, [eax+154h]
0x4DB5DE: mov     ecx, esi
0x4DB5E0: call    edx
0x4DB5E2: mov     edi, eax
0x4DB5E4: test    edi, edi
0x4DB5E6: jz      loc_4DB6A0
0x4DB5EC: fld     [esp+0Ch+arg_0]
0x4DB5F0: push    0; a3
0x4DB5F2: fabs
0x4DB5F4: push    ecx
0x4DB5F5: fstp    [esp+14h+arg_0]
0x4DB5F9: mov     ecx, edi; this
0x4DB5FB: fld     [esp+14h+arg_0]
0x4DB5FF: fstp    dword ptr [edi+60h]
0x4DB602: fldz
0x4DB604: fstp    [esp+14h+a2]; a2
0x4DB607: call    NiAVObject_UpdateNiAVObject
0x4DB60C: fldz
0x4DB60E: push    0; a3
0x4DB610: push    ecx
0x4DB611: fstp    [esp+14h+a2]; a2
0x4DB614: mov     ecx, edi; this
0x4DB616: call    NiAVObject_UpdateNiAVObject
0x4DB61B: mov     eax, [esi]
0x4DB61D: mov     edx, [eax+190h]
0x4DB623: mov     ecx, esi
0x4DB625: call    edx
0x4DB627: test    al, al
0x4DB629: jz      short loc_4DB6A0
0x4DB62B: mov     ecx, esi; this
0x4DB62D: call    MobileObject_GetCharProxy
0x4DB632: fldz
0x4DB634: test    eax, eax
0x4DB636: fstp    [esp+0Ch+arg_0]
0x4DB63A: jz      short loc_4DB646
0x4DB63C: fld     dword ptr [eax+32Ch]
0x4DB642: fstp    [esp+0Ch+arg_0]
0x4DB646: mov     eax, [esi]
0x4DB648: mov     edx, [eax+1C8h]
0x4DB64E: mov     ecx, esi
0x4DB650: call    edx
0x4DB652: mov     ecx, [esi+58h]
0x4DB655: test    ecx, ecx
0x4DB657: jz      short loc_4DB670
0x4DB659: push    ecx
0x4DB65A: mov     eax, esp
0x4DB65C: mov     dword ptr [eax], 0
0x4DB662: mov     eax, [ecx]
0x4DB664: mov     edx, [eax+190h]
0x4DB66A: mov     [esp+10h+var_4], esp
0x4DB66E: call    edx
0x4DB670: mov     eax, [esi]
0x4DB672: mov     edx, [eax+148h]
0x4DB678: mov     ecx, esi
0x4DB67A: call    edx
0x4DB67C: mov     ecx, esi; this
0x4DB67E: call    MobileObject_GetCharProxy
0x4DB683: test    eax, eax
0x4DB685: jz      short loc_4DB691
0x4DB687: fld     [esp+0Ch+arg_0]
0x4DB68B: fstp    dword ptr [eax+32Ch]
0x4DB691: mov     ecx, ds:0B333C4h
0x4DB697: cmp     esi, ecx
0x4DB699: jnz     short loc_4DB6A0
0x4DB69B: call    sub_666B50
0x4DB6A0: pop     edi
0x4DB6A1: pop     esi
0x4DB6A2: pop     ecx
0x4DB6A3: retn    4
