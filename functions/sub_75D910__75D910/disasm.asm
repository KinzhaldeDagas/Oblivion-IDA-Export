0x75D910: movzx   edx, word ptr [ecx+7Eh]
0x75D914: mov     eax, [esp+arg_0]
0x75D918: cmp     eax, edx
0x75D91A: push    esi
0x75D91B: jb      short loc_75D92B
0x75D91D: mov     esi, [esp+4+arg_4]
0x75D921: test    esi, esi
0x75D923: jz      short loc_75D981
0x75D925: lea     eax, [esi+4]
0x75D928: push    eax
0x75D929: jmp     short loc_75D96D
0x75D92B: mov     edx, [ecx+78h]
0x75D92E: cmp     dword ptr [edx+eax*4], 0
0x75D932: lea     edx, [edx+eax*4]
0x75D935: jnz     short loc_75D945
0x75D937: mov     esi, [esp+4+arg_4]
0x75D93B: test    esi, esi
0x75D93D: jz      short loc_75D981
0x75D93F: lea     eax, [esi+4]
0x75D942: push    eax
0x75D943: jmp     short loc_75D96D
0x75D945: mov     ecx, [ecx+78h]
0x75D948: mov     eax, [ecx+eax*4]
0x75D94B: mov     cx, [eax+0Ah]
0x75D94F: cmp     cx, [eax+8]
0x75D953: jnb     short loc_75D961
0x75D955: mov     ecx, [edx]
0x75D957: lea     eax, [esp+4+arg_4]
0x75D95B: push    eax
0x75D95C: call    sub_6FEB00
0x75D961: mov     esi, [esp+4+arg_4]
0x75D965: test    esi, esi
0x75D967: jz      short loc_75D981
0x75D969: lea     ecx, [esi+4]
0x75D96C: push    ecx; lpAddend
0x75D96D: call    dword ptr ds:0A2807Ch
0x75D973: test    eax, eax
0x75D975: jnz     short loc_75D981
0x75D977: mov     edx, [esi]
0x75D979: mov     eax, [edx]
0x75D97B: push    1
0x75D97D: mov     ecx, esi
0x75D97F: call    eax
0x75D981: pop     esi
0x75D982: retn    8
