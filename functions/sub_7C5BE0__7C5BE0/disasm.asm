0x7C5BE0: sub     esp, 0Ch
0x7C5BE3: push    ebp
0x7C5BE4: mov     ebp, [ecx+0F8h]
0x7C5BEA: test    ebp, ebp
0x7C5BEC: mov     [esp+10h+var_C], 0
0x7C5BF4: jz      loc_7C5CEE
0x7C5BFA: push    ebx
0x7C5BFB: push    esi
0x7C5BFC: push    edi
0x7C5BFD: lea     ecx, [ecx+0]
0x7C5C00: mov     edi, [ebp+8]
0x7C5C03: test    edi, edi
0x7C5C05: lea     eax, [ebp+8]
0x7C5C08: mov     ebp, [ebp+0]
0x7C5C0B: jz      short loc_7C5C27
0x7C5C0D: lea     eax, [esp+1Ch+var_8]
0x7C5C11: push    eax
0x7C5C12: mov     ecx, edi
0x7C5C14: call    sub_405AD0
0x7C5C19: or      [esp+1Ch+var_C], 1
0x7C5C1E: cmp     dword ptr [eax], 0
0x7C5C21: jz      short loc_7C5C27
0x7C5C23: mov     bl, 1
0x7C5C25: jmp     short loc_7C5C29
0x7C5C27: xor     bl, bl
0x7C5C29: test    byte ptr [esp+1Ch+var_C], 1
0x7C5C2E: jz      short loc_7C5C59
0x7C5C30: mov     esi, [esp+1Ch+var_8]
0x7C5C34: and     [esp+1Ch+var_C], 0FFFFFFFEh
0x7C5C39: test    esi, esi
0x7C5C3B: jz      short loc_7C5C59
0x7C5C3D: lea     ecx, [esi+4]
0x7C5C40: push    ecx; lpAddend
0x7C5C41: call    dword ptr ds:0A2807Ch
0x7C5C47: test    eax, eax
0x7C5C49: jnz     short loc_7C5C59
0x7C5C4B: test    esi, esi
0x7C5C4D: jz      short loc_7C5C59
0x7C5C4F: mov     edx, [esi]
0x7C5C51: mov     eax, [edx]
0x7C5C53: push    1
0x7C5C55: mov     ecx, esi
0x7C5C57: call    eax
0x7C5C59: test    bl, bl
0x7C5C5B: jz      loc_7C5CE3
0x7C5C61: mov     ecx, [edi+114h]
0x7C5C67: push    ecx; a2
0x7C5C68: mov     ecx, ds:0B42F50h; this
0x7C5C6E: call    BSTextureManager_DiscardShadowMap
0x7C5C73: mov     esi, [edi+114h]
0x7C5C79: test    esi, esi
0x7C5C7B: jz      short loc_7C5CA3
0x7C5C7D: lea     edx, [esi+4]
0x7C5C80: push    edx; lpAddend
0x7C5C81: call    dword ptr ds:0A2807Ch
0x7C5C87: test    eax, eax
0x7C5C89: jnz     short loc_7C5C99
0x7C5C8B: test    esi, esi
0x7C5C8D: jz      short loc_7C5C99
0x7C5C8F: mov     eax, [esi]
0x7C5C91: mov     edx, [eax]
0x7C5C93: push    1
0x7C5C95: mov     ecx, esi
0x7C5C97: call    edx
0x7C5C99: mov     dword ptr [edi+114h], 0
0x7C5CA3: lea     eax, [esp+1Ch+var_4]
0x7C5CA7: push    eax
0x7C5CA8: mov     ecx, edi
0x7C5CAA: call    sub_405AD0
0x7C5CAF: mov     eax, [eax]
0x7C5CB1: or      word ptr [eax+18h], 1
0x7C5CB6: mov     eax, [esp+1Ch+var_4]
0x7C5CBA: test    eax, eax
0x7C5CBC: jz      short loc_7C5CDC
0x7C5CBE: mov     esi, eax
0x7C5CC0: add     eax, 4
0x7C5CC3: push    eax; lpAddend
0x7C5CC4: call    dword ptr ds:0A2807Ch
0x7C5CCA: test    eax, eax
0x7C5CCC: jnz     short loc_7C5CDC
0x7C5CCE: test    esi, esi
0x7C5CD0: jz      short loc_7C5CDC
0x7C5CD2: mov     edx, [esi]
0x7C5CD4: mov     eax, [edx]
0x7C5CD6: push    1
0x7C5CD8: mov     ecx, esi
0x7C5CDA: call    eax
0x7C5CDC: mov     ecx, edi
0x7C5CDE: call    sub_7D5320
0x7C5CE3: test    ebp, ebp
0x7C5CE5: jnz     loc_7C5C00
0x7C5CEB: pop     edi
0x7C5CEC: pop     esi
0x7C5CED: pop     ebx
0x7C5CEE: pop     ebp
0x7C5CEF: add     esp, 0Ch
0x7C5CF2: retn
