0x8987E0: push    ebp
0x8987E1: mov     ebp, esp
0x8987E3: and     esp, 0FFFFFFF0h
0x8987E6: sub     esp, 50h
0x8987E9: mov     edx, [ebp+arg_4]
0x8987EC: xor     eax, eax
0x8987EE: push    edx
0x8987EF: mov     edx, [ebp+arg_0]
0x8987F2: push    eax
0x8987F3: mov     [esp+58h+var_10], eax
0x8987F7: mov     [esp+58h+var_C], eax
0x8987FB: mov     eax, [ecx+78h]
0x8987FE: push    eax
0x8987FF: mov     eax, [ecx+64h]
0x898802: push    edx
0x898803: push    eax
0x898804: lea     ecx, [esp+64h+var_50]
0x898808: mov     [esp+64h+var_50], offset ??_7hkWorldRayCaster@@6B@; const hkWorldRayCaster::`vftable'
0x898810: call    sub_8BA1B0
0x898815: mov     esp, ebp
0x898817: pop     ebp
0x898818: retn    8
