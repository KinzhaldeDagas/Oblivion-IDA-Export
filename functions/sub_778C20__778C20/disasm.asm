0x778C20: mov     ecx, [esp+arg_0]
0x778C24: mov     eax, [ecx+8]
0x778C27: push    ebx
0x778C28: push    ebp
0x778C29: push    esi
0x778C2A: mov     esi, [ecx+0Ch]
0x778C2D: mov     ecx, [esi+28h]
0x778C30: mov     ebp, [ecx+4]
0x778C33: xor     bl, bl
0x778C35: test    eax, eax
0x778C37: jbe     short loc_778C70
0x778C39: push    edi
0x778C3A: mov     edi, eax
0x778C3C: lea     esp, [esp+0]
0x778C40: mov     eax, [esi+28h]
0x778C43: test    eax, eax
0x778C45: jz      short loc_778C54
0x778C47: mov     ecx, [eax+4]
0x778C4A: mov     edx, [ecx]
0x778C4C: mov     eax, [edx+10h]
0x778C4F: push    esi
0x778C50: call    eax
0x778C52: mov     bl, 1
0x778C54: add     esi, 2Ch ; ','
0x778C57: sub     edi, 1
0x778C5A: jnz     short loc_778C40
0x778C5C: test    bl, bl
0x778C5E: pop     edi
0x778C5F: jz      short loc_778C70
0x778C61: cmp     dword ptr [ebp+4], 0
0x778C65: jnz     short loc_778C70
0x778C67: mov     edx, [ebp+0]
0x778C6A: mov     eax, [edx]
0x778C6C: mov     ecx, ebp
0x778C6E: call    eax
0x778C70: pop     esi
0x778C71: pop     ebp
0x778C72: mov     al, bl
0x778C74: pop     ebx
0x778C75: retn    4
