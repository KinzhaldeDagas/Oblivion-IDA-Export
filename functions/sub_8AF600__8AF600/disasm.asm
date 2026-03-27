0x8AF600: push    ecx
0x8AF601: push    esi
0x8AF602: push    edi
0x8AF603: mov     edi, ecx
0x8AF605: test    edi, edi
0x8AF607: jz      short loc_8AF615
0x8AF609: mov     eax, [edi+8]
0x8AF60C: test    eax, eax
0x8AF60E: jz      short loc_8AF615
0x8AF610: fld     dword ptr [eax+0Ch]
0x8AF613: jmp     short loc_8AF61B
0x8AF615: fld     dword ptr ds:0B2EFC4h
0x8AF61B: fstp    [esp+0Ch+var_4]
0x8AF61F: push    0; int
0x8AF621: fld     [esp+10h+var_4]
0x8AF625: push    0Ah; int
0x8AF627: fmul    qword ptr ds:0A372E0h
0x8AF62D: push    0Ah; int
0x8AF62F: push    ecx
0x8AF630: fstp    [esp+1Ch+var_4]
0x8AF634: fld     [esp+1Ch+var_4]
0x8AF638: fstp    [esp+1Ch+var_1C]; float
0x8AF63B: call    sub_6FC010
0x8AF640: mov     esi, eax
0x8AF642: add     esp, 10h
0x8AF645: test    esi, esi
0x8AF647: jz      short loc_8AF673
0x8AF649: mov     eax, [edi]
0x8AF64B: mov     edx, [eax+98h]
0x8AF651: push    esi
0x8AF652: mov     ecx, edi
0x8AF654: call    edx
0x8AF656: push    offset aBhksphereshape; "bhkSphereShape"
0x8AF65B: mov     ecx, esi
0x8AF65D: call    NiObjectNET_SetName
0x8AF662: mov     ecx, [esp+0Ch+arg_0]
0x8AF666: mov     eax, [ecx]
0x8AF668: mov     edx, [eax+84h]
0x8AF66E: push    0
0x8AF670: push    esi
0x8AF671: call    edx
0x8AF673: pop     edi
0x8AF674: pop     esi
0x8AF675: pop     ecx
0x8AF676: retn    4
