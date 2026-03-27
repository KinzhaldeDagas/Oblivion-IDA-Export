0x936790: push    ebp
0x936791: mov     ebp, esp
0x936793: and     esp, 0FFFFFFF0h
0x936796: sub     esp, 2Ch
0x936799: mov     ecx, [ebp+arg_0]
0x93679C: push    esi
0x93679D: mov     esi, [ecx]
0x93679F: mov     dword ptr [esp+30h+var_20], esi
0x9367A3: mov     esi, [ecx+4]
0x9367A6: mov     dword ptr [esp+30h+var_20+4], esi
0x9367AA: mov     esi, [ecx+8]
0x9367AD: mov     ecx, [ecx+0Ch]
0x9367B0: mov     dword ptr [esp+30h+var_20+0Ch], ecx
0x9367B4: mov     ecx, [eax]
0x9367B6: mov     dword ptr [esp+30h+var_10], ecx
0x9367BA: mov     ecx, [eax+4]
0x9367BD: mov     dword ptr [esp+30h+var_10+4], ecx
0x9367C1: mov     ecx, [eax+8]
0x9367C4: mov     eax, [eax+0Ch]
0x9367C7: mov     dword ptr [esp+30h+var_10+0Ch], eax
0x9367CB: mov     eax, [ebp+arg_4]
0x9367CE: mov     dword ptr [esp+30h+var_10+8], ecx
0x9367D2: mov     ecx, 3F800000h
0x9367D7: mov     dword ptr [esp+30h+var_20+8], esi
0x9367DB: mov     dword ptr [esp+eax*4+30h+var_20], ecx
0x9367DF: movaps  xmm0, [esp+30h+var_20]
0x9367E4: mov     dword ptr [esp+ebx*4+30h+var_10], ecx
0x9367E8: movmskps ecx, xmm0
0x9367EB: movaps  xmm0, [esp+30h+var_10]
0x9367F0: or      cl, 0F8h
0x9367F3: shl     cl, 4
0x9367F6: or      cl, al
0x9367F8: movmskps eax, xmm0
0x9367FB: not     al
0x9367FD: and     al, 7
0x9367FF: shl     al, 4
0x936802: add     al, bl
0x936804: mov     [edx], cl
0x936806: mov     [edx+1], al
0x936809: pop     esi
0x93680A: mov     esp, ebp
0x93680C: pop     ebp
0x93680D: retn
