0x6BD660: mov     eax, [esp+arg_8]
0x6BD664: fld     [esp+arg_0]
0x6BD668: sub     esp, 10h
0x6BD66B: lea     ecx, [eax+4]
0x6BD66E: push    ecx; int
0x6BD66F: add     eax, 14h
0x6BD672: push    eax; int
0x6BD673: mov     eax, [esp+18h+arg_4]
0x6BD677: lea     edx, [eax+14h]
0x6BD67A: push    edx; int
0x6BD67B: add     eax, 4
0x6BD67E: push    eax; int
0x6BD67F: push    ecx
0x6BD680: lea     eax, [esp+24h+var_10]
0x6BD684: fstp    [esp+24h+var_24]; float
0x6BD687: push    eax; int
0x6BD688: call    sub_714F80
0x6BD68D: mov     edx, [eax]
0x6BD68F: mov     ecx, [esp+28h+arg_C]
0x6BD693: mov     [ecx], edx
0x6BD695: mov     edx, [eax+4]
0x6BD698: mov     [ecx+4], edx
0x6BD69B: mov     edx, [eax+8]
0x6BD69E: mov     [ecx+8], edx
0x6BD6A1: mov     eax, [eax+0Ch]
0x6BD6A4: mov     [ecx+0Ch], eax
0x6BD6A7: add     esp, 28h
0x6BD6AA: retn
