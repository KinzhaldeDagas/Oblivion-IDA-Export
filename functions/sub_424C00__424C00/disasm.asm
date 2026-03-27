0x424C00: push    ebx
0x424C01: mov     ebx, [esp+4+arg_0]
0x424C05: test    ebx, ebx
0x424C07: push    ebp
0x424C08: mov     ebp, ecx
0x424C0A: jz      short loc_424C3D
0x424C0C: push    edi
0x424C0D: push    42h ; 'B'; a2
0x424C0F: call    BaseExtraList_GetExtraData
0x424C14: mov     edi, eax
0x424C16: test    edi, edi
0x424C18: jz      short loc_424C3C
0x424C1A: push    esi
0x424C1B: lea     esi, [edi+0Ch]
0x424C1E: push    ebx
0x424C1F: mov     ecx, esi
0x424C21: call    BSSimpleList_Remove
0x424C26: cmp     dword ptr [esi+4], 0
0x424C2A: jnz     short loc_424C3B
0x424C2C: cmp     dword ptr [esi], 0
0x424C2F: jnz     short loc_424C3B
0x424C31: push    1
0x424C33: push    edi
0x424C34: mov     ecx, ebp
0x424C36: call    BaseExtraList_RemoveExtraByPtr
0x424C3B: pop     esi
0x424C3C: pop     edi
0x424C3D: pop     ebp
0x424C3E: pop     ebx
0x424C3F: retn    4
