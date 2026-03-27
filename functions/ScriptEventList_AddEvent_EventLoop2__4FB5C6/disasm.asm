0x4FB5C6: mov     ecx, [edx]
0x4FB5C8: test    ecx, ecx
0x4FB5CA: jz      short ScriptEventList_AddEvent___Done
0x4FB5CC: cmp     dword ptr [ecx], 0
0x4FB5CF: jz      short loc_4FB5DF
0x4FB5D1: mov     edx, [edx+4]
0x4FB5D4: test    edx, edx
0x4FB5D6: jnz     short ScriptEventList_AddEvent___EventLoop2
0x4FB5D8: pop     esi
0x4FB5D9: pop     ebp
0x4FB5DA: pop     ebx
0x4FB5DB: pop     edi
0x4FB5DC: retn    8
0x4FB5DF: test    ecx, ecx
0x4FB5E1: jz      short ScriptEventList_AddEvent___Done
0x4FB5E3: or      [ecx+4], esi
0x4FB5E6: mov     al, 1
