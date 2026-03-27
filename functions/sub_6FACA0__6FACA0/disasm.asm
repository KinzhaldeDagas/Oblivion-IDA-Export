0x6FACA0: sub     esp, 3Ch
0x6FACA3: fldz
0x6FACA5: push    ecx
0x6FACA6: fst     [esp+40h+var_3C]
0x6FACAA: lea     ecx, [esp+40h+var_24]
0x6FACAE: fld     [esp+40h+arg_0]
0x6FACB2: fmul    qword ptr ds:0A309F0h
0x6FACB8: fstp    [esp+40h+var_38]
0x6FACBC: fstp    [esp+40h+var_34]
0x6FACC0: fld     [esp+40h+arg_4]
0x6FACC4: fstp    [esp+40h+var_40]; float
0x6FACC7: call    NiMatrix33_InitRotationTransform
0x6FACCC: lea     eax, [esp+3Ch+var_24]
0x6FACD0: push    eax
0x6FACD1: lea     ecx, [esp+40h+var_3C]
0x6FACD5: push    ecx
0x6FACD6: lea     edx, [esp+44h+var_30]
0x6FACDA: push    edx
0x6FACDB: call    sub_710250
0x6FACE0: mov     ecx, [eax]
0x6FACE2: mov     ds:0B3F494h, ecx
0x6FACE8: mov     edx, [eax+4]
0x6FACEB: mov     ds:0B3F498h, edx
0x6FACF1: mov     eax, [eax+8]
0x6FACF4: mov     ds:0B3F49Ch, eax
0x6FACF9: add     esp, 48h
0x6FACFC: retn
