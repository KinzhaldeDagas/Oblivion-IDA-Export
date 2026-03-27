0x5BE6F0: fld     [esp+hinstDLL]
0x5BE6F4: fisub   dword ptr [ecx+0E0h]
0x5BE6FA: fstp    [esp+hinstDLL]
0x5BE6FE: fld     [esp+fdwReason]
0x5BE702: fisub   dword ptr [ecx+0E4h]
0x5BE708: fstp    [esp+fdwReason]; fdwReason
0x5BE70C: fld     [esp+fdwReason]
0x5BE710: fld     [esp+hinstDLL]
0x5BE714: call    sub_98598A
0x5BE719: fstp    [esp+hinstDLL]
0x5BE71D: fld     [esp+hinstDLL]
0x5BE721: fmul    qword ptr ds:0A30DC8h
0x5BE727: call    Double_To_SInt32
0x5BE72C: cmp     eax, 1
0x5BE72F: mov     [esp+hinstDLL], eax; hinstDLL
0x5BE733: jge     short loc_5BE744
0x5BE735: fild    [esp+hinstDLL]
0x5BE739: fadd    qword ptr ds:0A56CA0h
0x5BE73F: call    Double_To_SInt32
0x5BE744: lea     ecx, [eax-2Dh]
0x5BE747: cmp     ecx, 10Dh
0x5BE74D: ja      short _DllMain@12; DllMain(x,x,x)
0x5BE74F: cmp     eax, 87h ; '‡'
0x5BE754: jge     short loc_5BE75E
0x5BE756: mov     eax, 2
0x5BE75B: retn    0Ch
0x5BE75E: xor     edx, edx
0x5BE760: cmp     eax, 0E1h ; 'á'
0x5BE765: setnl   dl
0x5BE768: sub     edx, 1
0x5BE76B: and     edx, 3
0x5BE76E: mov     eax, edx
0x5BE770: retn    0Ch
