0x8ED7B0: push    ebp
0x8ED7B1: mov     ebp, esp
0x8ED7B3: and     esp, 0FFFFFFF0h
0x8ED7B6: sub     esp, 10h
0x8ED7B9: mov     eax, [ecx+0Ch]
0x8ED7BC: mov     dword ptr [esp+10h+var_10+0Ch], eax
0x8ED7C0: mov     eax, [ebp+arg_0]
0x8ED7C3: mov     dword ptr [esp+10h+var_10], 0
0x8ED7CA: mov     dword ptr [esp+10h+var_10+4], 0
0x8ED7D2: mov     dword ptr [esp+10h+var_10+8], 0
0x8ED7DA: movaps  xmm0, [esp+10h+var_10]
0x8ED7DE: movaps  xmmword ptr [eax], xmm0
0x8ED7E1: mov     esp, ebp
0x8ED7E3: pop     ebp
0x8ED7E4: retn    4
