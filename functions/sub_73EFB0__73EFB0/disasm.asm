0x73EFB0: mov     ax, [ecx+48h]
0x73EFB4: mov     dx, word ptr [esp+arg_0]
0x73EFB9: sub     ax, 1
0x73EFBD: movzx   eax, ax
0x73EFC0: cmp     dx, ax
0x73EFC3: jz      loc_73F0C6
0x73EFC9: push    ebx
0x73EFCA: push    ebp
0x73EFCB: mov     ebp, [ecx+1Ch]
0x73EFCE: push    esi
0x73EFCF: movzx   esi, ax
0x73EFD2: push    edi
0x73EFD3: movzx   edi, dx
0x73EFD6: lea     ebx, [esi+esi*2]
0x73EFD9: lea     edx, [edi+edi*2]
0x73EFDC: add     edx, edx
0x73EFDE: add     ebx, ebx
0x73EFE0: add     edx, edx
0x73EFE2: add     ebx, ebx
0x73EFE4: lea     eax, [ebx+ebp]
0x73EFE7: mov     [esp+10h+arg_0], edx
0x73EFEB: add     edx, ebp
0x73EFED: mov     ebp, [eax]
0x73EFEF: mov     [edx], ebp
0x73EFF1: mov     ebp, [eax+4]
0x73EFF4: mov     [edx+4], ebp
0x73EFF7: mov     eax, [eax+8]
0x73EFFA: mov     [edx+8], eax
0x73EFFD: mov     ebp, [ecx+24h]
0x73F000: test    ebp, ebp
0x73F002: jz      short loc_73F028
0x73F004: mov     eax, esi
0x73F006: shl     eax, 4
0x73F009: add     eax, ebp
0x73F00B: mov     edx, edi
0x73F00D: shl     edx, 4
0x73F010: add     edx, ebp
0x73F012: mov     ebp, [eax]
0x73F014: mov     [edx], ebp
0x73F016: mov     ebp, [eax+4]
0x73F019: mov     [edx+4], ebp
0x73F01C: mov     ebp, [eax+8]
0x73F01F: mov     [edx+8], ebp
0x73F022: mov     eax, [eax+0Ch]
0x73F025: mov     [edx+0Ch], eax
0x73F028: mov     edx, [ecx+20h]
0x73F02B: test    edx, edx
0x73F02D: jz      short loc_73F048
0x73F02F: mov     ebp, [esp+10h+arg_0]
0x73F033: lea     eax, [edx+ebx]
0x73F036: add     edx, ebp
0x73F038: mov     ebp, [eax]
0x73F03A: mov     [edx], ebp
0x73F03C: mov     ebp, [eax+4]
0x73F03F: mov     [edx+4], ebp
0x73F042: mov     eax, [eax+8]
0x73F045: mov     [edx+8], eax
0x73F048: mov     eax, [ecx+44h]
0x73F04B: test    eax, eax
0x73F04D: jz      short loc_73F055
0x73F04F: fld     dword ptr [eax+esi*4]
0x73F052: fstp    dword ptr [eax+edi*4]
0x73F055: mov     eax, [ecx+4Ch]
0x73F058: test    eax, eax
0x73F05A: jz      short loc_73F062
0x73F05C: fld     dword ptr [eax+esi*4]
0x73F05F: fstp    dword ptr [eax+edi*4]
0x73F062: mov     ebp, [ecx+50h]
0x73F065: test    ebp, ebp
0x73F067: jz      short loc_73F08D
0x73F069: mov     eax, esi
0x73F06B: shl     eax, 4
0x73F06E: add     eax, ebp
0x73F070: mov     edx, edi
0x73F072: shl     edx, 4
0x73F075: add     edx, ebp
0x73F077: mov     ebp, [eax]
0x73F079: mov     [edx], ebp
0x73F07B: mov     ebp, [eax+4]
0x73F07E: mov     [edx+4], ebp
0x73F081: mov     ebp, [eax+8]
0x73F084: mov     [edx+8], ebp
0x73F087: mov     eax, [eax+0Ch]
0x73F08A: mov     [edx+0Ch], eax
0x73F08D: mov     eax, [ecx+54h]
0x73F090: test    eax, eax
0x73F092: jz      short loc_73F09A
0x73F094: fld     dword ptr [eax+esi*4]
0x73F097: fstp    dword ptr [eax+edi*4]
0x73F09A: mov     eax, [ecx+58h]
0x73F09D: test    eax, eax
0x73F09F: jz      short loc_73F0B9
0x73F0A1: mov     edx, [esp+10h+arg_0]
0x73F0A5: add     ebx, eax
0x73F0A7: add     eax, edx
0x73F0A9: mov     edx, [ebx]
0x73F0AB: mov     [eax], edx
0x73F0AD: mov     edx, [ebx+4]
0x73F0B0: mov     [eax+4], edx
0x73F0B3: mov     edx, [ebx+8]
0x73F0B6: mov     [eax+8], edx
0x73F0B9: add     word ptr [ecx+48h], 0FFFFh
0x73F0BF: pop     edi
0x73F0C0: pop     esi
0x73F0C1: pop     ebp
0x73F0C2: pop     ebx
0x73F0C3: retn    4
0x73F0C6: add     word ptr [ecx+48h], 0FFFFh
0x73F0CC: retn    4
