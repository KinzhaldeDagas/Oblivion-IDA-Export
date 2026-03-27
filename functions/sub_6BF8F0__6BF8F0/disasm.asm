0x6BF8F0: mov     eax, [esp+arg_8]
0x6BF8F4: fld     [esp+arg_0]
0x6BF8F8: mov     ecx, [esp+arg_4]
0x6BF8FC: sub     esp, 10h
0x6BF8FF: add     eax, 4
0x6BF902: push    eax; int
0x6BF903: add     ecx, 4
0x6BF906: push    ecx; int
0x6BF907: push    ecx
0x6BF908: lea     edx, [esp+1Ch+var_10]
0x6BF90C: fstp    [esp+1Ch+var_1C]; float
0x6BF90F: push    edx; int
0x6BF910: call    sub_72FC00
0x6BF915: mov     edx, [eax]
0x6BF917: mov     ecx, [esp+20h+arg_C]
0x6BF91B: mov     [ecx], edx
0x6BF91D: mov     edx, [eax+4]
0x6BF920: mov     [ecx+4], edx
0x6BF923: mov     edx, [eax+8]
0x6BF926: mov     [ecx+8], edx
0x6BF929: mov     eax, [eax+0Ch]
0x6BF92C: mov     [ecx+0Ch], eax
0x6BF92F: add     esp, 20h
0x6BF932: retn
