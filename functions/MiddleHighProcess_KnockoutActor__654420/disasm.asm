0x654420: push    ebp
0x654421: mov     ebp, esp
0x654423: and     esp, 0FFFFFFF0h
0x654426: sub     esp, 48h
0x654429: mov     eax, ds:0B30AACh
0x65442E: xor     eax, esp
0x654430: mov     [esp+48h+var_4], eax
0x654434: push    esi
0x654435: mov     esi, [ebp+arg_0]
0x654438: push    edi
0x654439: mov     edi, ecx
0x65443B: cmp     byte ptr [edi+11Ch], 0
0x654442: jnz     loc_6545C2
0x654448: mov     eax, [esi]
0x65444A: mov     edx, [eax+198h]
0x654450: push    0
0x654452: mov     ecx, esi
0x654454: call    edx
0x654456: test    al, al
0x654458: jnz     loc_6545C2
0x65445E: mov     eax, [esi]
0x654460: mov     edx, [eax+278h]
0x654466: mov     ecx, esi
0x654468: call    edx
0x65446A: test    al, al
0x65446C: jnz     loc_654518
0x654472: mov     ecx, esi; this
0x654474: call    MobileObject_GetCharProxy
0x654479: mov     esi, eax
0x65447B: lea     eax, [esp+50h+var_2C]
0x65447F: push    eax
0x654480: mov     ecx, esi
0x654482: call    sub_5E1500
0x654487: fld     [esp+50h+var_2C]
0x65448B: fsub    [ebp+arg_4]
0x65448E: lea     ecx, [esp+50h+var_38]
0x654492: fstp    [esp+50h+var_38]
0x654496: fld     [esp+50h+var_28]
0x65449A: fsub    [ebp+arg_8]
0x65449D: fstp    [esp+50h+var_34]
0x6544A1: fldz
0x6544A3: fstp    [esp+50h+var_30]
0x6544A7: call    sub_43F350
0x6544AC: fstp    st
0x6544AE: fld     [ebp+arg_10]
0x6544B1: push    ecx
0x6544B2: fdiv    dword ptr ds:0B37E98h
0x6544B8: lea     ecx, [esp+54h+var_38]
0x6544BC: fld     dword ptr ds:0B37EB8h
0x6544C2: fmul    st, st(1)
0x6544C4: fstp    [esp+54h+var_3C]
0x6544C8: fld     [esp+54h+var_38]
0x6544CC: fld     [esp+54h+var_3C]
0x6544D0: fld     st
0x6544D2: fmulp   st(2), st
0x6544D4: fxch    st(1)
0x6544D6: fstp    [esp+54h+var_38]
0x6544DA: fld     [esp+54h+var_34]
0x6544DE: fmul    st, st(1)
0x6544E0: fstp    [esp+54h+var_34]
0x6544E4: fmul    [esp+54h+var_30]
0x6544E8: fstp    [esp+54h+var_30]
0x6544EC: fmul    dword ptr ds:0B37EC0h
0x6544F2: fstp    [esp+54h+var_3C]
0x6544F6: fld     [esp+54h+var_3C]
0x6544FA: fstp    [esp+54h+var_54]; float
0x6544FD: push    ecx; int
0x6544FE: mov     ecx, esi
0x654500: call    sub_8907A0
0x654505: pop     edi
0x654506: pop     esi
0x654507: mov     ecx, [esp+48h+var_4]
0x65450B: xor     ecx, esp
0x65450D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x654512: mov     esp, ebp
0x654514: pop     ebp
0x654515: retn    14h
0x654518: mov     edx, [edi]
0x65451A: mov     eax, [edx+36Ch]
0x654520: mov     ecx, edi
0x654522: call    eax
0x654524: test    eax, eax
0x654526: jz      short loc_654546
0x654528: mov     edx, [esi]
0x65452A: mov     eax, [edx+380h]
0x654530: mov     ecx, esi
0x654532: call    eax
0x654534: test    eax, eax
0x654536: mov     ecx, esi
0x654538: jz      short loc_654541
0x65453A: call    sub_5F0410
0x65453F: jmp     short loc_654546
0x654541: call    sub_5E4140
0x654546: mov     edx, [edi]
0x654548: mov     eax, [edx+20h]
0x65454B: mov     ecx, edi
0x65454D: mov     byte ptr [edi+11Ch], 2
0x654554: call    eax
0x654556: mov     ecx, ds:0B333C4h
0x65455C: cmp     esi, ecx
0x65455E: jnz     short loc_65456B
0x654560: push    0
0x654562: call    PlayerCharacter_GetPlayerNode
0x654567: mov     esi, eax
0x654569: jmp     short loc_65456E
0x65456B: mov     esi, [esi+3Ch]
0x65456E: push    0; a4
0x654570: push    1; a3
0x654572: push    1; a2
0x654574: push    esi; a1
0x654575: call    sub_88D070
0x65457A: fldz
0x65457C: add     esp, 10h
0x65457F: push    0; a3
0x654581: push    ecx
0x654582: mov     ecx, esi; this
0x654584: fstp    [esp+58h+a2]; a2
0x654587: call    NiAVObject_UpdateNiAVObject
0x65458C: fld     [ebp+arg_4]
0x65458F: fld     qword ptr ds:0A39088h
0x654595: push    ecx
0x654596: fmul    st(1), st
0x654598: lea     ecx, [esp+54h+var_20]
0x65459C: fxch    st(1)
0x65459E: fstp    [esp+54h+var_20]
0x6545A2: fld     [ebp+arg_8]
0x6545A5: fmul    st, st(1)
0x6545A7: fstp    [esp+54h+var_1C]
0x6545AB: fmul    [ebp+arg_C]
0x6545AE: fstp    [esp+54h+var_18]
0x6545B2: fld     [ebp+arg_10]
0x6545B5: fstp    [esp+54h+var_54]; float
0x6545B8: push    ecx; int
0x6545B9: push    esi; int
0x6545BA: call    sub_5364B0
0x6545BF: add     esp, 0Ch
0x6545C2: mov     ecx, [esp+50h+var_4]
0x6545C6: pop     edi
0x6545C7: pop     esi
0x6545C8: xor     ecx, esp
0x6545CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6545CF: mov     esp, ebp
0x6545D1: pop     ebp
0x6545D2: retn    14h
