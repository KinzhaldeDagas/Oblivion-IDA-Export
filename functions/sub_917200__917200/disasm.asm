0x917200: push    ebp
0x917201: mov     ebp, [esp+4+arg_0]
0x917205: mov     eax, [ebp+8]
0x917208: push    esi
0x917209: push    edi
0x91720A: mov     edi, ecx
0x91720C: mov     esi, [edi+3Ch]
0x91720F: and     eax, 3FFFFFFFh
0x917214: cmp     eax, esi
0x917216: jge     short loc_91722C
0x917218: add     eax, eax
0x91721A: cmp     esi, eax
0x91721C: jl      short loc_917220
0x91721E: mov     eax, esi
0x917220: push    10h
0x917222: push    eax
0x917223: push    ebp
0x917224: call    sub_8A6E40
0x917229: add     esp, 0Ch
0x91722C: mov     [ebp+4], esi
0x91722F: mov     eax, [edi+3Ch]
0x917232: xor     ecx, ecx
0x917234: test    eax, eax
0x917236: jle     short loc_917282
0x917238: push    ebx
0x917239: xor     ebx, ebx
0x91723B: jmp     short loc_917240
0x91723D: align 10h
0x917240: mov     esi, [edi+30h]
0x917243: mov     eax, ecx
0x917245: cdq
0x917246: and     edx, 3
0x917249: add     eax, edx
0x91724B: sar     eax, 2
0x91724E: mov     edx, ecx
0x917250: and     edx, 3
0x917253: lea     eax, [eax+eax*2]
0x917256: lea     edx, [edx+eax*4]
0x917259: mov     eax, [ebp+0]
0x91725C: fld     dword ptr [esi+edx*4+20h]
0x917260: add     eax, ebx
0x917262: fld     dword ptr [esi+edx*4+10h]
0x917266: mov     edx, [esi+edx*4]
0x917269: mov     [eax], edx
0x91726B: fstp    dword ptr [eax+4]
0x91726E: inc     ecx
0x91726F: add     ebx, 10h
0x917272: fstp    dword ptr [eax+8]
0x917275: mov     dword ptr [eax+0Ch], 0
0x91727C: cmp     ecx, [edi+3Ch]
0x91727F: jl      short loc_917240
0x917281: pop     ebx
0x917282: pop     edi
0x917283: pop     esi
0x917284: pop     ebp
0x917285: retn    4
