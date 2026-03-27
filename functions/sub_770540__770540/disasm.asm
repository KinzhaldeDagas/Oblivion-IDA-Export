0x770540: sub     esp, 10h
0x770543: push    ebx
0x770544: push    ebp
0x770545: push    esi
0x770546: mov     esi, [esp+1Ch+Size]
0x77054A: mov     ebp, [esi+10h]
0x77054D: mov     ebx, [esi+24h]
0x770550: xor     ecx, ecx
0x770552: cmp     ebp, ecx
0x770554: mov     [esp+1Ch+var_10], ecx
0x770558: jnz     short loc_77059A
0x77055A: xor     ebp, ebp
0x77055C: cmp     [esi+8], cx
0x770560: jbe     loc_770632
0x770566: mov     eax, [esi+1Ch]
0x770569: lea     esp, [esp+0]
0x770570: push    eax
0x770571: push    0
0x770573: push    ebx
0x770574: call    __memset
0x770579: mov     eax, [esi+1Ch]
0x77057C: add     ebx, [esi+20h]
0x77057F: add     [esp+28h+var_10], eax
0x770583: add     ebp, 1
0x770586: add     esp, 0Ch
0x770589: cmp     bp, [esi+8]
0x77058D: jb      short loc_770570
0x77058F: mov     eax, [esp+1Ch+var_10]
0x770593: pop     esi
0x770594: pop     ebp
0x770595: pop     ebx
0x770596: add     esp, 10h
0x770599: retn
0x77059A: mov     ax, [esi+4]
0x77059E: xor     edx, edx
0x7705A0: sub     ax, 0Ch
0x7705A4: cmp     dword ptr [esi], 6
0x7705A7: movzx   eax, ax
0x7705AA: setnz   dl
0x7705AD: push    edi
0x7705AE: lea     edx, [edx+edx+2]
0x7705B2: movzx   edi, dx
0x7705B5: mov     edx, eax
0x7705B7: sub     edx, edi
0x7705B9: test    dx, dx
0x7705BC: mov     [esp+20h+var_4], edi
0x7705C0: jle     short loc_7705CA
0x7705C2: mov     edx, [esi+1Ch]
0x7705C5: movzx   eax, di
0x7705C8: jmp     short loc_7705D0
0x7705CA: mov     edx, [esi+14h]
0x7705CD: movzx   eax, ax
0x7705D0: cmp     [esi+8], cx
0x7705D4: mov     [esp+20h+Size], edx
0x7705D8: mov     [esp+20h+var_C], eax
0x7705DC: mov     [esp+20h+var_8], ecx
0x7705E0: jbe     short loc_770631
0x7705E2: mov     eax, [esp+20h+Size]
0x7705E6: push    eax; Size
0x7705E7: push    ebp; Src
0x7705E8: push    ebx; Dst
0x7705E9: call    _memcpy
0x7705EE: mov     eax, [esp+2Ch+var_C]
0x7705F2: add     esp, 0Ch
0x7705F5: cmp     ax, di
0x7705F8: lea     edx, [ebx+2]
0x7705FB: jnb     short loc_770613
0x7705FD: sub     edi, eax
0x7705FF: movzx   ecx, di
0x770602: xor     eax, eax
0x770604: shr     ecx, 1
0x770606: mov     edi, edx
0x770608: rep stosd
0x77060A: adc     ecx, ecx
0x77060C: rep stosw
0x77060F: mov     edi, [esp+20h+var_4]
0x770613: mov     eax, [esp+20h+var_8]
0x770617: mov     ecx, [esi+1Ch]
0x77061A: add     ebp, [esi+18h]
0x77061D: add     ebx, [esi+20h]
0x770620: add     [esp+20h+var_10], ecx
0x770624: add     eax, 1
0x770627: cmp     ax, [esi+8]
0x77062B: mov     [esp+20h+var_8], eax
0x77062F: jb      short loc_7705E2
0x770631: pop     edi
0x770632: mov     eax, [esp+1Ch+var_10]
0x770636: pop     esi
0x770637: pop     ebp
0x770638: pop     ebx
0x770639: add     esp, 10h
0x77063C: retn
