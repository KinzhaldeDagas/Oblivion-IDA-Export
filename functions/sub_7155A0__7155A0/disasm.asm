0x7155A0: sub     esp, 8
0x7155A3: push    esi
0x7155A4: mov     esi, ecx
0x7155A6: fld     dword ptr [esi+1Ch]
0x7155A9: push    edi
0x7155AA: fld     dword ptr ds:0A7DEB4h
0x7155B0: fchs
0x7155B2: fucompp
0x7155B4: fnstsw  ax
0x7155B6: fld     [esp+10h+arg_0]
0x7155BA: test    ah, 44h
0x7155BD: jp      short loc_7155C2
0x7155BF: fst     dword ptr [esi+1Ch]
0x7155C2: fld     dword ptr [esi+20h]
0x7155C5: fld     dword ptr ds:0A7DEB4h
0x7155CB: fchs
0x7155CD: fucompp
0x7155CF: fnstsw  ax
0x7155D1: fldz
0x7155D3: test    ah, 44h
0x7155D6: jp      short loc_7155E9
0x7155D8: test    byte ptr [esi+8], 1
0x7155DC: fst     dword ptr [esi+24h]
0x7155DF: jnz     short loc_7155F0
0x7155E1: fstp    st
0x7155E3: fst     [esp+10h+arg_0]
0x7155E7: jmp     short loc_7155F4
0x7155E9: fstp    st
0x7155EB: fld     st
0x7155ED: fsub    dword ptr [esi+20h]
0x7155F0: fstp    [esp+10h+arg_0]
0x7155F4: fld     dword ptr [esi+0Ch]
0x7155F7: movzx   eax, byte ptr [esi+8]
0x7155FB: fmul    [esp+10h+arg_0]
0x7155FF: shr     eax, 1
0x715601: and     eax, 3
0x715604: push    offset stru_B3FCA0; lpCriticalSection
0x715609: fadd    dword ptr [esi+24h]
0x71560C: mov     edi, eax
0x71560E: fstp    [esp+14h+arg_0]
0x715612: fld     [esp+14h+arg_0]
0x715616: fst     dword ptr [esi+24h]
0x715619: fadd    dword ptr [esi+10h]
0x71561C: fstp    [esp+14h+arg_0]
0x715620: fstp    dword ptr [esi+20h]
0x715623: call    dword ptr ds:0A2806Ch
0x715629: fld     dword ptr ds:0B3FC94h
0x71562F: fld     dword ptr [esi+18h]
0x715632: fucompp
0x715634: fnstsw  ax
0x715636: fld     [esp+10h+arg_0]
0x71563A: test    ah, 44h
0x71563D: jp      short loc_71567B
0x71563F: fld     dword ptr ds:0B3FC90h
0x715645: fld     dword ptr [esi+14h]
0x715648: fucompp
0x71564A: fnstsw  ax
0x71564C: test    ah, 44h
0x71564F: jp      short loc_71567B
0x715651: fld     dword ptr ds:0B3FC8Ch
0x715657: fld     st(1)
0x715659: fucompp
0x71565B: fnstsw  ax
0x71565D: test    ah, 44h
0x715660: jp      short loc_71567B
0x715662: cmp     ds:0B27130h, edi
0x715668: jnz     short loc_71567B
0x71566A: fstp    st
0x71566C: fld     dword ptr ds:0B3FC88h
0x715672: fstp    [esp+10h+arg_0]
0x715676: jmp     loc_715800
0x71567B: fld     dword ptr [esi+18h]
0x71567E: mov     ds:0B27130h, edi
0x715684: fstp    dword ptr ds:0B3FC94h
0x71568A: fld     dword ptr [esi+14h]
0x71568D: fstp    dword ptr ds:0B3FC90h
0x715693: fst     dword ptr ds:0B3FC8Ch
0x715699: fld     dword ptr [esi+18h]
0x71569C: fld     dword ptr ds:0A7DEB4h
0x7156A2: fld     st
0x7156A4: fchs
0x7156A6: fucomp  st(2)
0x7156A8: fnstsw  ax
0x7156AA: fstp    st(1)
0x7156AC: test    ah, 44h
0x7156AF: jnp     loc_7157AD
0x7156B5: fld     dword ptr [esi+14h]
0x7156B8: fucompp
0x7156BA: fnstsw  ax
0x7156BC: test    ah, 44h
0x7156BF: jnp     loc_7157AF
0x7156C5: mov     eax, edi
0x7156C7: sub     eax, 0
0x7156CA: jz      loc_715753
0x7156D0: sub     eax, 1
0x7156D3: jnz     loc_7157AF
0x7156D9: fld     dword ptr [esi+18h]
0x7156DC: fsub    dword ptr [esi+14h]
0x7156DF: fstp    [esp+10h+var_4]
0x7156E3: fldz
0x7156E5: fld     [esp+10h+var_4]
0x7156E9: fucom   st(1)
0x7156EB: fnstsw  ax
0x7156ED: fstp    st(1)
0x7156EF: test    ah, 44h
0x7156F2: jnp     short loc_715746
0x7156F4: fadd    st, st
0x7156F6: fstp    [esp+10h+var_8]
0x7156FA: fld     [esp+10h+var_8]
0x7156FE: call    unknown_libname_14
0x715703: fstp    [esp+10h+arg_0]
0x715707: fld     [esp+10h+arg_0]
0x71570B: fstp    [esp+10h+arg_0]
0x71570F: fldz
0x715711: fld     [esp+10h+arg_0]
0x715715: fcom    st(1)
0x715717: fnstsw  ax
0x715719: fstp    st(1)
0x71571B: test    ah, 5
0x71571E: jp      short loc_71572C
0x715720: fadd    [esp+10h+var_8]
0x715724: fstp    [esp+10h+arg_0]
0x715728: fld     [esp+10h+arg_0]
0x71572C: fld     [esp+10h+var_4]
0x715730: fcomp   st(1)
0x715732: fnstsw  ax
0x715734: test    ah, 5
0x715737: jp      short loc_71573D
0x715739: fsubr   [esp+10h+var_8]
0x71573D: fadd    dword ptr [esi+14h]
0x715740: fstp    [esp+10h+arg_0]
0x715744: jmp     short loc_7157B1
0x715746: fstp    st
0x715748: fstp    st
0x71574A: fld     dword ptr [esi+14h]
0x71574D: fstp    [esp+10h+arg_0]
0x715751: jmp     short loc_7157B1
0x715753: fld     dword ptr [esi+18h]
0x715756: fsub    dword ptr [esi+14h]
0x715759: fstp    [esp+10h+var_4]
0x71575D: fldz
0x71575F: fld     [esp+10h+var_4]
0x715763: fucom   st(1)
0x715765: fnstsw  ax
0x715767: fstp    st(1)
0x715769: test    ah, 44h
0x71576C: jnp     short loc_715746
0x71576E: fld     dword ptr [esi+14h]
0x715771: fsubp   st(2), st
0x715773: fxch    st(1)
0x715775: fstp    [esp+10h+arg_0]
0x715779: fld     [esp+10h+arg_0]
0x71577D: fxch    st(1)
0x71577F: call    unknown_libname_14
0x715784: fstp    [esp+10h+arg_0]
0x715788: fld     [esp+10h+arg_0]
0x71578C: fadd    dword ptr [esi+14h]
0x71578F: fstp    [esp+10h+arg_0]
0x715793: fld     [esp+10h+arg_0]
0x715797: fld     dword ptr [esi+14h]
0x71579A: fcomp   st(1)
0x71579C: fnstsw  ax
0x71579E: test    ah, 41h
0x7157A1: jnz     short loc_7157AF
0x7157A3: fadd    [esp+10h+var_4]
0x7157A7: fstp    [esp+10h+arg_0]
0x7157AB: jmp     short loc_7157B1
0x7157AD: fstp    st
0x7157AF: fstp    st
0x7157B1: fld     [esp+10h+arg_0]
0x7157B5: fld     dword ptr [esi+18h]
0x7157B8: fcomp   st(1)
0x7157BA: fnstsw  ax
0x7157BC: test    ah, 5
0x7157BF: jp      short loc_7157C8
0x7157C1: fstp    st
0x7157C3: fld     dword ptr [esi+18h]
0x7157C6: jmp     short loc_7157D7
0x7157C8: fld     dword ptr [esi+14h]
0x7157CB: fcompp
0x7157CD: fnstsw  ax
0x7157CF: test    ah, 41h
0x7157D2: jnz     short loc_7157DB
0x7157D4: fld     dword ptr [esi+14h]
0x7157D7: fstp    [esp+10h+arg_0]
0x7157DB: mov     cl, [esi+8]
0x7157DE: shr     cl, 4
0x7157E1: test    cl, 1
0x7157E4: jz      short loc_7157F6
0x7157E6: fld     dword ptr [esi+18h]
0x7157E9: fld     [esp+10h+arg_0]
0x7157ED: fsub    dword ptr [esi+14h]
0x7157F0: fsubp   st(1), st
0x7157F2: fstp    [esp+10h+arg_0]
0x7157F6: fld     [esp+10h+arg_0]
0x7157FA: fstp    dword ptr ds:0B3FC88h
0x715800: push    offset stru_B3FCA0; lpCriticalSection
0x715805: call    dword ptr ds:0A28074h
0x71580B: fld     [esp+10h+arg_0]
0x71580F: pop     edi
0x715810: pop     esi
0x715811: add     esp, 8
0x715814: retn    4
