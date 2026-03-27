0x9136E0: push    ebp
0x9136E1: mov     ebp, esp
0x9136E3: and     esp, 0FFFFFFF0h
0x9136E6: sub     esp, 14h
0x9136E9: push    ebx
0x9136EA: push    esi
0x9136EB: push    edi
0x9136EC: mov     edi, ecx
0x9136EE: mov     eax, [edi+8]
0x9136F1: mov     esi, [edi+4]
0x9136F4: inc     eax
0x9136F5: add     esi, 1Ch
0x9136F8: mov     [edi+8], eax
0x9136FB: mov     eax, [esi+8]
0x9136FE: mov     ecx, [esi+4]
0x913701: and     eax, 3FFFFFFFh
0x913706: cmp     ecx, eax
0x913708: jnz     short loc_913715
0x91370A: push    4
0x91370C: push    esi
0x91370D: call    sub_8A6EE0
0x913712: add     esp, 8
0x913715: mov     ecx, [esi+4]
0x913718: mov     edx, [esi]
0x91371A: mov     eax, [ebp+arg_0]
0x91371D: mov     dword ptr [edx+ecx*4], 16h
0x913724: mov     edx, [esi+4]
0x913727: mov     ecx, [ebp+arg_4]
0x91372A: inc     edx
0x91372B: mov     [esi+4], edx
0x91372E: mov     dword ptr [esp+20h+var_10], eax
0x913732: mov     eax, [edi+4]
0x913735: mov     edx, [eax+18h]
0x913738: mov     ebx, [eax+14h]
0x91373B: lea     esi, [eax+10h]
0x91373E: mov     eax, [esi+4]
0x913741: and     edx, 3FFFFFFFh
0x913747: cmp     eax, edx
0x913749: mov     dword ptr [esp+20h+var_10+4], ecx
0x91374D: mov     dword ptr [esp+20h+var_10+8], 0
0x913755: mov     dword ptr [esp+20h+var_10+0Ch], 0
0x91375D: jnz     short loc_91376A
0x91375F: push    10h
0x913761: push    esi
0x913762: call    sub_8A6EE0
0x913767: add     esp, 8
0x91376A: mov     ecx, [esi+4]
0x91376D: mov     edx, [esi]
0x91376F: movaps  xmm0, [esp+20h+var_10]
0x913774: mov     eax, ecx
0x913776: shl     eax, 4
0x913779: add     eax, edx
0x91377B: inc     ecx
0x91377C: mov     [esi+4], ecx
0x91377F: movaps  xmmword ptr [eax], xmm0
0x913782: mov     eax, [edi+4]
0x913785: mov     esi, [eax+8]
0x913788: mov     edx, [eax+4]
0x91378B: mov     ecx, [eax+0Ch]
0x91378E: add     esi, 0Ch
0x913791: add     edx, 30h ; '0'
0x913794: pop     edi
0x913795: mov     [eax+8], esi
0x913798: inc     ecx
0x913799: mov     [eax+4], edx
0x91379C: mov     [eax+0Ch], ecx
0x91379F: pop     esi
0x9137A0: mov     eax, ebx
0x9137A2: pop     ebx
0x9137A3: mov     esp, ebp
0x9137A5: pop     ebp
0x9137A6: retn    8
