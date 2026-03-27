0x906780: push    ebp
0x906781: mov     ebp, esp
0x906783: and     esp, 0FFFFFFF0h
0x906786: sub     esp, 10h
0x906789: mov     ecx, ds:0BA7D98h
0x90678F: mov     eax, [ecx]
0x906791: push    1Ch
0x906793: push    40h ; '@'
0x906795: call    dword ptr [eax+10h]
0x906798: mov     ecx, [ebp+arg_C]
0x90679B: mov     [eax+8], ecx
0x90679E: mov     word ptr [eax+4], 40h ; '@'
0x9067A4: mov     word ptr [eax+6], 1
0x9067AA: mov     dword ptr [eax], offset off_A9BE50
0x9067B0: xor     ecx, ecx
0x9067B2: mov     [esp+10h+var_4], 7F7FFFFFh
0x9067BA: movss   xmm0, [esp+10h+var_4]
0x9067C0: mov     [eax+0Ch], ecx
0x9067C3: mov     [eax+10h], ecx
0x9067C6: mov     dword ptr [eax+14h], 80000000h
0x9067CD: shufps  xmm0, xmm0, 0
0x9067D1: movaps  xmmword ptr [eax+30h], xmm0
0x9067D5: movaps  xmmword ptr [eax+20h], xmm0
0x9067D9: mov     esp, ebp
0x9067DB: pop     ebp
0x9067DC: retn
