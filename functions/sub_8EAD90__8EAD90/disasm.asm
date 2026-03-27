0x8EAD90: mov     eax, [esp+arg_0]
0x8EAD94: fld     dword ptr ds:0A2F948h
0x8EAD9A: fdiv    dword ptr [eax+14h]
0x8EAD9D: mov     edx, [ecx+0FCh]
0x8EADA3: mov     [esp+arg_0], edx
0x8EADA7: fld     dword ptr ds:0A2F948h
0x8EADAD: fdiv    dword ptr [eax+28h]
0x8EADB0: fld     dword ptr ds:0A2F948h
0x8EADB6: fdiv    dword ptr [eax]
0x8EADB8: mov     eax, edx
0x8EADBA: fstp    dword ptr [ecx+0F0h]
0x8EADC0: fxch    st(1)
0x8EADC2: fstp    dword ptr [ecx+0F4h]
0x8EADC8: fstp    dword ptr [ecx+0F8h]
0x8EADCE: mov     [ecx+0FCh], eax
0x8EADD4: retn    4
