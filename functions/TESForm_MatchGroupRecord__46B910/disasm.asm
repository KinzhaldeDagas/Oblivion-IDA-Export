0x46B910: mov     edx, [esp+groupRecord]
0x46B914: xor     al, al
0x46B916: test    edx, edx
0x46B918: jz      short locret_46B941
0x46B91A: push    esi
0x46B91B: mov     esi, [edx]
0x46B91D: cmp     esi, ds:0B05E20h
0x46B923: pop     esi
0x46B924: jnz     short locret_46B941
0x46B926: cmp     dword ptr [edx+0Ch], 0
0x46B92A: jnz     short locret_46B941
0x46B92C: movzx   ecx, byte ptr [ecx+4]
0x46B930: mov     edx, [edx+8]
0x46B933: lea     ecx, [ecx+ecx*2]
0x46B936: cmp     edx, ds:0B05E08h[ecx*4]
0x46B93D: jnz     short locret_46B941
0x46B93F: mov     al, 1
0x46B941: retn    0Ch
