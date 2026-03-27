0x449070: push    ebx
0x449071: push    ebp
0x449072: mov     ebp, [esp+8+arg_0]
0x449076: mov     ebx, [ebp+0]
0x449079: test    ebx, ebx
0x44907B: push    esi
0x44907C: mov     esi, ecx
0x44907E: jnz     short loc_449089
0x449080: pop     esi
0x449081: pop     ebp
0x449082: or      eax, 0FFFFFFFFh
0x449085: pop     ebx
0x449086: retn    4
0x449089: push    edi
0x44908A: mov     edi, [esi+0Ch]
0x44908D: xor     eax, eax
0x44908F: test    edi, edi
0x449091: jbe     short loc_4490A7
0x449093: mov     edx, [esi+4]
0x449096: mov     ecx, edx
0x449098: cmp     dword ptr [ecx], 0
0x44909B: jz      short loc_4490E0
0x44909D: add     eax, 1
0x4490A0: add     ecx, 4
0x4490A3: cmp     eax, edi
0x4490A5: jb      short loc_449098
0x4490A7: cmp     edi, [esi+8]
0x4490AA: jb      short loc_4490B9
0x4490AC: mov     eax, [esi+14h]
0x4490AF: add     eax, edi
0x4490B1: push    eax
0x4490B2: mov     ecx, esi
0x4490B4: call    sub_452910
0x4490B9: cmp     edi, [esi+0Ch]
0x4490BC: jb      short loc_4490EE
0x4490BE: lea     ecx, [edi+1]
0x4490C1: mov     [esi+0Ch], ecx
0x4490C4: cmp     dword ptr [ebp+0], 0
0x4490C8: jz      short loc_44911F
0x4490CA: add     dword ptr [esi+10h], 1
0x4490CE: mov     ecx, [esi+4]
0x4490D1: mov     edx, [ebp+0]
0x4490D4: mov     [ecx+edi*4], edx
0x4490D7: mov     eax, edi
0x4490D9: pop     edi
0x4490DA: pop     esi
0x4490DB: pop     ebp
0x4490DC: pop     ebx
0x4490DD: retn    4
0x4490E0: pop     edi
0x4490E1: mov     [edx+eax*4], ebx
0x4490E4: add     dword ptr [esi+10h], 1
0x4490E8: pop     esi
0x4490E9: pop     ebp
0x4490EA: pop     ebx
0x4490EB: retn    4
0x4490EE: cmp     dword ptr [ebp+0], 0
0x4490F2: jz      short loc_449112
0x4490F4: mov     edx, [esi+4]
0x4490F7: cmp     dword ptr [edx+edi*4], 0
0x4490FB: jnz     short loc_44911F
0x4490FD: add     dword ptr [esi+10h], 1
0x449101: mov     ecx, edx
0x449103: mov     edx, [ebp+0]
0x449106: mov     [ecx+edi*4], edx
0x449109: mov     eax, edi
0x44910B: pop     edi
0x44910C: pop     esi
0x44910D: pop     ebp
0x44910E: pop     ebx
0x44910F: retn    4
0x449112: mov     eax, [esi+4]
0x449115: cmp     dword ptr [eax+edi*4], 0
0x449119: jz      short loc_44911F
0x44911B: add     dword ptr [esi+10h], 0FFFFFFFFh
0x44911F: mov     ecx, [esi+4]
0x449122: mov     edx, [ebp+0]
0x449125: mov     [ecx+edi*4], edx
0x449128: mov     eax, edi
0x44912A: pop     edi
0x44912B: pop     esi
0x44912C: pop     ebp
0x44912D: pop     ebx
0x44912E: retn    4
