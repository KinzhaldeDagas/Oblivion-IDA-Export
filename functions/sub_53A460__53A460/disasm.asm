0x53A460: sub     esp, 8
0x53A463: fld1
0x53A465: mov     edx, ds:0B11B2Ch
0x53A46B: lea     eax, [esp+8+var_4]
0x53A46F: fst     [esp+8+var_8]
0x53A472: push    eax
0x53A473: fstp    [esp+0Ch+var_4]
0x53A477: lea     ecx, [esp+0Ch+var_8]
0x53A47B: push    ecx
0x53A47C: push    offset aFF; "%f, %f"
0x53A481: push    edx; Src
0x53A482: call    _sscanf
0x53A487: fld     [esp+18h+var_8]
0x53A48B: mov     edx, ds:0B11B24h
0x53A491: fstp    dword ptr ds:0B2ED70h
0x53A497: fld     [esp+18h+var_4]
0x53A49B: lea     eax, [esp+18h+var_8]
0x53A49F: push    eax
0x53A4A0: fstp    dword ptr ds:0B2ED74h
0x53A4A6: fld1
0x53A4A8: lea     ecx, [esp+1Ch+var_4]
0x53A4AC: push    ecx
0x53A4AD: fst     [esp+20h+var_4]
0x53A4B1: push    offset aFF; "%f, %f"
0x53A4B6: fstp    [esp+24h+var_8]
0x53A4BA: push    edx; Src
0x53A4BB: call    _sscanf
0x53A4C0: fld     [esp+28h+var_4]
0x53A4C4: mov     edx, ds:0B11B1Ch
0x53A4CA: fstp    dword ptr ds:0B2ED78h
0x53A4D0: fld     [esp+28h+var_8]
0x53A4D4: lea     eax, [esp+28h+var_8]
0x53A4D8: push    eax
0x53A4D9: fstp    dword ptr ds:0B2ED7Ch
0x53A4DF: fld1
0x53A4E1: lea     ecx, [esp+2Ch+var_4]
0x53A4E5: push    ecx
0x53A4E6: fst     [esp+30h+var_4]
0x53A4EA: push    offset aFF; "%f, %f"
0x53A4EF: fstp    [esp+34h+var_8]
0x53A4F3: push    edx; Src
0x53A4F4: call    _sscanf
0x53A4F9: fld     [esp+38h+var_4]
0x53A4FD: mov     edx, ds:0B11B14h
0x53A503: fstp    dword ptr ds:0B2ED80h
0x53A509: fld     [esp+38h+var_8]
0x53A50D: lea     eax, [esp+38h+var_8]
0x53A511: push    eax
0x53A512: fstp    dword ptr ds:0B2ED84h
0x53A518: fld1
0x53A51A: lea     ecx, [esp+3Ch+var_4]
0x53A51E: push    ecx
0x53A51F: fst     [esp+40h+var_4]
0x53A523: push    offset aFF; "%f, %f"
0x53A528: fstp    [esp+44h+var_8]
0x53A52C: push    edx; Src
0x53A52D: call    _sscanf
0x53A532: fld     [esp+48h+var_4]
0x53A536: mov     edx, ds:0B11B0Ch
0x53A53C: fstp    dword ptr ds:0B2ED88h
0x53A542: fld     [esp+48h+var_8]
0x53A546: add     esp, 40h
0x53A549: lea     eax, [esp+8+var_8]
0x53A54C: fstp    dword ptr ds:0B2ED8Ch
0x53A552: fld1
0x53A554: push    eax
0x53A555: lea     ecx, [esp+0Ch+var_4]
0x53A559: fst     [esp+0Ch+var_4]
0x53A55D: push    ecx
0x53A55E: fstp    [esp+10h+var_8]
0x53A562: push    offset aFF; "%f, %f"
0x53A567: push    edx; Src
0x53A568: call    _sscanf
0x53A56D: fld     [esp+18h+var_4]
0x53A571: fstp    dword ptr ds:0B2ED90h
0x53A577: lea     eax, [esp+18h+var_8]
0x53A57B: fld     [esp+18h+var_8]
0x53A57F: push    eax
0x53A580: fstp    dword ptr ds:0B2ED94h
0x53A586: fld1
0x53A588: fst     [esp+1Ch+var_4]
0x53A58C: fstp    [esp+1Ch+var_8]
0x53A590: mov     edx, ds:0B11B04h
0x53A596: lea     ecx, [esp+1Ch+var_4]
0x53A59A: push    ecx
0x53A59B: push    offset aFF; "%f, %f"
0x53A5A0: push    edx; Src
0x53A5A1: call    _sscanf
0x53A5A6: fld     [esp+28h+var_4]
0x53A5AA: mov     edx, ds:0B11AFCh
0x53A5B0: fstp    dword ptr ds:0B2ED98h
0x53A5B6: fld     [esp+28h+var_8]
0x53A5BA: lea     eax, [esp+28h+var_8]
0x53A5BE: push    eax
0x53A5BF: fstp    dword ptr ds:0B2ED9Ch
0x53A5C5: fld1
0x53A5C7: lea     ecx, [esp+2Ch+var_4]
0x53A5CB: push    ecx
0x53A5CC: fst     [esp+30h+var_4]
0x53A5D0: push    offset aFF; "%f, %f"
0x53A5D5: fstp    [esp+34h+var_8]
0x53A5D9: push    edx; Src
0x53A5DA: call    _sscanf
0x53A5DF: fld     [esp+38h+var_4]
0x53A5E3: mov     edx, ds:0B11AF4h
0x53A5E9: fstp    dword ptr ds:0B2EDA8h
0x53A5EF: fld     [esp+38h+var_8]
0x53A5F3: lea     eax, [esp+38h+var_8]
0x53A5F7: push    eax
0x53A5F8: fstp    dword ptr ds:0B2EDACh
0x53A5FE: fld1
0x53A600: lea     ecx, [esp+3Ch+var_4]
0x53A604: push    ecx
0x53A605: fst     [esp+40h+var_4]
0x53A609: push    offset aFF; "%f, %f"
0x53A60E: fstp    [esp+44h+var_8]
0x53A612: push    edx; Src
0x53A613: call    _sscanf
0x53A618: fld     [esp+48h+var_4]
0x53A61C: mov     edx, ds:0B11AECh
0x53A622: fstp    dword ptr ds:0B2EDB0h
0x53A628: fld     [esp+48h+var_8]
0x53A62C: add     esp, 40h
0x53A62F: lea     eax, [esp+8+var_8]
0x53A632: fstp    dword ptr ds:0B2EDB4h
0x53A638: fld1
0x53A63A: push    eax
0x53A63B: lea     ecx, [esp+0Ch+var_4]
0x53A63F: fst     [esp+0Ch+var_4]
0x53A643: push    ecx
0x53A644: fstp    [esp+10h+var_8]
0x53A648: push    offset aFF; "%f, %f"
0x53A64D: push    edx; Src
0x53A64E: call    _sscanf
0x53A653: fld     [esp+18h+var_4]
0x53A657: mov     edx, ds:0B11AE4h
0x53A65D: fstp    dword ptr ds:0B2EDC0h
0x53A663: fld     [esp+18h+var_8]
0x53A667: lea     eax, [esp+18h+var_8]
0x53A66B: push    eax
0x53A66C: fstp    dword ptr ds:0B2EDC4h
0x53A672: fld1
0x53A674: lea     ecx, [esp+1Ch+var_4]
0x53A678: push    ecx
0x53A679: fst     [esp+20h+var_4]
0x53A67D: push    offset aFF; "%f, %f"
0x53A682: fstp    [esp+24h+var_8]
0x53A686: push    edx; Src
0x53A687: call    _sscanf
0x53A68C: fld     [esp+28h+var_4]
0x53A690: mov     edx, ds:0B11ADCh
0x53A696: fstp    dword ptr ds:0B2EDC8h
0x53A69C: fld     [esp+28h+var_8]
0x53A6A0: lea     eax, [esp+28h+var_8]
0x53A6A4: push    eax
0x53A6A5: fstp    dword ptr ds:0B2EDCCh
0x53A6AB: fld1
0x53A6AD: lea     ecx, [esp+2Ch+var_4]
0x53A6B1: push    ecx
0x53A6B2: fst     [esp+30h+var_4]
0x53A6B6: push    offset aFF; "%f, %f"
0x53A6BB: fstp    [esp+34h+var_8]
0x53A6BF: push    edx; Src
0x53A6C0: call    _sscanf
0x53A6C5: fld     [esp+38h+var_4]
0x53A6C9: mov     edx, ds:0B11AD4h
0x53A6CF: fstp    dword ptr ds:0B2EDD8h
0x53A6D5: fld     [esp+38h+var_8]
0x53A6D9: lea     eax, [esp+38h+var_8]
0x53A6DD: push    eax
0x53A6DE: fstp    dword ptr ds:0B2EDDCh
0x53A6E4: fld1
0x53A6E6: lea     ecx, [esp+3Ch+var_4]
0x53A6EA: push    ecx
0x53A6EB: fst     [esp+40h+var_4]
0x53A6EF: push    offset aFF; "%f, %f"
0x53A6F4: fstp    [esp+44h+var_8]
0x53A6F8: push    edx; Src
0x53A6F9: call    _sscanf
0x53A6FE: fld     [esp+48h+var_4]
0x53A702: fstp    dword ptr ds:0B2EDE0h
0x53A708: add     esp, 40h
0x53A70B: fld     [esp+8+var_8]
0x53A70E: fstp    dword ptr ds:0B2EDE4h
0x53A714: add     esp, 8
0x53A717: retn
