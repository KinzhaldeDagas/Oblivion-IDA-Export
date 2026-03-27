0x64B650: push    ebx
0x64B651: push    ebp
0x64B652: push    esi
0x64B653: mov     esi, [esp+0Ch+arg_0]
0x64B657: mov     al, [esi+0D0h]
0x64B65D: push    edi
0x64B65E: mov     edi, ecx
0x64B660: mov     [edi+0D0h], al
0x64B666: mov     ecx, [esi+0C0h]
0x64B66C: mov     [edi+0C0h], ecx
0x64B672: mov     edx, [esi]
0x64B674: mov     eax, [edx+180h]
0x64B67A: xor     ebp, ebp
0x64B67C: mov     ecx, esi
0x64B67E: mov     [esi+0C0h], ebp
0x64B684: call    eax
0x64B686: mov     [edi+0CCh], eax
0x64B68C: fld     dword ptr [esi+0D4h]
0x64B692: fstp    dword ptr [edi+0D4h]
0x64B698: fld     dword ptr [esi+0D8h]
0x64B69E: fstp    dword ptr [edi+0D8h]
0x64B6A4: fld     dword ptr [esi+0DCh]
0x64B6AA: fstp    dword ptr [edi+0DCh]
0x64B6B0: mov     ecx, [esi+17Ch]
0x64B6B6: mov     [edi+17Ch], ecx
0x64B6BC: mov     [esi+17Ch], ebp
0x64B6C2: mov     ecx, [edi+17Ch]
0x64B6C8: cmp     ecx, ebp
0x64B6CA: jz      short loc_64B6D9
0x64B6CC: fldz
0x64B6CE: push    ecx
0x64B6CF: fstp    [esp+14h+var_14]; float
0x64B6D2: push    5; int
0x64B6D4: call    sub_470FC0
0x64B6D9: mov     edx, [esi+0E4h]
0x64B6DF: mov     [edi+0E4h], edx
0x64B6E5: mov     eax, [esi+0E8h]
0x64B6EB: mov     [edi+0E8h], eax
0x64B6F1: mov     ecx, [esi+0ECh]
0x64B6F7: mov     [edi+0ECh], ecx
0x64B6FD: mov     edx, [esi+0F0h]
0x64B703: mov     [edi+0F0h], edx
0x64B709: fld     dword ptr [esi+0F8h]
0x64B70F: fstp    dword ptr [edi+0F8h]
0x64B715: mov     al, [esi+0F4h]
0x64B71B: mov     [edi+0F4h], al
0x64B721: movzx   ecx, byte ptr [esi+0F5h]
0x64B728: mov     [edi+0F5h], cl
0x64B72E: mov     edx, [esi]
0x64B730: mov     eax, [edx+2FCh]
0x64B736: mov     ecx, esi
0x64B738: call    eax
0x64B73A: mov     [edi+114h], al
0x64B740: mov     edx, [esi]
0x64B742: mov     eax, [edx+304h]
0x64B748: mov     ecx, esi
0x64B74A: call    eax
0x64B74C: mov     [edi+115h], al
0x64B752: movzx   ecx, byte ptr [esi+11Ch]
0x64B759: mov     [edi+11Ch], cl
0x64B75F: mov     edx, [esi+110h]
0x64B765: mov     [edi+110h], edx
0x64B76B: mov     eax, [esi+148h]
0x64B771: mov     [edi+148h], eax
0x64B777: movzx   ecx, byte ptr [esi+0F5h]
0x64B77E: mov     [edi+0F5h], cl
0x64B784: mov     edx, [esi+0FCh]
0x64B78A: mov     [edi+0FCh], edx
0x64B790: mov     eax, [esi+100h]
0x64B796: mov     [edi+100h], eax
0x64B79C: mov     ecx, [esi+104h]
0x64B7A2: mov     [edi+104h], ecx
0x64B7A8: mov     edx, [esi+108h]
0x64B7AE: mov     [edi+108h], edx
0x64B7B4: mov     eax, [esi+10Ch]
0x64B7BA: mov     [edi+10Ch], eax
0x64B7C0: movzx   ecx, byte ptr [esi+168h]
0x64B7C7: mov     [edi+168h], cl
0x64B7CD: mov     dl, [esi+169h]
0x64B7D3: mov     [edi+169h], dl
0x64B7D9: mov     eax, [esi+0E0h]
0x64B7DF: mov     [esi+0E4h], ebp
0x64B7E5: mov     [esi+0E8h], ebp
0x64B7EB: mov     [esi+0ECh], ebp
0x64B7F1: mov     [esi+0F0h], ebp
0x64B7F7: mov     byte ptr [esi+0F4h], 0
0x64B7FE: mov     byte ptr [esi+0F5h], 0
0x64B805: mov     [edi+0E0h], eax
0x64B80B: lea     ebx, [esi+0A8h]
0x64B811: cmp     ebx, ebp
0x64B813: fld     dword ptr [esi+0BCh]
0x64B819: fstp    dword ptr [edi+0BCh]
0x64B81F: fld     dword ptr [esi+0C4h]
0x64B825: fstp    dword ptr [edi+0C4h]
0x64B82B: jz      short loc_64B87C
0x64B82D: lea     ecx, [ecx+0]
0x64B830: mov     ebp, [ebx]
0x64B832: test    ebp, ebp
0x64B834: jz      short loc_64B87C
0x64B836: cmp     dword ptr [edi+0A8h], 0
0x64B83D: jz      short loc_64B86F
0x64B83F: push    8; Size
0x64B841: call    FormHeapAlloc
0x64B846: add     esp, 4
0x64B849: test    eax, eax
0x64B84B: jz      short loc_64B85E
0x64B84D: mov     ecx, [edi+0A8h]
0x64B853: mov     [eax], ecx
0x64B855: mov     dword ptr [eax+4], 0
0x64B85C: jmp     short loc_64B860
0x64B85E: xor     eax, eax
0x64B860: mov     edx, [edi+0ACh]
0x64B866: mov     [eax+4], edx
0x64B869: mov     [edi+0ACh], eax
0x64B86F: mov     [edi+0A8h], ebp
0x64B875: mov     ebx, [ebx+4]
0x64B878: test    ebx, ebx
0x64B87A: jnz     short loc_64B830
0x64B87C: mov     eax, [esi]
0x64B87E: mov     edx, [eax+398h]
0x64B884: mov     ecx, esi
0x64B886: call    edx
0x64B888: mov     [edi+180h], al
0x64B88E: mov     al, [esi+11Dh]
0x64B894: mov     [edi+11Dh], al
0x64B89A: mov     ecx, [esi+120h]
0x64B8A0: mov     [edi+120h], ecx
0x64B8A6: mov     dl, [esi+124h]
0x64B8AC: mov     [edi+124h], dl
0x64B8B2: mov     eax, [esi+128h]
0x64B8B8: mov     [edi+128h], eax
0x64B8BE: mov     ecx, [esi+12Ch]
0x64B8C4: mov     [edi+12Ch], ecx
0x64B8CA: mov     edx, [esi+130h]
0x64B8D0: mov     [edi+130h], edx
0x64B8D6: mov     eax, [esi+134h]
0x64B8DC: mov     [edi+134h], eax
0x64B8E2: mov     edx, [esi]
0x64B8E4: mov     eax, [edx+3A4h]
0x64B8EA: mov     ecx, esi
0x64B8EC: call    eax
0x64B8EE: mov     ebp, [edi+184h]
0x64B8F4: mov     ebx, eax
0x64B8F6: cmp     ebp, ebx
0x64B8F8: jz      short loc_64B92F
0x64B8FA: test    ebp, ebp
0x64B8FC: jz      short loc_64B91B
0x64B8FE: lea     ecx, [ebp+4]
0x64B901: push    ecx; lpAddend
0x64B902: call    dword ptr ds:0A2807Ch
0x64B908: test    eax, eax
0x64B90A: jnz     short loc_64B91B
0x64B90C: test    ebp, ebp
0x64B90E: jz      short loc_64B91B
0x64B910: mov     edx, [ebp+0]
0x64B913: mov     eax, [edx]
0x64B915: push    1
0x64B917: mov     ecx, ebp
0x64B919: call    eax
0x64B91B: test    ebx, ebx
0x64B91D: mov     [edi+184h], ebx
0x64B923: jz      short loc_64B92F
0x64B925: add     ebx, 4
0x64B928: push    ebx; lpAddend
0x64B929: call    dword ptr ds:0A28078h
0x64B92F: mov     ebp, [edi+174h]
0x64B935: cmp     dword ptr [ebp+4], 0
0x64B939: jz      short loc_64B956
0x64B93B: jmp     short loc_64B940
0x64B93D: align 10h
0x64B940: mov     eax, [ebp+4]
0x64B943: mov     ebx, [eax+4]
0x64B946: push    eax
0x64B947: call    FormHeapFree
0x64B94C: add     esp, 4
0x64B94F: test    ebx, ebx
0x64B951: mov     [ebp+4], ebx
0x64B954: jnz     short loc_64B940
0x64B956: mov     dword ptr [ebp+0], 0
0x64B95D: mov     edx, [esi]
0x64B95F: mov     eax, [edx+298h]
0x64B965: mov     ecx, esi
0x64B967: call    eax
0x64B969: mov     ebx, eax
0x64B96B: test    ebx, ebx
0x64B96D: jz      short loc_64B9CD
0x64B96F: nop
0x64B970: cmp     dword ptr [ebx+4], 0
0x64B974: jnz     short loc_64B97B
0x64B976: cmp     dword ptr [ebx], 0
0x64B979: jz      short loc_64B9CD
0x64B97B: mov     ecx, [ebx]
0x64B97D: mov     edx, [ecx]
0x64B97F: mov     eax, [edx+4]
0x64B982: call    eax
0x64B984: test    eax, eax
0x64B986: mov     ebp, [edi+174h]
0x64B98C: mov     [esp+10h+arg_0], eax
0x64B990: jz      short loc_64B9C6
0x64B992: cmp     dword ptr [ebp+0], 0
0x64B996: jz      short loc_64B9C3
0x64B998: push    8; Size
0x64B99A: call    FormHeapAlloc
0x64B99F: add     esp, 4
0x64B9A2: test    eax, eax
0x64B9A4: jz      short loc_64B9B4
0x64B9A6: mov     ecx, [ebp+0]
0x64B9A9: mov     [eax], ecx
0x64B9AB: mov     dword ptr [eax+4], 0
0x64B9B2: jmp     short loc_64B9B6
0x64B9B4: xor     eax, eax
0x64B9B6: mov     edx, [ebp+4]
0x64B9B9: mov     [eax+4], edx
0x64B9BC: mov     [ebp+4], eax
0x64B9BF: mov     eax, [esp+10h+arg_0]
0x64B9C3: mov     [ebp+0], eax
0x64B9C6: mov     ebx, [ebx+4]
0x64B9C9: test    ebx, ebx
0x64B9CB: jnz     short loc_64B970
0x64B9CD: mov     cx, [esi+138h]
0x64B9D4: mov     [edi+138h], cx
0x64B9DB: mov     edx, [esi+13Ch]
0x64B9E1: mov     [edi+13Ch], edx
0x64B9E7: mov     eax, [esi+140h]
0x64B9ED: mov     [edi+140h], eax
0x64B9F3: mov     ebx, [edi+118h]
0x64B9F9: cmp     ebx, [esi+118h]
0x64B9FF: jz      short loc_64BA3B
0x64BA01: test    ebx, ebx
0x64BA03: jz      short loc_64BA21
0x64BA05: lea     ecx, [ebx+4]
0x64BA08: push    ecx; lpAddend
0x64BA09: call    dword ptr ds:0A2807Ch
0x64BA0F: test    eax, eax
0x64BA11: jnz     short loc_64BA21
0x64BA13: test    ebx, ebx
0x64BA15: jz      short loc_64BA21
0x64BA17: mov     edx, [ebx]
0x64BA19: mov     eax, [edx]
0x64BA1B: push    1
0x64BA1D: mov     ecx, ebx
0x64BA1F: call    eax
0x64BA21: mov     eax, [esi+118h]
0x64BA27: test    eax, eax
0x64BA29: mov     [edi+118h], eax
0x64BA2F: jz      short loc_64BA3B
0x64BA31: add     eax, 4
0x64BA34: push    eax; lpAddend
0x64BA35: call    dword ptr ds:0A28078h
0x64BA3B: movzx   ecx, byte ptr [esi+14Ch]
0x64BA42: mov     [edi+14Ch], cl
0x64BA48: mov     edx, [esi+150h]
0x64BA4E: mov     [edi+150h], edx
0x64BA54: fld     dword ptr [esi+154h]
0x64BA5A: fstp    dword ptr [edi+154h]
0x64BA60: fld     dword ptr [esi+158h]
0x64BA66: fstp    dword ptr [edi+158h]
0x64BA6C: mov     eax, [esi+188h]
0x64BA72: mov     [edi+188h], eax
0x64BA78: movzx   ecx, byte ptr [esi+16Ah]
0x64BA7F: mov     [edi+16Ah], cl
0x64BA85: mov     dl, [esi+16Ch]
0x64BA8B: mov     [edi+16Ch], dl
0x64BA91: mov     al, [esi+16Dh]
0x64BA97: mov     [edi+16Dh], al
0x64BA9D: mov     ecx, [esi+170h]
0x64BAA3: mov     [edi+170h], ecx
0x64BAA9: pop     edi
0x64BAAA: mov     dword ptr [esi+170h], 0
0x64BAB4: pop     esi
0x64BAB5: pop     ebp
0x64BAB6: pop     ebx
0x64BAB7: retn    4
