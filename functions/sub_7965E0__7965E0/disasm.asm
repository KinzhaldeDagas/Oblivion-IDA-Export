0x7965E0: sub     esp, 0Ch
0x7965E3: mov     eax, [esp+0Ch+arg_0]
0x7965E7: fld     dword ptr [eax]
0x7965E9: push    esi
0x7965EA: fstp    [esp+10h+var_C]
0x7965EE: lea     esi, [ecx+98h]
0x7965F4: fld     dword ptr [eax+4]
0x7965F7: mov     ecx, esi; int
0x7965F9: fstp    [esp+10h+var_8]
0x7965FD: fld     dword ptr [eax+8]
0x796600: lea     eax, [esp+10h+var_C]
0x796604: push    eax; int
0x796605: fstp    [esp+14h+var_4]
0x796609: call    sub_785F30
0x79660E: lea     ecx, [esp+10h+var_8]
0x796612: push    ecx; int
0x796613: mov     ecx, esi; int
0x796615: call    sub_785F30
0x79661A: lea     edx, [esp+10h+var_4]
0x79661E: push    edx; int
0x79661F: mov     ecx, esi; int
0x796621: call    sub_785F30
0x796626: pop     esi
0x796627: add     esp, 0Ch
0x79662A: retn    4
