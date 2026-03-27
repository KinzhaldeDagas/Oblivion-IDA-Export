0x684000: sub     esp, 50h
0x684003: push    esi
0x684004: mov     esi, [esp+54h+arg_0]
0x684008: test    esi, esi
0x68400A: push    edi
0x68400B: mov     edi, ecx
0x68400D: mov     [esp+58h+var_44], edi
0x684011: jz      loc_6843AD
0x684017: push    ebx
0x684018: push    ebp
0x684019: mov     ecx, esi; this
0x68401B: call    sub_5E3400
0x684020: mov     ecx, esi
0x684022: mov     [esp+60h+var_4E], al
0x684026: call    sub_5E1E90
0x68402B: test    al, al
0x68402D: lea     ecx, [edi+14h]
0x684030: setz    [esp+60h+var_4D]
0x684035: call    sub_42B410
0x68403A: mov     ebx, eax
0x68403C: test    ebx, ebx
0x68403E: jz      short loc_684058
0x684040: mov     ecx, ebx
0x684042: call    NiDX92DBufferData__GetSurfaceData
0x684047: mov     ebp, eax
0x684049: test    ebp, ebp
0x68404B: jz      short loc_68405A
0x68404D: mov     ecx, ebp
0x68404F: call    NiDX92DBufferData__GetSurfaceData
0x684054: mov     esi, eax
0x684056: jmp     short loc_68405C
0x684058: xor     ebp, ebp
0x68405A: xor     esi, esi
0x68405C: test    ebx, ebx
0x68405E: mov     byte ptr [esp+60h+arg_0], 0
0x684063: jz      loc_6843AB
0x684069: lea     esp, [esp+0]
0x684070: test    ebp, ebp
0x684072: jz      loc_684393
0x684078: test    esi, esi
0x68407A: jz      loc_684393
0x684080: cmp     [esp+60h+var_4E], 0
0x684085: jnz     short loc_684096
0x684087: mov     ecx, esi
0x684089: call    sub_68CA80
0x68408E: test    al, al
0x684090: jnz     loc_68439A
0x684096: cmp     [esp+60h+var_4D], 0
0x68409B: jnz     short loc_6840AC
0x68409D: mov     ecx, esi
0x68409F: call    sub_68CAB0
0x6840A4: test    al, al
0x6840A6: jnz     loc_68439A
0x6840AC: mov     eax, ds:0B333A0h
0x6840B1: cmp     dword ptr [eax+34h], 0
0x6840B5: jnz     short loc_6840D2
0x6840B7: mov     ecx, ebp
0x6840B9: call    sub_6899C0
0x6840BE: mov     ecx, ds:0B333A0h
0x6840C4: push    eax
0x6840C5: call    sub_43F840
0x6840CA: test    al, al
0x6840CC: jz      loc_684393
0x6840D2: mov     ecx, ebx
0x6840D4: call    sub_6899C0
0x6840D9: mov     ecx, ebp
0x6840DB: mov     edi, eax
0x6840DD: call    sub_6899C0
0x6840E2: fld     dword ptr [eax]
0x6840E4: fsub    dword ptr [edi]
0x6840E6: lea     ecx, [esp+60h+var_C]
0x6840EA: push    ecx
0x6840EB: fstp    [esp+64h+var_C]
0x6840EF: fld     dword ptr [eax+4]
0x6840F2: fsub    dword ptr [edi+4]
0x6840F5: fstp    [esp+64h+var_8]
0x6840F9: fld     dword ptr [eax+8]
0x6840FC: fsub    dword ptr [edi+8]
0x6840FF: fstp    [esp+64h+var_4]
0x684103: call    sub_683CB0
0x684108: add     esp, 4
0x68410B: fstp    [esp+60h+var_4C]
0x68410F: mov     ecx, ebp
0x684111: call    sub_6899C0
0x684116: mov     ecx, esi
0x684118: mov     edi, eax
0x68411A: call    sub_6899C0
0x68411F: fld     dword ptr [eax]
0x684121: fsub    dword ptr [edi]
0x684123: lea     edx, [esp+60h+var_48]
0x684127: push    edx; int
0x684128: fstp    [esp+64h+var_3C]
0x68412C: fld     dword ptr [eax+4]
0x68412F: fsub    dword ptr [edi+4]
0x684132: fstp    [esp+64h+var_38]
0x684136: fld     dword ptr [eax+8]
0x684139: lea     eax, [esp+64h+var_3C]
0x68413D: fsub    dword ptr [edi+8]
0x684140: push    eax
0x684141: fstp    [esp+68h+var_34]
0x684145: call    sub_683CB0
0x68414A: fstp    [esp+68h+var_68]; float
0x68414D: push    ecx
0x68414E: fld     [esp+6Ch+var_4C]
0x684152: fstp    [esp+6Ch+var_6C]; float
0x684155: call    sub_683AD0
0x68415A: fabs
0x68415C: add     esp, 0Ch
0x68415F: fstp    [esp+60h+var_40]
0x684163: mov     ecx, ebx
0x684165: fld     [esp+60h+var_40]
0x684169: fstp    [esp+60h+var_40]
0x68416D: call    sub_6899C0
0x684172: mov     ecx, esi
0x684174: mov     edi, eax
0x684176: call    sub_6899C0
0x68417B: fld     dword ptr [eax]
0x68417D: fsub    dword ptr [edi]
0x68417F: lea     ecx, [esp+60h+var_48]
0x684183: push    ecx; int
0x684184: lea     edx, [esp+64h+var_30]
0x684188: fstp    [esp+64h+var_30]
0x68418C: push    edx
0x68418D: fld     dword ptr [eax+4]
0x684190: fsub    dword ptr [edi+4]
0x684193: fstp    [esp+68h+var_2C]
0x684197: fld     dword ptr [eax+8]
0x68419A: fsub    dword ptr [edi+8]
0x68419D: fstp    [esp+68h+var_28]
0x6841A1: call    sub_683CB0
0x6841A6: fstp    [esp+68h+var_68]; float
0x6841A9: push    ecx
0x6841AA: fld     [esp+6Ch+var_4C]
0x6841AE: fstp    [esp+6Ch+var_6C]; float
0x6841B1: call    sub_683AD0
0x6841B6: fabs
0x6841B8: add     esp, 0Ch
0x6841BB: fstp    [esp+60h+var_48]
0x6841BF: fld     [esp+60h+var_48]
0x6841C3: fld     dword ptr ds:0A6E734h
0x6841C9: fcom    st(1)
0x6841CB: fnstsw  ax
0x6841CD: fstp    st(1)
0x6841CF: test    ah, 41h
0x6841D2: jnz     loc_68436D
0x6841D8: fcomp   [esp+60h+var_40]
0x6841DC: fnstsw  ax
0x6841DE: test    ah, 41h
0x6841E1: jnz     loc_68436F
0x6841E7: cmp     byte ptr [esp+60h+arg_0], 0
0x6841EC: jnz     loc_68436F
0x6841F2: mov     ecx, ebp
0x6841F4: call    sub_68CA50
0x6841F9: test    al, al
0x6841FB: jnz     loc_68436F
0x684201: mov     ecx, [esp+60h+var_44]
0x684205: push    ebx
0x684206: push    ebp
0x684207: add     ecx, 14h
0x68420A: call    sub_68BE80
0x68420F: mov     ecx, esi
0x684211: mov     ebp, esi
0x684213: call    NiDX92DBufferData__GetSurfaceData
0x684218: mov     esi, eax
0x68421A: test    esi, esi
0x68421C: jz      loc_684387
0x684222: cmp     [esp+60h+var_4E], 0
0x684227: jnz     short loc_684238
0x684229: mov     ecx, esi
0x68422B: call    sub_68CA80
0x684230: test    al, al
0x684232: jnz     loc_6843B5
0x684238: cmp     [esp+60h+var_4D], 0
0x68423D: jnz     short loc_68424E
0x68423F: mov     ecx, esi
0x684241: call    sub_68CAB0
0x684246: test    al, al
0x684248: jnz     loc_6843B5
0x68424E: mov     eax, ds:0B333A0h
0x684253: cmp     dword ptr [eax+34h], 0
0x684257: jnz     short loc_684274
0x684259: mov     ecx, ebp
0x68425B: call    sub_6899C0
0x684260: mov     ecx, ds:0B333A0h
0x684266: push    eax
0x684267: call    sub_43F840
0x68426C: test    al, al
0x68426E: jz      loc_68436F
0x684274: mov     ecx, ebp
0x684276: call    sub_6899C0
0x68427B: mov     ecx, esi
0x68427D: mov     edi, eax
0x68427F: call    sub_6899C0
0x684284: fld     dword ptr [eax]
0x684286: fsub    dword ptr [edi]
0x684288: fstp    [esp+60h+var_24]
0x68428C: mov     ecx, [esp+60h+var_24]
0x684290: fld     dword ptr [eax+4]
0x684293: mov     [esp+60h+var_3C], ecx
0x684297: fsub    dword ptr [edi+4]
0x68429A: lea     ecx, [esp+60h+var_48]
0x68429E: push    ecx; int
0x68429F: fstp    [esp+64h+var_20]
0x6842A3: mov     edx, [esp+64h+var_20]
0x6842A7: fld     dword ptr [eax+8]
0x6842AA: mov     [esp+64h+var_38], edx
0x6842AE: fsub    dword ptr [edi+8]
0x6842B1: lea     edx, [esp+64h+var_3C]
0x6842B5: push    edx
0x6842B6: fstp    [esp+68h+var_1C]
0x6842BA: mov     eax, [esp+68h+var_1C]
0x6842BE: mov     [esp+68h+var_34], eax
0x6842C2: call    sub_683CB0
0x6842C7: fstp    [esp+68h+var_68]; float
0x6842CA: fld     [esp+68h+var_4C]
0x6842CE: push    ecx
0x6842CF: fstp    [esp+6Ch+var_6C]; float
0x6842D2: call    sub_683AD0
0x6842D7: fabs
0x6842D9: add     esp, 0Ch
0x6842DC: fstp    [esp+60h+var_40]
0x6842E0: mov     ecx, ebx
0x6842E2: fld     [esp+60h+var_40]
0x6842E6: fstp    [esp+60h+var_40]
0x6842EA: call    sub_6899C0
0x6842EF: mov     ecx, esi
0x6842F1: mov     edi, eax
0x6842F3: call    sub_6899C0
0x6842F8: fld     dword ptr [eax]
0x6842FA: fsub    dword ptr [edi]
0x6842FC: fstp    [esp+60h+var_18]
0x684300: fld     dword ptr [eax+4]
0x684303: fsub    dword ptr [edi+4]
0x684306: fstp    [esp+60h+var_14]
0x68430A: mov     ecx, [esp+60h+var_14]
0x68430E: fld     dword ptr [eax+8]
0x684311: mov     eax, [esp+60h+var_18]
0x684315: fsub    dword ptr [edi+8]
0x684318: mov     [esp+60h+var_30], eax
0x68431C: lea     eax, [esp+60h+var_48]
0x684320: mov     [esp+60h+var_2C], ecx
0x684324: fstp    [esp+60h+var_10]
0x684328: mov     edx, [esp+60h+var_10]
0x68432C: push    eax; int
0x68432D: lea     ecx, [esp+64h+var_30]
0x684331: push    ecx
0x684332: mov     [esp+68h+var_28], edx
0x684336: call    sub_683CB0
0x68433B: fstp    [esp+68h+var_68]; float
0x68433E: fld     [esp+68h+var_4C]
0x684342: push    ecx
0x684343: fstp    [esp+6Ch+var_6C]; float
0x684346: call    sub_683AD0
0x68434B: fabs
0x68434D: add     esp, 0Ch
0x684350: fstp    [esp+60h+var_48]
0x684354: fld     [esp+60h+var_48]
0x684358: fld     dword ptr ds:0A6E734h
0x68435E: fcom    st(1)
0x684360: fnstsw  ax
0x684362: fstp    st(1)
0x684364: test    ah, 41h
0x684367: jz      loc_6841D8
0x68436D: fstp    st
0x68436F: test    esi, esi
0x684371: jz      short loc_684387
0x684373: cmp     byte ptr [esp+60h+arg_0], 0
0x684378: jnz     short loc_684387
0x68437A: mov     ebx, ebp
0x68437C: mov     ecx, esi
0x68437E: mov     ebp, esi
0x684380: call    NiDX92DBufferData__GetSurfaceData
0x684385: mov     esi, eax
0x684387: test    ebx, ebx
0x684389: mov     edi, [esp+60h+var_44]
0x68438D: jnz     loc_684070
0x684393: cmp     byte ptr [esp+60h+arg_0], 0
0x684398: jz      short loc_6843AB
0x68439A: test    esi, esi
0x68439C: jz      short loc_6843AB
0x68439E: push    esi
0x68439F: lea     ecx, [edi+14h]
0x6843A2: call    sub_68C0F0
0x6843A7: or      byte ptr [edi+2Ch], 80h
0x6843AB: pop     ebp
0x6843AC: pop     ebx
0x6843AD: pop     edi
0x6843AE: pop     esi
0x6843AF: add     esp, 50h
0x6843B2: retn    4
0x6843B5: mov     byte ptr [esp+60h+arg_0], 1
0x6843BA: jmp     short loc_68436F
