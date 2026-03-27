0x6670F0: sub     esp, 44h
0x6670F3: push    esi
0x6670F4: mov     esi, [esp+48h+arg_0]
0x6670F8: test    esi, esi
0x6670FA: push    edi
0x6670FB: mov     edi, ecx
0x6670FD: jnz     short loc_667109
0x6670FF: pop     edi
0x667100: xor     al, al
0x667102: pop     esi
0x667103: add     esp, 44h
0x667106: retn    4
0x667109: cmp     dword ptr ds:0B3BB88h, 0
0x667110: jnz     short loc_66712A
0x667112: mov     dword ptr ds:0B3BB88h, offset word_B3BB4C
0x66711C: mov     byte ptr ds:0B3BB5Ch, 0
0x667123: mov     byte ptr ds:0B3BB79h, 1
0x66712A: mov     eax, [edi]
0x66712C: mov     edx, [eax+174h]
0x667132: call    edx
0x667134: fldz
0x667136: mov     ecx, [eax]
0x667138: mov     edx, [eax+4]
0x66713B: mov     eax, [eax+8]
0x66713E: fst     [esp+4Ch+var_3C]
0x667142: fld     dword ptr ds:0A2F930h
0x667148: mov     [esp+4Ch+var_30], ecx
0x66714C: mov     ecx, ds:0B333C4h
0x667152: fstp    [esp+4Ch+var_38]
0x667156: mov     [esp+4Ch+var_2C], edx
0x66715A: fstp    [esp+4Ch+var_34]
0x66715E: mov     [esp+4Ch+var_28], eax
0x667162: call    sub_5E0660
0x667167: fmul    qword ptr ds:0A3C770h
0x66716D: mov     ecx, ds:0B3BB88h
0x667173: push    esi
0x667174: fadd    [esp+50h+var_28]
0x667178: fstp    [esp+50h+var_28]
0x66717C: call    sub_441920
0x667181: fld     [esp+4Ch+var_3C]
0x667185: push    0
0x667187: fadd    [esp+50h+var_30]
0x66718B: lea     ecx, [esp+50h+var_3C]
0x66718F: push    ecx
0x667190: mov     ecx, ds:0B3BB88h
0x667196: fstp    [esp+54h+var_18]
0x66719A: lea     edx, [esp+54h+var_18]
0x66719E: fld     [esp+54h+var_2C]
0x6671A2: push    edx
0x6671A3: fadd    [esp+58h+var_38]
0x6671A7: fstp    [esp+58h+var_14]
0x6671AB: fld     [esp+58h+var_34]
0x6671AF: fadd    [esp+58h+var_28]
0x6671B3: fstp    [esp+58h+var_10]
0x6671B7: call    sub_959D60
0x6671BC: test    al, al
0x6671BE: jz      short loc_667236
0x6671C0: mov     eax, ds:0B3BB88h
0x6671C5: mov     ecx, [eax+1Ch]
0x6671C8: mov     ecx, [ecx]
0x6671CA: mov     eax, [ecx+2Ch]
0x6671CD: mov     edx, [ecx+28h]
0x6671D0: mov     [esp+4Ch+var_20], eax
0x6671D4: fld     [esp+4Ch+var_20]
0x6671D8: fmul    [esp+4Ch+var_38]
0x6671DC: mov     [esp+4Ch+var_24], edx
0x6671E0: fld     [esp+4Ch+var_3C]
0x6671E4: mov     edx, [ecx+30h]
0x6671E7: fmul    [esp+4Ch+var_24]
0x6671EB: mov     [esp+4Ch+var_1C], edx
0x6671EF: faddp   st(1), st
0x6671F1: fld     [esp+4Ch+var_1C]
0x6671F5: fmul    [esp+4Ch+var_34]
0x6671F9: faddp   st(1), st
0x6671FB: fstp    [esp+4Ch+arg_0]
0x6671FF: fld     [esp+4Ch+arg_0]
0x667203: fcomp   dword ptr ds:0A2FAA8h
0x667209: fnstsw  ax
0x66720B: test    ah, 41h
0x66720E: jnz     short loc_667236
0x667210: mov     eax, [ecx]
0x667212: mov     ecx, [eax+1Ch]
0x667215: test    ecx, ecx
0x667217: jz      short loc_66722C
0x667219: mov     edx, [ecx]
0x66721B: mov     eax, [edx+4]
0x66721E: call    eax
0x667220: cmp     eax, offset dword_B3FD4C
0x667225: setz    al
0x667228: test    al, al
0x66722A: jnz     short loc_667236
0x66722C: pop     edi
0x66722D: mov     al, 1
0x66722F: pop     esi
0x667230: add     esp, 44h
0x667233: retn    4
0x667236: fld     dword ptr ds:0A2F930h
0x66723C: push    0
0x66723E: fstp    [esp+50h+var_24]
0x667242: mov     ecx, [esp+50h+var_24]
0x667246: fld     dword ptr ds:0A7386Ch
0x66724C: mov     [esp+50h+var_3C], ecx
0x667250: fstp    [esp+50h+var_20]
0x667254: mov     edx, [esp+50h+var_20]
0x667258: fldz
0x66725A: lea     ecx, [esp+50h+var_3C]
0x66725E: fstp    [esp+50h+var_1C]
0x667262: mov     [esp+50h+var_38], edx
0x667266: fld     [esp+50h+var_30]
0x66726A: mov     eax, [esp+50h+var_1C]
0x66726E: fld     qword ptr ds:0A2F920h
0x667274: push    ecx
0x667275: fadd    st(1), st
0x667277: mov     ecx, ds:0B3BB88h
0x66727D: fxch    st(1)
0x66727F: lea     edx, [esp+54h+var_C]
0x667283: push    edx
0x667284: mov     [esp+58h+var_34], eax
0x667288: fstp    [esp+58h+var_C]
0x66728C: fsubr   [esp+58h+var_2C]
0x667290: fstp    [esp+58h+arg_0]
0x667294: fld     [esp+58h+arg_0]
0x667298: fstp    [esp+58h+var_8]
0x66729C: fld     [esp+58h+var_28]
0x6672A0: fadd    qword ptr ds:0A2FC68h
0x6672A6: fstp    [esp+58h+var_44]
0x6672AA: fld     [esp+58h+var_44]
0x6672AE: fstp    [esp+58h+var_4]
0x6672B2: call    sub_959D60
0x6672B7: test    al, al
0x6672B9: jz      short loc_66732F
0x6672BB: mov     eax, ds:0B3BB88h
0x6672C0: mov     ecx, [eax+1Ch]
0x6672C3: mov     ecx, [ecx]
0x6672C5: mov     eax, [ecx+2Ch]
0x6672C8: mov     edx, [ecx+28h]
0x6672CB: mov     [esp+4Ch+var_20], eax
0x6672CF: fld     [esp+4Ch+var_20]
0x6672D3: fmul    [esp+4Ch+var_38]
0x6672D7: mov     [esp+4Ch+var_24], edx
0x6672DB: fld     [esp+4Ch+var_24]
0x6672DF: mov     edx, [ecx+30h]
0x6672E2: fmul    [esp+4Ch+var_3C]
0x6672E6: mov     [esp+4Ch+var_1C], edx
0x6672EA: faddp   st(1), st
0x6672EC: fld     [esp+4Ch+var_1C]
0x6672F0: fmul    [esp+4Ch+var_34]
0x6672F4: faddp   st(1), st
0x6672F6: fstp    [esp+4Ch+var_40]
0x6672FA: fld     [esp+4Ch+var_40]
0x6672FE: fcomp   dword ptr ds:0A2FAA8h
0x667304: fnstsw  ax
0x667306: test    ah, 41h
0x667309: jnz     short loc_66732F
0x66730B: mov     eax, [ecx]
0x66730D: mov     ecx, [eax+1Ch]
0x667310: test    ecx, ecx
0x667312: jz      loc_66722C
0x667318: mov     edx, [ecx]
0x66731A: mov     eax, [edx+4]
0x66731D: call    eax
0x66731F: cmp     eax, offset dword_B3FD4C
0x667324: setz    al
0x667327: test    al, al
0x667329: jz      loc_66722C
0x66732F: fld     dword ptr ds:0A7386Ch
0x667335: push    0
0x667337: fst     [esp+50h+var_24]
0x66733B: mov     ecx, [esp+50h+var_24]
0x66733F: fstp    [esp+50h+var_20]
0x667343: mov     edx, [esp+50h+var_20]
0x667347: fldz
0x667349: mov     [esp+50h+var_3C], ecx
0x66734D: fstp    [esp+50h+var_1C]
0x667351: lea     ecx, [esp+50h+var_3C]
0x667355: fld     [esp+50h+var_30]
0x667359: mov     eax, [esp+50h+var_1C]
0x66735D: fsub    qword ptr ds:0A2F920h
0x667363: mov     [esp+50h+var_38], edx
0x667367: push    ecx
0x667368: mov     ecx, ds:0B3BB88h
0x66736E: lea     edx, [esp+54h+var_18]
0x667372: fstp    [esp+54h+var_18]
0x667376: push    edx
0x667377: fld     [esp+58h+arg_0]
0x66737B: mov     [esp+58h+var_34], eax
0x66737F: fstp    [esp+58h+var_14]
0x667383: fld     [esp+58h+var_44]
0x667387: fstp    [esp+58h+var_10]
0x66738B: call    sub_959D60
0x667390: test    al, al
0x667392: jz      short loc_667408
0x667394: mov     eax, ds:0B3BB88h
0x667399: mov     ecx, [eax+1Ch]
0x66739C: mov     ecx, [ecx]
0x66739E: mov     eax, [ecx+2Ch]
0x6673A1: mov     edx, [ecx+28h]
0x6673A4: mov     [esp+4Ch+var_20], eax
0x6673A8: fld     [esp+4Ch+var_20]
0x6673AC: fmul    [esp+4Ch+var_38]
0x6673B0: mov     [esp+4Ch+var_24], edx
0x6673B4: fld     [esp+4Ch+var_24]
0x6673B8: mov     edx, [ecx+30h]
0x6673BB: fmul    [esp+4Ch+var_3C]
0x6673BF: mov     [esp+4Ch+var_1C], edx
0x6673C3: faddp   st(1), st
0x6673C5: fld     [esp+4Ch+var_1C]
0x6673C9: fmul    [esp+4Ch+var_34]
0x6673CD: faddp   st(1), st
0x6673CF: fstp    [esp+4Ch+arg_0]
0x6673D3: fld     [esp+4Ch+arg_0]
0x6673D7: fcomp   dword ptr ds:0A2FAA8h
0x6673DD: fnstsw  ax
0x6673DF: test    ah, 41h
0x6673E2: jnz     short loc_667408
0x6673E4: mov     eax, [ecx]
0x6673E6: mov     ecx, [eax+1Ch]
0x6673E9: test    ecx, ecx
0x6673EB: jz      loc_66722C
0x6673F1: mov     edx, [ecx]
0x6673F3: mov     eax, [edx+4]
0x6673F6: call    eax
0x6673F8: cmp     eax, offset dword_B3FD4C
0x6673FD: setz    al
0x667400: test    al, al
0x667402: jz      loc_66722C
0x667408: mov     ecx, edi; this
0x66740A: call    MobileObject_GetCharProxy
0x66740F: mov     ecx, eax
0x667411: call    sub_892D90
0x667416: pop     edi
0x667417: pop     esi
0x667418: add     esp, 44h
0x66741B: retn    4
