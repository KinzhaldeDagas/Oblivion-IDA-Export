0x759860: push    ebx
0x759861: push    esi
0x759862: mov     ebx, ecx
0x759864: mov     ax, [ebx+48h]
0x759868: push    edi
0x759869: mov     edi, [esp+0Ch+arg_0]
0x75986D: sub     ax, 1
0x759871: push    edi
0x759872: movzx   esi, ax
0x759875: call    sub_73EFB0
0x75987A: cmp     di, si
0x75987D: jz      short loc_7598B6
0x75987F: mov     ecx, [ebx+5Ch]
0x759882: movzx   eax, si
0x759885: movzx   edx, di
0x759888: lea     esi, ds:0[eax*8]
0x75988F: sub     esi, eax
0x759891: lea     edi, ds:0[edx*8]
0x759898: sub     edi, edx
0x75989A: lea     esi, [ecx+esi*4]
0x75989D: lea     edi, [ecx+edi*4]
0x7598A0: mov     ecx, 7
0x7598A5: rep movsd
0x7598A7: cmp     dword ptr [ebx+60h], 0
0x7598AB: jz      short loc_7598B6
0x7598AD: mov     ebx, [ebx+60h]
0x7598B0: fld     dword ptr [ebx+eax*4]
0x7598B3: fstp    dword ptr [ebx+edx*4]
0x7598B6: pop     edi
0x7598B7: pop     esi
0x7598B8: pop     ebx
0x7598B9: retn    4
