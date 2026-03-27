0x5EE760: push    ebp
0x5EE761: mov     ebp, esp
0x5EE763: and     esp, 0FFFFFFF0h
0x5EE766: push    0FFFFFFFFh
0x5EE768: push    offset SEH_5EE760
0x5EE76D: mov     eax, large fs:0
0x5EE773: push    eax
0x5EE774: sub     esp, 108h
0x5EE77A: mov     eax, ds:0B30AACh
0x5EE77F: xor     eax, esp
0x5EE781: mov     [esp+114h+var_14], eax
0x5EE788: push    ebx
0x5EE789: push    esi
0x5EE78A: push    edi
0x5EE78B: mov     eax, ds:0B30AACh
0x5EE790: xor     eax, esp
0x5EE792: push    eax
0x5EE793: lea     eax, [esp+124h+var_C]
0x5EE79A: mov     large fs:0, eax
0x5EE7A0: mov     eax, [ebp+arg_10]
0x5EE7A3: mov     ebx, [ebp+arg_0]
0x5EE7A6: mov     edi, [ebp+arg_C]
0x5EE7A9: mov     esi, ecx
0x5EE7AB: mov     ecx, [esi+3Ch]
0x5EE7AE: mov     [esp+124h+a1], ecx
0x5EE7B2: lea     ecx, [esi+44h]
0x5EE7B5: mov     [esp+124h+var_BC], ebx
0x5EE7B9: mov     [esp+124h+var_110], eax
0x5EE7BD: call    BaseExtraList_HasGhost
0x5EE7C2: test    al, al
0x5EE7C4: jnz     loc_5EF8FF
0x5EE7CA: mov     edx, ds:0B11A6Ch
0x5EE7D0: mov     eax, [esp+124h+a1]
0x5EE7D4: push    edx; a2
0x5EE7D5: push    eax; a1
0x5EE7D6: call    NiObjectNET_LookupObjectByName
0x5EE7DB: mov     edx, [ebx]
0x5EE7DD: mov     [esp+12Ch+var_E4], eax
0x5EE7E1: mov     eax, [edx+154h]
0x5EE7E7: add     esp, 8
0x5EE7EA: mov     ecx, ebx
0x5EE7EC: call    eax
0x5EE7EE: test    eax, eax
0x5EE7F0: jz      short loc_5EE845
0x5EE7F2: push    edi
0x5EE7F3: lea     ecx, [esp+128h+var_50]
0x5EE7FA: lea     ebx, [eax+64h]
0x5EE7FD: push    ecx
0x5EE7FE: mov     ecx, ebx
0x5EE800: call    sub_53D4B0
0x5EE805: mov     edx, [eax]
0x5EE807: mov     ecx, [eax+4]
0x5EE80A: mov     [esp+124h+var_D0], edx
0x5EE80E: mov     edx, [eax+8]
0x5EE811: mov     eax, [esp+124h+var_110]
0x5EE815: mov     [esp+124h+var_CC], ecx
0x5EE819: push    eax
0x5EE81A: lea     ecx, [esp+128h+var_50]
0x5EE821: push    ecx
0x5EE822: mov     ecx, ebx
0x5EE824: mov     [esp+12Ch+var_C8], edx
0x5EE828: call    sub_53D4B0
0x5EE82D: mov     edx, [eax]
0x5EE82F: mov     ecx, [eax+4]
0x5EE832: mov     ebx, [esp+124h+var_BC]
0x5EE836: mov     [esp+124h+var_B4], edx
0x5EE83A: mov     edx, [eax+8]
0x5EE83D: mov     [esp+124h+var_B0], ecx
0x5EE841: mov     [esp+124h+var_AC], edx
0x5EE845: fld     [esp+124h+var_B4]
0x5EE849: fsub    [esp+124h+var_D0]
0x5EE84D: fstp    [esp+124h+var_110]
0x5EE851: fld     [esp+124h+var_B0]
0x5EE855: fsub    [esp+124h+var_CC]
0x5EE859: fstp    [esp+124h+var_100]
0x5EE85D: fld     [esp+124h+var_AC]
0x5EE861: fsub    [esp+124h+var_C8]
0x5EE865: fstp    [esp+124h+var_C0]
0x5EE869: fld     [esp+124h+var_110]
0x5EE86D: fstp    [esp+124h+var_D0]
0x5EE871: mov     eax, [esp+124h+var_D0]
0x5EE875: fld     [esp+124h+var_100]
0x5EE879: mov     [esp+124h+var_DC], eax
0x5EE87D: fstp    [esp+124h+var_CC]
0x5EE881: mov     ecx, [esp+124h+var_CC]
0x5EE885: fld     [esp+124h+var_C0]
0x5EE889: mov     [esp+124h+var_D8], ecx
0x5EE88D: fstp    [esp+124h+var_C8]
0x5EE891: mov     edx, [esp+124h+var_C8]
0x5EE895: lea     ecx, [esp+124h+var_DC]
0x5EE899: mov     [esp+124h+var_D4], edx
0x5EE89D: call    sub_43F350
0x5EE8A2: fstp    st
0x5EE8A4: mov     edi, [esp+124h+var_E4]
0x5EE8A8: test    edi, edi
0x5EE8AA: jz      loc_5EED87
0x5EE8B0: fld     [ebp+arg_4]
0x5EE8B3: fcomp   qword ptr ds:0A309F0h
0x5EE8B9: fnstsw  ax
0x5EE8BB: test    ah, 41h
0x5EE8BE: jnz     short loc_5EE8C9
0x5EE8C0: fld     dword ptr ds:0A2FE7Ch
0x5EE8C6: fstp    [ebp+arg_4]
0x5EE8C9: fld     dword ptr ds:0B11A4Ch
0x5EE8CF: fld     dword ptr ds:0B11A44h
0x5EE8D5: fld     st
0x5EE8D7: fsubp   st(2), st
0x5EE8D9: fxch    st(1)
0x5EE8DB: fstp    [esp+124h+var_110]
0x5EE8DF: fld     [esp+124h+var_110]
0x5EE8E3: fmul    [ebp+arg_4]
0x5EE8E6: fmul    qword ptr ds:0A3B150h
0x5EE8EC: faddp   st(1), st
0x5EE8EE: fstp    [esp+124h+var_EC]
0x5EE8F2: fld     dword ptr ds:0B11A5Ch
0x5EE8F8: fld     dword ptr ds:0B11A54h
0x5EE8FE: fld     st
0x5EE900: fsubp   st(2), st
0x5EE902: fxch    st(1)
0x5EE904: fstp    [esp+124h+var_110]
0x5EE908: fld     [esp+124h+var_110]
0x5EE90C: fld     [ebp+arg_8]
0x5EE90F: fld     st
0x5EE911: fmulp   st(2), st
0x5EE913: fxch    st(1)
0x5EE915: faddp   st(2), st
0x5EE917: fxch    st(1)
0x5EE919: fstp    [esp+124h+var_C0]
0x5EE91D: fcomp   dword ptr ds:0A46B24h
0x5EE923: fnstsw  ax
0x5EE925: fldz
0x5EE927: test    ah, 41h
0x5EE92A: jnz     short loc_5EE932
0x5EE92C: fst     [esp+124h+var_EC]
0x5EE930: jmp     short loc_5EE93D
0x5EE932: fcom    [esp+124h+var_EC]
0x5EE936: fnstsw  ax
0x5EE938: test    ah, 44h
0x5EE93B: jp      short loc_5EE94E
0x5EE93D: fcomp   [esp+124h+var_C0]
0x5EE941: fnstsw  ax
0x5EE943: test    ah, 44h
0x5EE946: jnp     loc_5EED87
0x5EE94C: jmp     short loc_5EE950
0x5EE94E: fstp    st
0x5EE950: cmp     esi, ds:0B333C4h
0x5EE956: mov     byte ptr [esp+124h+var_108], 1
0x5EE95B: jnz     short loc_5EE967
0x5EE95D: mov     al, [esi+588h]
0x5EE963: mov     byte ptr [esp+124h+var_108], al
0x5EE967: mov     edx, [esi]
0x5EE969: mov     eax, [edx+19Ch]
0x5EE96F: mov     ecx, esi
0x5EE971: call    eax
0x5EE973: test    al, al
0x5EE975: jnz     short loc_5EE9AD
0x5EE977: cmp     byte ptr [esp+124h+var_108], al
0x5EE97B: jz      short loc_5EE9AD
0x5EE97D: mov     ecx, esi; this
0x5EE97F: mov     byte ptr [esp+124h+var_FC], al
0x5EE983: call    MobileObject_GetCharProxy
0x5EE988: test    eax, eax
0x5EE98A: jz      short loc_5EE999
0x5EE98C: mov     cl, [eax+1F4h]
0x5EE992: and     cl, 1
0x5EE995: mov     byte ptr [esp+124h+var_FC], cl
0x5EE999: mov     edx, [esp+124h+var_FC]
0x5EE99D: fldz
0x5EE99F: push    edx
0x5EE9A0: push    ecx
0x5EE9A1: fstp    [esp+12Ch+var_12C]
0x5EE9A4: push    edi
0x5EE9A5: call    sub_8AB040
0x5EE9AA: add     esp, 0Ch
0x5EE9AD: fldz
0x5EE9AF: fld     st
0x5EE9B1: fld     [esp+124h+var_EC]
0x5EE9B5: fucom   st(1)
0x5EE9B7: fnstsw  ax
0x5EE9B9: fstp    st(1)
0x5EE9BB: test    ah, 44h
0x5EE9BE: jnp     loc_5EECDE
0x5EE9C4: cmp     dword ptr ds:0B148CCh, 0
0x5EE9CB: fld     [esp+124h+var_DC]
0x5EE9CF: fmul    st, st(1)
0x5EE9D1: fstp    [esp+124h+var_A8]
0x5EE9D5: fld     [esp+124h+var_D8]
0x5EE9D9: fmul    st, st(1)
0x5EE9DB: fstp    [esp+124h+var_FC]
0x5EE9DF: fmul    [esp+124h+var_D4]
0x5EE9E3: fstp    [esp+124h+var_E0]
0x5EE9E7: jle     loc_5EEBC6
0x5EE9ED: cmp     ebx, ds:0B333C4h
0x5EE9F3: jnz     short loc_5EEA4D
0x5EE9F5: fst     [esp+124h+var_A4]
0x5EE9FC: mov     eax, [esp+124h+var_A4]
0x5EEA03: fstp    [esp+124h+var_A0]
0x5EEA0A: mov     ecx, [esp+124h+var_A0]
0x5EEA11: fld1
0x5EEA13: mov     [esp+124h+var_40], eax
0x5EEA1A: fst     [esp+124h+var_9C]
0x5EEA21: mov     [esp+124h+var_3C], ecx
0x5EEA28: mov     edx, [esp+124h+var_9C]
0x5EEA2F: fstp    [esp+124h+var_98]
0x5EEA36: mov     eax, [esp+124h+var_98]
0x5EEA3D: mov     [esp+124h+var_38], edx
0x5EEA44: mov     [esp+124h+var_34], eax
0x5EEA4B: jmp     short loc_5EEAA3
0x5EEA4D: fld1
0x5EEA4F: fst     [esp+124h+var_A4]
0x5EEA56: mov     ecx, [esp+124h+var_A4]
0x5EEA5D: fstp    [esp+124h+var_98]
0x5EEA64: mov     [esp+124h+var_40], ecx
0x5EEA6B: mov     ecx, [esp+124h+var_98]
0x5EEA72: fst     [esp+124h+var_A0]
0x5EEA79: mov     edx, [esp+124h+var_A0]
0x5EEA80: fstp    [esp+124h+var_9C]
0x5EEA87: mov     eax, [esp+124h+var_9C]
0x5EEA8E: mov     [esp+124h+var_3C], edx
0x5EEA95: mov     [esp+124h+var_38], eax
0x5EEA9C: mov     [esp+124h+var_34], ecx
0x5EEAA3: fld     [esp+124h+var_A8]
0x5EEAA7: lea     edx, [esp+124h+var_40]
0x5EEAAE: fld     qword ptr ds:0A2FC80h
0x5EEAB4: push    edx
0x5EEAB5: fmul    st(1), st
0x5EEAB7: lea     eax, [esp+128h+var_50]
0x5EEABE: fxch    st(1)
0x5EEAC0: push    eax
0x5EEAC1: fstp    [esp+12Ch+var_110]
0x5EEAC5: fld     [esp+12Ch+var_FC]
0x5EEAC9: fmul    st, st(1)
0x5EEACB: fstp    [esp+12Ch+var_100]
0x5EEACF: fmul    [esp+12Ch+var_E0]
0x5EEAD3: fstp    [esp+12Ch+var_104]
0x5EEAD7: fld     [esp+12Ch+var_110]
0x5EEADB: fstp    [esp+12Ch+var_50]
0x5EEAE2: fld     [esp+12Ch+var_100]
0x5EEAE6: fstp    [esp+12Ch+var_4C]
0x5EEAED: fld     [esp+12Ch+var_104]
0x5EEAF1: fstp    [esp+12Ch+var_48]
0x5EEAF8: call    sub_6FCDC0
0x5EEAFD: mov     ecx, [esp+12Ch+var_B4]
0x5EEB01: mov     edx, [esp+12Ch+var_B0]
0x5EEB05: mov     ebx, eax
0x5EEB07: mov     eax, [esp+12Ch+var_AC]
0x5EEB0E: mov     [ebx+54h], ecx
0x5EEB11: mov     [ebx+58h], edx
0x5EEB14: push    1Ch; Size
0x5EEB16: mov     [ebx+5Ch], eax
0x5EEB19: call    FormHeapAlloc
0x5EEB1E: add     esp, 0Ch
0x5EEB21: mov     [esp+124h+var_10C], eax
0x5EEB25: test    eax, eax
0x5EEB27: mov     [esp+124h+var_4], 0
0x5EEB32: jz      short loc_5EEB3D
0x5EEB34: mov     ecx, eax
0x5EEB36: call    sub_405990
0x5EEB3B: jmp     short loc_5EEB3F
0x5EEB3D: xor     eax, eax
0x5EEB3F: mov     cx, [eax+18h]
0x5EEB43: and     cx, 0FFD7h
0x5EEB48: or      cx, 10h
0x5EEB4C: mov     [eax+18h], cx
0x5EEB50: or      edi, 0FFFFFFFFh
0x5EEB53: push    eax; a2
0x5EEB54: mov     ecx, ebx; this
0x5EEB56: mov     [esp+128h+var_4], edi
0x5EEB5D: call    sub_405680
0x5EEB62: push    1Ch; Size
0x5EEB64: call    FormHeapAlloc
0x5EEB69: add     esp, 4
0x5EEB6C: mov     [esp+124h+var_10C], eax
0x5EEB70: test    eax, eax
0x5EEB72: mov     [esp+124h+var_4], 1
0x5EEB7D: jz      short loc_5EEB88
0x5EEB7F: mov     ecx, eax
0x5EEB81: call    NiObjectNET_Create
0x5EEB86: jmp     short loc_5EEB8A
0x5EEB88: xor     eax, eax
0x5EEB8A: mov     dx, [eax+18h]
0x5EEB8E: and     dx, 0FFFEh
0x5EEB93: or      dx, 2
0x5EEB97: push    eax; a2
0x5EEB98: mov     ecx, ebx; this
0x5EEB9A: mov     [esp+128h+var_4], edi
0x5EEBA1: mov     [eax+18h], dx
0x5EEBA5: call    sub_405680
0x5EEBAA: fld     dword ptr ds:0B148D4h
0x5EEBB0: push    ecx
0x5EEBB1: mov     ecx, ds:0B333A0h
0x5EEBB7: fstp    [esp+128h+var_12C+4]; float
0x5EEBBA: push    ebx; int
0x5EEBBB: call    sub_440E60
0x5EEBC0: fldz
0x5EEBC2: mov     ebx, [esp+124h+var_BC]
0x5EEBC6: cmp     byte ptr [esp+124h+var_108], 0
0x5EEBCB: jz      loc_5EECE0
0x5EEBD1: fstp    st
0x5EEBD3: mov     ecx, [esp+124h+a1]
0x5EEBD7: fld     [esp+124h+var_A8]
0x5EEBDB: push    0
0x5EEBDD: fstp    [esp+128h+var_30]
0x5EEBE4: lea     eax, [esp+128h+var_40]
0x5EEBEB: fld     [esp+128h+var_FC]
0x5EEBEF: push    eax
0x5EEBF0: fstp    [esp+12Ch+var_2C]
0x5EEBF7: push    ecx
0x5EEBF8: fld     [esp+130h+var_E0]
0x5EEBFC: fstp    [esp+130h+var_28]
0x5EEC03: fld     [esp+130h+var_B4]
0x5EEC07: fld     qword ptr ds:0A39088h
0x5EEC0D: fmul    st(1), st
0x5EEC0F: fxch    st(1)
0x5EEC11: fstp    [esp+130h+var_50]
0x5EEC18: fld     [esp+130h+var_B0]
0x5EEC1F: fmul    st, st(1)
0x5EEC21: fstp    [esp+130h+var_4C]
0x5EEC28: fmul    [esp+130h+var_AC]
0x5EEC2F: fstp    [esp+130h+var_48]
0x5EEC36: fld     [esp+130h+var_50]
0x5EEC3D: fstp    [esp+130h+var_40]
0x5EEC44: fld     [esp+130h+var_4C]
0x5EEC4B: fstp    [esp+130h+var_3C]
0x5EEC52: fld     [esp+130h+var_48]
0x5EEC59: fstp    [esp+130h+var_38]
0x5EEC60: fld     dword ptr ds:0A37CC8h
0x5EEC66: fstp    [esp+130h+var_34]
0x5EEC6D: call    sub_8AFD70
0x5EEC72: add     esp, 0Ch
0x5EEC75: test    eax, eax
0x5EEC77: jz      short loc_5EEC96
0x5EEC79: mov     edx, [eax+8]
0x5EEC7C: push    edx
0x5EEC7D: call    sub_47FA60
0x5EEC82: add     esp, 4
0x5EEC85: test    eax, eax
0x5EEC87: jz      short loc_5EEC96
0x5EEC89: mov     ecx, eax
0x5EEC8B: call    sub_452A60
0x5EEC90: mov     ebx, eax
0x5EEC92: test    ebx, ebx
0x5EEC94: jnz     short loc_5EECAF
0x5EEC96: mov     eax, ds:0B11A64h
0x5EEC9B: mov     ecx, [esp+124h+a1]
0x5EEC9F: push    eax; a2
0x5EECA0: push    ecx; a1
0x5EECA1: call    NiObjectNET_LookupObjectByName
0x5EECA6: mov     ebx, eax
0x5EECA8: add     esp, 8
0x5EECAB: test    ebx, ebx
0x5EECAD: jz      short loc_5EECC0
0x5EECAF: mov     eax, [ebx+8]
0x5EECB2: push    eax; ArgList
0x5EECB3: push    offset aHitAtS; "Hit At %s\r\n"
0x5EECB8: call    sub_5E14C0
0x5EECBD: add     esp, 8
0x5EECC0: mov     eax, [esp+124h+var_E4]
0x5EECC4: push    ebx
0x5EECC5: lea     edx, [esp+128h+var_30]
0x5EECCC: push    edx
0x5EECCD: push    eax
0x5EECCE: call    sub_8B8410
0x5EECD3: fldz
0x5EECD5: mov     ebx, [esp+130h+var_BC]
0x5EECD9: add     esp, 0Ch
0x5EECDC: jmp     short loc_5EECE0
0x5EECDE: fstp    st
0x5EECE0: fcomp   [esp+124h+var_C0]
0x5EECE4: fnstsw  ax
0x5EECE6: test    ah, 44h
0x5EECE9: jnp     loc_5EED87
0x5EECEF: cmp     byte ptr [esp+124h+var_108], 0
0x5EECF4: jz      loc_5EED87
0x5EECFA: fld     [esp+124h+var_DC]
0x5EECFE: lea     ecx, [esp+124h+var_DC]
0x5EED02: fld1
0x5EED04: fadd    st(1), st
0x5EED06: fxch    st(1)
0x5EED08: fstp    [esp+124h+var_DC]
0x5EED0C: fadd    [esp+124h+var_D8]
0x5EED10: fstp    [esp+124h+var_D8]
0x5EED14: call    sub_43F350
0x5EED19: fstp    st
0x5EED1B: mov     ecx, [esp+124h+a1]
0x5EED1F: fld     [esp+124h+var_DC]
0x5EED23: push    offset aBip01LForearm; "Bip01 L Forearm"
0x5EED28: fld     [esp+128h+var_EC]
0x5EED2C: push    ecx
0x5EED2D: fld     st
0x5EED2F: mov     ecx, esi
0x5EED31: fmulp   st(2), st
0x5EED33: fxch    st(1)
0x5EED35: fstp    [esp+12Ch+var_104]
0x5EED39: fld     [esp+12Ch+var_D8]
0x5EED3D: fmul    st, st(1)
0x5EED3F: fstp    [esp+12Ch+var_110]
0x5EED43: fmul    [esp+12Ch+var_D4]
0x5EED47: fstp    [esp+12Ch+var_100]
0x5EED4B: fld     [esp+12Ch+var_104]
0x5EED4F: fstp    [esp+12Ch+var_50]
0x5EED56: fld     [esp+12Ch+var_110]
0x5EED5A: fstp    [esp+12Ch+var_4C]
0x5EED61: fld     [esp+12Ch+var_100]
0x5EED65: fstp    [esp+12Ch+var_48]
0x5EED6C: call    sub_4D96F0
0x5EED71: push    eax
0x5EED72: mov     eax, [esp+128h+var_E4]
0x5EED76: lea     edx, [esp+128h+var_50]
0x5EED7D: push    edx
0x5EED7E: push    eax
0x5EED7F: call    sub_8B8410
0x5EED84: add     esp, 0Ch
0x5EED87: mov     ecx, esi
0x5EED89: call    sub_5E1B30
0x5EED8E: test    al, al
0x5EED90: jz      loc_5EF8FF
0x5EED96: fld     [ebp+arg_4]
0x5EED99: fst     [esp+124h+var_E0]
0x5EED9D: fld     dword ptr ds:0B148DCh
0x5EEDA3: fcom    qword ptr ds:0A2F928h
0x5EEDA9: fnstsw  ax
0x5EEDAB: test    ah, 5
0x5EEDAE: jp      short loc_5EEDB4
0x5EEDB0: fstp    st
0x5EEDB2: fld1
0x5EEDB4: fstp    [esp+124h+var_FC]
0x5EEDB8: fld     [esp+124h+var_FC]
0x5EEDBC: fcompp
0x5EEDBE: fnstsw  ax
0x5EEDC0: test    ah, 5
0x5EEDC3: jp      loc_5EF8FF
0x5EEDC9: cmp     byte ptr ds:0B333B8h, 0
0x5EEDD0: jnz     short loc_5EEDE0
0x5EEDD2: mov     ecx, ds:0B3B914h
0x5EEDD8: cmp     ecx, ds:0B148E4h
0x5EEDDE: jle     short loc_5EEDF1
0x5EEDE0: mov     eax, ds:0B333C4h
0x5EEDE5: cmp     esi, eax
0x5EEDE7: jz      short loc_5EEDF1
0x5EEDE9: cmp     ebx, eax
0x5EEDEB: jnz     loc_5EF8FF
0x5EEDF1: mov     edx, [esi]
0x5EEDF3: mov     eax, [edx+154h]
0x5EEDF9: mov     ecx, esi
0x5EEDFB: call    eax
0x5EEDFD: test    eax, eax
0x5EEDFF: jz      loc_5EF8FF
0x5EEE05: mov     edx, [ebx]
0x5EEE07: mov     eax, [edx+154h]
0x5EEE0D: mov     ecx, ebx
0x5EEE0F: call    eax
0x5EEE11: test    eax, eax
0x5EEE13: jz      loc_5EF8FF
0x5EEE19: mov     ecx, esi
0x5EEE1B: call    sub_5E0660
0x5EEE20: fmul    qword ptr ds:0A2FAA0h
0x5EEE26: mov     edx, [esi]
0x5EEE28: mov     eax, [edx+154h]
0x5EEE2E: fstp    [esp+124h+var_104]
0x5EEE32: mov     ecx, esi
0x5EEE34: fld     [esp+124h+var_104]
0x5EEE38: fld     st
0x5EEE3A: fmul    dword ptr ds:0B258E8h
0x5EEE40: fstp    [esp+124h+var_104]
0x5EEE44: fld     st
0x5EEE46: fmul    dword ptr ds:0B258ECh
0x5EEE4C: fstp    [esp+124h+var_110]
0x5EEE50: fmul    dword ptr ds:0B258F0h
0x5EEE56: fstp    [esp+124h+var_100]
0x5EEE5A: call    eax
0x5EEE5C: fld     [esp+124h+var_104]
0x5EEE60: mov     ecx, ebx
0x5EEE62: fadd    dword ptr [eax+88h]
0x5EEE68: fstp    [esp+124h+var_E4]
0x5EEE6C: fld     dword ptr [eax+8Ch]
0x5EEE72: fadd    [esp+124h+var_110]
0x5EEE76: fstp    [esp+124h+a1]
0x5EEE7A: fld     dword ptr [eax+90h]
0x5EEE80: fadd    [esp+124h+var_100]
0x5EEE84: fstp    [esp+124h+var_EC]
0x5EEE88: fld     [esp+124h+var_E4]
0x5EEE8C: fstp    [esp+124h+var_94]
0x5EEE93: fld     [esp+124h+a1]
0x5EEE97: fstp    [esp+124h+var_90]
0x5EEE9E: fld     [esp+124h+var_EC]
0x5EEEA2: fstp    [esp+124h+var_8C]
0x5EEEA9: call    sub_5E0660
0x5EEEAE: fmul    qword ptr ds:0A2FAA0h
0x5EEEB4: mov     edx, [ebx]
0x5EEEB6: mov     eax, [edx+154h]
0x5EEEBC: mov     ecx, ebx
0x5EEEBE: fstp    [esp+124h+var_104]
0x5EEEC2: fld     [esp+124h+var_104]
0x5EEEC6: fld     st
0x5EEEC8: fmul    dword ptr ds:0B258E8h
0x5EEECE: fstp    [esp+124h+var_104]
0x5EEED2: fld     st
0x5EEED4: fmul    dword ptr ds:0B258ECh
0x5EEEDA: fstp    [esp+124h+var_110]
0x5EEEDE: fmul    dword ptr ds:0B258F0h
0x5EEEE4: fstp    [esp+124h+var_108]
0x5EEEE8: call    eax
0x5EEEEA: fld     [esp+124h+var_104]
0x5EEEEE: fadd    dword ptr [eax+88h]
0x5EEEF4: fstp    [esp+124h+var_C0]
0x5EEEF8: fld     dword ptr [eax+8Ch]
0x5EEEFE: fadd    [esp+124h+var_110]
0x5EEF02: fstp    [esp+124h+var_100]
0x5EEF06: fld     dword ptr [eax+90h]
0x5EEF0C: fadd    [esp+124h+var_108]
0x5EEF10: fstp    [esp+124h+var_110]
0x5EEF14: fld     [ebp+arg_4]
0x5EEF17: fld     [esp+124h+var_FC]
0x5EEF1B: fcompp
0x5EEF1D: fnstsw  ax
0x5EEF1F: test    ah, 5
0x5EEF22: jp      loc_5EF25A
0x5EEF28: fld     [esp+124h+var_E4]
0x5EEF2C: fsub    [esp+124h+var_C0]
0x5EEF30: fstp    [esp+124h+var_104]
0x5EEF34: fld     [esp+124h+a1]
0x5EEF38: fsub    [esp+124h+var_100]
0x5EEF3C: fstp    [esp+124h+var_108]
0x5EEF40: fld     [esp+124h+var_EC]
0x5EEF44: fsub    [esp+124h+var_110]
0x5EEF48: fstp    [esp+124h+var_88]
0x5EEF4F: fld     [esp+124h+var_104]
0x5EEF53: fld     qword ptr ds:0A3D0C0h
0x5EEF59: fmul    st(1), st
0x5EEF5B: fxch    st(1)
0x5EEF5D: fstp    [esp+124h+var_104]
0x5EEF61: fld     [esp+124h+var_108]
0x5EEF65: fmul    st, st(1)
0x5EEF67: fstp    [esp+124h+var_108]
0x5EEF6B: fmul    [esp+124h+var_88]
0x5EEF72: fstp    [esp+124h+var_88]
0x5EEF79: fld     dword ptr ds:0A524B0h
0x5EEF7F: sub     esp, 8
0x5EEF82: fstp    [esp+12Ch+var_12C+4]; float
0x5EEF86: fld     dword ptr ds:0A6E68Ch
0x5EEF8C: fstp    [esp+12Ch+var_12C]; float
0x5EEF8F: call    Rand4
0x5EEF94: fstp    [esp+12Ch+var_D0]
0x5EEF98: fld     dword ptr ds:0A524B0h
0x5EEF9E: fstp    [esp+12Ch+var_12C+4]; float
0x5EEFA2: fld     dword ptr ds:0A6E68Ch
0x5EEFA8: fstp    [esp+12Ch+var_12C]; float
0x5EEFAB: call    Rand4
0x5EEFB0: fstp    [esp+12Ch+var_CC]
0x5EEFB4: fld     dword ptr ds:0A524B0h
0x5EEFBA: fstp    [esp+12Ch+var_12C+4]; float
0x5EEFBE: fld     dword ptr ds:0A6E68Ch
0x5EEFC4: fstp    [esp+12Ch+var_12C]; float
0x5EEFC7: call    Rand4
0x5EEFCC: fstp    [esp+12Ch+var_C8]
0x5EEFD0: add     esp, 8
0x5EEFD3: fld     [esp+124h+var_104]
0x5EEFD7: fadd    [esp+124h+var_D0]
0x5EEFDB: fstp    [esp+124h+var_B8]
0x5EEFDF: fld     [esp+124h+var_108]
0x5EEFE3: fadd    [esp+124h+var_CC]
0x5EEFE7: fstp    [esp+124h+var_C4]
0x5EEFEB: fld     [esp+124h+var_88]
0x5EEFF2: fadd    [esp+124h+var_C8]
0x5EEFF6: fstp    [esp+124h+var_10C]
0x5EEFFA: fld     [esp+124h+var_B8]
0x5EEFFE: fstp    [esp+124h+var_F8]
0x5EF002: mov     ecx, [esp+124h+var_F8]
0x5EF006: fld     [esp+124h+var_C4]
0x5EF00A: mov     [esp+124h+var_DC], ecx
0x5EF00E: fstp    [esp+124h+var_F4]
0x5EF012: mov     edx, [esp+124h+var_F4]
0x5EF016: fld     [esp+124h+var_10C]
0x5EF01A: lea     ecx, [esp+124h+var_DC]
0x5EF01E: fstp    [esp+124h+var_F0]
0x5EF022: mov     eax, [esp+124h+var_F0]
0x5EF026: mov     [esp+124h+var_D8], edx
0x5EF02A: mov     [esp+124h+var_D4], eax
0x5EF02E: call    sub_43F350
0x5EF033: fstp    st
0x5EF035: mov     ecx, esi
0x5EF037: call    sub_5E1BB0
0x5EF03C: test    eax, eax
0x5EF03E: jz      short loc_5EF0A3
0x5EF040: mov     ecx, esi
0x5EF042: call    sub_5E1BB0
0x5EF047: cmp     byte ptr [eax], 0
0x5EF04A: jz      short loc_5EF0A3
0x5EF04C: push    0; int
0x5EF04E: push    0FFFFFFFFh; float
0x5EF050: push    0; float
0x5EF052: mov     ecx, esi
0x5EF054: call    sub_5E1BB0
0x5EF059: mov     ecx, [esp+130h+var_DC]
0x5EF05D: mov     edx, [esp+130h+var_D8]
0x5EF061: push    eax; int
0x5EF062: sub     esp, 0Ch
0x5EF065: mov     eax, esp
0x5EF067: mov     [eax], ecx
0x5EF069: mov     ecx, [esp+140h+var_D4]
0x5EF06D: mov     [eax+4], edx
0x5EF070: mov     edx, [esp+140h+var_94]
0x5EF077: mov     [eax+8], ecx
0x5EF07A: mov     ecx, [esp+140h+var_90]
0x5EF081: sub     esp, 0Ch
0x5EF084: mov     eax, esp
0x5EF086: mov     [eax], edx
0x5EF088: mov     edx, [esp+14Ch+var_8C]
0x5EF08F: mov     [eax+4], ecx
0x5EF092: mov     ecx, esi; this
0x5EF094: mov     [eax+8], edx
0x5EF097: call    TESObjectREFR_GetParentCell
0x5EF09C: mov     ecx, eax
0x5EF09E: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>(void)
0x5EF0A3: mov     ecx, esi
0x5EF0A5: call    sub_5E1BF0
0x5EF0AA: test    eax, eax
0x5EF0AC: jz      loc_5EF237
0x5EF0B2: mov     ecx, esi
0x5EF0B4: call    sub_5E1BF0
0x5EF0B9: cmp     byte ptr [eax], 0
0x5EF0BC: jz      loc_5EF237
0x5EF0C2: mov     ecx, esi; this
0x5EF0C4: call    TESObjectREFR_GetParentCell
0x5EF0C9: push    esi; TESObjectREFR *
0x5EF0CA: call    sub_4C9BE0
0x5EF0CF: add     esp, 4
0x5EF0D2: push    3
0x5EF0D4: push    eax
0x5EF0D5: mov     ecx, esi; this
0x5EF0D7: call    TESObjectREFR_GetParentCell
0x5EF0DC: mov     ecx, eax
0x5EF0DE: call    sub_441800
0x5EF0E3: push    20h ; ' '; Size
0x5EF0E5: mov     ebx, eax
0x5EF0E7: call    FormHeapAlloc
0x5EF0EC: mov     edi, eax
0x5EF0EE: add     esp, 4
0x5EF0F1: mov     [esp+124h+var_54], edi
0x5EF0F8: test    edi, edi
0x5EF0FA: mov     [esp+124h+var_4], 2
0x5EF105: jz      loc_5EF21B
0x5EF10B: fld     [esp+124h+var_B4]
0x5EF10F: push    ecx
0x5EF110: fsub    [esp+128h+var_E4]
0x5EF114: lea     eax, [esp+128h+var_40]
0x5EF11B: lea     ecx, [esp+128h+var_50]
0x5EF122: fstp    [esp+128h+var_10C]
0x5EF126: fld     [esp+128h+var_B0]
0x5EF12A: fsub    [esp+128h+a1]
0x5EF12E: fstp    [esp+128h+var_C4]
0x5EF132: fld     [esp+128h+var_AC]
0x5EF136: fsub    [esp+128h+var_EC]
0x5EF13A: fstp    [esp+128h+var_B8]
0x5EF13E: fld     [esp+128h+var_10C]
0x5EF142: fstp    [esp+128h+var_50]
0x5EF149: fld     [esp+128h+var_C4]
0x5EF14D: fstp    [esp+128h+var_4C]
0x5EF154: fld     [esp+128h+var_B8]
0x5EF158: fstp    [esp+128h+var_48]
0x5EF15F: fld     dword ptr ds:0A5977Ch
0x5EF165: fstp    [esp+128h+var_12C+4]; float
0x5EF168: push    eax; int
0x5EF169: call    sub_4BF9B0
0x5EF16E: fld     [esp+124h+var_E4]
0x5EF172: fadd    dword ptr [eax]
0x5EF174: push    0; float
0x5EF176: sub     esp, 10h
0x5EF179: fstp    [esp+138h+var_10C]
0x5EF17D: fld     dword ptr [eax+4]
0x5EF180: fadd    [esp+138h+a1]
0x5EF184: fstp    [esp+138h+var_C4]
0x5EF188: fld     dword ptr [eax+8]
0x5EF18B: mov     eax, esp
0x5EF18D: fadd    [esp+138h+var_EC]
0x5EF191: sub     esp, 0Ch
0x5EF194: fstp    [esp+144h+var_B8]
0x5EF19B: fld     [esp+144h+var_10C]
0x5EF19F: fstp    [esp+144h+var_84]
0x5EF1A6: mov     ecx, [esp+144h+var_84]
0x5EF1AD: fld     [esp+144h+var_C4]
0x5EF1B4: fstp    [esp+144h+var_80]
0x5EF1BB: mov     edx, [esp+144h+var_80]
0x5EF1C2: fld     [esp+144h+var_B8]
0x5EF1C9: fstp    [esp+144h+var_7C]
0x5EF1D0: fld1
0x5EF1D2: fstp    [esp+144h+var_12C]; float
0x5EF1D6: mov     [eax], ecx
0x5EF1D8: mov     ecx, [esp+144h+var_7C]
0x5EF1DF: mov     [eax+4], edx
0x5EF1E2: mov     edx, [esp+144h+var_DC]
0x5EF1E6: mov     [eax+8], ecx
0x5EF1E9: mov     ecx, [esp+144h+var_D8]
0x5EF1ED: mov     eax, esp
0x5EF1EF: mov     [eax], edx
0x5EF1F1: mov     edx, [esp+144h+var_D4]
0x5EF1F5: mov     [eax+4], ecx
0x5EF1F8: mov     ecx, esi
0x5EF1FA: mov     [eax+8], edx
0x5EF1FD: call    sub_5E1BF0
0x5EF202: fld1
0x5EF204: push    eax; float
0x5EF205: push    ebx; int
0x5EF206: push    ecx
0x5EF207: mov     ecx, esi; this
0x5EF209: fstp    [esp+150h+var_150]; float
0x5EF20C: call    TESObjectREFR_GetParentCell
0x5EF211: push    eax; int
0x5EF212: mov     ecx, edi
0x5EF214: call    sub_5713F0
0x5EF219: jmp     short loc_5EF21D
0x5EF21B: xor     eax, eax
0x5EF21D: push    eax
0x5EF21E: mov     ecx, offset ActorProcessManager_ptr
0x5EF223: mov     [esp+128h+var_4], 0FFFFFFFFh
0x5EF22E: call    sub_678D30
0x5EF233: mov     ebx, [esp+124h+var_BC]
0x5EF237: fld     [esp+124h+var_E0]
0x5EF23B: fmul    qword ptr ds:0A3C770h
0x5EF241: fstp    [esp+124h+var_E0]
0x5EF245: fld     [esp+124h+var_E0]
0x5EF249: fld     [esp+124h+var_FC]
0x5EF24D: fcompp
0x5EF24F: fnstsw  ax
0x5EF251: test    ah, 5
0x5EF254: jnp     loc_5EEF79
0x5EF25A: mov     eax, [esi]
0x5EF25C: mov     edi, [ebx+58h]
0x5EF25F: mov     edx, [eax+154h]
0x5EF265: mov     ecx, esi
0x5EF267: mov     [esp+124h+var_B8], edi
0x5EF26B: mov     [esp+124h+var_A8], 0FFFFFFFFh
0x5EF273: call    edx
0x5EF275: fld     [ebp+arg_4]
0x5EF278: mov     ebx, eax
0x5EF27A: fstp    [esp+124h+var_E0]
0x5EF27E: test    ebx, ebx
0x5EF280: jz      loc_5EF60B
0x5EF286: mov     eax, [esi]
0x5EF288: mov     edx, [eax+174h]
0x5EF28E: mov     ecx, esi
0x5EF290: call    edx
0x5EF292: mov     ecx, [eax]
0x5EF294: mov     edx, [eax+4]
0x5EF297: mov     eax, [eax+8]
0x5EF29A: mov     [esp+124h+var_F8], ecx
0x5EF29E: fld     [esp+124h+var_F8]
0x5EF2A2: fld     qword ptr ds:0A46E48h
0x5EF2A8: mov     [esp+124h+var_F4], edx
0x5EF2AC: fadd    st(1), st
0x5EF2AE: mov     [esp+124h+var_F0], eax
0x5EF2B2: fxch    st(1)
0x5EF2B4: fstp    [esp+124h+var_F8]
0x5EF2B8: fld     [esp+124h+var_F4]
0x5EF2BC: fadd    st, st(1)
0x5EF2BE: fstp    [esp+124h+var_F4]
0x5EF2C2: fadd    [esp+124h+var_F0]
0x5EF2C6: fstp    [esp+124h+var_F0]
0x5EF2CA: fld     [ebp+arg_4]
0x5EF2CD: fld     [esp+124h+var_FC]
0x5EF2D1: fcompp
0x5EF2D3: fnstsw  ax
0x5EF2D5: test    ah, 5
0x5EF2D8: jp      loc_5EF60B
0x5EF2DE: fld     [esp+124h+var_F8]
0x5EF2E2: fsub    [esp+124h+var_E4]
0x5EF2E6: fstp    [esp+124h+var_94]
0x5EF2ED: fld     [esp+124h+var_F4]
0x5EF2F1: fsub    [esp+124h+a1]
0x5EF2F5: fstp    [esp+124h+var_90]
0x5EF2FC: fld     [esp+124h+var_F0]
0x5EF300: fsub    [esp+124h+var_EC]
0x5EF304: fstp    [esp+124h+var_8C]
0x5EF30B: fld     dword ptr ds:0A47E6Ch
0x5EF311: sub     esp, 8
0x5EF314: fstp    [esp+12Ch+var_12C+4]; float
0x5EF318: fld     dword ptr ds:0A641B0h
0x5EF31E: fstp    [esp+12Ch+var_12C]; float
0x5EF321: call    Rand4
0x5EF326: fstp    [esp+12Ch+var_84]
0x5EF32D: add     esp, 4
0x5EF330: fld     dword ptr ds:0A524B0h
0x5EF336: fstp    [esp+128h+var_12C+4]; float
0x5EF339: call    Rand5
0x5EF33E: fstp    [esp+128h+var_80]
0x5EF345: fld     dword ptr ds:0A47E6Ch
0x5EF34B: fstp    [esp+128h+var_12C+4]; float
0x5EF34E: push    ecx
0x5EF34F: fld     dword ptr ds:0A641B0h
0x5EF355: fstp    [esp+12Ch+var_12C]; float
0x5EF358: call    Rand4
0x5EF35D: fstp    [esp+12Ch+var_7C]
0x5EF364: add     esp, 4
0x5EF367: fld     [esp+128h+var_84]
0x5EF36E: fld     qword ptr ds:0A3F3E8h
0x5EF374: fmul    st(1), st
0x5EF376: fxch    st(1)
0x5EF378: fstp    [esp+128h+var_60]
0x5EF37F: fld     [esp+128h+var_80]
0x5EF386: fmul    st, st(1)
0x5EF388: fstp    [esp+128h+var_5C]
0x5EF38F: fmul    [esp+128h+var_7C]
0x5EF396: fstp    [esp+128h+var_58]
0x5EF39D: fld     [esp+128h+var_94]
0x5EF3A4: fadd    [esp+128h+var_60]
0x5EF3AB: fstp    [esp+128h+var_6C]
0x5EF3B2: fld     [esp+128h+var_90]
0x5EF3B9: fadd    [esp+128h+var_5C]
0x5EF3C0: fstp    [esp+128h+var_68]
0x5EF3C7: fld     [esp+128h+var_8C]
0x5EF3CE: fadd    [esp+128h+var_58]
0x5EF3D5: fstp    [esp+128h+var_64]
0x5EF3DC: fld     [esp+128h+var_6C]
0x5EF3E3: fld     qword ptr ds:0A2FAA0h
0x5EF3E9: fmul    st(1), st
0x5EF3EB: fxch    st(1)
0x5EF3ED: fstp    [esp+128h+var_78]
0x5EF3F4: fld     [esp+128h+var_68]
0x5EF3FB: fmul    st, st(1)
0x5EF3FD: fstp    [esp+128h+var_74]
0x5EF404: fmul    [esp+128h+var_64]
0x5EF40B: fstp    [esp+128h+var_70]
0x5EF412: fld     [esp+128h+var_78]
0x5EF419: fadd    [esp+128h+var_E4]
0x5EF41D: fstp    [esp+128h+var_D0]
0x5EF421: fld     [esp+128h+var_74]
0x5EF428: fadd    [esp+128h+a1]
0x5EF42C: fstp    [esp+128h+var_CC]
0x5EF430: fld     [esp+128h+var_70]
0x5EF437: fadd    [esp+128h+var_EC]
0x5EF43B: fstp    [esp+128h+var_C8]
0x5EF43F: fld     dword ptr ds:0A46B10h
0x5EF445: fstp    [esp+128h+var_12C+4]; float
0x5EF448: call    Rand5
0x5EF44D: fstp    [esp+128h+var_10C]
0x5EF451: add     esp, 4
0x5EF454: fld     [esp+124h+var_C0]
0x5EF458: fsub    [esp+124h+var_D0]
0x5EF45C: fstp    [esp+124h+var_30]
0x5EF463: fld     [esp+124h+var_100]
0x5EF467: fsub    [esp+124h+var_CC]
0x5EF46B: fstp    [esp+124h+var_2C]
0x5EF472: fld     [esp+124h+var_110]
0x5EF476: fsub    [esp+124h+var_C8]
0x5EF47A: fstp    [esp+124h+var_28]
0x5EF481: fld     [esp+124h+var_30]
0x5EF488: fld     qword ptr ds:0A3C770h
0x5EF48E: fmul    st(1), st
0x5EF490: fxch    st(1)
0x5EF492: fstp    [esp+124h+var_F8]
0x5EF496: fld     [esp+124h+var_2C]
0x5EF49D: fmul    st, st(1)
0x5EF49F: fstp    [esp+124h+var_F4]
0x5EF4A3: fmul    [esp+124h+var_28]
0x5EF4AA: lea     ecx, [esp+124h+var_F8]
0x5EF4AE: fstp    [esp+124h+var_F0]
0x5EF4B2: call    sub_43F350
0x5EF4B7: fstp    st
0x5EF4B9: fld     [esp+124h+var_F8]
0x5EF4BD: push    ecx
0x5EF4BE: fld     qword ptr ds:0A46970h
0x5EF4C4: fmul    st(1), st
0x5EF4C6: fxch    st(1)
0x5EF4C8: fstp    [esp+128h+var_40]
0x5EF4CF: fld     [esp+128h+var_F4]
0x5EF4D3: fmul    st, st(1)
0x5EF4D5: fstp    [esp+128h+var_3C]
0x5EF4DC: fmul    [esp+128h+var_F0]
0x5EF4E0: fstp    [esp+128h+var_38]
0x5EF4E7: fld     [esp+128h+var_D0]
0x5EF4EB: fsub    [esp+128h+var_40]
0x5EF4F2: fstp    [esp+128h+var_50]
0x5EF4F9: fld     [esp+128h+var_CC]
0x5EF4FD: fsub    [esp+128h+var_3C]
0x5EF504: fstp    [esp+128h+var_4C]
0x5EF50B: fld     [esp+128h+var_C8]
0x5EF50F: fsub    [esp+128h+var_38]
0x5EF516: fstp    [esp+128h+var_48]
0x5EF51D: fld     dword ptr ds:0A46B14h
0x5EF523: fstp    [esp+128h+var_12C+4]; float
0x5EF526: call    Rand5
0x5EF52B: add     esp, 4
0x5EF52E: fstp    [esp+124h+var_C4]
0x5EF532: mov     ecx, esi
0x5EF534: call    sub_5E1BB0
0x5EF539: test    eax, eax
0x5EF53B: jz      loc_5EF5E8
0x5EF541: mov     ecx, esi
0x5EF543: call    sub_5E1BB0
0x5EF548: cmp     byte ptr [eax], 0
0x5EF54B: jz      loc_5EF5E8
0x5EF551: fld     [esp+124h+var_10C]
0x5EF555: sub     esp, 8
0x5EF558: fstp    qword ptr [esp+12Ch+var_12C]; double
0x5EF55B: call    _floor
0x5EF560: fnstcw  word ptr [esp+12Ch+var_108]
0x5EF564: add     esp, 8
0x5EF567: movzx   eax, word ptr [esp+124h+var_108]
0x5EF56C: or      eax, 0C00h
0x5EF571: mov     [esp+124h+var_10C], eax
0x5EF575: lea     edx, [esp+124h+var_A8]
0x5EF579: fldcw   word ptr [esp+124h+var_10C]
0x5EF57D: fistp   [esp+124h+var_10C]
0x5EF581: movzx   ecx, byte ptr [esp+124h+var_10C]
0x5EF586: push    ecx
0x5EF587: push    ecx
0x5EF588: mov     ecx, esi
0x5EF58A: fldcw   word ptr [esp+12Ch+var_108]
0x5EF58E: fld     [esp+12Ch+var_C4]
0x5EF592: fstp    [esp+12Ch+var_12C]
0x5EF595: push    0
0x5EF597: push    edx
0x5EF598: push    ebx
0x5EF599: call    sub_5E1BB0
0x5EF59E: mov     ecx, [esp+138h+var_F8]
0x5EF5A2: mov     edx, [esp+138h+var_F4]
0x5EF5A6: push    eax
0x5EF5A7: sub     esp, 0Ch
0x5EF5AA: mov     eax, esp
0x5EF5AC: mov     [eax], ecx
0x5EF5AE: mov     ecx, [esp+148h+var_F0]
0x5EF5B2: mov     [eax+4], edx
0x5EF5B5: mov     edx, [esp+148h+var_50]
0x5EF5BC: mov     [eax+8], ecx
0x5EF5BF: mov     ecx, [esp+148h+var_4C]
0x5EF5C6: sub     esp, 0Ch
0x5EF5C9: mov     eax, esp
0x5EF5CB: mov     [eax], edx
0x5EF5CD: mov     edx, [esp+154h+var_48]
0x5EF5D4: mov     [eax+4], ecx
0x5EF5D7: mov     ecx, esi; this
0x5EF5D9: mov     [eax+8], edx
0x5EF5DC: call    TESObjectREFR_GetParentCell
0x5EF5E1: mov     ecx, eax
0x5EF5E3: call    sub_4CF1A0
0x5EF5E8: fld     [esp+124h+var_E0]
0x5EF5EC: fmul    qword ptr ds:0A3C770h
0x5EF5F2: fstp    [esp+124h+var_E0]
0x5EF5F6: fld     [esp+124h+var_E0]
0x5EF5FA: fld     [esp+124h+var_FC]
0x5EF5FE: fcompp
0x5EF600: fnstsw  ax
0x5EF602: test    ah, 5
0x5EF605: jnp     loc_5EF30B
0x5EF60B: mov     ecx, esi
0x5EF60D: call    sub_5E1BB0
0x5EF612: test    eax, eax
0x5EF614: jz      loc_5EF8FF
0x5EF61A: mov     ecx, esi
0x5EF61C: call    sub_5E1BB0
0x5EF621: cmp     byte ptr [eax], 0
0x5EF624: jz      loc_5EF8FF
0x5EF62A: mov     eax, [edi]
0x5EF62C: mov     edx, [eax+138h]
0x5EF632: mov     ecx, edi
0x5EF634: call    edx
0x5EF636: test    al, al
0x5EF638: jnz     loc_5EF8FF
0x5EF63E: mov     ebx, [edi]
0x5EF640: mov     edi, [esp+124h+var_BC]
0x5EF644: mov     eax, [edi]
0x5EF646: mov     edx, [eax+168h]
0x5EF64C: mov     ecx, edi
0x5EF64E: add     ebx, 118h
0x5EF654: call    edx
0x5EF656: mov     ecx, [esp+124h+var_B8]
0x5EF65A: push    eax
0x5EF65B: mov     eax, [ebx]
0x5EF65D: call    eax
0x5EF65F: fld     [ebp+arg_4]
0x5EF662: fld     [esp+124h+var_FC]
0x5EF666: mov     ebx, eax
0x5EF668: fcompp
0x5EF66A: fnstsw  ax
0x5EF66C: test    ah, 5
0x5EF66F: jp      loc_5EF8FF
0x5EF675: test    ebx, ebx
0x5EF677: jz      loc_5EF8FF
0x5EF67D: fld     dword ptr ds:0A46B10h
0x5EF683: push    ecx
0x5EF684: fstp    [esp+128h+var_12C+4]; float
0x5EF687: call    Rand5
0x5EF68C: fstp    [esp+128h+var_12C+4]; float
0x5EF68F: call    sub_4842F0
0x5EF694: fnstcw  word ptr [esp+128h+var_108]
0x5EF698: movzx   eax, word ptr [esp+128h+var_108]
0x5EF69D: or      eax, 0C00h
0x5EF6A2: mov     [esp+128h+var_10C], eax
0x5EF6A6: fldcw   word ptr [esp+128h+var_10C]
0x5EF6AA: fistp   [esp+128h+var_10C]
0x5EF6AE: mov     cl, byte ptr [esp+128h+var_10C]
0x5EF6B2: mov     byte ptr [esp+128h+var_110], cl
0x5EF6B6: fldcw   word ptr [esp+128h+var_108]
0x5EF6BA: fld     dword ptr ds:0A46B14h
0x5EF6C0: fstp    [esp+128h+var_12C+4]; float
0x5EF6C3: call    Rand5
0x5EF6C8: fstp    [esp+128h+var_100]
0x5EF6CC: mov     ecx, ds:0B333C4h
0x5EF6D2: add     esp, 4
0x5EF6D5: cmp     edi, ecx
0x5EF6D7: jnz     loc_5EF804
0x5EF6DD: push    3
0x5EF6DF: push    1
0x5EF6E1: call    sub_6600D0
0x5EF6E6: mov     ecx, eax
0x5EF6E8: call    sub_477EC0
0x5EF6ED: fld     [esp+124h+var_B4]
0x5EF6F1: mov     edi, eax
0x5EF6F3: fsub    dword ptr [edi+88h]
0x5EF6F9: push    ecx
0x5EF6FA: lea     edx, [esp+128h+var_40]
0x5EF701: lea     ecx, [esp+128h+var_50]
0x5EF708: fstp    [esp+128h+var_50]
0x5EF70F: fld     [esp+128h+var_B0]
0x5EF713: fsub    dword ptr [edi+8Ch]
0x5EF719: fstp    [esp+128h+var_4C]
0x5EF720: fld     [esp+128h+var_AC]
0x5EF724: fsub    dword ptr [edi+90h]
0x5EF72A: fstp    [esp+128h+var_48]
0x5EF731: fld     dword ptr ds:0A379B4h
0x5EF737: fstp    [esp+128h+var_12C+4]; float
0x5EF73A: push    edx; int
0x5EF73B: call    sub_4BF9B0
0x5EF740: push    eax
0x5EF741: lea     eax, [esp+128h+var_50]
0x5EF748: push    eax
0x5EF749: lea     ecx, [ebx+88h]
0x5EF74F: call    sub_47D9B0
0x5EF754: mov     ecx, [eax]
0x5EF756: mov     edx, [eax+4]
0x5EF759: mov     eax, [eax+8]
0x5EF75C: mov     [esp+124h+var_F8], ecx
0x5EF760: mov     ecx, ds:0B333C4h
0x5EF766: mov     [esp+124h+var_F0], eax
0x5EF76A: mov     al, [ecx+588h]
0x5EF770: test    al, al
0x5EF772: mov     [esp+124h+var_F4], edx
0x5EF776: mov     ecx, ebx
0x5EF778: jnz     short loc_5EF77E
0x5EF77A: mov     ecx, edi
0x5EF77C: mov     edi, ebx
0x5EF77E: fld     [esp+124h+var_DC]
0x5EF782: mov     edx, [esp+124h+var_110]
0x5EF786: fchs
0x5EF788: push    edx
0x5EF789: fstp    [esp+128h+var_50]
0x5EF790: push    ecx
0x5EF791: fld     [esp+12Ch+var_D8]
0x5EF795: lea     eax, [esp+12Ch+var_A8]
0x5EF79C: fchs
0x5EF79E: fstp    [esp+12Ch+var_4C]
0x5EF7A5: fld     [esp+12Ch+var_D4]
0x5EF7A9: fchs
0x5EF7AB: fstp    [esp+12Ch+var_48]
0x5EF7B2: fld     [esp+12Ch+var_100]
0x5EF7B6: fstp    [esp+12Ch+var_12C]
0x5EF7B9: push    edi
0x5EF7BA: push    eax
0x5EF7BB: push    ecx
0x5EF7BC: mov     ecx, esi
0x5EF7BE: call    sub_5E1BB0
0x5EF7C3: mov     ecx, [esp+138h+var_50]
0x5EF7CA: mov     edx, [esp+138h+var_4C]
0x5EF7D1: push    eax
0x5EF7D2: sub     esp, 0Ch
0x5EF7D5: mov     eax, esp
0x5EF7D7: mov     [eax], ecx
0x5EF7D9: mov     ecx, [esp+148h+var_48]
0x5EF7E0: mov     [eax+4], edx
0x5EF7E3: mov     edx, [esp+148h+var_F8]
0x5EF7E7: mov     [eax+8], ecx
0x5EF7EA: mov     ecx, [esp+148h+var_F4]
0x5EF7EE: sub     esp, 0Ch
0x5EF7F1: mov     eax, esp
0x5EF7F3: mov     [eax], edx
0x5EF7F5: mov     edx, [esp+154h+var_F0]
0x5EF7F9: mov     [eax+4], ecx
0x5EF7FC: mov     [eax+8], edx
0x5EF7FF: jmp     loc_5EF8EC
0x5EF804: fld     [esp+124h+var_B4]
0x5EF808: lea     edi, [ebx+88h]
0x5EF80E: fsub    dword ptr [edi]
0x5EF810: push    ecx
0x5EF811: lea     eax, [esp+128h+var_B4]
0x5EF815: lea     ecx, [esp+128h+var_50]
0x5EF81C: fstp    [esp+128h+var_50]
0x5EF823: fld     [esp+128h+var_B0]
0x5EF827: fsub    dword ptr [edi+4]
0x5EF82A: fstp    [esp+128h+var_4C]
0x5EF831: fld     [esp+128h+var_AC]
0x5EF835: fsub    dword ptr [edi+8]
0x5EF838: fstp    [esp+128h+var_48]
0x5EF83F: fld     dword ptr ds:0A379B4h
0x5EF845: fstp    [esp+128h+var_12C+4]; float
0x5EF848: push    eax; int
0x5EF849: call    sub_4BF9B0
0x5EF84E: push    eax
0x5EF84F: lea     ecx, [esp+128h+var_A4]
0x5EF856: push    ecx
0x5EF857: mov     ecx, edi
0x5EF859: call    sub_47D9B0
0x5EF85E: fld     [esp+124h+var_DC]
0x5EF862: mov     ecx, [esp+124h+var_110]
0x5EF866: fchs
0x5EF868: mov     edx, [eax+4]
0x5EF86B: fstp    [esp+124h+var_50]
0x5EF872: fld     [esp+124h+var_D8]
0x5EF876: mov     edi, [eax]
0x5EF878: mov     eax, [eax+8]
0x5EF87B: fchs
0x5EF87D: fstp    [esp+124h+var_4C]
0x5EF884: push    ecx
0x5EF885: fld     [esp+128h+var_D4]
0x5EF889: push    ecx
0x5EF88A: fchs
0x5EF88C: mov     [esp+12Ch+var_F4], edx
0x5EF890: fstp    [esp+12Ch+var_48]
0x5EF897: lea     edx, [esp+12Ch+var_A8]
0x5EF89E: fld     [esp+12Ch+var_100]
0x5EF8A2: mov     ecx, esi
0x5EF8A4: fstp    [esp+12Ch+var_12C]
0x5EF8A7: push    0
0x5EF8A9: push    edx
0x5EF8AA: push    ebx
0x5EF8AB: mov     [esp+138h+var_F0], eax
0x5EF8AF: call    sub_5E1BB0
0x5EF8B4: mov     ecx, [esp+138h+var_50]
0x5EF8BB: mov     edx, [esp+138h+var_4C]
0x5EF8C2: push    eax
0x5EF8C3: sub     esp, 0Ch
0x5EF8C6: mov     eax, esp
0x5EF8C8: mov     [eax], ecx
0x5EF8CA: mov     ecx, [esp+148h+var_48]
0x5EF8D1: mov     [eax+4], edx
0x5EF8D4: mov     edx, [esp+148h+var_F4]
0x5EF8D8: mov     [eax+8], ecx
0x5EF8DB: mov     ecx, [esp+148h+var_F0]
0x5EF8DF: sub     esp, 0Ch
0x5EF8E2: mov     eax, esp
0x5EF8E4: mov     [eax], edi
0x5EF8E6: mov     [eax+4], edx
0x5EF8E9: mov     [eax+8], ecx
0x5EF8EC: mov     ecx, [esp+154h+var_BC]; this
0x5EF8F3: call    TESObjectREFR_GetParentCell
0x5EF8F8: mov     ecx, eax
0x5EF8FA: call    sub_4CF1A0
0x5EF8FF: mov     ecx, dword ptr [esp+124h+var_C]
0x5EF906: mov     large fs:0, ecx
0x5EF90D: pop     ecx
0x5EF90E: pop     edi
0x5EF90F: pop     esi
0x5EF910: pop     ebx
0x5EF911: mov     ecx, [esp+114h+var_14]
0x5EF918: xor     ecx, esp
0x5EF91A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5EF91F: mov     esp, ebp
0x5EF921: pop     ebp
0x5EF922: retn    14h
