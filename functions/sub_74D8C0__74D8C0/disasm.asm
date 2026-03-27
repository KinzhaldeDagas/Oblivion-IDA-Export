0x74D8C0: push    ebx
0x74D8C1: mov     ebx, [esp+4+arg_4]
0x74D8C5: push    ebp
0x74D8C6: mov     ebp, ecx
0x74D8C8: movzx   eax, word ptr [ebp+22h]
0x74D8CC: cmp     ebx, eax
0x74D8CE: push    esi
0x74D8CF: push    edi
0x74D8D0: jnb     loc_74D95B
0x74D8D6: mov     ecx, [ebp+1Ch]
0x74D8D9: mov     esi, [ecx+ebx*4]
0x74D8DC: test    esi, esi
0x74D8DE: jz      short loc_74D8EA
0x74D8E0: lea     edx, [esi+4]
0x74D8E3: push    edx; lpAddend
0x74D8E4: call    dword ptr ds:0A28078h
0x74D8EA: mov     edi, [esp+10h+arg_8]
0x74D8EE: test    edi, edi
0x74D8F0: mov     [esp+10h+arg_8], edi
0x74D8F4: jz      short loc_74D900
0x74D8F6: lea     eax, [edi+4]
0x74D8F9: push    eax; lpAddend
0x74D8FA: call    dword ptr ds:0A28078h
0x74D900: lea     ecx, [esp+10h+arg_8]
0x74D904: push    ecx
0x74D905: push    ebx
0x74D906: lea     ecx, [ebp+18h]
0x74D909: call    sub_4B34E0
0x74D90E: test    edi, edi
0x74D910: mov     ebx, ds:0A2807Ch
0x74D916: jz      short loc_74D92C
0x74D918: lea     edx, [edi+4]
0x74D91B: push    edx; lpAddend
0x74D91C: call    ebx ; InterlockedDecrement
0x74D91E: test    eax, eax
0x74D920: jnz     short loc_74D92C
0x74D922: mov     eax, [edi]
0x74D924: mov     edx, [eax]
0x74D926: push    1
0x74D928: mov     ecx, edi
0x74D92A: call    edx
0x74D92C: test    esi, esi
0x74D92E: mov     ebp, [esp+10h+arg_0]
0x74D932: mov     [ebp+0], esi
0x74D935: jz      short loc_74D952
0x74D937: lea     edi, [esi+4]
0x74D93A: push    edi; lpAddend
0x74D93B: call    dword ptr ds:0A28078h
0x74D941: push    edi; lpAddend
0x74D942: call    ebx ; InterlockedDecrement
0x74D944: test    eax, eax
0x74D946: jnz     short loc_74D952
0x74D948: mov     eax, [esi]
0x74D94A: mov     edx, [eax]
0x74D94C: push    1
0x74D94E: mov     ecx, esi
0x74D950: call    edx
0x74D952: pop     edi
0x74D953: pop     esi
0x74D954: mov     eax, ebp
0x74D956: pop     ebp
0x74D957: pop     ebx
0x74D958: retn    0Ch
0x74D95B: mov     edi, [esp+10h+arg_8]
0x74D95F: test    edi, edi
0x74D961: mov     [esp+10h+arg_8], edi
0x74D965: jz      short loc_74D971
0x74D967: lea     eax, [edi+4]
0x74D96A: push    eax; lpAddend
0x74D96B: call    dword ptr ds:0A28078h
0x74D971: movzx   ecx, word ptr [ebp+20h]
0x74D975: cmp     ebx, ecx
0x74D977: lea     esi, [ebp+18h]
0x74D97A: jb      short loc_74D98A
0x74D97C: movzx   edx, word ptr [esi+0Eh]
0x74D980: add     edx, ebx
0x74D982: push    edx
0x74D983: mov     ecx, esi
0x74D985: call    sub_523B10
0x74D98A: lea     eax, [esp+10h+arg_8]
0x74D98E: push    eax
0x74D98F: push    ebx
0x74D990: mov     ecx, esi
0x74D992: call    sub_4B34E0
0x74D997: test    edi, edi
0x74D999: jz      short loc_74D9B3
0x74D99B: lea     ecx, [edi+4]
0x74D99E: push    ecx; lpAddend
0x74D99F: call    dword ptr ds:0A2807Ch
0x74D9A5: test    eax, eax
0x74D9A7: jnz     short loc_74D9B3
0x74D9A9: mov     edx, [edi]
0x74D9AB: mov     eax, [edx]
0x74D9AD: push    1
0x74D9AF: mov     ecx, edi
0x74D9B1: call    eax
0x74D9B3: mov     eax, [esp+10h+arg_0]
0x74D9B7: pop     edi
0x74D9B8: pop     esi
0x74D9B9: pop     ebp
0x74D9BA: mov     dword ptr [eax], 0
0x74D9C0: pop     ebx
0x74D9C1: retn    0Ch
