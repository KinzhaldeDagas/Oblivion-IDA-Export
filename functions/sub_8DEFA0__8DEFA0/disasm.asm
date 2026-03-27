0x8DEFA0: push    edi
0x8DEFA1: mov     edi, ecx
0x8DEFA3: mov     ecx, [edi+10h]
0x8DEFA6: test    ecx, ecx
0x8DEFA8: jz      short loc_8DEFF2
0x8DEFAA: push    ebx
0x8DEFAB: push    ebp
0x8DEFAC: push    esi
0x8DEFAD: push    6
0x8DEFAF: lea     esi, [edi+14h]
0x8DEFB2: push    esi
0x8DEFB3: call    sub_89D080
0x8DEFB8: lea     ebp, [edi+0Ch]
0x8DEFBB: mov     ebx, 6
0x8DEFC0: mov     ecx, [esi]
0x8DEFC2: push    ebp
0x8DEFC3: call    sub_8DE6C0
0x8DEFC8: mov     ecx, [esi]
0x8DEFCA: call    sub_8BC730
0x8DEFCF: mov     dword ptr [esi], 0
0x8DEFD5: add     esi, 4
0x8DEFD8: dec     ebx
0x8DEFD9: jnz     short loc_8DEFC0
0x8DEFDB: mov     edx, [edi+10h]
0x8DEFDE: mov     eax, [edi+8]
0x8DEFE1: lea     ecx, [edi+8]
0x8DEFE4: push    edx
0x8DEFE5: call    dword ptr [eax+4]
0x8DEFE8: pop     esi
0x8DEFE9: pop     ebp
0x8DEFEA: mov     dword ptr [edi+10h], 0
0x8DEFF1: pop     ebx
0x8DEFF2: pop     edi
0x8DEFF3: retn
