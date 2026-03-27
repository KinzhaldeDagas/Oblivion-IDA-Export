0x477F90: cmp     word ptr [ecx+0Ah], 0
0x477F95: jbe     short locret_477FC0
0x477F97: push    esi
0x477F98: mov     esi, [ecx+4]
0x477F9B: jmp     short loc_477FA0
0x477F9D: align 10h
0x477FA0: movzx   eax, word ptr [ecx+0Ah]
0x477FA4: movzx   edx, ax
0x477FA7: cmp     dword ptr [esi+edx*4-4], 0
0x477FAC: setnz   dl
0x477FAF: test    dl, dl
0x477FB1: jnz     short loc_477FBF
0x477FB3: add     eax, 0FFFFFFFFh
0x477FB6: test    ax, ax
0x477FB9: mov     [ecx+0Ah], ax
0x477FBD: ja      short loc_477FA0
0x477FBF: pop     esi
0x477FC0: retn
