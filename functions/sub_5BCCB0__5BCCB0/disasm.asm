0x5BCCB0: push    0FFFFFFFFh
0x5BCCB2: push    offset SEH_5BCCB0
0x5BCCB7: mov     eax, large fs:0
0x5BCCBD: push    eax
0x5BCCBE: sub     esp, 1Ch
0x5BCCC1: push    ebx
0x5BCCC2: push    esi
0x5BCCC3: push    edi
0x5BCCC4: mov     eax, ds:0B30AACh
0x5BCCC9: xor     eax, esp
0x5BCCCB: push    eax
0x5BCCCC: lea     eax, [esp+38h+var_C]
0x5BCCD0: mov     large fs:0, eax
0x5BCCD6: mov     esi, ecx
0x5BCCD8: push    1; arg1
0x5BCCDA: push    0; canCreate
0x5BCCDC: call    InterfaceManager_GetSingleton
0x5BCCE1: movzx   eax, word ptr [eax+7Eh]
0x5BCCE5: mov     ecx, [esi+2Ch]
0x5BCCE8: movzx   eax, ax
0x5BCCEB: add     esp, 8
0x5BCCEE: push    0FDEh
0x5BCCF3: mov     [esp+3Ch+var_18], eax
0x5BCCF7: call    sub_588C10
0x5BCCFC: push    0; a3
0x5BCCFE: push    eax; a2
0x5BCCFF: lea     ecx, [esp+40h+var_14]; this
0x5BCD03: mov     [esp+40h+var_14.m_data], 0
0x5BCD0B: mov     [esp+40h+var_14.m_dataLen], 0
0x5BCD12: mov     [esp+40h+var_14.m_bufLen], 0
0x5BCD19: call    BSStringT_Set
0x5BCD1E: mov     edi, [esp+38h+var_14.m_data]
0x5BCD22: xor     bl, bl
0x5BCD24: xor     esi, esi
0x5BCD26: jmp     short loc_5BCD30
0x5BCD28: align 10h
0x5BCD30: mov     ax, [esp+38h+var_14.m_dataLen]
0x5BCD35: cmp     ax, 0FFFFh
0x5BCD39: jnz     short loc_5BCD4D
0x5BCD3B: mov     eax, edi
0x5BCD3D: lea     edx, [eax+1]
0x5BCD40: mov     cl, [eax]
0x5BCD42: add     eax, 1
0x5BCD45: test    cl, cl
0x5BCD47: jnz     short loc_5BCD40
0x5BCD49: sub     eax, edx
0x5BCD4B: jmp     short loc_5BCD50
0x5BCD4D: movzx   eax, ax
0x5BCD50: cmp     esi, eax
0x5BCD52: jnb     short loc_5BCD9C
0x5BCD54: mov     ecx, edi
0x5BCD56: neg     ecx
0x5BCD58: sbb     ecx, ecx
0x5BCD5A: and     ecx, esi
0x5BCD5C: mov     al, [ecx+edi]
0x5BCD5F: cmp     al, 2
0x5BCD61: jnz     short loc_5BCD71
0x5BCD63: push    0
0x5BCD65: mov     bl, 1
0x5BCD67: call    FormHeapFree
0x5BCD6C: add     esp, 4
0x5BCD6F: jmp     short loc_5BCD93
0x5BCD71: cmp     al, 3
0x5BCD73: jnz     short loc_5BCD83
0x5BCD75: push    0
0x5BCD77: xor     bl, bl
0x5BCD79: call    FormHeapFree
0x5BCD7E: add     esp, 4
0x5BCD81: jmp     short loc_5BCD93
0x5BCD83: test    bl, bl
0x5BCD85: jz      short loc_5BCD93
0x5BCD87: mov     large ds:0, al
0x5BCD8C: mov     large byte ptr ds:0, 0
0x5BCD93: add     esi, 1
0x5BCD96: cmp     esi, [esp+38h+var_18]
0x5BCD9A: jbe     short loc_5BCD30
0x5BCD9C: push    0
0x5BCD9E: call    FormHeapFree
0x5BCDA3: push    0
0x5BCDA5: call    FormHeapFree
0x5BCDAA: push    edi
0x5BCDAB: call    FormHeapFree
0x5BCDB0: add     esp, 0Ch
0x5BCDB3: mov     ecx, [esp+38h+var_C]
0x5BCDB7: mov     large fs:0, ecx
0x5BCDBE: pop     ecx
0x5BCDBF: pop     edi
0x5BCDC0: pop     esi
0x5BCDC1: pop     ebx
0x5BCDC2: add     esp, 28h
0x5BCDC5: retn
