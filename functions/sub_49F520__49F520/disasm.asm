0x49F520: xor     eax, eax; For each 0x10-byte controlled-block record owned by this sequence, clears the pointer at record +8. Called only by ActorAnimData's manager-wide controlled-block reset pass at 0x4730B0.
0x49F522: cmp     [ecx+0Ch], eax
0x49F525: jbe     short locret_49F547
0x49F527: xor     edx, edx
0x49F529: push    edi
0x49F52A: lea     ebx, [ebx+0]
0x49F530: mov     edi, [ecx+14h]
0x49F533: mov     dword ptr [edi+edx+8], 0
0x49F53B: add     eax, 1
0x49F53E: add     edx, 10h
0x49F541: cmp     eax, [ecx+0Ch]
0x49F544: jb      short loc_49F530
0x49F546: pop     edi
0x49F547: retn
