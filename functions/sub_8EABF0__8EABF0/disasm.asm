0x8EABF0: push    ebp
0x8EABF1: mov     ebp, esp
0x8EABF3: and     esp, 0FFFFFFF0h
0x8EABF6: sub     esp, 10h
0x8EABF9: fld     dword ptr ds:0A2F948h
0x8EABFF: mov     eax, [ebp+arg_0]
0x8EAC02: fdiv    dword ptr [ecx+0F0h]
0x8EAC08: xorps   xmm0, xmm0
0x8EAC0B: add     ecx, 10h
0x8EAC0E: push    ecx
0x8EAC0F: fld     dword ptr ds:0A2F948h
0x8EAC15: fdiv    dword ptr [ecx+0E4h]
0x8EAC1B: fld     dword ptr ds:0A2F948h
0x8EAC21: fdiv    dword ptr [ecx+0E8h]
0x8EAC27: movaps  xmmword ptr [eax], xmm0
0x8EAC2A: movaps  xmmword ptr [eax+10h], xmm0
0x8EAC2E: movaps  xmmword ptr [eax+20h], xmm0
0x8EAC32: mov     ecx, eax
0x8EAC34: fstp    [esp+14h+var_4]
0x8EAC38: fxch    st(1)
0x8EAC3A: fstp    dword ptr [eax]
0x8EAC3C: mov     edx, [esp+14h+var_4]
0x8EAC40: fstp    dword ptr [eax+14h]
0x8EAC43: mov     [eax+28h], edx
0x8EAC46: call    sub_8D2C60
0x8EAC4B: mov     esp, ebp
0x8EAC4D: pop     ebp
0x8EAC4E: retn    4
