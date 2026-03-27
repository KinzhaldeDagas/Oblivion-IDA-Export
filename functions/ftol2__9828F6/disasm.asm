0x9828F6: push    ebp
0x9828F7: mov     ebp, esp
0x9828F9: sub     esp, 20h
0x9828FC: and     esp, 0FFFFFFF0h
0x9828FF: fld     st
0x982901: fst     [esp+20h+var_8]
0x982905: fistp   [esp+20h+var_10]
0x982909: fild    [esp+20h+var_10]
0x98290D: mov     edx, [esp+20h+var_8]
0x982911: mov     eax, dword ptr [esp+20h+var_10]
0x982915: test    eax, eax
0x982917: jz      short integer_QnaN_or_zero
0x982919: fsubp   st(1), st
0x98291B: test    edx, edx
0x98291D: jns     short positive
0x98291F: fstp    [esp+20h+var_20]
0x982922: mov     ecx, [esp+20h+var_20]
0x982925: xor     ecx, 80000000h
0x98292B: add     ecx, 7FFFFFFFh
0x982931: adc     eax, 0
0x982934: mov     edx, dword ptr [esp+20h+var_10+4]
0x982938: adc     edx, 0
0x98293B: jmp     short localexit
0x98293D: fstp    [esp+20h+var_20]
0x982940: mov     ecx, [esp+20h+var_20]
0x982943: add     ecx, 7FFFFFFFh
0x982949: sbb     eax, 0
0x98294C: mov     edx, dword ptr [esp+20h+var_10+4]
0x982950: sbb     edx, 0
0x982953: jmp     short localexit
0x982955: mov     edx, dword ptr [esp+20h+var_10+4]
0x982959: test    edx, 7FFFFFFFh
0x98295F: jnz     short arg_is_not_integer_QnaN
0x982961: fstp    [esp+20h+var_8]
0x982965: fstp    [esp+20h+var_8]
0x982969: leave
0x98296A: retn
