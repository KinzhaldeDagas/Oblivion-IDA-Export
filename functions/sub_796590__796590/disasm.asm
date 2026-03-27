0x796590: sub     esp, 0Ch
0x796593: mov     eax, [esp+0Ch+arg_0]
0x796597: fld     dword ptr [eax]
0x796599: push    esi
0x79659A: fstp    [esp+10h+var_C]
0x79659E: lea     esi, [ecx+0A8h]
0x7965A4: fld     dword ptr [eax+4]
0x7965A7: mov     ecx, esi; int
0x7965A9: fstp    [esp+10h+var_8]
0x7965AD: fld     dword ptr [eax+8]
0x7965B0: lea     eax, [esp+10h+var_C]
0x7965B4: push    eax; int
0x7965B5: fstp    [esp+14h+var_4]
0x7965B9: call    sub_785F30
0x7965BE: lea     ecx, [esp+10h+var_8]
0x7965C2: push    ecx; int
0x7965C3: mov     ecx, esi; int
0x7965C5: call    sub_785F30
0x7965CA: lea     edx, [esp+10h+var_4]
0x7965CE: push    edx; int
0x7965CF: mov     ecx, esi; int
0x7965D1: call    sub_785F30
0x7965D6: pop     esi
0x7965D7: add     esp, 0Ch
0x7965DA: retn    4
