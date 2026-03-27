0x486030: push    ebx
0x486031: mov     ebx, [ecx]
0x486033: test    ebx, ebx
0x486035: jz      loc_486147
0x48603B: push    ebp
0x48603C: push    esi
0x48603D: push    edi
0x48603E: mov     edi, edi
0x486040: mov     ebp, [ebx]
0x486042: test    ebp, ebp
0x486044: jz      loc_486139
0x48604A: mov     esi, [ebp+0]
0x48604D: test    esi, esi
0x48604F: jz      loc_4860D1
0x486055: mov     edi, [esi]
0x486057: test    edi, edi
0x486059: jz      short loc_4860CA
0x48605B: push    0
0x48605D: mov     ecx, edi
0x48605F: call    ExtraDataList_HasWorn
0x486064: test    al, al
0x486066: jz      short loc_4860CA
0x486068: cmp     [esp+10h+arg_0], 0
0x48606D: jz      short loc_48607A
0x48606F: mov     ecx, edi
0x486071: call    sub_41DF40
0x486076: test    al, al
0x486078: jnz     short loc_4860CA
0x48607A: push    0
0x48607C: mov     ecx, edi
0x48607E: call    sub_41F6A0
0x486083: push    0
0x486085: mov     ecx, edi
0x486087: call    ExtraDataList_SetExtraCount
0x48608C: cmp     dword ptr [edi+4], 0
0x486090: jnz     short loc_4860CA
0x486092: mov     eax, [esi+4]
0x486095: test    eax, eax
0x486097: jz      short loc_4860B8
0x486099: mov     ecx, [eax+4]
0x48609C: mov     [esi+4], ecx
0x48609F: mov     edx, [eax]
0x4860A1: push    eax
0x4860A2: mov     [esi], edx
0x4860A4: call    FormHeapFree
0x4860A9: mov     eax, [edi]
0x4860AB: mov     edx, [eax]
0x4860AD: add     esp, 4
0x4860B0: push    1
0x4860B2: mov     ecx, edi
0x4860B4: call    edx
0x4860B6: jmp     short loc_4860CD
0x4860B8: mov     dword ptr [esi], 0
0x4860BE: mov     eax, [edi]
0x4860C0: mov     edx, [eax]
0x4860C2: push    1
0x4860C4: mov     ecx, edi
0x4860C6: call    edx
0x4860C8: jmp     short loc_4860CD
0x4860CA: mov     esi, [esi+4]
0x4860CD: test    esi, esi
0x4860CF: jnz     short loc_486055
0x4860D1: mov     eax, [ebp+0]
0x4860D4: test    eax, eax
0x4860D6: jz      short loc_486139
0x4860D8: cmp     dword ptr [eax+4], 0
0x4860DC: jnz     short loc_486139
0x4860DE: cmp     dword ptr [eax], 0
0x4860E1: jnz     short loc_486139
0x4860E3: cmp     dword ptr [ebp+4], 0
0x4860E7: jnz     short loc_486139
0x4860E9: mov     eax, [ebx+4]
0x4860EC: test    eax, eax
0x4860EE: jz      short loc_486105
0x4860F0: mov     ecx, [eax+4]
0x4860F3: mov     [ebx+4], ecx
0x4860F6: mov     edx, [eax]
0x4860F8: push    eax
0x4860F9: mov     [ebx], edx
0x4860FB: call    FormHeapFree
0x486100: add     esp, 4
0x486103: jmp     short loc_48610B
0x486105: mov     dword ptr [ebx], 0
0x48610B: mov     ecx, ebp
0x48610D: call    ContainerEntryExtraData_ClearDataTable
0x486112: mov     ecx, [ebp+0]
0x486115: test    ecx, ecx
0x486117: jz      short loc_48611E
0x486119: call    BSSimpleList_Clear
0x48611E: mov     eax, [ebp+0]
0x486121: push    eax
0x486122: call    FormHeapFree
0x486127: push    ebp
0x486128: mov     dword ptr [ebp+0], 0
0x48612F: call    FormHeapFree
0x486134: add     esp, 8
0x486137: jmp     short loc_48613C
0x486139: mov     ebx, [ebx+4]
0x48613C: test    ebx, ebx
0x48613E: jnz     loc_486040
0x486144: pop     edi
0x486145: pop     esi
0x486146: pop     ebp
0x486147: pop     ebx
0x486148: retn    4
