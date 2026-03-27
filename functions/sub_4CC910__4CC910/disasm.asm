0x4CC910: push    ebx
0x4CC911: push    ebp
0x4CC912: mov     ebx, ecx
0x4CC914: push    esi
0x4CC915: push    ebx; a2
0x4CC916: mov     ecx, offset stru_B35C80; this
0x4CC91B: xor     ebp, ebp
0x4CC91D: call    sub_496EA0
0x4CC922: lea     esi, [ebx+48h]
0x4CC925: test    esi, esi
0x4CC927: jz      short loc_4CC966
0x4CC929: push    edi
0x4CC92A: lea     ebx, [ebx+0]
0x4CC930: mov     edi, [esi]
0x4CC932: test    edi, edi
0x4CC934: jz      short loc_4CC94A
0x4CC936: mov     eax, [edi]
0x4CC938: mov     edx, [eax+170h]
0x4CC93E: mov     ecx, edi
0x4CC940: call    edx
0x4CC942: cmp     eax, ds:0B33AA8h
0x4CC948: jz      short loc_4CC963
0x4CC94A: mov     esi, [esi+4]
0x4CC94D: test    esi, esi
0x4CC94F: jnz     short loc_4CC930
0x4CC951: pop     edi
0x4CC952: push    ebx; a2
0x4CC953: mov     ecx, offset stru_B35C80; this
0x4CC958: call    sub_496F50
0x4CC95D: pop     esi
0x4CC95E: mov     eax, ebp
0x4CC960: pop     ebp
0x4CC961: pop     ebx
0x4CC962: retn
0x4CC963: mov     ebp, edi
0x4CC965: pop     edi
0x4CC966: push    ebx; a2
0x4CC967: mov     ecx, offset stru_B35C80; this
0x4CC96C: call    sub_496F50
0x4CC971: pop     esi
0x4CC972: mov     eax, ebp
0x4CC974: pop     ebp
0x4CC975: pop     ebx
0x4CC976: retn
