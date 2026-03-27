0x464910: mov     eax, ds:0B33398h
0x464915: sub     esp, 10h
0x464918: push    ebx
0x464919: push    esi
0x46491A: mov     esi, [eax+10h]
0x46491D: mov     ebx, ecx
0x46491F: call    dword ptr ds:0A2808Ch
0x464925: cmp     eax, esi
0x464927: jnz     short loc_46492E
0x464929: mov     al, [ebx+18h]
0x46492C: jmp     short loc_464934
0x46492E: mov     eax, [ebx+18h]
0x464931: shr     eax, 12h
0x464934: and     al, 1
0x464936: test    al, al
0x464938: jnz     short loc_464942
0x46493A: pop     esi
0x46493B: pop     ebx
0x46493C: add     esp, 10h
0x46493F: retn    4
0x464942: mov     esi, [esp+18h+arg_0]
0x464946: push    edi
0x464947: push    esi
0x464948: mov     ecx, ebx
0x46494A: call    TESSaveLoadGame_LoadForm
0x46494F: mov     ecx, esi; this
0x464951: mov     [esp+1Ch+var_D], al
0x464955: call    TESObjectCELL_IsInterior
0x46495A: test    al, al
0x46495C: jz      short loc_4649C8
0x46495E: mov     esi, [esi+0Ch]
0x464961: lea     ecx, [esp+1Ch+var_C]
0x464965: push    ecx
0x464966: mov     ecx, [ebx+8]
0x464969: push    esi
0x46496A: call    NiTMap_GetAt
0x46496F: test    al, al
0x464971: jz      loc_464AA0
0x464977: mov     edi, [esp+1Ch+var_C]
0x46497B: test    edi, edi
0x46497D: mov     esi, edi
0x46497F: jz      short loc_46499B
0x464981: mov     eax, [esi]
0x464983: test    eax, eax
0x464985: jz      short loc_464994
0x464987: push    eax
0x464988: mov     ecx, ebx
0x46498A: call    sub_463D70
0x46498F: mov     [esp+1Ch+var_D], 1
0x464994: mov     esi, [esi+4]
0x464997: test    esi, esi
0x464999: jnz     short loc_464981
0x46499B: mov     edx, [esp+1Ch+arg_0]
0x46499F: mov     eax, [edx+0Ch]
0x4649A2: mov     ecx, [ebx+8]
0x4649A5: push    eax
0x4649A6: call    NiTMap_RemoveAt
0x4649AB: mov     ecx, edi
0x4649AD: call    BSSimpleList_Clear
0x4649B2: push    edi
0x4649B3: call    FormHeapFree
0x4649B8: mov     al, [esp+20h+var_D]
0x4649BC: add     esp, 4
0x4649BF: pop     edi
0x4649C0: pop     esi
0x4649C1: pop     ebx
0x4649C2: add     esp, 10h
0x4649C5: retn    4
0x4649C8: mov     ecx, esi; this
0x4649CA: call    TESObjectCELL_GetWorldSpace
0x4649CF: mov     eax, [eax+0Ch]
0x4649D2: lea     ecx, [esp+1Ch+var_C]
0x4649D6: push    ecx
0x4649D7: mov     ecx, [ebx+0Ch]
0x4649DA: push    eax
0x4649DB: call    NiTMap_GetAt
0x4649E0: test    al, al
0x4649E2: jz      loc_464AA0
0x4649E8: mov     edi, [esp+1Ch+var_C]
0x4649EC: push    ebp
0x4649ED: mov     ecx, esi; this
0x4649EF: xor     ebp, ebp
0x4649F1: call    TESObjectCELL_GetXCoordinate
0x4649F6: mov     ecx, esi; this
0x4649F8: mov     [esp+20h+var_8], eax
0x4649FC: call    TESObjectCELL_GetYCoordinate
0x464A01: mov     [esp+20h+var_4], eax
0x464A05: mov     eax, edi
0x464A07: test    eax, eax
0x464A09: jz      short loc_464A74
0x464A0B: jmp     short loc_464A10
0x464A0D: align 10h
0x464A10: mov     esi, [edi]
0x464A12: test    esi, esi
0x464A14: jz      short loc_464A63
0x464A16: mov     edx, [esp+20h+var_8]
0x464A1A: cmp     edx, [esi+4]
0x464A1D: jnz     short loc_464A63
0x464A1F: mov     eax, [esp+20h+var_4]
0x464A23: cmp     eax, [esi+8]
0x464A26: jnz     short loc_464A63
0x464A28: mov     ecx, [esi]
0x464A2A: push    ecx
0x464A2B: mov     ecx, ebx
0x464A2D: call    sub_463D70
0x464A32: test    ebp, ebp
0x464A34: mov     [esp+20h+var_D], 1
0x464A39: jz      short loc_464A51
0x464A3B: push    esi
0x464A3C: mov     ecx, ebp
0x464A3E: call    BSSimpleList_Remove
0x464A43: mov     edi, [ebp+4]
0x464A46: push    esi
0x464A47: call    FormHeapFree
0x464A4C: add     esp, 4
0x464A4F: jmp     short loc_464A68
0x464A51: mov     ecx, edi
0x464A53: call    sub_67F100
0x464A58: push    esi
0x464A59: call    FormHeapFree
0x464A5E: add     esp, 4
0x464A61: jmp     short loc_464A68
0x464A63: mov     ebp, edi
0x464A65: mov     edi, [edi+4]
0x464A68: test    edi, edi
0x464A6A: jnz     short loc_464A10
0x464A6C: mov     esi, [esp+20h+arg_0]
0x464A70: mov     eax, [esp+20h+var_C]
0x464A74: cmp     dword ptr [eax+4], 0
0x464A78: pop     ebp
0x464A79: jnz     short loc_464AA0
0x464A7B: cmp     dword ptr [eax], 0
0x464A7E: jnz     short loc_464AA0
0x464A80: mov     ecx, esi; this
0x464A82: call    TESObjectCELL_GetWorldSpace
0x464A87: mov     edx, [eax+0Ch]
0x464A8A: mov     ecx, [ebx+0Ch]
0x464A8D: push    edx
0x464A8E: call    NiTMap_RemoveAt
0x464A93: mov     eax, [esp+1Ch+var_C]
0x464A97: push    eax
0x464A98: call    FormHeapFree
0x464A9D: add     esp, 4
0x464AA0: mov     al, [esp+1Ch+var_D]
0x464AA4: pop     edi
0x464AA5: pop     esi
0x464AA6: pop     ebx
0x464AA7: add     esp, 10h
0x464AAA: retn    4
