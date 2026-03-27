0x8988F0: mov     eax, [ecx+88h]
0x8988F6: sub     esp, 8
0x8988F9: test    eax, eax
0x8988FB: mov     eax, [esp+8+arg_4]
0x8988FF: jz      short loc_898926
0x898901: mov     ecx, [ecx+80h]
0x898907: lea     edx, [esp+8+var_8]
0x89890A: push    edx
0x89890B: mov     [esp+0Ch+var_8], 9
0x898910: mov     [esp+0Ch+var_4], eax
0x898914: call    sub_8D8830
0x898919: mov     eax, [esp+8+arg_0]
0x89891D: mov     byte ptr [eax], 0
0x898920: add     esp, 8
0x898923: retn    8
0x898926: push    1
0x898928: push    eax
0x898929: push    ecx
0x89892A: call    sub_8CB4E0
0x89892F: mov     eax, [esp+14h+arg_0]
0x898933: add     esp, 0Ch
0x898936: mov     byte ptr [eax], 1
0x898939: add     esp, 8
0x89893C: retn    8
