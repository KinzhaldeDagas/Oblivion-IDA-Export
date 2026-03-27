0x71D8D0: mov     eax, [esp+arg_14]
0x71D8D4: cmp     dword ptr [eax+4], 0FF00h
0x71D8DB: jnz     short locret_71D957
0x71D8DD: mov     eax, [eax]
0x71D8DF: cmp     eax, 0FF0000h
0x71D8E4: jnz     short loc_71D931
0x71D8E6: mov     eax, [esp+arg_4]
0x71D8EA: test    eax, eax
0x71D8EC: jbe     short locret_71D957
0x71D8EE: mov     ecx, [esp+Src]
0x71D8F2: push    ebp
0x71D8F3: push    esi
0x71D8F4: push    edi
0x71D8F5: mov     edi, [esp+0Ch+arg_0]
0x71D8F9: mov     ebp, eax
0x71D8FB: mov     eax, [esp+0Ch+Dst]
0x71D8FF: nop
0x71D900: test    edi, edi
0x71D902: jbe     short loc_71D928
0x71D904: mov     esi, edi
0x71D906: movzx   edx, byte ptr [ecx+2]
0x71D90A: mov     [eax], dl
0x71D90C: movzx   edx, byte ptr [ecx+1]
0x71D910: add     eax, 1
0x71D913: mov     [eax], dl
0x71D915: movzx   edx, byte ptr [ecx]
0x71D918: add     eax, 1
0x71D91B: mov     [eax], dl
0x71D91D: add     eax, 1
0x71D920: add     ecx, 3
0x71D923: sub     esi, 1
0x71D926: jnz     short loc_71D906
0x71D928: sub     ebp, 1
0x71D92B: jnz     short loc_71D900
0x71D92D: pop     edi
0x71D92E: pop     esi
0x71D92F: pop     ebp
0x71D930: retn
0x71D931: cmp     eax, 0FFh
0x71D936: jnz     short locret_71D957
0x71D938: mov     eax, [esp+arg_0]
0x71D93C: imul    eax, [esp+arg_4]
0x71D941: mov     ecx, [esp+Src]
0x71D945: mov     edx, [esp+Dst]
0x71D949: lea     eax, [eax+eax*2]
0x71D94C: push    eax; Size
0x71D94D: push    ecx; Src
0x71D94E: push    edx; Dst
0x71D94F: call    _memcpy
0x71D954: add     esp, 0Ch
0x71D957: retn
