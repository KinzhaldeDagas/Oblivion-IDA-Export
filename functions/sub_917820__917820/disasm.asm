0x917820: push    0FFFFFFFFh
0x917822: push    offset SEH_917820
0x917827: mov     eax, large fs:0
0x91782D: push    eax
0x91782E: sub     esp, 24h
0x917831: mov     eax, ds:0B30AACh
0x917836: xor     eax, esp
0x917838: push    eax
0x917839: lea     eax, [esp+34h+var_C]
0x91783D: mov     large fs:0, eax
0x917843: mov     eax, [esp+34h+arg_0]
0x917847: mov     ecx, [eax]
0x917849: mov     edx, [eax+4]
0x91784C: xor     eax, eax
0x91784E: mov     [esp+34h+var_30], ecx
0x917852: mov     ecx, 80000000h
0x917857: mov     [esp+34h+var_2C], edx
0x91785B: mov     [esp+34h+var_28], 10h
0x917863: mov     [esp+34h+var_24], eax
0x917867: mov     [esp+34h+var_20], eax
0x91786B: mov     [esp+34h+var_1C], ecx
0x91786F: mov     [esp+34h+var_18], eax
0x917873: mov     [esp+34h+var_14], eax
0x917877: mov     [esp+34h+var_10], ecx
0x91787B: mov     [esp+34h+var_4], eax
0x91787F: mov     eax, [esp+34h+arg_4]
0x917883: push    1
0x917885: push    eax
0x917886: lea     ecx, [esp+3Ch+var_24]
0x91788A: push    ecx
0x91788B: lea     edx, [esp+40h+var_30]
0x91788F: push    edx
0x917890: call    sub_8F2010
0x917895: mov     eax, [esp+44h+arg_8]
0x917899: mov     ecx, [eax]
0x91789B: mov     edx, [esp+44h+var_24]
0x91789F: mov     [esp+44h+var_24], ecx
0x9178A3: mov     ecx, [eax+4]
0x9178A6: mov     [eax], edx
0x9178A8: mov     edx, [esp+44h+var_20]
0x9178AC: mov     [esp+44h+var_20], ecx
0x9178B0: mov     ecx, [eax+8]
0x9178B3: mov     [eax+4], edx
0x9178B6: mov     edx, [esp+44h+var_1C]
0x9178BA: mov     [esp+44h+var_1C], ecx
0x9178BE: add     esp, 10h
0x9178C1: lea     ecx, [esp+34h+var_24]
0x9178C5: mov     [eax+8], edx
0x9178C8: mov     [esp+34h+var_4], 0FFFFFFFFh
0x9178D0: call    sub_8B44C0
0x9178D5: mov     ecx, [esp+34h+var_C]
0x9178D9: mov     large fs:0, ecx
0x9178E0: pop     ecx
0x9178E1: add     esp, 30h
0x9178E4: retn
