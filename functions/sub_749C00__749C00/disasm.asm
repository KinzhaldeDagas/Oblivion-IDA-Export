0x749C00: sub     esp, 8
0x749C03: push    esi
0x749C04: push    edi
0x749C05: mov     edi, [esp+10h+arg_0]
0x749C09: push    edi
0x749C0A: mov     esi, ecx
0x749C0C: call    sub_717920
0x749C11: mov     al, [esi+0C0h]
0x749C17: push    1
0x749C19: lea     ecx, [esp+14h+var_8]
0x749C1D: push    ecx
0x749C1E: mov     byte ptr [esp+18h+arg_0], al
0x749C22: mov     eax, [edi+220h]
0x749C28: push    1
0x749C2A: lea     edx, [esp+1Ch+arg_0]
0x749C2E: push    edx
0x749C2F: push    eax
0x749C30: mov     eax, [eax+8]
0x749C33: mov     [esp+24h+var_8], 1
0x749C3B: call    eax
0x749C3D: mov     ecx, [esi+0D0h]
0x749C43: mov     eax, [edi+220h]
0x749C49: push    1
0x749C4B: lea     edx, [esp+28h+var_8]
0x749C4F: push    edx
0x749C50: mov     [esp+2Ch+var_4], ecx
0x749C54: mov     edx, [eax+8]
0x749C57: push    4
0x749C59: lea     ecx, [esp+30h+var_4]
0x749C5D: push    ecx
0x749C5E: push    eax
0x749C5F: mov     [esp+38h+var_8], 4
0x749C67: call    edx
0x749C69: mov     esi, [esi+0C8h]
0x749C6F: add     esp, 28h
0x749C72: test    esi, esi
0x749C74: jz      short loc_749C8B
0x749C76: mov     edx, [edi]
0x749C78: mov     edx, [edx+2Ch]
0x749C7B: lea     eax, [esi+8]
0x749C7E: mov     eax, [eax]
0x749C80: mov     esi, [esi]
0x749C82: push    eax
0x749C83: mov     ecx, edi
0x749C85: call    edx
0x749C87: test    esi, esi
0x749C89: jnz     short loc_749C76
0x749C8B: pop     edi
0x749C8C: pop     esi
0x749C8D: add     esp, 8
0x749C90: retn    4
