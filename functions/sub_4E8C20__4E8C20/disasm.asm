0x4E8C20: sub     esp, 10h
0x4E8C23: push    ebp
0x4E8C24: push    esi
0x4E8C25: push    edi
0x4E8C26: mov     edi, ecx
0x4E8C28: mov     edx, [edi+20h]
0x4E8C2B: lea     ebp, [edi+1Ch]
0x4E8C2E: xor     eax, eax
0x4E8C30: test    edx, edx
0x4E8C32: mov     [esp+1Ch+var_8], edi
0x4E8C36: jbe     short loc_4E8C4F
0x4E8C38: mov     esi, [ebp+8]
0x4E8C3B: mov     ecx, esi
0x4E8C3D: lea     ecx, [ecx+0]
0x4E8C40: cmp     dword ptr [ecx], 0
0x4E8C43: jnz     short loc_4E8CC3
0x4E8C45: add     eax, 1
0x4E8C48: add     ecx, 4
0x4E8C4B: cmp     eax, edx
0x4E8C4D: jb      short loc_4E8C40
0x4E8C4F: xor     eax, eax
0x4E8C51: test    eax, eax
0x4E8C53: mov     [esp+1Ch+var_C], eax
0x4E8C57: jz      loc_4E8CE4
0x4E8C5D: lea     ecx, [ecx+0]
0x4E8C60: lea     eax, [esp+1Ch+var_10]
0x4E8C64: push    eax
0x4E8C65: lea     ecx, [esp+20h+var_4]
0x4E8C69: push    ecx
0x4E8C6A: lea     edx, [esp+24h+var_C]
0x4E8C6E: push    edx
0x4E8C6F: mov     ecx, ebp
0x4E8C71: mov     [esp+28h+var_10], 0
0x4E8C79: call    sub_452600
0x4E8C7E: mov     esi, [esp+1Ch+var_10]
0x4E8C82: test    esi, esi
0x4E8C84: jz      short loc_4E8CD9
0x4E8C86: mov     ecx, esi
0x4E8C88: call    BSSimpleList_IsEmpty
0x4E8C8D: test    al, al
0x4E8C8F: jnz     short loc_4E8CD0
0x4E8C91: mov     edi, [esi]
0x4E8C93: test    edi, edi
0x4E8C95: jz      short loc_4E8CA7
0x4E8C97: mov     ecx, edi
0x4E8C99: call    sub_4BEFA0
0x4E8C9E: push    edi
0x4E8C9F: call    FormHeapFree
0x4E8CA4: add     esp, 4
0x4E8CA7: mov     eax, [esi+4]
0x4E8CAA: test    eax, eax
0x4E8CAC: jz      short loc_4E8CC8
0x4E8CAE: mov     ecx, [eax+4]
0x4E8CB1: mov     [esi+4], ecx
0x4E8CB4: mov     edx, [eax]
0x4E8CB6: push    eax
0x4E8CB7: mov     [esi], edx
0x4E8CB9: call    FormHeapFree
0x4E8CBE: add     esp, 4
0x4E8CC1: jmp     short loc_4E8C86
0x4E8CC3: mov     eax, [esi+eax*4]
0x4E8CC6: jmp     short loc_4E8C51
0x4E8CC8: mov     dword ptr [esi], 0
0x4E8CCE: jmp     short loc_4E8C86
0x4E8CD0: push    esi
0x4E8CD1: call    FormHeapFree
0x4E8CD6: add     esp, 4
0x4E8CD9: cmp     [esp+1Ch+var_C], 0
0x4E8CDE: jnz     short loc_4E8C60
0x4E8CE0: mov     edi, [esp+1Ch+var_8]
0x4E8CE4: mov     ecx, ebp
0x4E8CE6: call    NiTMap_Clear
0x4E8CEB: mov     dword ptr [edi+18h], 0
0x4E8CF2: pop     edi
0x4E8CF3: pop     esi
0x4E8CF4: pop     ebp
0x4E8CF5: add     esp, 10h
0x4E8CF8: retn
