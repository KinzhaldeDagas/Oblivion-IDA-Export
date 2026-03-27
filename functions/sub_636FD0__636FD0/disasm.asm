0x636FD0: sub     esp, 28h
0x636FD3: push    ebx
0x636FD4: push    ebp
0x636FD5: push    esi
0x636FD6: push    edi
0x636FD7: mov     esi, ecx
0x636FD9: mov     ecx, ds:0B3A6B0h
0x636FDF: push    2
0x636FE1: call    sub_572EA0
0x636FE6: fcomp   dword ptr ds:0A2FAA8h
0x636FEC: fnstsw  ax
0x636FEE: test    ah, 41h
0x636FF1: jz      loc_63849E
0x636FF7: mov     eax, [esi]
0x636FF9: mov     edx, [eax+36Ch]
0x636FFF: mov     ecx, esi
0x637001: call    edx
0x637003: cmp     eax, 4
0x637006: jz      short loc_63701C
0x637008: mov     eax, [esi]
0x63700A: mov     edx, [eax+36Ch]
0x637010: mov     ecx, esi
0x637012: call    edx
0x637014: test    eax, eax
0x637016: jnz     loc_63849E
0x63701C: mov     eax, [esi]
0x63701E: mov     edx, [eax+184h]
0x637024: mov     ecx, esi
0x637026: call    edx
0x637028: mov     edi, [esp+38h+a2]
0x63702C: mov     ebp, eax
0x63702E: lea     ecx, [edi+44h]
0x637031: mov     [esp+38h+var_1C], ebp
0x637035: call    ExtraDataList__GetExtraPackage
0x63703A: mov     [esp+38h+a2], eax
0x63703E: mov     eax, [esi+2Ch]
0x637041: test    eax, eax
0x637043: jz      short loc_63704F
0x637045: mov     eax, [eax+8]
0x637048: shr     eax, 5
0x63704B: test    al, 1
0x63704D: jz      short loc_63705C
0x63704F: mov     edx, [esi]
0x637051: mov     eax, [edx+558h]
0x637057: push    edi
0x637058: mov     ecx, esi
0x63705A: call    eax
0x63705C: mov     ecx, [esi+2Ch]
0x63705F: test    ecx, ecx
0x637061: jz      loc_63848F
0x637067: mov     edx, [ecx+8]
0x63706A: mov     eax, edx
0x63706C: shr     eax, 5
0x63706F: and     al, 1
0x637071: jnz     loc_63847A
0x637077: shr     edx, 0Bh
0x63707A: test    dl, 1
0x63707D: jnz     loc_63847A
0x637083: mov     edx, [ecx]
0x637085: mov     eax, [edx+198h]
0x63708B: push    1; int
0x63708D: call    eax
0x63708F: test    al, al
0x637091: jz      short loc_6370D1
0x637093: cmp     dword ptr [esi+44h], 0
0x637097: jnz     short loc_6370D1
0x637099: mov     ecx, [esi+2Ch]
0x63709C: push    1
0x63709E: push    ecx
0x63709F: mov     ecx, ebp
0x6370A1: call    sub_566870
0x6370A6: mov     edx, [ebp+1Ch]
0x6370A9: shr     edx, 0Ch
0x6370AC: test    dl, 1
0x6370AF: jnz     loc_63849E
0x6370B5: mov     ecx, [esi+2Ch]
0x6370B8: mov     eax, [edi]
0x6370BA: mov     edx, [eax+2F8h]
0x6370C0: push    ecx
0x6370C1: mov     ecx, edi
0x6370C3: call    edx
0x6370C5: xor     al, al
0x6370C7: pop     edi
0x6370C8: pop     esi
0x6370C9: pop     ebp
0x6370CA: pop     ebx
0x6370CB: add     esp, 28h
0x6370CE: retn    8
0x6370D1: mov     eax, [esi+2Ch]
0x6370D4: cmp     eax, ds:0B333C4h
0x6370DA: jnz     loc_637165
0x6370E0: cmp     byte ptr [ebp+20h], 12h
0x6370E4: jnz     short loc_637165
0x6370E6: mov     edx, [esi]
0x6370E8: mov     eax, [edx+1CCh]
0x6370EE: mov     ecx, esi
0x6370F0: call    eax
0x6370F2: test    al, al
0x6370F4: jz      short loc_637165
0x6370F6: mov     ecx, ds:0B333C4h; this
0x6370FC: push    0; unk000
0x6370FE: push    edi; a2
0x6370FF: call    TesObjectREF_GetDistance
0x637104: fcomp   qword ptr ds:0A6E6F8h
0x63710A: fnstsw  ax
0x63710C: test    ah, 41h
0x63710F: jnz     short loc_637165
0x637111: mov     ecx, ds:0B333C4h
0x637117: call    sub_5E05B0
0x63711C: test    al, al
0x63711E: jz      short loc_637165
0x637120: mov     ebx, [esp+40h+var_4]
0x637124: push    edi
0x637125: lea     ecx, [esp+44h+var_14]
0x637129: push    ecx
0x63712A: mov     ecx, ebx
0x63712C: call    sub_566B30
0x637131: push    eax
0x637132: mov     ecx, edi
0x637134: call    sub_4D7E30
0x637139: fstp    [esp+40h+var_4]
0x63713D: test    ebx, ebx
0x63713F: jz      short loc_637165
0x637141: fld     dword ptr ds:0A57FB8h
0x637147: fcomp   [esp+40h+var_4]
0x63714B: fnstsw  ax
0x63714D: test    ah, 5
0x637150: jp      short loc_637165
0x637152: mov     ecx, edi; int
0x637154: call    sub_5EAE70
0x637159: xor     al, al
0x63715B: pop     edi
0x63715C: pop     esi
0x63715D: pop     ebp
0x63715E: pop     ebx
0x63715F: add     esp, 28h
0x637162: retn    8
0x637165: push    edi
0x637166: mov     ecx, ebp
0x637168: call    sub_566D00
0x63716D: mov     ebx, eax
0x63716F: test    ebx, ebx
0x637171: jz      short loc_63717E
0x637173: mov     ecx, ebx
0x637175: call    sub_4D74B0
0x63717A: test    al, al
0x63717C: jnz     short loc_63718F
0x63717E: mov     edx, [edi]
0x637180: mov     eax, [edx+18Ch]
0x637186: mov     ecx, edi
0x637188: call    eax
0x63718A: cmp     eax, 4
0x63718D: jnz     short loc_6371D2
0x63718F: mov     ecx, [esi+2Ch]
0x637192: mov     edx, [ecx]
0x637194: mov     eax, [edx+170h]
0x63719A: call    eax
0x63719C: cmp     eax, ds:0B35EB0h
0x6371A2: jz      short loc_6371B9
0x6371A4: mov     ecx, [esi+2Ch]
0x6371A7: mov     edx, [ecx]
0x6371A9: mov     eax, [edx+170h]
0x6371AF: call    eax
0x6371B1: cmp     eax, ds:0B35EACh
0x6371B7: jnz     short loc_6371D2
0x6371B9: mov     edx, [esi]
0x6371BB: mov     eax, [edx+484h]
0x6371C1: push    ebx
0x6371C2: mov     ecx, esi
0x6371C4: call    eax
0x6371C6: mov     al, 1
0x6371C8: pop     edi
0x6371C9: pop     esi
0x6371CA: pop     ebp
0x6371CB: pop     ebx
0x6371CC: add     esp, 28h
0x6371CF: retn    8
0x6371D2: cmp     byte ptr [ebp+20h], 9
0x6371D6: jnz     short loc_63723A
0x6371D8: push    edi
0x6371D9: lea     ecx, [esp+44h+var_14]
0x6371DD: push    ecx
0x6371DE: mov     ecx, ebp
0x6371E0: call    sub_566B30
0x6371E5: mov     ecx, [esi+2Ch]
0x6371E8: push    eax
0x6371E9: call    sub_4D7E30
0x6371EE: call    Double_To_SInt32
0x6371F3: mov     [esp+40h+var_4], eax
0x6371F7: fild    [esp+40h+var_4]
0x6371FB: mov     ecx, ebp
0x6371FD: fstp    [esp+40h+var_4]
0x637201: call    sub_566DB0
0x637206: test    eax, eax
0x637208: mov     [esp+40h+var_20], eax
0x63720C: fild    [esp+40h+var_20]
0x637210: jge     short loc_637218
0x637212: fadd    dword ptr ds:0A2FC78h
0x637218: fadd    qword ptr ds:0A3DDE0h
0x63721E: fld     [esp+40h+var_4]
0x637222: fcompp
0x637224: fnstsw  ax
0x637226: test    ah, 41h
0x637229: jnz     short loc_63723A
0x63722B: mov     edx, [esi]
0x63722D: mov     eax, [edx+188h]
0x637233: push    0FFFFFFFFh
0x637235: push    edi
0x637236: mov     ecx, esi
0x637238: call    eax
0x63723A: mov     ecx, [esi+2Ch]
0x63723D: test    ecx, ecx
0x63723F: jz      short loc_637253
0x637241: call    sub_4D74D0
0x637246: test    al, al
0x637248: jz      short loc_637253
0x63724A: mov     ecx, [esi+2Ch]
0x63724D: mov     [esp+48h+var_34], ecx
0x637251: jmp     short loc_63725B
0x637253: mov     [esp+48h+var_34], 0
0x63725B: mov     ecx, [esi+2Ch]; this
0x63725E: call    GetTeleportExtraData
0x637263: mov     ecx, [esi+2Ch]
0x637266: mov     [esp+48h+var_28], eax
0x63726A: mov     [esp+48h+var_C], 0
0x63726F: call    sub_4D74B0
0x637274: test    al, al
0x637276: jz      loc_637419
0x63727C: xor     ebx, ebx
0x63727E: cmp     [esi+120h], ebx
0x637284: jnz     short loc_637296
0x637286: mov     edx, [esi+2Ch]
0x637289: mov     [esi+120h], edx
0x63728F: mov     byte ptr [esi+124h], 7Fh
0x637296: mov     eax, [esi]
0x637298: mov     edx, [eax+36Ch]
0x63729E: mov     ecx, esi
0x6372A0: call    edx
0x6372A2: test    eax, eax
0x6372A4: jz      short loc_6372BB
0x6372A6: mov     eax, [edi]
0x6372A8: mov     edx, [eax+380h]
0x6372AE: mov     ecx, edi
0x6372B0: call    edx
0x6372B2: test    eax, eax
0x6372B4: jnz     short loc_6372BB
0x6372B6: mov     [esp+48h+var_C], 1
0x6372BB: cmp     [esi+120h], ebx
0x6372C1: jz      loc_637351
0x6372C7: mov     eax, [esi]
0x6372C9: mov     edx, [eax+36Ch]
0x6372CF: mov     ecx, esi
0x6372D1: call    edx
0x6372D3: test    eax, eax
0x6372D5: jnz     short loc_637351
0x6372D7: movzx   eax, byte ptr [esi+124h]
0x6372DE: mov     ecx, [esi+2Ch]
0x6372E1: push    eax
0x6372E2: call    sub_4D72C0
0x6372E7: test    al, al
0x6372E9: jz      short loc_637351
0x6372EB: cmp     byte ptr [esi+0D0h], 0
0x6372F2: jnz     short loc_637351
0x6372F4: fldz
0x6372F6: push    ecx
0x6372F7: lea     ebp, [esi+128h]
0x6372FD: fstp    [esp+4Ch+var_4C]; float
0x637300: mov     ecx, ebp
0x637302: mov     [esi+120h], ebx
0x637308: call    sub_6FAEE0
0x63730D: mov     byte ptr [esi+136h], 0
0x637314: mov     ecx, ds:0B3F9A8h
0x63731A: mov     [ebp+0], ecx
0x63731D: mov     edx, ds:0B3F9ACh
0x637323: mov     [ebp+4], edx
0x637326: mov     eax, ds:0B3F9B0h
0x63732B: mov     edx, [esi]
0x63732D: mov     [ebp+8], eax
0x637330: mov     eax, [edx+194h]
0x637336: push    edi
0x637337: mov     ecx, esi
0x637339: mov     byte ptr [esi+124h], 7Fh
0x637340: call    eax
0x637342: mov     [esi+2Ch], ebx
