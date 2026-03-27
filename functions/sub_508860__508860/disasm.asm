0x508860: sub     esp, 10h
0x508863: fldz
0x508865: lea     eax, [esp+10h+var_10]
0x508868: push    eax
0x508869: fst     [esp+14h+var_8]
0x50886D: lea     ecx, [esp+14h+var_C]
0x508871: fst     [esp+14h+var_C]
0x508875: push    ecx
0x508876: fstp    [esp+18h+var_10]
0x50887A: mov     ecx, [esp+18h+l]
0x50887E: lea     edx, [esp+18h+var_8]
0x508882: push    edx
0x508883: mov     edx, [esp+1Ch+arg_10]
0x508887: lea     eax, [esp+1Ch+var_4]
0x50888B: push    eax; UInt16
0x50888C: mov     eax, [esp+20h+arg_C]
0x508890: push    ecx; l
0x508891: mov     ecx, [esp+24h+a4]
0x508895: push    edx; a6
0x508896: mov     edx, [esp+28h+a3]
0x50889A: push    eax; a5
0x50889B: mov     eax, [esp+2Ch+arg_4]
0x50889F: push    ecx; a4
0x5088A0: mov     ecx, [esp+30h+a1]
0x5088A4: push    edx; a3
0x5088A5: push    eax; a2
0x5088A6: push    ecx; a1
0x5088A7: mov     dword ptr [esp+3Ch+var_4], 0
0x5088AF: call    Script_ExtractArgs
0x5088B4: add     esp, 2Ch
0x5088B7: test    al, al
0x5088B9: jnz     short loc_5088BF
0x5088BB: add     esp, 10h
0x5088BE: retn
0x5088BF: mov     eax, dword ptr [esp+10h+var_4]
0x5088C3: xor     ecx, ecx
0x5088C5: test    eax, eax
0x5088C7: jle     short loc_5088D0
0x5088C9: mov     ecx, 2
0x5088CE: jmp     short loc_5088DD
0x5088D0: jge     short loc_5088DD
0x5088D2: neg     eax
0x5088D4: mov     ecx, 1
0x5088D9: mov     dword ptr [esp+10h+var_4], eax
0x5088DD: cmp     byte ptr ds:0B43070h, 0
0x5088E4: jz      short loc_508941
0x5088E6: cmp     byte ptr ds:0B43074h, 0
0x5088ED: fld     [esp+10h+var_8]
0x5088F1: mov     ds:0B2C1E4h, ecx
0x5088F7: jz      short loc_50891D
0x5088F9: fstp    dword ptr ds:0B431FCh
0x5088FF: mov     ds:0B43224h, eax
0x508904: fld     [esp+10h+var_C]
0x508908: mov     al, 1
0x50890A: fstp    dword ptr ds:0B431ECh
0x508910: fld     [esp+10h+var_10]
0x508913: fstp    dword ptr ds:0B431F4h
0x508919: add     esp, 10h
0x50891C: retn
0x50891D: fstp    dword ptr ds:0B431F8h
0x508923: mov     ds:0B43220h, eax
0x508928: fld     [esp+10h+var_C]
0x50892C: mov     al, 1
0x50892E: fstp    dword ptr ds:0B431E8h
0x508934: fld     [esp+10h+var_10]
0x508937: fstp    dword ptr ds:0B431F0h
0x50893D: add     esp, 10h
0x508940: retn
0x508941: mov     edx, ds:0B06D54h
0x508947: fld     [esp+10h+var_10]
0x50894A: push    edx; int
0x50894B: sub     esp, 0Ch
0x50894E: fstp    [esp+20h+var_18]; float
0x508952: fld     [esp+20h+var_C]
0x508956: fstp    [esp+20h+var_1C]; float
0x50895A: fld     [esp+20h+var_8]
0x50895E: fstp    [esp+20h+var_20]; float
0x508961: push    eax; int
0x508962: push    ecx; int
0x508963: call    sub_7B4830
0x508968: add     esp, 18h
0x50896B: mov     al, 1
0x50896D: add     esp, 10h
0x508970: retn
