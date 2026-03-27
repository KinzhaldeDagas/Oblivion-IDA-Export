0x48D910: sub     esp, 8
0x48D913: push    ebx
0x48D914: mov     ebx, [ecx]
0x48D916: xor     al, al
0x48D918: test    ebx, ebx
0x48D91A: mov     [esp+0Ch+var_4], ecx
0x48D91E: mov     [esp+0Ch+var_5], al
0x48D922: jz      loc_48D9F9
0x48D928: push    ebp
0x48D929: push    esi
0x48D92A: push    edi
0x48D92B: jmp     short loc_48D930
0x48D92D: align 10h
0x48D930: mov     edi, [ebx]
0x48D932: test    edi, edi
0x48D934: jz      loc_48D9F6
0x48D93A: mov     ebp, [edi]
0x48D93C: test    ebp, ebp
0x48D93E: jz      short loc_48D993
0x48D940: mov     esi, [ebp+0]
0x48D943: test    esi, esi
0x48D945: jz      short loc_48D993
0x48D947: mov     ecx, esi
0x48D949: call    ExtraDataList_GetCharge
0x48D94E: fcomp   dword ptr ds:0A30634h
0x48D954: fnstsw  ax
0x48D956: test    ah, 44h
0x48D959: jnp     short loc_48D98C
0x48D95B: mov     ecx, esi
0x48D95D: mov     [esp+18h+var_5], 1
0x48D962: call    sub_41F640
0x48D967: push    0
0x48D969: mov     ecx, esi
0x48D96B: call    ExtraDataList_SetExtraCount
0x48D970: cmp     dword ptr [esi+4], 0
0x48D974: jnz     short loc_48D98C
0x48D976: push    esi
0x48D977: mov     ecx, ebp
0x48D979: call    BSSimpleList_Remove
0x48D97E: mov     eax, [esi]
0x48D980: mov     edx, [eax]
0x48D982: push    1
0x48D984: mov     ecx, esi
0x48D986: call    edx
0x48D988: mov     ebp, [edi]
0x48D98A: jmp     short loc_48D98F
0x48D98C: mov     ebp, [ebp+4]
0x48D98F: test    ebp, ebp
0x48D991: jnz     short loc_48D940
0x48D993: mov     eax, [edi]
0x48D995: test    eax, eax
0x48D997: jz      short loc_48D9E7
0x48D999: cmp     dword ptr [eax+4], 0
0x48D99D: jnz     short loc_48D9E7
0x48D99F: cmp     dword ptr [eax], 0
0x48D9A2: jnz     short loc_48D9E7
0x48D9A4: cmp     dword ptr [edi+4], 0
0x48D9A8: jnz     short loc_48D9E7
0x48D9AA: mov     eax, [esp+18h+var_4]
0x48D9AE: mov     ecx, [eax]
0x48D9B0: push    edi
0x48D9B1: call    BSSimpleList_Remove
0x48D9B6: mov     ecx, edi
0x48D9B8: call    ContainerEntryExtraData_ClearDataTable
0x48D9BD: mov     ecx, [edi]
0x48D9BF: test    ecx, ecx
0x48D9C1: jz      short loc_48D9C8
0x48D9C3: call    BSSimpleList_Clear
0x48D9C8: mov     ecx, [edi]
0x48D9CA: push    ecx
0x48D9CB: call    FormHeapFree
0x48D9D0: push    edi
0x48D9D1: mov     dword ptr [edi], 0
0x48D9D7: call    FormHeapFree
0x48D9DC: mov     edx, [esp+20h+var_4]
0x48D9E0: mov     ebx, [edx]
0x48D9E2: add     esp, 8
0x48D9E5: jmp     short loc_48D9EA
0x48D9E7: mov     ebx, [ebx+4]
0x48D9EA: test    ebx, ebx
0x48D9EC: mov     al, [esp+18h+var_5]
0x48D9F0: jnz     loc_48D930
0x48D9F6: pop     edi
0x48D9F7: pop     esi
0x48D9F8: pop     ebp
0x48D9F9: pop     ebx
0x48D9FA: add     esp, 8
0x48D9FD: retn
