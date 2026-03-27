0x8988A0: mov     eax, [ecx+88h]
0x8988A6: sub     esp, 8
0x8988A9: test    eax, eax
0x8988AB: mov     eax, [esp+8+arg_0]
0x8988AF: jz      short loc_8988D1
0x8988B1: mov     ecx, [ecx+80h]
0x8988B7: lea     edx, [esp+8+var_8]
0x8988BA: push    edx
0x8988BB: mov     [esp+0Ch+var_8], 8
0x8988C0: mov     [esp+0Ch+var_4], eax
0x8988C4: call    sub_8D8830
0x8988C9: xor     eax, eax
0x8988CB: add     esp, 8
0x8988CE: retn    4
0x8988D1: push    1
0x8988D3: push    eax
0x8988D4: push    ecx
0x8988D5: call    sub_8CB450
0x8988DA: add     esp, 0Ch
0x8988DD: add     esp, 8
0x8988E0: retn    4
