0x8F8DB0: push    ebx
0x8F8DB1: mov     ebx, [esp+4+arg_8]
0x8F8DB5: push    esi
0x8F8DB6: push    edi
0x8F8DB7: mov     edi, [esp+0Ch+arg_4]
0x8F8DBB: xor     esi, esi
0x8F8DBD: lea     ecx, [ecx+0]
0x8F8DC0: xor     eax, eax
0x8F8DC2: mov     ax, [edi+esi*2]
0x8F8DC6: cmp     ax, 0FFFFh
0x8F8DCA: jz      short loc_8F8DDA
0x8F8DCC: mov     edx, [ebx]
0x8F8DCE: push    eax
0x8F8DCF: mov     ecx, ebx
0x8F8DD1: call    dword ptr [edx+10h]
0x8F8DD4: mov     word ptr [edi+esi*2], 0FFFFh
0x8F8DDA: inc     esi
0x8F8DDB: cmp     esi, 3
0x8F8DDE: jl      short loc_8F8DC0
0x8F8DE0: lea     eax, [edi+20h]
0x8F8DE3: pop     edi
0x8F8DE4: pop     esi
0x8F8DE5: pop     ebx
0x8F8DE6: retn
