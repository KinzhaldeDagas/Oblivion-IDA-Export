0x862A3D: mov     eax, ds:0B42E8Ch; jumptable 0086293E default case
0x862A42: test    eax, eax
0x862A44: jz      short loc_862A5E
0x862A46: push    0; _DWORD
0x862A48: fstp    st(1)
0x862A4A: push    offset aInvalidSubText; "Invalid sub texture in decal"
0x862A4F: fstp    st
0x862A51: call    eax ; dword_B42E8C
0x862A53: fld     dword ptr ds:0A3D65Ch
0x862A59: fldz
0x862A5B: add     esp, 8
0x862A5E: fxch    st(1)
0x862A60: mov     eax, [esp+arg_C]
0x862A64: add     [esp+arg_18], 40h ; '@'
0x862A69: add     eax, 1
0x862A6C: add     ebp, 10h
0x862A6F: cmp     eax, ds:0B42E88h
0x862A75: mov     [esp+arg_C], eax
0x862A79: jge     short loc_862A95
0x862A7B: mov     ecx, [esp+arg_D4]
0x862A82: fstp    st
0x862A84: fstp    st
0x862A86: call    sub_7EE1F0
0x862A8B: fldz
0x862A8D: mov     ebx, eax
0x862A8F: fld     dword ptr ds:0A3D65Ch
0x862A95: test    ebx, ebx
0x862A97: jnz     loc_862805
0x862A9D: fstp    st
0x862A9F: pop     edi
0x862AA0: fstp    st
0x862AA2: fild    [esp-4+arg_C]
0x862AA6: pop     esi
0x862AA7: pop     ebp
0x862AA8: pop     ebx
0x862AA9: add     esp, 0C4h
0x862AAF: retn    4
