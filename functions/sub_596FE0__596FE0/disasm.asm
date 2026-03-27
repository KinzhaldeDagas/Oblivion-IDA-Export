0x596FE0: push    0FFFFFFFFh
0x596FE2: push    offset SEH_596FE0
0x596FE7: mov     eax, large fs:0
0x596FED: push    eax
0x596FEE: sub     esp, 8
0x596FF1: push    ebx
0x596FF2: push    esi
0x596FF3: push    edi
0x596FF4: mov     eax, ds:0B30AACh
0x596FF9: xor     eax, esp
0x596FFB: push    eax; a3
0x596FFC: lea     eax, [esp+24h+var_C]
0x597000: mov     large fs:0, eax
0x597006: mov     esi, ecx
0x597008: mov     eax, [esp+24h+arg_0]
0x59700C: cmp     eax, 4
0x59700F: jnz     loc_5970CF
0x597015: mov     [esp+24h+var_14], 0
0x59701D: mov     [esp+24h+var_10], 0
0x597024: mov     [esp+24h+var_E], 0
0x59702B: mov     esi, [esi+3Ch]
0x59702E: add     esi, 18h
0x597031: mov     esi, [esi+4]
0x597034: test    esi, esi
0x597036: mov     [esp+24h+var_4], 0
0x59703E: jnz     short loc_597045
0x597040: mov     esi, offset EmptyString
0x597045: xor     eax, eax
0x597047: test    esi, esi
0x597049: jz      short loc_59707F
0x59704B: mov     al, [esi]
0x59704D: cmp     al, 61h ; 'a'
0x59704F: jz      short loc_59707A
0x597051: cmp     al, 65h ; 'e'
0x597053: jz      short loc_59707A
0x597055: cmp     al, 69h ; 'i'
0x597057: jz      short loc_59707A
0x597059: cmp     al, 6Fh ; 'o'
0x59705B: jz      short loc_59707A
0x59705D: cmp     al, 75h ; 'u'
0x59705F: jz      short loc_59707A
0x597061: cmp     al, 41h ; 'A'
0x597063: jz      short loc_59707A
0x597065: cmp     al, 45h ; 'E'
0x597067: jz      short loc_59707A
0x597069: cmp     al, 49h ; 'I'
0x59706B: jz      short loc_59707A
0x59706D: cmp     al, 4Fh ; 'O'
0x59706F: jz      short loc_59707A
0x597071: cmp     al, 55h ; 'U'
0x597073: mov     eax, ds:0B38660h
0x597078: jnz     short loc_59707F
0x59707A: mov     eax, ds:0B38668h
0x59707F: push    esi
0x597080: push    eax; ArgList
0x597081: lea     eax, [esp+2Ch+var_14]
0x597085: push    offset aSS?; "%s %s?"
0x59708A: push    eax; int
0x59708B: call    BSStringT_Static_Format
0x597090: mov     ecx, ds:0B38CF8h
0x597096: mov     edx, ds:0B38D00h
0x59709C: mov     esi, [esp+34h+var_14]
0x5970A0: push    0
0x5970A2: push    ecx
0x5970A3: push    edx
0x5970A4: push    1
0x5970A6: push    offset sub_596A00
0x5970AB: push    esi
0x5970AC: call    ShowUIMessageBox
0x5970B1: push    esi
0x5970B2: call    FormHeapFree
0x5970B7: add     esp, 2Ch
0x5970BA: mov     ecx, [esp+24h+var_C]
0x5970BE: mov     large fs:0, ecx
0x5970C5: pop     ecx
0x5970C6: pop     edi
0x5970C7: pop     esi
0x5970C8: pop     ebx
0x5970C9: add     esp, 14h
0x5970CC: retn    8
0x5970CF: cmp     eax, 63h ; 'c'
0x5970D2: jnz     short loc_59713B
0x5970D4: fld     dword ptr ds:0A379B4h
0x5970DA: mov     edi, [esp+24h+arg_4]
0x5970DE: push    ecx
0x5970DF: fstp    [esp+28h+a2]; a3
0x5970E2: push    0FB0h; a2
0x5970E7: mov     ecx, edi; this
0x5970E9: call    Tile_SetFloat
0x5970EE: push    edi
0x5970EF: mov     ecx, esi
0x5970F1: call    sub_596BC0
0x5970F6: mov     ebx, eax
0x5970F8: test    ebx, ebx
0x5970FA: jz      short loc_597158
0x5970FC: push    0Bh; int
0x5970FE: call    sub_57DE50
0x597103: add     esp, 4
0x597106: push    0FAAh
0x59710B: mov     ecx, edi
0x59710D: call    Tile_GetFloat
0x597112: call    Double_To_SInt32
0x597117: push    0
0x597119: mov     ecx, esi
0x59711B: mov     [esi+44h], eax
0x59711E: mov     [esi+3Ch], ebx
0x597121: call    sub_596CF0
0x597126: mov     ecx, [esp+24h+var_C]
0x59712A: mov     large fs:0, ecx
0x597131: pop     ecx
0x597132: pop     edi
0x597133: pop     esi
0x597134: pop     ebx
0x597135: add     esp, 14h
0x597138: retn    8
0x59713B: cmp     eax, 5
0x59713E: jnz     short loc_597158
0x597140: push    1; int
0x597142: call    sub_57DE50
0x597147: add     esp, 4
0x59714A: mov     ecx, esi; int
0x59714C: mov     dword ptr [esi+58h], 1
0x597153: call    sub_584740
0x597158: mov     ecx, [esp+24h+var_C]
0x59715C: mov     large fs:0, ecx
0x597163: pop     ecx
0x597164: pop     edi
0x597165: pop     esi
0x597166: pop     ebx
0x597167: add     esp, 14h
0x59716A: retn    8
