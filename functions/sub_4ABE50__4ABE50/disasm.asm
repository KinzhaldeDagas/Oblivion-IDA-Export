0x4ABE50: push    ebp
0x4ABE51: mov     ebp, esp
0x4ABE53: and     esp, 0FFFFFFF8h
0x4ABE56: mov     eax, [ebp+arg_0]
0x4ABE59: sub     esp, 0Ch
0x4ABE5C: push    ebx
0x4ABE5D: push    esi
0x4ABE5E: push    edi
0x4ABE5F: push    0; int
0x4ABE61: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x4ABE66: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4ABE6B: push    0; int
0x4ABE6D: push    eax; void *
0x4ABE6E: mov     esi, ecx
0x4ABE70: call    OblivionDynamicCast
0x4ABE75: mov     edi, eax
0x4ABE77: add     esp, 14h
0x4ABE7A: test    edi, edi
0x4ABE7C: jnz     short loc_4ABE89
0x4ABE7E: mov     al, 1
0x4ABE80: pop     edi
0x4ABE81: pop     esi
0x4ABE82: pop     ebx
0x4ABE83: mov     esp, ebp
0x4ABE85: pop     ebp
0x4ABE86: retn    4
0x4ABE89: push    edi; a2
0x4ABE8A: mov     ecx, esi; this
0x4ABE8C: call    TESForm_CompareAllComponentsTo
0x4ABE91: test    al, al
0x4ABE93: jnz     short loc_4ABE7E
0x4ABE95: mov     edx, [edi]
0x4ABE97: mov     eax, [edx+0DCh]
0x4ABE9D: mov     ecx, edi
0x4ABE9F: call    eax
0x4ABEA1: mov     edx, [esi]
0x4ABEA3: mov     bl, al
0x4ABEA5: mov     eax, [edx+0DCh]
0x4ABEAB: mov     ecx, esi
0x4ABEAD: call    eax
0x4ABEAF: cmp     al, bl
0x4ABEB1: jnz     short loc_4ABE7E
0x4ABEB3: mov     edx, [edi]
0x4ABEB5: mov     eax, [edx+0E0h]
0x4ABEBB: mov     ecx, edi
0x4ABEBD: call    eax
0x4ABEBF: mov     edx, [esi]
0x4ABEC1: mov     bl, al
0x4ABEC3: mov     eax, [edx+0E0h]
0x4ABEC9: mov     ecx, esi
0x4ABECB: call    eax
0x4ABECD: cmp     al, bl
0x4ABECF: jnz     short loc_4ABE7E
0x4ABED1: mov     edx, [edi]
0x4ABED3: mov     eax, [edx+0E4h]
0x4ABED9: mov     ecx, edi
0x4ABEDB: call    eax
0x4ABEDD: mov     edx, [esi]
0x4ABEDF: mov     bl, al
0x4ABEE1: mov     eax, [edx+0E4h]
0x4ABEE7: mov     ecx, esi
0x4ABEE9: call    eax
0x4ABEEB: cmp     al, bl
0x4ABEED: jnz     short loc_4ABE7E
0x4ABEEF: mov     edx, [esi]
0x4ABEF1: mov     eax, [edx+0E8h]
0x4ABEF7: mov     ecx, esi
0x4ABEF9: call    eax
0x4ABEFB: fstp    [esp+18h+var_8]
0x4ABEFF: mov     edx, [edi]
0x4ABF01: mov     eax, [edx+0E8h]
0x4ABF07: mov     ecx, edi
0x4ABF09: call    eax
0x4ABF0B: fcomp   [esp+18h+var_8]
0x4ABF0F: fnstsw  ax
0x4ABF11: test    ah, 44h
0x4ABF14: jp      loc_4ABE7E
0x4ABF1A: mov     edx, [esi]
0x4ABF1C: mov     eax, [edx+0ECh]
0x4ABF22: mov     ecx, esi
0x4ABF24: call    eax
0x4ABF26: fstp    [esp+18h+var_8]
0x4ABF2A: mov     edx, [edi]
0x4ABF2C: mov     eax, [edx+0ECh]
0x4ABF32: mov     ecx, edi
0x4ABF34: call    eax
0x4ABF36: fcomp   [esp+18h+var_8]
0x4ABF3A: fnstsw  ax
0x4ABF3C: test    ah, 44h
0x4ABF3F: jp      loc_4ABE7E
0x4ABF45: mov     edx, [esi]
0x4ABF47: mov     eax, [edx+0F0h]
0x4ABF4D: mov     ecx, esi
0x4ABF4F: call    eax
0x4ABF51: fstp    [esp+18h+var_8]
0x4ABF55: mov     edx, [edi]
0x4ABF57: mov     eax, [edx+0F0h]
0x4ABF5D: mov     ecx, edi
0x4ABF5F: call    eax
0x4ABF61: fcomp   [esp+18h+var_8]
0x4ABF65: fnstsw  ax
0x4ABF67: test    ah, 44h
0x4ABF6A: jp      loc_4ABE7E
0x4ABF70: mov     edx, [esi]
0x4ABF72: mov     eax, [edx+0F4h]
0x4ABF78: mov     ecx, esi
0x4ABF7A: call    eax
0x4ABF7C: fstp    [esp+18h+var_8]
0x4ABF80: mov     edx, [edi]
0x4ABF82: mov     eax, [edx+0F4h]
0x4ABF88: mov     ecx, edi
0x4ABF8A: call    eax
0x4ABF8C: fcomp   [esp+18h+var_8]
0x4ABF90: fnstsw  ax
0x4ABF92: test    ah, 44h
0x4ABF95: jp      loc_4ABE7E
0x4ABF9B: mov     edx, [esi]
0x4ABF9D: mov     eax, [edx+0F8h]
0x4ABFA3: mov     ecx, esi
0x4ABFA5: call    eax
0x4ABFA7: fstp    [esp+18h+var_8]
0x4ABFAB: mov     edx, [edi]
0x4ABFAD: mov     eax, [edx+0F8h]
0x4ABFB3: mov     ecx, edi
0x4ABFB5: call    eax
0x4ABFB7: fcomp   [esp+18h+var_8]
0x4ABFBB: fnstsw  ax
0x4ABFBD: test    ah, 44h
0x4ABFC0: jp      loc_4ABE7E
0x4ABFC6: mov     edx, [esi]
0x4ABFC8: mov     eax, [edx+0FCh]
0x4ABFCE: mov     ecx, esi
0x4ABFD0: call    eax
0x4ABFD2: fstp    [esp+18h+var_8]
0x4ABFD6: mov     edx, [edi]
0x4ABFD8: mov     eax, [edx+0FCh]
0x4ABFDE: mov     ecx, edi
0x4ABFE0: call    eax
0x4ABFE2: fcomp   [esp+18h+var_8]
0x4ABFE6: fnstsw  ax
0x4ABFE8: test    ah, 44h
0x4ABFEB: jp      loc_4ABE7E
0x4ABFF1: mov     edx, [esi]
0x4ABFF3: mov     eax, [edx+100h]
0x4ABFF9: mov     ecx, esi
0x4ABFFB: call    eax
0x4ABFFD: fstp    [esp+18h+var_8]
0x4AC001: mov     edx, [edi]
0x4AC003: mov     eax, [edx+100h]
0x4AC009: mov     ecx, edi
0x4AC00B: call    eax
0x4AC00D: fcomp   [esp+18h+var_8]
0x4AC011: fnstsw  ax
0x4AC013: test    ah, 44h
0x4AC016: jp      loc_4ABE7E
0x4AC01C: mov     edx, [esi]
0x4AC01E: mov     eax, [edx+104h]
0x4AC024: mov     ecx, esi
0x4AC026: call    eax
0x4AC028: fstp    [esp+18h+var_8]
0x4AC02C: mov     edx, [edi]
0x4AC02E: mov     eax, [edx+104h]
0x4AC034: mov     ecx, edi
0x4AC036: call    eax
0x4AC038: fcomp   [esp+18h+var_8]
0x4AC03C: fnstsw  ax
0x4AC03E: test    ah, 44h
0x4AC041: jp      loc_4ABE7E
0x4AC047: mov     edx, [edi]
0x4AC049: mov     eax, [edx+108h]
0x4AC04F: mov     ecx, edi
0x4AC051: call    eax
0x4AC053: mov     edx, [esi]
0x4AC055: mov     bl, al
0x4AC057: mov     eax, [edx+108h]
0x4AC05D: mov     ecx, esi
0x4AC05F: call    eax
0x4AC061: cmp     al, bl
0x4AC063: jnz     loc_4ABE7E
0x4AC069: mov     edx, [edi]
0x4AC06B: mov     eax, [edx+10Ch]
0x4AC071: mov     ecx, edi
0x4AC073: call    eax
0x4AC075: mov     edx, [esi]
0x4AC077: mov     bl, al
0x4AC079: mov     eax, [edx+10Ch]
0x4AC07F: mov     ecx, esi
0x4AC081: call    eax
0x4AC083: cmp     al, bl
0x4AC085: jnz     loc_4ABE7E
0x4AC08B: mov     edx, [esi]
0x4AC08D: mov     eax, [edx+110h]
0x4AC093: mov     ecx, esi
0x4AC095: call    eax
0x4AC097: fstp    [esp+18h+var_8]
0x4AC09B: mov     edx, [edi]
0x4AC09D: mov     eax, [edx+110h]
0x4AC0A3: mov     ecx, edi
0x4AC0A5: call    eax
0x4AC0A7: fcomp   [esp+18h+var_8]
0x4AC0AB: fnstsw  ax
0x4AC0AD: test    ah, 44h
0x4AC0B0: jp      loc_4ABE7E
0x4AC0B6: mov     edx, [esi]
0x4AC0B8: mov     eax, [edx+114h]
0x4AC0BE: mov     ecx, esi
0x4AC0C0: call    eax
0x4AC0C2: fstp    [esp+18h+var_8]
0x4AC0C6: mov     edx, [edi]
0x4AC0C8: mov     eax, [edx+114h]
0x4AC0CE: mov     ecx, edi
0x4AC0D0: call    eax
0x4AC0D2: fcomp   [esp+18h+var_8]
0x4AC0D6: fnstsw  ax
0x4AC0D8: test    ah, 44h
0x4AC0DB: jp      loc_4ABE7E
0x4AC0E1: mov     edx, [esi]
0x4AC0E3: mov     eax, [edx+118h]
0x4AC0E9: mov     ecx, esi
0x4AC0EB: call    eax
0x4AC0ED: fstp    [esp+18h+var_8]
0x4AC0F1: mov     edx, [edi]
0x4AC0F3: mov     eax, [edx+118h]
0x4AC0F9: mov     ecx, edi
0x4AC0FB: call    eax
0x4AC0FD: fcomp   [esp+18h+var_8]
0x4AC101: fnstsw  ax
0x4AC103: test    ah, 44h
0x4AC106: jp      loc_4ABE7E
0x4AC10C: mov     edx, [edi]
0x4AC10E: mov     eax, [edx+11Ch]
0x4AC114: mov     ecx, edi
0x4AC116: call    eax
0x4AC118: mov     edx, [esi]
0x4AC11A: mov     bl, al
0x4AC11C: mov     eax, [edx+11Ch]
0x4AC122: mov     ecx, esi
0x4AC124: call    eax
0x4AC126: cmp     al, bl
0x4AC128: jnz     loc_4ABE7E
0x4AC12E: mov     edx, [esi]
0x4AC130: mov     eax, [edx+120h]
0x4AC136: mov     ecx, esi
0x4AC138: call    eax
0x4AC13A: fstp    [esp+18h+var_8]
0x4AC13E: mov     edx, [edi]
0x4AC140: mov     eax, [edx+120h]
0x4AC146: mov     ecx, edi
0x4AC148: call    eax
0x4AC14A: fcomp   [esp+18h+var_8]
0x4AC14E: fnstsw  ax
0x4AC150: test    ah, 44h
0x4AC153: jp      loc_4ABE7E
0x4AC159: mov     edx, [esi]
0x4AC15B: mov     eax, [edx+124h]
0x4AC161: mov     ecx, esi
0x4AC163: call    eax
0x4AC165: fstp    [esp+18h+var_8]
0x4AC169: mov     edx, [edi]
0x4AC16B: mov     eax, [edx+124h]
0x4AC171: mov     ecx, edi
0x4AC173: call    eax
0x4AC175: fcomp   [esp+18h+var_8]
0x4AC179: fnstsw  ax
0x4AC17B: test    ah, 44h
0x4AC17E: jp      loc_4ABE7E
0x4AC184: mov     edx, [edi]
0x4AC186: mov     eax, [edx+128h]
0x4AC18C: mov     ecx, edi
0x4AC18E: call    eax
0x4AC190: mov     edx, [esi]
0x4AC192: mov     bl, al
0x4AC194: mov     eax, [edx+128h]
0x4AC19A: mov     ecx, esi
0x4AC19C: call    eax
0x4AC19E: cmp     al, bl
0x4AC1A0: jnz     loc_4ABE7E
0x4AC1A6: mov     edx, [edi]
0x4AC1A8: mov     eax, [edx+12Ch]
0x4AC1AE: mov     ecx, edi
0x4AC1B0: call    eax
0x4AC1B2: mov     edx, [esi]
0x4AC1B4: mov     bl, al
0x4AC1B6: mov     eax, [edx+12Ch]
0x4AC1BC: mov     ecx, esi
0x4AC1BE: call    eax
0x4AC1C0: cmp     al, bl
0x4AC1C2: jnz     loc_4ABE7E
0x4AC1C8: mov     edx, [edi]
0x4AC1CA: mov     eax, [edx+130h]
0x4AC1D0: mov     ecx, edi
0x4AC1D2: call    eax
0x4AC1D4: mov     edx, [esi]
0x4AC1D6: mov     bl, al
0x4AC1D8: mov     eax, [edx+130h]
0x4AC1DE: mov     ecx, esi
0x4AC1E0: call    eax
0x4AC1E2: cmp     al, bl
0x4AC1E4: jnz     loc_4ABE7E
0x4AC1EA: mov     edx, [edi]
0x4AC1EC: mov     eax, [edx+134h]
0x4AC1F2: mov     ecx, edi
0x4AC1F4: call    eax
0x4AC1F6: mov     edx, [esi]
0x4AC1F8: mov     bl, al
0x4AC1FA: mov     eax, [edx+134h]
0x4AC200: mov     ecx, esi
0x4AC202: call    eax
0x4AC204: cmp     al, bl
0x4AC206: jnz     loc_4ABE7E
0x4AC20C: mov     edx, [edi]
0x4AC20E: mov     eax, [edx+138h]
0x4AC214: mov     ecx, edi
0x4AC216: call    eax
0x4AC218: mov     edx, [esi]
0x4AC21A: mov     bl, al
0x4AC21C: mov     eax, [edx+138h]
0x4AC222: mov     ecx, esi
0x4AC224: call    eax
0x4AC226: cmp     al, bl
0x4AC228: jnz     loc_4ABE7E
0x4AC22E: mov     edx, [esi]
0x4AC230: mov     eax, [edx+13Ch]
0x4AC236: mov     ecx, esi
0x4AC238: call    eax
0x4AC23A: fstp    [esp+18h+var_8]
0x4AC23E: mov     edx, [edi]
0x4AC240: mov     eax, [edx+13Ch]
0x4AC246: mov     ecx, edi
0x4AC248: call    eax
0x4AC24A: fcomp   [esp+18h+var_8]
0x4AC24E: fnstsw  ax
0x4AC250: test    ah, 44h
0x4AC253: jp      loc_4ABE7E
0x4AC259: mov     edx, [esi]
0x4AC25B: mov     eax, [edx+140h]
0x4AC261: mov     ecx, esi
0x4AC263: call    eax
0x4AC265: fstp    [esp+18h+var_8]
0x4AC269: mov     edx, [edi]
0x4AC26B: mov     eax, [edx+140h]
0x4AC271: mov     ecx, edi
0x4AC273: call    eax
0x4AC275: fcomp   [esp+18h+var_8]
0x4AC279: fnstsw  ax
0x4AC27B: test    ah, 44h
0x4AC27E: jp      loc_4ABE7E
0x4AC284: mov     edx, [esi]
0x4AC286: mov     eax, [edx+144h]
0x4AC28C: mov     ecx, esi
0x4AC28E: call    eax
0x4AC290: fstp    [esp+18h+var_8]
0x4AC294: mov     edx, [edi]
0x4AC296: mov     eax, [edx+144h]
0x4AC29C: mov     ecx, edi
0x4AC29E: call    eax
0x4AC2A0: fcomp   [esp+18h+var_8]
0x4AC2A4: fnstsw  ax
0x4AC2A6: test    ah, 44h
0x4AC2A9: jp      loc_4ABE7E
0x4AC2AF: mov     edx, [esi]
0x4AC2B1: mov     eax, [edx+148h]
0x4AC2B7: mov     ecx, esi
0x4AC2B9: call    eax
0x4AC2BB: fstp    [esp+18h+var_8]
0x4AC2BF: mov     edx, [edi]
0x4AC2C1: mov     eax, [edx+148h]
0x4AC2C7: mov     ecx, edi
0x4AC2C9: call    eax
0x4AC2CB: fcomp   [esp+18h+var_8]
0x4AC2CF: fnstsw  ax
0x4AC2D1: test    ah, 44h
0x4AC2D4: jp      loc_4ABE7E
0x4AC2DA: mov     edx, [esi]
0x4AC2DC: mov     eax, [edx+14Ch]
0x4AC2E2: mov     ecx, esi
0x4AC2E4: call    eax
0x4AC2E6: fstp    [esp+18h+var_8]
0x4AC2EA: mov     edx, [edi]
0x4AC2EC: mov     eax, [edx+14Ch]
0x4AC2F2: mov     ecx, edi
0x4AC2F4: call    eax
0x4AC2F6: fcomp   [esp+18h+var_8]
0x4AC2FA: fnstsw  ax
0x4AC2FC: test    ah, 44h
0x4AC2FF: jp      loc_4ABE7E
0x4AC305: mov     edx, [esi]
0x4AC307: mov     eax, [edx+150h]
0x4AC30D: mov     ecx, esi
0x4AC30F: call    eax
0x4AC311: fstp    [esp+18h+var_8]
0x4AC315: mov     edx, [edi]
0x4AC317: mov     eax, [edx+150h]
0x4AC31D: mov     ecx, edi
0x4AC31F: call    eax
0x4AC321: fcomp   [esp+18h+var_8]
0x4AC325: fnstsw  ax
0x4AC327: test    ah, 44h
0x4AC32A: jp      loc_4ABE7E
0x4AC330: mov     edx, [esi]
0x4AC332: mov     eax, [edx+154h]
0x4AC338: mov     ecx, esi
0x4AC33A: call    eax
0x4AC33C: fstp    [esp+18h+var_8]
0x4AC340: mov     edx, [edi]
0x4AC342: mov     eax, [edx+154h]
0x4AC348: mov     ecx, edi
0x4AC34A: call    eax
0x4AC34C: fcomp   [esp+18h+var_8]
0x4AC350: fnstsw  ax
0x4AC352: test    ah, 44h
0x4AC355: jp      loc_4ABE7E
0x4AC35B: mov     edx, [esi]
0x4AC35D: mov     eax, [edx+158h]
0x4AC363: mov     ecx, esi
0x4AC365: call    eax
0x4AC367: fstp    [esp+18h+var_8]
0x4AC36B: mov     edx, [edi]
0x4AC36D: mov     eax, [edx+158h]
0x4AC373: mov     ecx, edi
0x4AC375: call    eax
0x4AC377: fcomp   [esp+18h+var_8]
0x4AC37B: fnstsw  ax
0x4AC37D: test    ah, 44h
0x4AC380: jp      loc_4ABE7E
0x4AC386: mov     edx, [esi]
0x4AC388: mov     eax, [edx+15Ch]
0x4AC38E: mov     ecx, esi
0x4AC390: call    eax
0x4AC392: fstp    [esp+18h+var_8]
0x4AC396: mov     edx, [edi]
0x4AC398: mov     eax, [edx+15Ch]
0x4AC39E: mov     ecx, edi
0x4AC3A0: call    eax
0x4AC3A2: fcomp   [esp+18h+var_8]
0x4AC3A6: fnstsw  ax
0x4AC3A8: test    ah, 44h
0x4AC3AB: jp      loc_4ABE7E
0x4AC3B1: mov     edx, [esi]
0x4AC3B3: mov     eax, [edx+164h]
0x4AC3B9: mov     ecx, esi
0x4AC3BB: call    eax
0x4AC3BD: fstp    [esp+18h+var_8]
0x4AC3C1: mov     edx, [edi]
0x4AC3C3: mov     eax, [edx+164h]
0x4AC3C9: mov     ecx, edi
0x4AC3CB: call    eax
0x4AC3CD: fcomp   [esp+18h+var_8]
0x4AC3D1: fnstsw  ax
0x4AC3D3: test    ah, 44h
0x4AC3D6: jp      loc_4ABE7E
0x4AC3DC: mov     edx, [edi]
0x4AC3DE: mov     eax, [edx+160h]
0x4AC3E4: mov     ecx, edi
0x4AC3E6: call    eax
0x4AC3E8: mov     edx, [esi]
0x4AC3EA: mov     bl, al
0x4AC3EC: mov     eax, [edx+160h]
0x4AC3F2: mov     ecx, esi
0x4AC3F4: call    eax
0x4AC3F6: cmp     al, bl
0x4AC3F8: jnz     loc_4ABE7E
0x4AC3FE: mov     cl, [esi+68h]
0x4AC401: cmp     cl, [edi+68h]
0x4AC404: jnz     loc_4ABE7E
0x4AC40A: mov     edx, [esi+90h]
0x4AC410: cmp     edx, [edi+90h]
0x4AC416: jnz     loc_4ABE7E
0x4AC41C: mov     eax, [esi]
0x4AC41E: mov     edx, [eax+16Ch]
0x4AC424: push    1
0x4AC426: mov     ecx, esi
0x4AC428: call    edx
0x4AC42A: test    al, al
0x4AC42C: jz      loc_4AC6A5
0x4AC432: mov     ecx, esi
0x4AC434: call    sub_4A9CB0
0x4AC439: fstp    [esp+18h+var_8]
0x4AC43D: mov     ecx, edi
0x4AC43F: call    sub_4A9CB0
0x4AC444: fcomp   [esp+18h+var_8]
0x4AC448: fnstsw  ax
0x4AC44A: test    ah, 44h
0x4AC44D: jp      loc_4ABE7E
0x4AC453: mov     ecx, esi
0x4AC455: call    sub_4A9CF0
0x4AC45A: fstp    [esp+18h+var_8]
0x4AC45E: mov     ecx, edi
0x4AC460: call    sub_4A9CF0
0x4AC465: fcomp   [esp+18h+var_8]
0x4AC469: fnstsw  ax
0x4AC46B: test    ah, 44h
0x4AC46E: jp      loc_4ABE7E
0x4AC474: mov     ecx, esi
0x4AC476: call    sub_4A9D30
0x4AC47B: fstp    [esp+18h+var_8]
0x4AC47F: mov     ecx, edi
0x4AC481: call    sub_4A9D30
0x4AC486: fcomp   [esp+18h+var_8]
0x4AC48A: fnstsw  ax
0x4AC48C: test    ah, 44h
0x4AC48F: jp      loc_4ABE7E
0x4AC495: mov     ecx, esi
0x4AC497: call    sub_4A9D70
0x4AC49C: fstp    [esp+18h+var_8]
0x4AC4A0: mov     ecx, edi
0x4AC4A2: call    sub_4A9D70
0x4AC4A7: fcomp   [esp+18h+var_8]
0x4AC4AB: fnstsw  ax
0x4AC4AD: test    ah, 44h
0x4AC4B0: jp      loc_4ABE7E
0x4AC4B6: mov     ecx, esi
0x4AC4B8: call    sub_4A9DB0
0x4AC4BD: fstp    [esp+18h+var_8]
0x4AC4C1: mov     ecx, edi
0x4AC4C3: call    sub_4A9DB0
0x4AC4C8: fcomp   [esp+18h+var_8]
0x4AC4CC: fnstsw  ax
0x4AC4CE: test    ah, 44h
0x4AC4D1: jp      loc_4ABE7E
0x4AC4D7: mov     ecx, esi
0x4AC4D9: call    sub_4A9DF0
0x4AC4DE: fstp    [esp+18h+var_8]
0x4AC4E2: mov     ecx, edi
0x4AC4E4: call    sub_4A9DF0
0x4AC4E9: fcomp   [esp+18h+var_8]
0x4AC4ED: fnstsw  ax
0x4AC4EF: test    ah, 44h
0x4AC4F2: jp      loc_4ABE7E
0x4AC4F8: mov     ecx, esi
0x4AC4FA: call    sub_4A9E30
0x4AC4FF: fstp    [esp+18h+var_8]
0x4AC503: mov     ecx, edi
0x4AC505: call    sub_4A9E30
0x4AC50A: fcomp   [esp+18h+var_8]
0x4AC50E: fnstsw  ax
0x4AC510: test    ah, 44h
0x4AC513: jp      loc_4ABE7E
0x4AC519: mov     ecx, esi
0x4AC51B: call    sub_4A9E70
0x4AC520: fstp    [esp+18h+var_8]
0x4AC524: mov     ecx, edi
0x4AC526: call    sub_4A9E70
0x4AC52B: fcomp   [esp+18h+var_8]
0x4AC52F: fnstsw  ax
0x4AC531: test    ah, 44h
0x4AC534: jp      loc_4ABE7E
0x4AC53A: mov     ecx, esi
0x4AC53C: call    sub_4A9EB0
0x4AC541: fstp    [esp+18h+var_8]
0x4AC545: mov     ecx, edi
0x4AC547: call    sub_4A9EB0
0x4AC54C: fcomp   [esp+18h+var_8]
0x4AC550: fnstsw  ax
0x4AC552: test    ah, 44h
0x4AC555: jp      loc_4ABE7E
0x4AC55B: mov     ecx, esi
0x4AC55D: call    sub_4A9EF0
0x4AC562: fstp    [esp+18h+var_8]
0x4AC566: mov     ecx, edi
0x4AC568: call    sub_4A9EF0
0x4AC56D: fcomp   [esp+18h+var_8]
0x4AC571: fnstsw  ax
0x4AC573: test    ah, 44h
0x4AC576: jp      loc_4ABE7E
0x4AC57C: mov     ecx, esi
0x4AC57E: call    sub_4A9F30
0x4AC583: fstp    [esp+18h+var_8]
0x4AC587: mov     ecx, edi
0x4AC589: call    sub_4A9F30
0x4AC58E: fcomp   [esp+18h+var_8]
0x4AC592: fnstsw  ax
0x4AC594: test    ah, 44h
0x4AC597: jp      loc_4ABE7E
0x4AC59D: mov     ecx, esi
0x4AC59F: call    sub_4A9F70
0x4AC5A4: fstp    [esp+18h+var_8]
0x4AC5A8: mov     ecx, edi
0x4AC5AA: call    sub_4A9F70
0x4AC5AF: fcomp   [esp+18h+var_8]
0x4AC5B3: fnstsw  ax
0x4AC5B5: test    ah, 44h
0x4AC5B8: jp      loc_4ABE7E
0x4AC5BE: mov     ecx, esi
0x4AC5C0: call    sub_4A9FB0
0x4AC5C5: fstp    [esp+18h+var_8]
0x4AC5C9: mov     ecx, edi
0x4AC5CB: call    sub_4A9FB0
0x4AC5D0: fcomp   [esp+18h+var_8]
0x4AC5D4: fnstsw  ax
0x4AC5D6: test    ah, 44h
0x4AC5D9: jp      loc_4ABE7E
0x4AC5DF: mov     ecx, esi
0x4AC5E1: call    sub_4A9FF0
0x4AC5E6: fstp    [esp+18h+var_8]
0x4AC5EA: mov     ecx, edi
0x4AC5EC: call    sub_4A9FF0
0x4AC5F1: fcomp   [esp+18h+var_8]
0x4AC5F5: fnstsw  ax
0x4AC5F7: test    ah, 44h
0x4AC5FA: jp      loc_4ABE7E
0x4AC600: mov     ecx, esi
0x4AC602: call    sub_4AA0B0
0x4AC607: fstp    [esp+18h+var_8]
0x4AC60B: mov     ecx, edi
0x4AC60D: call    sub_4AA0B0
0x4AC612: fcomp   [esp+18h+var_8]
0x4AC616: fnstsw  ax
0x4AC618: test    ah, 44h
0x4AC61B: jp      loc_4ABE7E
0x4AC621: mov     ecx, esi
0x4AC623: call    CombatStyle_GetAttackDuringBlockMult
0x4AC628: fstp    [esp+18h+var_8]
0x4AC62C: mov     ecx, edi
0x4AC62E: call    CombatStyle_GetAttackDuringBlockMult
0x4AC633: fcomp   [esp+18h+var_8]
0x4AC637: fnstsw  ax
0x4AC639: test    ah, 44h
0x4AC63C: jp      loc_4ABE7E
0x4AC642: mov     ecx, esi
0x4AC644: call    sub_4AA130
0x4AC649: fstp    [esp+18h+var_8]
0x4AC64D: mov     ecx, edi
0x4AC64F: call    sub_4AA130
0x4AC654: fcomp   [esp+18h+var_8]
0x4AC658: fnstsw  ax
0x4AC65A: test    ah, 44h
0x4AC65D: jp      loc_4ABE7E
0x4AC663: mov     ecx, esi
0x4AC665: call    sub_4AA170
0x4AC66A: fstp    [esp+18h+var_8]
0x4AC66E: mov     ecx, edi
0x4AC670: call    sub_4AA170
0x4AC675: fcomp   [esp+18h+var_8]
0x4AC679: fnstsw  ax
0x4AC67B: test    ah, 44h
0x4AC67E: jp      loc_4ABE7E
0x4AC684: mov     ecx, esi
0x4AC686: call    sub_4AA1B0
0x4AC68B: fstp    [esp+18h+var_8]
0x4AC68F: mov     ecx, edi
0x4AC691: call    sub_4AA1B0
0x4AC696: fcomp   [esp+18h+var_8]
0x4AC69A: fnstsw  ax
0x4AC69C: test    ah, 44h
0x4AC69F: jp      loc_4ABE7E
0x4AC6A5: pop     edi
0x4AC6A6: pop     esi
0x4AC6A7: xor     al, al
0x4AC6A9: pop     ebx
0x4AC6AA: mov     esp, ebp
0x4AC6AC: pop     ebp
0x4AC6AD: retn    4
