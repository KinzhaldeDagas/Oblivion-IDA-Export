0x9068E0: push    ebp
0x9068E1: mov     ebp, esp
0x9068E3: and     esp, 0FFFFFFF0h
0x9068E6: sub     esp, 10h
0x9068E9: mov     ecx, ds:0BA7D98h
0x9068EF: mov     eax, [ecx]
0x9068F1: push    1Ch
0x9068F3: push    40h ; '@'
0x9068F5: call    dword ptr [eax+10h]
0x9068F8: mov     ecx, [ebp+arg_C]
0x9068FB: mov     [eax+8], ecx
0x9068FE: mov     word ptr [eax+4], 40h ; '@'
0x906904: mov     word ptr [eax+6], 1
0x90690A: xor     ecx, ecx
0x90690C: mov     [esp+10h+var_4], 7F7FFFFFh
0x906914: movss   xmm0, [esp+10h+var_4]
0x90691A: mov     [eax+0Ch], ecx
0x90691D: mov     [eax+10h], ecx
0x906920: mov     dword ptr [eax+14h], 80000000h
0x906927: shufps  xmm0, xmm0, 0
0x90692B: movaps  xmmword ptr [eax+30h], xmm0
0x90692F: movaps  xmmword ptr [eax+20h], xmm0
0x906933: mov     dword ptr [eax], offset off_A9BEAC
0x906939: mov     esp, ebp
0x90693B: pop     ebp
0x90693C: retn
