0x8BCD40: mov     eax, [esp+arg_0]
0x8BCD44: cmp     eax, [ecx+0Ch]
0x8BCD47: push    ebp
0x8BCD48: mov     ebp, [esp+4+arg_4]
0x8BCD4C: push    esi
0x8BCD4D: push    edi
0x8BCD4E: jb      short loc_8BCD67
0x8BCD50: lea     edx, [eax+1]
0x8BCD53: mov     [ecx+0Ch], edx
0x8BCD56: cmp     dword ptr [ebp+0], 0
0x8BCD5A: setnz   dl
0x8BCD5D: test    dl, dl
0x8BCD5F: jz      short loc_8BCD95
0x8BCD61: add     dword ptr [ecx+10h], 1
0x8BCD65: jmp     short loc_8BCD95
0x8BCD67: cmp     dword ptr [ebp+0], 0
0x8BCD6B: setnz   dl
0x8BCD6E: test    dl, dl
0x8BCD70: mov     edx, [ecx+4]
0x8BCD73: jz      short loc_8BCD86
0x8BCD75: cmp     dword ptr [edx+eax*4], 0
0x8BCD79: setz    dl
0x8BCD7C: test    dl, dl
0x8BCD7E: jz      short loc_8BCD95
0x8BCD80: add     dword ptr [ecx+10h], 1
0x8BCD84: jmp     short loc_8BCD95
0x8BCD86: cmp     dword ptr [edx+eax*4], 0
0x8BCD8A: setnz   dl
0x8BCD8D: test    dl, dl
0x8BCD8F: jz      short loc_8BCD95
0x8BCD91: add     dword ptr [ecx+10h], 0FFFFFFFFh
0x8BCD95: mov     ecx, [ecx+4]
0x8BCD98: mov     esi, [ecx+eax*4]
0x8BCD9B: cmp     esi, [ebp+0]
0x8BCD9E: lea     edi, [ecx+eax*4]
0x8BCDA1: jz      short loc_8BCDD6
0x8BCDA3: test    esi, esi
0x8BCDA5: jz      short loc_8BCDC3
0x8BCDA7: lea     edx, [esi+4]
0x8BCDAA: push    edx; lpAddend
0x8BCDAB: call    dword ptr ds:0A2807Ch
0x8BCDB1: test    eax, eax
0x8BCDB3: jnz     short loc_8BCDC3
0x8BCDB5: test    esi, esi
0x8BCDB7: jz      short loc_8BCDC3
0x8BCDB9: mov     eax, [esi]
0x8BCDBB: mov     edx, [eax]
0x8BCDBD: push    1
0x8BCDBF: mov     ecx, esi
0x8BCDC1: call    edx
0x8BCDC3: mov     eax, [ebp+0]
0x8BCDC6: test    eax, eax
0x8BCDC8: mov     [edi], eax
0x8BCDCA: jz      short loc_8BCDD6
0x8BCDCC: add     eax, 4
0x8BCDCF: push    eax; lpAddend
0x8BCDD0: call    dword ptr ds:0A28078h
0x8BCDD6: pop     edi
0x8BCDD7: pop     esi
0x8BCDD8: pop     ebp
0x8BCDD9: retn    8
