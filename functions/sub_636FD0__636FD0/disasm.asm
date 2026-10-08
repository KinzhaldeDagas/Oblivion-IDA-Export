0x636FD0: sub     esp, 28h; BunkFix: shared movement/activation executor. Sleep action calls this through HighProcess vtable +0x51C with flag 0 after selecting a furniture ref; activation paths call ActivateRef once actor reaches/turns toward target.
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
0x637117: call    sub_5E05B0; Checks process movement flags low nibble via vfunc +0x2C0. Player input uses this alongside swimming/sneaking skill progression; useful as a broad movement-mode guard.
0x63711C: test    al, al
0x63711E: jz      short loc_637165
0x637120: mov     ebx, [esp+40h+var_4]
0x637124: push    edi
0x637125: lea     ecx, [esp+44h+var_14]
0x637129: push    ecx
0x63712A: mov     ecx, ebx
0x63712C: call    sub_566B30
0x637131: push    eax; pointXYZ
0x637132: mov     ecx, edi; this
0x637134: call    TESObjectREFR__GetDistanceToPoint; Returns the Euclidean 3D distance from TESObjectREFR position fields at +0x2C/+0x30/+0x34 to pointXYZ. The second social scan uses this result against its effective conversation radius.
0x637139: fstp    [esp+40h+var_4]
0x63713D: test    ebx, ebx
0x63713F: jz      short loc_637165
0x637141: fld     dword ptr ds:0A57FB8h
0x637147: fcomp   [esp+40h+var_4]
0x63714B: fnstsw  ax
0x63714D: test    ah, 5
0x637150: jp      short loc_637165
0x637152: mov     ecx, edi; int
0x637154: call    sub_5EAE70; 3DTheft: package reset/cleanup path. For no ExtraPackage case, clears process->editorPackage, resets editorPackProcedure to TRAVEL, then destroys detached dynamic package.
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
0x6371E5: mov     ecx, [esi+2Ch]; this
0x6371E8: push    eax; pointXYZ
0x6371E9: call    TESObjectREFR__GetDistanceToPoint; Returns the Euclidean 3D distance from TESObjectREFR position fields at +0x2C/+0x30/+0x34 to pointXYZ. The second social scan uses this result against its effective conversation radius.
0x6371EE: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
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
0x637241: call    TESObjectREFR_HasHorseCreatureBase; 0x4D74D0: Travel-horse target predicate decoded 2026-09-05: reference base pointer+0x1C must be nonnull; GetBaseForm virtual slot+0x170 yields typebyte0x24 CREA; creature byte+0x104 must equal4 (horse). XHRS resolver invokes this at0x426681 after target REFR cast. TESCS peer0x53F310 uses ref+0x28, vslot+0x19C, creature+0x138.
0x637246: test    al, al
0x637248: jz      short loc_637253
0x63724A: mov     ecx, [esi+2Ch]
0x63724D: mov     [esp+48h+var_34], ecx
0x637251: jmp     short loc_63725B
0x637253: mov     [esp+48h+var_34], 0
0x63725B: mov     ecx, [esi+2Ch]; this
0x63725E: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
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
0x637351: mov     edx, [edi]
0x637353: mov     eax, [edx+174h]
0x637359: mov     ecx, edi
0x63735B: call    eax
0x63735D: cmp     byte ptr [esi+124h], 7Fh
0x637364: mov     ecx, [eax]
0x637366: mov     [esp+48h+var_1C], ecx
0x63736A: mov     edx, [eax+4]
0x63736D: mov     [esp+48h+var_18], edx
0x637371: mov     eax, [eax+8]
0x637374: mov     [esp+48h+var_14], eax
0x637378: mov     [esp+48h+var_30], ebx
0x63737C: jnz     loc_637419
0x637382: mov     ecx, edi; this
0x637384: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x637389: mov     ecx, [esi+120h]; this
0x63738F: mov     ebx, eax
0x637391: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x637396: cmp     ebx, eax
0x637398: jnz     short loc_637419
0x63739A: lea     ecx, [esp+48h+var_30]
0x63739E: push    ecx
0x63739F: mov     ecx, [esi+2Ch]
0x6373A2: lea     ebp, [esi+128h]
0x6373A8: push    ebp
0x6373A9: push    1
0x6373AB: push    1
0x6373AD: lea     edx, [esp+58h+var_1C]
0x6373B1: push    edx
0x6373B2: call    sub_4DBAE0
0x6373B7: test    al, al
0x6373B9: jz      short loc_637434
0x6373BB: mov     ecx, [esi+2Ch]; this
0x6373BE: mov     ebx, [esi]
0x6373C0: mov     [esi+120h], ecx
0x6373C6: call    TESObjectREFR_GetWorldSpace
0x6373CB: mov     ecx, [esi+2Ch]; this
0x6373CE: push    eax
0x6373CF: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6373D4: mov     ecx, [ebp+0]
0x6373D7: mov     edx, [ebp+4]
0x6373DA: push    eax
0x6373DB: sub     esp, 0Ch
0x6373DE: mov     eax, esp
0x6373E0: mov     [eax], ecx
0x6373E2: mov     ecx, [ebp+8]
0x6373E5: mov     [eax+4], edx
0x6373E8: mov     edx, [ebx+3DCh]
0x6373EE: mov     [eax+8], ecx
0x6373F1: push    edi
0x6373F2: mov     ecx, esi
0x6373F4: call    edx
0x6373F6: test    al, al
0x6373F8: jz      loc_63849E
0x6373FE: mov     ecx, [esi+34h]
0x637401: test    ecx, ecx
0x637403: mov     al, byte ptr [esp+60h+self]
0x637407: mov     [esi+124h], al
0x63740D: jz      short loc_637419
0x63740F: mov     edx, [ecx]
0x637411: mov     eax, [edx+28h]
0x637414: push    edi
0x637415: call    eax
0x637417: fstp    st
0x637419: mov     ebp, [esp+64h+self]
0x63741D: cmp     byte ptr [ebp+20h], 8
0x637421: jnz     short loc_637485
0x637423: cmp     [esp+64h+var_24], 0
0x637428: jz      short loc_637485
0x63742A: mov     byte ptr [esp+64h+var_28], 1
0x63742F: jmp     loc_6374DF
0x637434: fldz
0x637436: push    ecx
0x637437: xor     ebx, ebx
0x637439: fstp    [esp+4Ch+var_4C]; float
0x63743C: mov     ecx, ebp
0x63743E: mov     [esi+120h], ebx
0x637444: call    sub_6FAEE0
0x637449: mov     [esi+136h], bl
0x63744F: mov     ecx, ds:0B3F9A8h
0x637455: mov     [ebp+0], ecx
0x637458: mov     edx, ds:0B3F9ACh
0x63745E: mov     [ebp+4], edx
0x637461: mov     eax, ds:0B3F9B0h
0x637466: mov     edx, [esi]
0x637468: mov     [ebp+8], eax
0x63746B: mov     eax, [edx+194h]
0x637471: push    edi
0x637472: mov     ecx, esi
0x637474: mov     byte ptr [esi+124h], 7Fh
0x63747B: call    eax
0x63747D: mov     [esi+2Ch], ebx
0x637480: jmp     loc_638488
0x637485: cmp     [esp+64h+self+4], 0
0x63748A: jz      short loc_6374CC
0x63748C: mov     edx, [edi]
0x63748E: mov     eax, [edx+174h]
0x637494: mov     ecx, edi
0x637496: call    eax
0x637498: push    eax
0x637499: lea     ecx, [esp+68h+var_38]
0x63749D: push    ecx
0x63749E: mov     ecx, [esi+2Ch]; this
0x6374A1: call    TESObjectREFR_GetLinkedTeleportMarkerPosition; Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
0x6374A6: mov     ecx, eax
0x6374A8: call    sub_4121A0
0x6374AD: lea     ecx, [esp+64h+var_38]
0x6374B1: call    NiPoint3_Length; Returns sqrt(x*x + y*y + z*z) for the three-float NiPoint3 value. Fallout's related NiPoint3 helpers corroborate the engine type; behavior verified here.
0x6374B6: fild    dword ptr ds:0B36B28h
0x6374BC: fcompp
0x6374BE: fnstsw  ax
0x6374C0: test    ah, 1
0x6374C3: jnz     short loc_6374DF
0x6374C5: mov     byte ptr [esp+64h+var_28], 1
0x6374CA: jmp     short loc_6374DF
0x6374CC: cmp     byte ptr [esp+64h+var_28], 0
0x6374D1: jnz     short loc_6374DF
0x6374D3: push    edi
0x6374D4: mov     ecx, ebp
0x6374D6: call    sub_5687D0
0x6374DB: mov     byte ptr [esp+64h+var_28], al
0x6374DF: mov     ecx, esi
0x6374E1: call    sub_64ADA0
0x6374E6: cmp     byte ptr [esp+64h+var_28], 0
0x6374EB: mov     bl, al
0x6374ED: mov     byte ptr [esp+64h+var_54+3], bl
0x6374F1: jnz     loc_63790E
0x6374F7: test    bl, bl
0x6374F9: jnz     loc_63790E
0x6374FF: mov     edx, [edi]
0x637501: mov     eax, [edx+380h]
0x637507: mov     ecx, edi
0x637509: call    eax
0x63750B: test    eax, eax
0x63750D: jnz     short loc_637549
0x63750F: mov     edx, [esi]
0x637511: mov     eax, [edx+36Ch]
0x637517: mov     ecx, esi
0x637519: call    eax
0x63751B: cmp     eax, 4
0x63751E: jz      short loc_637531
0x637520: mov     edx, [esi]
0x637522: mov     eax, [edx+36Ch]
0x637528: mov     ecx, esi
0x63752A: call    eax
0x63752C: cmp     eax, 9
0x63752F: jnz     short loc_637549
0x637531: mov     edx, [edi]
0x637533: mov     eax, [edx+320h]
0x637539: mov     ecx, edi
0x63753B: call    eax
0x63753D: mov     al, 1
0x63753F: pop     edi
0x637540: pop     esi
0x637541: pop     ebp
0x637542: pop     ebx
0x637543: add     esp, 28h
0x637546: retn    8
0x637549: mov     ecx, [esi+2Ch]
0x63754C: mov     edx, [ecx]
0x63754E: mov     eax, [edx+174h]
0x637554: lea     ebx, [esi+0D4h]
0x63755A: call    eax
0x63755C: push    eax
0x63755D: lea     ecx, [esp+68h+var_38]
0x637561: push    ecx
0x637562: mov     ecx, ebx
0x637564: call    sub_4121A0
0x637569: mov     ecx, eax
0x63756B: call    NiPoint3_Length; Returns sqrt(x*x + y*y + z*z) for the three-float NiPoint3 value. Fallout's related NiPoint3 helpers corroborate the engine type; behavior verified here.
0x637570: fstp    [esp+64h+var_28]
0x637574: cmp     byte ptr [esi+0D0h], 0
0x63757B: jnz     short loc_6375D7
0x63757D: mov     ecx, offset flt_B36A88
0x637582: call    GameSetting_GetSafeFloatPointer
0x637587: fld     dword ptr [eax]
0x637589: push    1
0x63758B: fstp    qword ptr [esp+68h+self+4]
0x63758F: push    edi
0x637590: mov     ecx, ebp
0x637592: call    sub_5677B0
0x637597: fmul    qword ptr ds:0A31C70h
0x63759D: fcomp   qword ptr [esp+64h+self+4]
0x6375A1: fnstsw  ax
0x6375A3: test    ah, 41h
0x6375A6: jnz     short loc_6375B6
0x6375A8: mov     ecx, offset flt_B36A88
0x6375AD: call    GameSetting_GetSafeFloatPointer
0x6375B2: fld     dword ptr [eax]
0x6375B4: jmp     short loc_6375C6
0x6375B6: push    1
0x6375B8: push    edi
0x6375B9: mov     ecx, ebp
0x6375BB: call    sub_5677B0
0x6375C0: fmul    qword ptr ds:0A31C70h
0x6375C6: fld     [esp+64h+var_28]
0x6375CA: fcompp
0x6375CC: fnstsw  ax
0x6375CE: test    ah, 41h
0x6375D1: jnz     loc_63780F
0x6375D7: mov     ecx, [esi+2Ch]; this
0x6375DA: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x6375DF: test    eax, eax
0x6375E1: mov     ecx, [esi+2Ch]; this
0x6375E4: jz      short loc_637634
0x6375E6: mov     ebx, [esi]
0x6375E8: call    TESObjectREFR_GetLinkedTeleportMarkerPosition; Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
0x6375ED: mov     ecx, [esi+2Ch]; this
0x6375F0: mov     ebp, eax
0x6375F2: call    TESObjectREFR_GetWorldSpace
0x6375F7: mov     ecx, [esi+2Ch]; this
0x6375FA: push    eax
0x6375FB: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x637600: mov     edx, [ebp+0]
0x637603: mov     ecx, [ebp+4]
0x637606: push    eax
0x637607: sub     esp, 0Ch
0x63760A: mov     eax, esp
0x63760C: mov     [eax], edx
0x63760E: mov     edx, [ebp+8]
0x637611: mov     [eax+4], ecx
0x637614: mov     [eax+8], edx
0x637617: mov     eax, [ebx+3DCh]
0x63761D: push    edi
0x63761E: mov     ecx, esi
0x637620: call    eax
0x637622: test    al, al
0x637624: jnz     loc_6377E4
0x63762A: pop     edi
0x63762B: pop     esi
0x63762C: pop     ebp
0x63762D: pop     ebx
0x63762E: add     esp, 28h
0x637631: retn    8
0x637634: call    sub_4D74B0
0x637639: test    al, al
0x63763B: jz      loc_637740
0x637641: mov     edx, [edi]
0x637643: mov     eax, [edx+174h]
0x637649: mov     ecx, edi
0x63764B: call    eax
0x63764D: mov     ecx, [eax]
0x63764F: mov     [esp+64h+var_38], ecx
0x637653: mov     edx, [eax+4]
0x637656: lea     ecx, [esp+64h+var_28]
0x63765A: push    ecx
0x63765B: mov     ecx, [esi+2Ch]
0x63765E: lea     ebp, [esi+128h]
0x637664: push    ebp
0x637665: push    1
0x637667: mov     [esp+70h+var_34], edx
0x63766B: mov     eax, [eax+8]
0x63766E: push    1
0x637670: lea     edx, [esp+74h+var_38]
0x637674: push    edx
0x637675: mov     [esp+78h+var_30], eax
0x637679: mov     [esp+78h+var_28], 0
0x637681: call    sub_4DBAE0
0x637686: test    al, al
0x637688: jz      short loc_6376EB
0x63768A: mov     ecx, [esi+2Ch]; this
0x63768D: mov     ebx, [esi]
0x63768F: call    TESObjectREFR_GetWorldSpace
0x637694: mov     ecx, [esi+2Ch]; this
0x637697: push    eax
0x637698: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x63769D: mov     ecx, [ebp+0]
0x6376A0: mov     edx, [ebp+4]
0x6376A3: push    eax
0x6376A4: sub     esp, 0Ch
0x6376A7: mov     eax, esp
0x6376A9: mov     [eax], ecx
0x6376AB: mov     ecx, [ebp+8]
0x6376AE: mov     [eax+4], edx
0x6376B1: mov     edx, [ebx+3DCh]
0x6376B7: mov     [eax+8], ecx
0x6376BA: push    edi
0x6376BB: mov     ecx, esi
0x6376BD: call    edx
0x6376BF: test    al, al
0x6376C1: jz      loc_63849E
0x6376C7: mov     ecx, [esi+34h]
0x6376CA: test    ecx, ecx
0x6376CC: mov     al, [esp+7Ch+var_40]
0x6376D0: mov     [esi+124h], al
0x6376D6: jz      loc_6377E4
0x6376DC: mov     edx, [ecx]
0x6376DE: mov     eax, [edx+28h]
0x6376E1: push    edi
0x6376E2: call    eax
0x6376E4: fstp    st
0x6376E6: jmp     loc_6377E4
0x6376EB: fldz
0x6376ED: push    ecx
0x6376EE: xor     ebx, ebx
0x6376F0: fstp    [esp+68h+var_68]; float
0x6376F3: mov     ecx, ebp
0x6376F5: mov     [esi+120h], ebx
0x6376FB: call    sub_6FAEE0
0x637700: mov     [esi+136h], bl
0x637706: mov     ecx, ds:0B3F9A8h
0x63770C: mov     [ebp+0], ecx
0x63770F: mov     edx, ds:0B3F9ACh
0x637715: mov     [ebp+4], edx
0x637718: mov     eax, ds:0B3F9B0h
0x63771D: mov     edx, [esi]
0x63771F: mov     [ebp+8], eax
0x637722: mov     eax, [edx+194h]
0x637728: push    edi
0x637729: mov     ecx, esi
0x63772B: mov     byte ptr [esi+124h], 7Fh
0x637732: call    eax
0x637734: cmp     byte ptr [esp+68h+var_28], bl
0x637738: mov     [esi+2Ch], ebx
0x63773B: jmp     loc_63848D
0x637740: mov     ecx, [esp+64h+var_50]
0x637744: test    ecx, ecx
0x637746: jz      short loc_637798
0x637748: lea     edx, [esp+64h+var_38]
0x63774C: push    edx
0x63774D: call    sub_625290
0x637752: mov     ecx, [esi+2Ch]; this
0x637755: mov     ebx, [esi]
0x637757: call    TESObjectREFR_GetWorldSpace
0x63775C: mov     ecx, [esi+2Ch]; this
0x63775F: push    eax
0x637760: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x637765: mov     ecx, [esp+68h+var_38]
0x637769: mov     edx, [esp+68h+var_34]
0x63776D: push    eax
0x63776E: sub     esp, 0Ch
0x637771: mov     eax, esp
0x637773: mov     [eax], ecx
0x637775: mov     ecx, [esp+78h+var_30]
0x637779: mov     [eax+4], edx
0x63777C: mov     edx, [ebx+3DCh]
0x637782: mov     [eax+8], ecx
0x637785: push    edi
0x637786: mov     ecx, esi
0x637788: call    edx
0x63778A: test    al, al
0x63778C: jnz     short loc_6377E4
0x63778E: pop     edi
0x63778F: pop     esi
0x637790: pop     ebp
0x637791: pop     ebx
0x637792: add     esp, 28h
0x637795: retn    8
0x637798: mov     ecx, [esi+2Ch]
0x63779B: mov     eax, [ecx]
0x63779D: mov     edx, [eax+174h]
0x6377A3: mov     ebx, [esi]
0x6377A5: call    edx
0x6377A7: mov     ecx, [esi+2Ch]; this
0x6377AA: mov     ebp, eax
0x6377AC: call    TESObjectREFR_GetWorldSpace
0x6377B1: mov     ecx, [esi+2Ch]; this
0x6377B4: push    eax
0x6377B5: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6377BA: mov     ecx, [ebp+0]
0x6377BD: mov     edx, [ebp+4]
0x6377C0: push    eax
0x6377C1: sub     esp, 0Ch
0x6377C4: mov     eax, esp
0x6377C6: mov     [eax], ecx
0x6377C8: mov     ecx, [ebp+8]
0x6377CB: mov     [eax+4], edx
0x6377CE: mov     edx, [ebx+3DCh]
0x6377D4: mov     [eax+8], ecx
0x6377D7: push    edi
0x6377D8: mov     ecx, esi
0x6377DA: call    edx
0x6377DC: test    al, al
0x6377DE: jz      loc_63849E
0x6377E4: mov     ecx, [esi+2Ch]
0x6377E7: mov     eax, [ecx]
0x6377E9: mov     edx, [eax+174h]
0x6377EF: call    edx
0x6377F1: mov     ecx, [eax]
0x6377F3: mov     ebp, [esp+7Ch+var_60]
0x6377F7: mov     [esi+0D4h], ecx
0x6377FD: mov     edx, [eax+4]
0x637800: mov     [esi+0D8h], edx
0x637806: mov     eax, [eax+8]
0x637809: mov     [esi+0DCh], eax
0x63780F: cmp     byte ptr [esi+0D0h], 0
0x637816: jnz     loc_63849E
0x63781C: cmp     byte ptr [edi+0C8h], 0
0x637823: mov     ebx, 101h
0x637828: jnz     short loc_63785A
0x63782A: mov     ecx, [ebp+1Ch]
0x63782D: shr     ecx, 0Dh
0x637830: test    cl, 1
0x637833: jnz     short loc_63785A
0x637835: mov     edx, [edi]
0x637837: mov     eax, [edx+334h]
0x63783D: push    1
0x63783F: mov     ecx, edi
0x637841: call    eax
0x637843: test    al, al
0x637845: jnz     short loc_63785A
0x637847: cmp     byte ptr [ebp+20h], 0Fh
0x63784B: jz      short loc_63785A
0x63784D: mov     eax, [esi+8]
0x637850: test    eax, eax
0x637852: jz      short loc_63785F
0x637854: cmp     byte ptr [eax+20h], 0Ch
0x637858: jnz     short loc_63785F
0x63785A: mov     ebx, 201h
0x63785F: cmp     byte ptr [edi+0C9h], 0
0x637866: jz      short loc_63787B
0x637868: mov     edx, [esi]
0x63786A: mov     eax, [edx+2C4h]
0x637870: push    1
0x637872: push    400h
0x637877: mov     ecx, esi
0x637879: call    eax
0x63787B: mov     edx, [esi]
0x63787D: mov     eax, [edx+238h]
0x637883: push    ebx
0x637884: push    edi
0x637885: mov     ecx, esi
0x637887: call    eax
0x637889: mov     ecx, [esi+2Ch]
0x63788C: mov     edx, [ecx]
0x63788E: mov     eax, [edx+174h]
0x637894: call    eax
0x637896: mov     ecx, [eax]
0x637898: mov     [esp+90h+var_70], ecx
0x63789C: mov     edx, [eax+4]
0x63789F: mov     ecx, [esp+90h+var_7C]
0x6378A3: test    ecx, ecx
0x6378A5: mov     [esp+90h+var_6C], edx
0x6378A9: mov     eax, [eax+8]
0x6378AC: mov     [esp+90h+var_68], eax
0x6378B0: jz      short loc_6378D0
0x6378B2: lea     edx, [esp+90h+var_64]
0x6378B6: push    edx
0x6378B7: call    sub_625290
0x6378BC: mov     ecx, [eax]
0x6378BE: mov     [esp+90h+var_70], ecx
0x6378C2: mov     edx, [eax+4]
0x6378C5: mov     [esp+90h+var_6C], edx
0x6378C9: mov     eax, [eax+8]
0x6378CC: mov     [esp+90h+var_68], eax
0x6378D0: mov     ebx, [esi]
0x6378D2: push    2
0x6378D4: push    edi
0x6378D5: mov     ecx, ebp
0x6378D7: call    sub_5677B0
0x6378DC: push    ecx
0x6378DD: mov     ecx, [esi+2Ch]; this
0x6378E0: fstp    [esp+94h+var_94]
0x6378E3: call    TESObjectREFR_GetWorldSpace
0x6378E8: mov     ecx, [esi+2Ch]; this
0x6378EB: push    eax
0x6378EC: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6378F1: mov     edx, [ebx+414h]
0x6378F7: push    eax
0x6378F8: lea     ecx, [esp+9Ch+var_70]
0x6378FC: push    ecx
0x6378FD: push    edi
0x6378FE: mov     ecx, esi
0x637900: call    edx
0x637902: xor     al, al
0x637904: pop     edi
0x637905: pop     esi
0x637906: pop     ebp
0x637907: pop     ebx
0x637908: add     esp, 28h
0x63790B: retn    8
0x63790E: cmp     byte ptr [esi+0D0h], 0
0x637915: jnz     short loc_637924
0x637917: mov     eax, [esi]
0x637919: mov     edx, [eax+194h]
0x63791F: push    edi
0x637920: mov     ecx, esi
0x637922: call    edx
0x637924: mov     ecx, [esi+2Ch]
0x637927: mov     eax, [ecx]
0x637929: mov     edx, [eax+170h]
0x63792F: call    edx
0x637931: cmp     eax, ds:0B35EB0h
0x637937: jnz     loc_637A1B
0x63793D: mov     ecx, esi
0x63793F: call    sub_64ADA0
0x637944: test    al, al
0x637946: jnz     loc_637A1B
0x63794C: mov     eax, [esi+2Ch]
0x63794F: fld     dword ptr [eax+28h]
0x637952: fstp    [esp+68h+var_2C]
0x637956: fldz
0x637958: fld     [esp+68h+var_2C]
0x63795C: fcom    st(1)
0x63795E: fnstsw  ax
0x637960: fstp    st(1)
0x637962: test    ah, 5
0x637965: fld     qword ptr ds:0A3D5B0h
0x63796B: jp      short loc_63798A
0x63796D: call    unknown_libname_14
0x637972: fstp    [esp+68h+var_2C]
0x637976: fld     [esp+68h+var_2C]
0x63797A: fadd    qword ptr ds:0A3D5B0h
0x637980: fstp    [esp+68h+var_2C]
0x637984: fld     [esp+68h+var_2C]
0x637988: jmp     short loc_6379AC
0x63798A: fcom    st(1)
0x63798C: fnstsw  ax
0x63798E: test    ah, 41h
0x637991: jp      short loc_6379AA
0x637993: call    unknown_libname_14
0x637998: fstp    [esp+68h+var_2C]
0x63799C: fld     [esp+68h+var_2C]
0x6379A0: fstp    [esp+68h+var_2C]
0x6379A4: fld     [esp+68h+var_2C]
0x6379A8: jmp     short loc_6379AC
0x6379AA: fstp    st
0x6379AC: fldz
0x6379AE: lea     ecx, [esp+68h+self]
0x6379B2: push    ecx; int
0x6379B3: fstp    [esp+6Ch+self]
0x6379B7: push    ecx
0x6379B8: fstp    [esp+70h+var_70]; float
0x6379BB: push    edi; int
0x6379BC: call    sub_683D80
0x6379C1: fstp    [esp+74h+var_4C]
0x6379C5: fld     [esp+74h+var_4C]
0x6379C9: add     esp, 0Ch
0x6379CC: fabs
0x6379CE: fstp    [esp+68h+var_4C]
0x6379D2: fld     [esp+68h+var_4C]
0x6379D6: fild    dword ptr ds:0B36C18h
0x6379DC: fmul    qword ptr ds:0A31C78h
0x6379E2: fstp    [esp+68h+var_4C]
0x6379E6: fld     [esp+68h+var_4C]
0x6379EA: fcompp
0x6379EC: fnstsw  ax
0x6379EE: test    ah, 5
0x6379F1: jp      short loc_637A12
0x6379F3: fld     [esp+68h+var_2C]
0x6379F7: push    1; char
0x6379F9: push    ecx
0x6379FA: fstp    [esp+70h+var_70]; float
0x6379FD: push    edi; Concurrency::details::SchedulerBase *
0x6379FE: call    sub_685530
0x637A03: add     esp, 0Ch
0x637A06: mov     al, 1
0x637A08: pop     edi
0x637A09: pop     esi
0x637A0A: pop     ebp
0x637A0B: pop     ebx
0x637A0C: add     esp, 28h
0x637A0F: retn    8
0x637A12: push    30h ; '0'
0x637A14: mov     ecx, edi
0x637A16: call    sub_5E05F0; 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
0x637A1B: mov     ecx, [esi+2Ch]
0x637A1E: cmp     ecx, edi
0x637A20: jz      loc_637B3D
0x637A26: mov     edx, [ecx]
0x637A28: mov     eax, [edx+190h]
0x637A2E: call    eax
0x637A30: test    al, al
0x637A32: jz      loc_637B3D
0x637A38: mov     edx, [edi]
0x637A3A: mov     eax, [edx+18Ch]
0x637A40: mov     ecx, edi
0x637A42: call    eax
0x637A44: cmp     eax, 4
0x637A47: jz      loc_637B3D
0x637A4D: mov     edx, [edi]
0x637A4F: mov     eax, [edx+380h]
0x637A55: mov     ecx, edi
0x637A57: call    eax
0x637A59: test    eax, eax
0x637A5B: jnz     short loc_637A72
0x637A5D: mov     edx, [esi]
0x637A5F: mov     eax, [edx+36Ch]
0x637A65: mov     ecx, esi
0x637A67: call    eax
0x637A69: cmp     eax, 9
0x637A6C: jz      loc_637531
0x637A72: mov     edx, [edi]
0x637A74: mov     eax, [edx+174h]
0x637A7A: mov     ebx, [esi+2Ch]
0x637A7D: mov     ecx, edi
0x637A7F: call    eax
0x637A81: mov     edx, [ebx]
0x637A83: push    eax
0x637A84: mov     eax, [edx+174h]
0x637A8A: lea     ecx, [esp+6Ch+var_3C]
0x637A8E: push    ecx
0x637A8F: mov     ecx, ebx
0x637A91: call    eax
0x637A93: mov     ecx, eax
0x637A95: call    sub_4121A0
0x637A9A: lea     ecx, [esp+68h+var_3C]
0x637A9E: push    ecx
0x637A9F: call    Vector3_CalculateHeadingRadiansXY; Returns heading in the XY plane from a normalized vector, normalized to [0,2pi).
0x637AA4: fstp    [esp+6Ch+var_4C]
0x637AA8: fldz
0x637AAA: add     esp, 4
0x637AAD: lea     edx, [esp+68h+self]
0x637AB1: fstp    [esp+68h+self]
0x637AB5: fld     [esp+68h+var_4C]
0x637AB9: push    edx; int
0x637ABA: push    ecx
0x637ABB: fstp    [esp+70h+var_70]; float
0x637ABE: push    edi; int
0x637ABF: call    sub_683D80
0x637AC4: fstp    [esp+74h+var_50]
0x637AC8: fild    dword ptr ds:0B36C10h
0x637ACE: add     esp, 0Ch
0x637AD1: mov     ecx, edi
0x637AD3: fmul    qword ptr ds:0A31C78h
0x637AD9: fstp    [esp+68h+var_2C]
0x637ADD: call    sub_5E0590
0x637AE2: test    al, al
0x637AE4: jz      short loc_637AF6
0x637AE6: fild    dword ptr ds:0B36C18h
0x637AEC: fmul    qword ptr ds:0A31C78h
0x637AF2: fstp    [esp+68h+var_2C]
0x637AF6: fld     [esp+68h+var_50]
0x637AFA: fabs
0x637AFC: fstp    [esp+68h+var_50]
0x637B00: fld     [esp+68h+var_50]
0x637B04: fld     [esp+68h+var_2C]
0x637B08: fcompp
0x637B0A: fnstsw  ax
0x637B0C: test    ah, 5
0x637B0F: jp      short loc_637B30
0x637B11: fld     [esp+68h+var_4C]
0x637B15: push    1; char
0x637B17: push    ecx
0x637B18: fstp    [esp+70h+var_70]; float
0x637B1B: push    edi; Concurrency::details::SchedulerBase *
0x637B1C: call    sub_685530
0x637B21: add     esp, 0Ch
0x637B24: mov     al, 1
0x637B26: pop     edi
0x637B27: pop     esi
0x637B28: pop     ebp
0x637B29: pop     ebx
0x637B2A: add     esp, 28h
0x637B2D: retn    8
0x637B30: push    30h ; '0'
0x637B32: mov     ecx, edi
0x637B34: call    sub_5E05F0; 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
0x637B39: mov     bl, [esp+68h+var_55]
0x637B3D: mov     eax, [esi+8]
0x637B40: test    eax, eax
0x637B42: jz      short loc_637B59
0x637B44: cmp     byte ptr [eax+20h], 12h
0x637B48: jnz     short loc_637B59
0x637B4A: mov     ecx, esi
0x637B4C: call    sub_64ADA0
0x637B51: test    al, al
0x637B53: jnz     loc_637E9C
0x637B59: cmp     byte ptr [esp+68h+var_28], 0
0x637B5E: jz      loc_6381FB
0x637B64: mov     ecx, edi; this
0x637B66: call    Actor_IsNPC
0x637B6B: test    al, al
0x637B6D: jz      short loc_637BA2
0x637B6F: mov     eax, [esi+2Ch]
0x637B72: test    eax, eax
0x637B74: jz      short loc_637BA2
0x637B76: cmp     eax, ds:0B333C4h
0x637B7C: jnz     short loc_637BA2
0x637B7E: test    bl, bl
0x637B80: jnz     loc_637F41
0x637B86: mov     ecx, [eax+58h]
0x637B89: mov     edx, [ecx]
0x637B8B: push    eax
0x637B8C: mov     eax, [edx+2E0h]
0x637B92: call    eax
0x637B94: test    al, al
0x637B96: jnz     short loc_637BAA
0x637B98: pop     edi
0x637B99: pop     esi
0x637B9A: pop     ebp
0x637B9B: pop     ebx
0x637B9C: add     esp, 28h
0x637B9F: retn    8
0x637BA2: test    bl, bl
0x637BA4: jnz     loc_637F41
0x637BAA: cmp     dword ptr [esi+44h], 0
0x637BAE: jz      loc_637C93
0x637BB4: mov     edx, [edi]
0x637BB6: mov     eax, [edx+164h]
0x637BBC: mov     ecx, edi
0x637BBE: call    eax
0x637BC0: cmp     byte ptr [esi+25Dh], 0
0x637BC7: mov     ebp, eax
0x637BC9: jnz     short loc_637C12
0x637BCB: mov     edx, [esi]
0x637BCD: mov     eax, [edx+594h]
0x637BD3: push    edi
0x637BD4: mov     ecx, esi
0x637BD6: mov     byte ptr [esi+25Dh], 1
0x637BDD: call    eax
0x637BDF: mov     edx, [esi]
0x637BE1: mov     eax, [esi+2Ch]
0x637BE4: mov     edx, [edx+484h]
0x637BEA: push    eax
0x637BEB: mov     ecx, esi
0x637BED: call    edx
0x637BEF: mov     ecx, [esi+2Ch]
0x637BF2: mov     eax, [ecx]
0x637BF4: mov     edx, [eax+170h]
0x637BFA: push    ecx
0x637BFB: call    edx
0x637BFD: push    eax
0x637BFE: push    edi
0x637BFF: mov     ecx, esi
0x637C01: call    sub_6286E0
0x637C06: xor     al, al
0x637C08: pop     edi
0x637C09: pop     esi
0x637C0A: pop     ebp
0x637C0B: pop     ebx
0x637C0C: add     esp, 28h
0x637C0F: retn    8
0x637C12: test    ebp, ebp
0x637C14: jz      short loc_637C4D
0x637C16: mov     ecx, ebp
0x637C18: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x637C1D: test    al, al
0x637C1F: jz      short loc_637C4D
0x637C21: mov     eax, [esi+44h]
0x637C24: mov     ecx, [eax+10h]
0x637C27: mov     edx, [eax+4]
0x637C2A: push    ecx
0x637C2B: mov     ecx, [eax]
0x637C2D: push    edx
0x637C2E: push    1
0x637C30: push    edi
0x637C31: call    ActivateRef
0x637C36: mov     eax, [esi]
0x637C38: mov     edx, [eax+49Ch]
0x637C3E: add     dword ptr [esi+38h], 0FFFFFFFFh
0x637C42: mov     ecx, esi
0x637C44: mov     byte ptr [esi+25Dh], 0
0x637C4B: call    edx
0x637C4D: cmp     dword ptr [esi+38h], 0
0x637C51: jg      loc_638438
0x637C57: test    ebp, ebp
0x637C59: jz      short loc_637C6A
0x637C5B: mov     ecx, ebp
0x637C5D: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x637C62: test    al, al
0x637C64: jz      loc_638438
0x637C6A: mov     eax, [esi]
0x637C6C: mov     edx, [eax+188h]
0x637C72: push    1
0x637C74: push    edi
0x637C75: mov     ecx, esi
0x637C77: call    edx
0x637C79: mov     eax, [esi]
0x637C7B: mov     edx, [eax+394h]
0x637C81: push    1
0x637C83: mov     ecx, esi
0x637C85: call    edx
0x637C87: mov     byte ptr [esi+25Dh], 0
0x637C8E: jmp     loc_638438
0x637C93: mov     ecx, [esi+2Ch]
0x637C96: mov     eax, [ecx]
0x637C98: mov     edx, [eax+190h]
0x637C9E: call    edx
0x637CA0: test    al, al
0x637CA2: jnz     loc_637D7C
0x637CA8: mov     ecx, [esi+2Ch]
0x637CAB: call    sub_4D74B0
0x637CB0: test    al, al
0x637CB2: jnz     loc_637D7C
0x637CB8: mov     eax, [edi]
0x637CBA: mov     edx, [eax+164h]
0x637CC0: mov     ecx, edi
0x637CC2: call    edx
0x637CC4: cmp     byte ptr [esi+25Dh], 0
0x637CCB: jnz     short loc_637D14
0x637CCD: mov     eax, [esi]
0x637CCF: mov     edx, [eax+594h]
0x637CD5: push    edi
0x637CD6: mov     ecx, esi
0x637CD8: mov     byte ptr [esi+25Dh], 1
0x637CDF: call    edx
0x637CE1: mov     ecx, [esi+2Ch]
0x637CE4: mov     eax, [esi]
0x637CE6: mov     edx, [eax+484h]
0x637CEC: push    ecx
0x637CED: mov     ecx, esi
0x637CEF: call    edx
0x637CF1: mov     ecx, [esi+2Ch]
0x637CF4: mov     eax, [ecx]
0x637CF6: mov     edx, [eax+170h]
0x637CFC: push    ecx
0x637CFD: call    edx
0x637CFF: push    eax
0x637D00: push    edi
0x637D01: mov     ecx, esi
0x637D03: call    sub_6286E0
0x637D08: xor     al, al
0x637D0A: pop     edi
0x637D0B: pop     esi
0x637D0C: pop     ebp
0x637D0D: pop     ebx
0x637D0E: add     esp, 28h
0x637D11: retn    8
0x637D14: test    eax, eax
0x637D16: jz      short loc_637D27
0x637D18: mov     ecx, eax
0x637D1A: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x637D1F: test    al, al
0x637D21: jz      loc_638438
0x637D27: mov     eax, [esi]
0x637D29: mov     edx, [eax+188h]
0x637D2F: push    1
0x637D31: push    edi
0x637D32: mov     ecx, esi
0x637D34: call    edx
0x637D36: mov     eax, [esi+44h]
0x637D39: test    eax, eax
0x637D3B: jz      short loc_637D47
0x637D3D: mov     ecx, [eax+10h]
0x637D40: mov     edx, [eax+4]
0x637D43: push    ecx
0x637D44: push    edx
0x637D45: jmp     short loc_637D4B
0x637D47: push    1
0x637D49: push    0
0x637D4B: mov     ecx, [esi+2Ch]
0x637D4E: push    1
0x637D50: push    edi
0x637D51: call    ActivateRef; BunkFix: ActivateRef call from shared movement/activation executor. Target is the furniture reference in process target field, not an individual bunk marker.
0x637D56: mov     eax, [esi]
0x637D58: mov     edx, [eax+394h]
0x637D5E: push    1
0x637D60: mov     ecx, esi
0x637D62: call    edx
0x637D64: mov     eax, [esi]
0x637D66: mov     edx, [eax+49Ch]
0x637D6C: mov     ecx, esi
0x637D6E: call    edx
0x637D70: mov     byte ptr [esi+25Dh], 0
0x637D77: jmp     loc_638438
0x637D7C: mov     ecx, [esi+2Ch]
0x637D7F: call    sub_4D74B0
0x637D84: test    al, al
0x637D86: jz      loc_637E14
0x637D8C: mov     eax, [esi]
0x637D8E: mov     edx, [eax+36Ch]
0x637D94: mov     ecx, esi
0x637D96: call    edx
0x637D98: cmp     eax, 4
0x637D9B: jz      short loc_637DEB
0x637D9D: mov     eax, [esi]
0x637D9F: mov     edx, [eax+36Ch]
0x637DA5: mov     ecx, esi
0x637DA7: call    edx
0x637DA9: cmp     eax, 9
0x637DAC: jz      short loc_637DEB
0x637DAE: mov     eax, [esi]
0x637DB0: mov     edx, [eax+1B4h]
0x637DB6: push    edi
0x637DB7: mov     ecx, esi
0x637DB9: call    edx
0x637DBB: test    al, al
0x637DBD: jnz     loc_638438
0x637DC3: mov     eax, [esi]
0x637DC5: mov     edx, [eax+188h]
0x637DCB: push    1
0x637DCD: push    edi
0x637DCE: mov     ecx, esi
0x637DD0: call    edx
0x637DD2: mov     eax, [esi]
0x637DD4: mov     edx, [eax+194h]
0x637DDA: push    edi
0x637DDB: mov     ecx, esi
0x637DDD: call    edx
0x637DDF: mov     al, 1
0x637DE1: pop     edi
0x637DE2: pop     esi
0x637DE3: pop     ebp
0x637DE4: pop     ebx
0x637DE5: add     esp, 28h
0x637DE8: retn    8
0x637DEB: mov     eax, [esi]
0x637DED: mov     edx, [eax+188h]
0x637DF3: push    1
0x637DF5: push    edi
0x637DF6: mov     ecx, esi
0x637DF8: call    edx
0x637DFA: mov     eax, [esi]
0x637DFC: mov     edx, [eax+394h]
0x637E02: push    1
0x637E04: mov     ecx, esi
0x637E06: call    edx
0x637E08: mov     al, 1
0x637E0A: pop     edi
0x637E0B: pop     esi
0x637E0C: pop     ebp
0x637E0D: pop     ebx
0x637E0E: add     esp, 28h
0x637E11: retn    8
0x637E14: mov     ecx, 0B332E0h
0x637E19: call    TimeGlobals_GetGameHour
0x637E1E: fstp    dword ptr [esi+198h]
0x637E24: mov     ecx, edi; this
0x637E26: call    Actor_IsNPC
0x637E2B: test    al, al
0x637E2D: jnz     short loc_637E56
0x637E2F: mov     ecx, [esi+2Ch]; this
0x637E32: call    Actor_IsNPC
0x637E37: test    al, al
0x637E39: jz      short loc_637E56
0x637E3B: mov     ecx, [esi+2Ch]
0x637E3E: push    1
0x637E40: push    0
0x637E42: push    0
0x637E44: push    edi
0x637E45: call    ActivateRef
0x637E4A: mov     al, 1
0x637E4C: pop     edi
0x637E4D: pop     esi
0x637E4E: pop     ebp
0x637E4F: pop     ebx
0x637E50: add     esp, 28h
0x637E53: retn    8
0x637E56: mov     ecx, [esi+2Ch]
0x637E59: mov     eax, [ecx]
0x637E5B: mov     edx, [eax+18Ch]
0x637E61: call    edx
0x637E63: test    eax, eax
0x637E65: jz      short loc_637EB4
0x637E67: mov     ecx, [esi+2Ch]
0x637E6A: mov     eax, [ecx]
0x637E6C: mov     edx, [eax+18Ch]
0x637E72: call    edx
0x637E74: cmp     eax, 4
0x637E77: jz      short loc_637EB4
0x637E79: mov     ecx, [esi+2Ch]
0x637E7C: mov     eax, [ecx]
0x637E7E: mov     edx, [eax+18Ch]
0x637E84: call    edx
0x637E86: cmp     eax, 9
0x637E89: jz      short loc_637EB4
0x637E8B: mov     esi, [esi+2Ch]
0x637E8E: mov     ecx, [esi+58h]
0x637E91: mov     eax, [ecx]
0x637E93: mov     edx, [eax+1B0h]
0x637E99: push    esi
0x637E9A: call    edx
0x637E9C: mov     eax, [edi]
0x637E9E: mov     edx, [eax+30Ch]
0x637EA4: mov     ecx, edi
0x637EA6: call    edx
0x637EA8: xor     al, al
0x637EAA: pop     edi
0x637EAB: pop     esi
0x637EAC: pop     ebp
0x637EAD: pop     ebx
0x637EAE: add     esp, 28h
0x637EB1: retn    8
0x637EB4: cmp     dword ptr [ebp+18h], 16h
0x637EB8: jnz     short loc_637EF5
0x637EBA: mov     ecx, ebp
0x637EBC: call    sub_565DF0; RadiantAI: package flag helper used by chooser skip logic; tests TESPackage flag 0x0400.
0x637EC1: test    al, al
0x637EC3: jz      short loc_637EF5
0x637EC5: lea     eax, [ebp+2Ch]
0x637EC8: test    eax, eax
0x637ECA: jz      short loc_637EF5
0x637ECC: cmp     dword ptr [ebp+30h], 0
0x637ED0: jnz     short loc_637EF5
0x637ED2: mov     edx, [esi]
0x637ED4: mov     eax, [edx+188h]
0x637EDA: push    2
0x637EDC: push    edi
0x637EDD: mov     ecx, esi
0x637EDF: call    eax
0x637EE1: mov     ecx, 0B332E0h
0x637EE6: call    TimeGlobals_GetGameDay
0x637EEB: lea     ecx, [edi+44h]
0x637EEE: push    eax
0x637EEF: push    ebp
0x637EF0: call    ExtraDataList_SetRunOnceExtraPackage; Ensures ExtraRunOncePacks exists, then adds or updates a package record with the supplied package and state byte.
0x637EF5: mov     ecx, ebp; self
0x637EF7: call    TESPackage_IsRuntimePackage; 3DTheft: returns packageFlags bit 0x800 (runtime/dynamic package marker).
0x637EFC: test    al, al
0x637EFE: jnz     short loc_637F26
0x637F00: mov     ecx, [esi+2Ch]
0x637F03: mov     edx, [ecx]
0x637F05: mov     eax, [edx+198h]
0x637F0B: push    1
0x637F0D: call    eax
0x637F0F: test    al, al
0x637F11: jz      short loc_637F26
0x637F13: cmp     dword ptr [esi+44h], 0
0x637F17: jnz     short loc_637F26
0x637F19: mov     ecx, [esi+2Ch]
0x637F1C: push    1
0x637F1E: push    ecx
0x637F1F: mov     ecx, ebp
0x637F21: call    sub_566870
0x637F26: mov     ecx, [esi+2Ch]
0x637F29: push    1
0x637F2B: push    0
0x637F2D: push    1
0x637F2F: push    edi
0x637F30: call    ActivateRef; BunkFix: alternate ActivateRef call from shared movement/activation executor. For bunk beds the actor must still be able to path/reach the furniture reference before marker-specific top/bottom selection occurs.
0x637F35: mov     al, 1
0x637F37: pop     edi
0x637F38: pop     esi
0x637F39: pop     ebp
0x637F3A: pop     ebx
0x637F3B: add     esp, 28h
0x637F3E: retn    8
0x637F41: mov     edx, [ebp+1Ch]
0x637F44: shr     edx, 2
0x637F47: test    dl, 1
0x637F4A: jnz     loc_6381AC
0x637F50: cmp     byte ptr [ebp+20h], 2
0x637F54: jnz     short loc_637F9A
0x637F56: mov     ecx, [esi+2Ch]
0x637F59: test    ecx, ecx
0x637F5B: jz      loc_6371C6
0x637F61: mov     eax, [ecx]
0x637F63: mov     edx, [eax+190h]
0x637F69: call    edx
0x637F6B: test    al, al
0x637F6D: jz      loc_6371C6
0x637F73: mov     esi, [esi+2Ch]
0x637F76: test    esi, esi
0x637F78: jz      loc_6371C6
0x637F7E: mov     ecx, [esi+58h]
0x637F81: mov     eax, [ecx]
0x637F83: mov     edx, [eax+188h]
0x637F89: push    1
0x637F8B: push    esi
0x637F8C: call    edx
0x637F8E: mov     al, 1
0x637F90: pop     edi
0x637F91: pop     esi
0x637F92: pop     ebp
0x637F93: pop     ebx
0x637F94: add     esp, 28h
0x637F97: retn    8
0x637F9A: test    bl, bl
0x637F9C: jnz     loc_6380DB
0x637FA2: mov     eax, [edi]
0x637FA4: mov     edx, [eax+164h]
0x637FAA: mov     ecx, edi
0x637FAC: call    edx
0x637FAE: cmp     [esi+25Dh], bl
0x637FB4: jnz     short loc_637FFD
0x637FB6: mov     eax, [esi]
0x637FB8: mov     edx, [eax+594h]
0x637FBE: push    edi
0x637FBF: mov     ecx, esi
0x637FC1: mov     byte ptr [esi+25Dh], 1
0x637FC8: call    edx
0x637FCA: mov     ecx, [esi+2Ch]
0x637FCD: mov     eax, [ecx]
0x637FCF: mov     edx, [eax+170h]
0x637FD5: push    ecx
0x637FD6: call    edx
0x637FD8: push    eax
0x637FD9: push    edi
0x637FDA: mov     ecx, esi
0x637FDC: call    sub_6286E0
0x637FE1: mov     ecx, [esi+2Ch]
0x637FE4: mov     eax, [esi]
0x637FE6: mov     edx, [eax+484h]
0x637FEC: push    ecx
0x637FED: mov     ecx, esi
0x637FEF: call    edx
0x637FF1: xor     al, al
0x637FF3: pop     edi
0x637FF4: pop     esi
0x637FF5: pop     ebp
0x637FF6: pop     ebx
0x637FF7: add     esp, 28h
0x637FFA: retn    8
0x637FFD: xor     ebx, ebx
0x637FFF: cmp     eax, ebx
0x638001: jz      short loc_638012
0x638003: mov     ecx, eax
0x638005: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x63800A: test    al, al
0x63800C: jz      loc_6371C6
0x638012: mov     eax, [esi+44h]
0x638015: cmp     eax, ebx
0x638017: jz      loc_6371C6
0x63801D: mov     ecx, [eax+10h]
0x638020: mov     edx, [eax+4]
0x638023: push    ecx
0x638024: mov     ecx, [esi+2Ch]
0x638027: push    edx
0x638028: push    ebx
0x638029: push    edi
0x63802A: call    ActivateRef
0x63802F: test    al, al
0x638031: jz      short loc_63806A
0x638033: mov     eax, [esi+44h]
0x638036: cmp     eax, ebx
0x638038: jz      short loc_638063
0x63803A: mov     ecx, [esi+38h]
0x63803D: cmp     ecx, [eax+10h]
0x638040: jg      short loc_638051
0x638042: mov     edx, [esi]
0x638044: mov     eax, [edx+188h]
0x63804A: push    1
0x63804C: push    edi
0x63804D: mov     ecx, esi
0x63804F: call    eax
0x638051: mov     eax, [esi+44h]
0x638054: cmp     eax, ebx
0x638056: jz      short loc_638067
0x638058: push    eax
0x638059: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x63805E: add     esp, 4
0x638061: jmp     short loc_638067
0x638063: add     dword ptr [esi+38h], 0FFFFFFFFh
0x638067: mov     [esi+44h], ebx
0x63806A: mov     edx, [esi]
0x63806C: mov     eax, [edx+49Ch]
0x638072: mov     ecx, esi
0x638074: mov     [esi+2Ch], ebx
0x638077: mov     byte ptr [esi+25Dh], 0
0x63807E: call    eax
0x638080: mov     eax, [esi+44h]
0x638083: cmp     eax, ebx
0x638085: jz      loc_6371C6
0x63808B: cmp     [esi+38h], ebx
0x63808E: jg      short loc_6380B8
0x638090: mov     eax, [ebp+18h]
0x638093: mov     edi, [esi]
0x638095: push    eax
0x638096: call    sub_673980; 3DTheft: returns package procedure row length for procedureArrayIndex. Rows used here include Follow row 7 and Flee row 0x13.
0x63809B: mov     edx, [edi+17Ch]
0x6380A1: add     esp, 4
0x6380A4: sub     eax, 1
0x6380A7: push    eax
0x6380A8: mov     ecx, esi
0x6380AA: call    edx
0x6380AC: mov     al, 1
0x6380AE: pop     edi
0x6380AF: pop     esi
0x6380B0: pop     ebp
0x6380B1: pop     ebx
0x6380B2: add     esp, 28h
0x6380B5: retn    8
0x6380B8: cmp     eax, ebx
0x6380BA: jz      loc_6371C6
0x6380C0: push    eax
0x6380C1: mov     [esi+2Ch], ebx
0x6380C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6380C9: add     esp, 4
0x6380CC: mov     [esi+44h], ebx
0x6380CF: mov     al, 1
0x6380D1: pop     edi
0x6380D2: pop     esi
0x6380D3: pop     ebp
0x6380D4: pop     ebx
0x6380D5: add     esp, 28h
0x6380D8: retn    8
0x6380DB: mov     eax, [esi]
0x6380DD: mov     edx, [eax+49Ch]
0x6380E3: mov     ecx, esi
0x6380E5: mov     byte ptr [esi+25Dh], 0
0x6380EC: call    edx
0x6380EE: mov     eax, [esi+44h]
0x6380F1: xor     ebx, ebx
0x6380F3: cmp     eax, ebx
0x6380F5: jz      short loc_63812D
0x6380F7: cmp     [esi+38h], ebx
0x6380FA: jg      short loc_63811A
0x6380FC: mov     eax, [ebp+18h]
0x6380FF: mov     ebp, [esi]
0x638101: push    eax
0x638102: call    sub_673980; 3DTheft: returns package procedure row length for procedureArrayIndex. Rows used here include Follow row 7 and Flee row 0x13.
0x638107: sub     eax, 1
0x63810A: add     esp, 4
0x63810D: push    eax
0x63810E: mov     eax, [ebp+17Ch]
0x638114: mov     ecx, esi
0x638116: call    eax
0x638118: jmp     short loc_63812D
0x63811A: cmp     eax, ebx
0x63811C: jz      short loc_63812D
0x63811E: push    eax
0x63811F: mov     [esi+2Ch], ebx
0x638122: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x638127: add     esp, 4
0x63812A: mov     [esi+44h], ebx
0x63812D: cmp     dword ptr [esi+2Ch], 0
0x638131: jz      loc_6371C6
0x638137: mov     edx, [esi]
0x638139: mov     eax, [edx+410h]
0x63813F: mov     ecx, esi
0x638141: call    eax
0x638143: mov     ebp, eax
0x638145: test    ebp, ebp
0x638147: jz      short loc_63815D
0x638149: mov     ecx, ebp
0x63814B: call    sub_683A70
0x638150: test    al, al
0x638152: jz      short loc_63815D
0x638154: push    0
0x638156: mov     ecx, ebp
0x638158: call    sub_683A80
0x63815D: mov     ecx, [esi+2Ch]
0x638160: mov     edx, [ecx]
0x638162: mov     eax, [edx+174h]
0x638168: mov     ebp, [esi]
0x63816A: call    eax
0x63816C: mov     ecx, [esi+2Ch]; this
0x63816F: mov     ebx, eax
0x638171: call    TESObjectREFR_GetWorldSpace
0x638176: mov     ecx, [esi+2Ch]; this
0x638179: push    eax
0x63817A: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x63817F: mov     ecx, [ebx]
0x638181: mov     edx, [ebx+4]
0x638184: push    eax
0x638185: sub     esp, 0Ch
0x638188: mov     eax, esp
0x63818A: mov     [eax], ecx
0x63818C: mov     ecx, [ebx+8]
0x63818F: mov     [eax+4], edx
0x638192: mov     edx, [ebp+3DCh]
0x638198: mov     [eax+8], ecx
0x63819B: push    edi
0x63819C: mov     ecx, esi
0x63819E: call    edx
0x6381A0: xor     al, al
0x6381A2: pop     edi
0x6381A3: pop     esi
0x6381A4: pop     ebp
0x6381A5: pop     ebx
0x6381A6: add     esp, 28h
0x6381A9: retn    8
0x6381AC: mov     ecx, [esi+2Ch]
0x6381AF: mov     eax, [ecx]
0x6381B1: mov     edx, [eax+174h]
0x6381B7: mov     ebp, [esi]
0x6381B9: call    edx
0x6381BB: mov     ecx, [esi+2Ch]; this
0x6381BE: mov     ebx, eax
0x6381C0: call    TESObjectREFR_GetWorldSpace
0x6381C5: mov     ecx, [esi+2Ch]; this
0x6381C8: push    eax
0x6381C9: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6381CE: mov     ecx, [ebx]
0x6381D0: mov     edx, [ebx+4]
0x6381D3: push    eax
0x6381D4: sub     esp, 0Ch
0x6381D7: mov     eax, esp
0x6381D9: mov     [eax], ecx
0x6381DB: mov     ecx, [ebx+8]
0x6381DE: mov     [eax+4], edx
0x6381E1: mov     edx, [ebp+3DCh]
0x6381E7: mov     [eax+8], ecx
0x6381EA: push    edi
0x6381EB: mov     ecx, esi
0x6381ED: call    edx
0x6381EF: xor     al, al
0x6381F1: pop     edi
0x6381F2: pop     esi
0x6381F3: pop     ebp
0x6381F4: pop     ebx
0x6381F5: add     esp, 28h
0x6381F8: retn    8
0x6381FB: test    bl, bl
0x6381FD: jnz     loc_6383F8
0x638203: mov     ecx, [esi+2Ch]
0x638206: call    sub_4D74B0
0x63820B: test    al, al
0x63820D: jz      short loc_63823E
0x63820F: mov     eax, [esi]
0x638211: mov     edx, [eax+36Ch]
0x638217: mov     ecx, esi
0x638219: call    edx
0x63821B: cmp     eax, 4
0x63821E: jz      loc_637DFA
0x638224: mov     eax, [esi]
0x638226: mov     edx, [eax+36Ch]
0x63822C: mov     ecx, esi
0x63822E: call    edx
0x638230: cmp     eax, 9
0x638233: jz      loc_637DFA
0x638239: jmp     loc_637DAE
0x63823E: cmp     dword ptr [esi+44h], 0
0x638242: jz      loc_6382DB
0x638248: mov     eax, [edi]
0x63824A: mov     edx, [eax+164h]
0x638250: mov     ecx, edi
0x638252: call    edx
0x638254: cmp     byte ptr [esi+25Dh], 0
0x63825B: jz      loc_637FB6
0x638261: test    eax, eax
0x638263: jz      short loc_638274
0x638265: mov     ecx, eax
0x638267: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x63826C: test    al, al
0x63826E: jz      loc_638438
0x638274: mov     eax, [esi+44h]
0x638277: mov     ecx, [eax+10h]
0x63827A: mov     edx, [eax+4]
0x63827D: push    ecx
0x63827E: mov     ecx, [esi+2Ch]
0x638281: push    edx
0x638282: xor     ebx, ebx
0x638284: push    ebx
0x638285: push    edi
0x638286: call    ActivateRef
0x63828B: test    al, al
0x63828D: jz      short loc_6382C0
0x63828F: mov     eax, [esi+44h]
0x638292: cmp     eax, ebx
0x638294: jz      short loc_6382AD
0x638296: mov     ecx, [esi+38h]
0x638299: cmp     ecx, [eax+10h]
0x63829C: jg      short loc_6382AD
0x63829E: mov     edx, [esi]
0x6382A0: mov     eax, [edx+188h]
0x6382A6: push    1
0x6382A8: push    edi
0x6382A9: mov     ecx, esi
0x6382AB: call    eax
0x6382AD: mov     eax, [esi+44h]
0x6382B0: cmp     eax, ebx
0x6382B2: jz      short loc_6382BD
0x6382B4: push    eax
0x6382B5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6382BA: add     esp, 4
0x6382BD: mov     [esi+44h], ebx
0x6382C0: mov     edx, [esi]
0x6382C2: mov     eax, [edx+49Ch]
0x6382C8: mov     ecx, esi
0x6382CA: mov     [esi+2Ch], ebx
0x6382CD: mov     byte ptr [esi+25Dh], 0
0x6382D4: call    eax
0x6382D6: jmp     loc_638438
0x6382DB: cmp     byte ptr [ebp+20h], 7
0x6382DF: jnz     short loc_638309
0x6382E1: mov     edx, [esi]
0x6382E3: mov     eax, [edx+188h]
0x6382E9: push    1
0x6382EB: push    edi
0x6382EC: mov     ecx, esi
0x6382EE: call    eax
0x6382F0: mov     edx, [esi]
0x6382F2: mov     eax, [edx+194h]
0x6382F8: push    edi
0x6382F9: mov     ecx, esi
0x6382FB: call    eax
0x6382FD: mov     al, 1
0x6382FF: pop     edi
0x638300: pop     esi
0x638301: pop     ebp
0x638302: pop     ebx
0x638303: add     esp, 28h
0x638306: retn    8
0x638309: mov     ecx, [esi+2Ch]; this
0x63830C: call    Actor_IsNPC
0x638311: test    al, al
0x638313: jz      short loc_638362
0x638315: mov     ecx, [esi+2Ch]
0x638318: mov     edx, [ecx]
0x63831A: mov     eax, [edx+18Ch]
0x638320: call    eax
0x638322: test    eax, eax
0x638324: jz      short loc_63834E
0x638326: mov     ecx, [esi+2Ch]
0x638329: mov     edx, [ecx]
0x63832B: mov     eax, [edx+18Ch]
0x638331: call    eax
0x638333: cmp     eax, 4
0x638336: jz      short loc_63834E
0x638338: mov     ecx, [esi+2Ch]
0x63833B: mov     edx, [ecx]
0x63833D: mov     eax, [edx+18Ch]
0x638343: call    eax
0x638345: cmp     eax, 9
0x638348: jnz     loc_638438
0x63834E: mov     ecx, [esi+2Ch]
0x638351: push    1
0x638353: push    0
0x638355: push    0
0x638357: push    edi
0x638358: call    ActivateRef
0x63835D: jmp     loc_638438
0x638362: mov     edx, [edi]
0x638364: mov     eax, [edx+164h]
0x63836A: mov     ecx, edi
0x63836C: call    eax
0x63836E: cmp     byte ptr [esi+25Dh], 0
0x638375: jnz     short loc_6383C5
0x638377: mov     edx, [esi]
0x638379: mov     eax, [edx+594h]
0x63837F: push    edi
0x638380: mov     ecx, esi
0x638382: mov     byte ptr [esi+25Dh], 1
0x638389: call    eax
0x63838B: cmp     dword ptr [esp+14h], 0
0x638390: jnz     short loc_6383A9
0x638392: mov     ecx, [esi+2Ch]
0x638395: mov     edx, [ecx]
0x638397: mov     eax, [edx+170h]
0x63839D: push    ecx
0x63839E: call    eax
0x6383A0: push    eax
0x6383A1: push    edi
0x6383A2: mov     ecx, esi
0x6383A4: call    sub_6286E0
0x6383A9: mov     edx, [esi]
0x6383AB: mov     eax, [esi+2Ch]
0x6383AE: mov     edx, [edx+484h]
0x6383B4: push    eax
0x6383B5: mov     ecx, esi
0x6383B7: call    edx
0x6383B9: xor     al, al
0x6383BB: pop     edi
0x6383BC: pop     esi
0x6383BD: pop     ebp
0x6383BE: pop     ebx
0x6383BF: add     esp, 28h
0x6383C2: retn    8
0x6383C5: test    eax, eax
0x6383C7: jz      short loc_638438
0x6383C9: mov     ecx, eax
0x6383CB: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x6383D0: test    al, al
0x6383D2: jz      short loc_638438
0x6383D4: mov     eax, [esi]
0x6383D6: mov     edx, [eax+49Ch]
0x6383DC: mov     ecx, esi
0x6383DE: call    edx
0x6383E0: mov     ecx, [esi+2Ch]
0x6383E3: push    1
0x6383E5: push    0
0x6383E7: push    0
0x6383E9: push    edi
0x6383EA: call    ActivateRef
0x6383EF: mov     byte ptr [esi+25Dh], 0
0x6383F6: jmp     short loc_638438
0x6383F8: mov     eax, [ebp+1Ch]
0x6383FB: shr     eax, 2
0x6383FE: test    al, 1
0x638400: jnz     loc_63815D
0x638406: cmp     byte ptr [ebp+20h], 2
0x63840A: jnz     short loc_638438
0x63840C: mov     ecx, [esi+2Ch]
0x63840F: test    ecx, ecx
0x638411: jz      short loc_638438
0x638413: mov     eax, [ecx]
0x638415: mov     edx, [eax+190h]
0x63841B: call    edx
0x63841D: test    al, al
0x63841F: jz      short loc_638438
0x638421: mov     eax, [esi+2Ch]
0x638424: test    eax, eax
0x638426: jz      short loc_638438
0x638428: mov     ecx, [eax+58h]
0x63842B: mov     edx, [ecx]
0x63842D: push    1
0x63842F: push    eax
0x638430: mov     eax, [edx+188h]
0x638436: call    eax
0x638438: mov     edx, [edi]
0x63843A: mov     eax, [edx+164h]
0x638440: mov     ecx, edi
0x638442: call    eax
0x638444: xor     edi, edi
0x638446: cmp     eax, edi
0x638448: jz      short loc_638455
0x63844A: mov     ecx, eax
0x63844C: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x638451: test    al, al
0x638453: jz      short loc_63849E
0x638455: mov     eax, [esi+44h]
0x638458: cmp     eax, edi
0x63845A: jz      short loc_638465
0x63845C: push    eax
0x63845D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x638462: add     esp, 4
0x638465: mov     [esi+44h], edi
0x638468: mov     [esi+2Ch], edi
0x63846B: mov     [esi+48h], edi
0x63846E: mov     al, 1
0x638470: pop     edi
0x638471: pop     esi
0x638472: pop     ebp
0x638473: pop     ebx
0x638474: add     esp, 28h
0x638477: retn    8
0x63847A: test    al, al
0x63847C: jz      short loc_638488
0x63847E: push    1
0x638480: push    ecx
0x638481: mov     ecx, ebp
0x638483: call    sub_566870
0x638488: cmp     [esp+4Ch+var_C], 0
0x63848D: jz      short loc_63849E
0x63848F: mov     edx, [esi]
0x638491: mov     eax, [edx+188h]
0x638497: push    1
0x638499: push    edi
0x63849A: mov     ecx, esi
0x63849C: call    eax
0x63849E: pop     edi
0x63849F: pop     esi
0x6384A0: pop     ebp
0x6384A1: xor     al, al
0x6384A3: pop     ebx
0x6384A4: add     esp, 28h
0x6384A7: retn    8
