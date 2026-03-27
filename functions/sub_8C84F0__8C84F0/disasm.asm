0x8C84F0: push    ebp
0x8C84F1: mov     ebp, esp
0x8C84F3: and     esp, 0FFFFFFF0h
0x8C84F6: push    0FFFFFFFFh
0x8C84F8: push    offset SEH_8C84F0
0x8C84FD: mov     eax, large fs:0
0x8C8503: push    eax
0x8C8504: sub     esp, 88h
0x8C850A: mov     eax, ds:0B30AACh
0x8C850F: xor     eax, esp
0x8C8511: mov     [esp+94h+var_14], eax
0x8C8518: push    ebx
0x8C8519: push    esi
0x8C851A: push    edi
0x8C851B: mov     eax, ds:0B30AACh
0x8C8520: xor     eax, esp
0x8C8522: push    eax
0x8C8523: lea     eax, [esp+0A4h+var_C]
0x8C852A: mov     large fs:0, eax
0x8C8530: fld     dword ptr ds:0B2EFC4h
0x8C8536: mov     ebx, [ebp+arg_0]
0x8C8539: fstp    [esp+0A4h+var_8C]
0x8C853D: lea     eax, [esp+0A4h+var_90]
0x8C8541: fldz
0x8C8543: xor     esi, esi
0x8C8545: fst     [esp+0A4h+var_60]
0x8C8549: push    eax
0x8C854A: fst     [esp+0A8h+var_80]
0x8C854E: mov     edi, ecx
0x8C8550: fst     [esp+0A8h+var_7C]
0x8C8554: mov     [esp+0A8h+var_90], esi
0x8C8558: fst     [esp+0A8h+var_78]
0x8C855C: fst     [esp+0A8h+var_74]
0x8C8560: fld1
0x8C8562: fstp    [esp+0A8h+var_70]
0x8C8566: fst     [esp+0A8h+var_6C]
0x8C856A: fst     [esp+0A8h+var_68]
0x8C856E: fstp    [esp+0A8h+var_64]
0x8C8572: call    sub_8C8080
0x8C8577: mov     ecx, ds:0BA7D98h
0x8C857D: mov     edx, [ecx]
0x8C857F: mov     eax, [edx+10h]
0x8C8582: push    8
0x8C8584: push    90h
0x8C8589: call    eax
0x8C858B: mov     word ptr [eax+4], 90h
0x8C8591: mov     [esp+0A4h+var_44], eax
0x8C8595: fld     [esp+0A4h+var_70]
0x8C8599: fstp    [esp+0A4h+var_40]
0x8C859D: push    1
0x8C859F: fld     [esp+0A8h+var_6C]
0x8C85A3: push    9
0x8C85A5: fstp    [esp+0ACh+var_3C]
0x8C85A9: push    ecx
0x8C85AA: fld     [esp+0B0h+var_68]
0x8C85AE: lea     ecx, [esp+0B0h+var_40]
0x8C85B2: fstp    [esp+0B0h+var_38]
0x8C85B6: lea     edx, [esp+0B0h+var_30]
0x8C85BD: fld     [esp+0B0h+var_64]
0x8C85C1: mov     [esp+0B0h+var_4], esi
0x8C85C8: fstp    [esp+0B0h+var_34]
0x8C85CC: fld     [esp+0B0h+var_80]
0x8C85D0: fstp    [esp+0B0h+var_30]
0x8C85D7: fld     [esp+0B0h+var_7C]
0x8C85DB: fstp    [esp+0B0h+var_2C]
0x8C85E2: fld     [esp+0B0h+var_78]
0x8C85E6: fstp    [esp+0B0h+var_28]
0x8C85ED: fld     [esp+0B0h+var_74]
0x8C85F1: fstp    [esp+0B0h+var_24]
0x8C85F8: fld     [esp+0B0h+var_60]
0x8C85FC: fstp    [esp+0B0h+var_B0]
0x8C85FF: push    ecx
0x8C8600: push    edx
0x8C8601: mov     ecx, eax
0x8C8603: call    sub_916380
0x8C8608: mov     esi, eax
0x8C860A: mov     eax, [esi]
0x8C860C: mov     edx, [eax+0Ch]
0x8C860F: mov     ecx, esi
0x8C8611: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x8C861C: call    edx
0x8C861E: mov     esi, [esi+50h]
0x8C8621: test    esi, esi
0x8C8623: jz      short loc_8C8638
0x8C8625: mov     eax, [edi]
0x8C8627: mov     edx, [eax+94h]
0x8C862D: push    offset aBhkcylindersha; "bhkCylinderShape"
0x8C8632: push    esi
0x8C8633: push    ebx
0x8C8634: mov     ecx, edi
0x8C8636: call    edx
0x8C8638: mov     ecx, [esp+0A4h+var_C]
0x8C863F: mov     large fs:0, ecx
0x8C8646: pop     ecx
0x8C8647: pop     edi
0x8C8648: pop     esi
0x8C8649: pop     ebx
0x8C864A: mov     ecx, [esp+94h+var_14]
0x8C8651: xor     ecx, esp
0x8C8653: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C8658: mov     esp, ebp
0x8C865A: pop     ebp
0x8C865B: retn    4
