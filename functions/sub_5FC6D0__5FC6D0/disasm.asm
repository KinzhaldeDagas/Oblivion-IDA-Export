0x5FC6D0: push    ecx
0x5FC6D1: push    ebx
0x5FC6D2: push    ebp
0x5FC6D3: push    esi
0x5FC6D4: mov     esi, ecx
0x5FC6D6: push    edi
0x5FC6D7: lea     ecx, [esi+44h]; this
0x5FC6DA: call    ExtraDataList_GetContainerChanges
0x5FC6DF: mov     ebp, [esp+14h+arg_C]
0x5FC6E3: test    ebp, ebp
0x5FC6E5: mov     edi, eax
0x5FC6E7: mov     [esp+14h+var_4], edi
0x5FC6EB: jnz     short loc_5FC6F2
0x5FC6ED: mov     ebp, 1
0x5FC6F2: test    edi, edi
0x5FC6F4: jz      loc_5FC78A
0x5FC6FA: test    ebp, ebp
0x5FC6FC: jz      short loc_5FC775
0x5FC6FE: mov     edi, edi
0x5FC700: mov     eax, [esp+14h+arg_10]
0x5FC704: mov     ecx, [esp+14h+arg_0]
0x5FC708: push    eax
0x5FC709: push    ecx
0x5FC70A: mov     ecx, edi
0x5FC70C: call    sub_487C30
0x5FC711: test    eax, eax
0x5FC713: jz      short loc_5FC775
0x5FC715: mov     eax, [eax]
0x5FC717: xor     edi, edi
0x5FC719: test    eax, eax
0x5FC71B: jz      short loc_5FC748
0x5FC71D: mov     edi, [eax]
0x5FC71F: test    edi, edi
0x5FC721: jz      short loc_5FC748
0x5FC723: mov     ecx, edi
0x5FC725: call    ExtraDataList_GetReferencePointer
0x5FC72A: mov     ebx, eax
0x5FC72C: test    ebx, ebx
0x5FC72E: jz      short loc_5FC748
0x5FC730: mov     edx, [esp+14h+arg_8]
0x5FC734: push    edx
0x5FC735: lea     ecx, [ebx+44h]
0x5FC738: call    ExtraDataList_SetReferencePointer
0x5FC73D: mov     eax, [ebx]
0x5FC73F: mov     edx, [eax+40h]
0x5FC742: push    20h ; ' '
0x5FC744: mov     ecx, ebx
0x5FC746: call    edx
0x5FC748: mov     ecx, [esp+14h+arg_8]
0x5FC74C: mov     eax, [esi]
0x5FC74E: mov     edx, [esp+14h+arg_0]
0x5FC752: mov     eax, [eax+100h]
0x5FC758: push    0
0x5FC75A: push    1
0x5FC75C: push    0
0x5FC75E: push    0
0x5FC760: push    ecx
0x5FC761: push    0
0x5FC763: push    0
0x5FC765: push    ebp
0x5FC766: push    edi
0x5FC767: push    edx
0x5FC768: mov     ecx, esi
0x5FC76A: call    eax
0x5FC76C: sub     ebp, 1
0x5FC76F: mov     edi, [esp+14h+var_4]
0x5FC773: jnz     short loc_5FC700
0x5FC775: mov     eax, [edi]
0x5FC777: cmp     dword ptr [eax+4], 0
0x5FC77B: jnz     short loc_5FC78A
0x5FC77D: cmp     dword ptr [eax], 0
0x5FC780: jnz     short loc_5FC78A
0x5FC782: lea     ecx, [esi+44h]
0x5FC785: call    ExtraDataList_RemoveContainerExtraData
0x5FC78A: cmp     esi, ds:0B333C4h
0x5FC790: jnz     short loc_5FC79B
0x5FC792: push    0
0x5FC794: call    sub_57A3B0
0x5FC799: jmp     short loc_5FC7E5
0x5FC79B: mov     edx, [esi]
0x5FC79D: mov     eax, [edx+2B8h]
0x5FC7A3: push    0FFFFFFFFh
0x5FC7A5: mov     ecx, esi
0x5FC7A7: call    eax
0x5FC7A9: mov     edi, eax
0x5FC7AB: test    edi, edi
0x5FC7AD: jz      short loc_5FC7E8
0x5FC7AF: push    0
0x5FC7B1: mov     ecx, edi
0x5FC7B3: call    ContainerEntryExtraData_HasWorn
0x5FC7B8: test    al, al
0x5FC7BA: jnz     short loc_5FC7E8
0x5FC7BC: mov     ecx, [edi]
0x5FC7BE: xor     eax, eax
0x5FC7C0: test    ecx, ecx
0x5FC7C2: jz      short loc_5FC7C6
0x5FC7C4: mov     eax, [ecx]
0x5FC7C6: mov     ecx, [edi+8]
0x5FC7C9: push    0
0x5FC7CB: push    1
0x5FC7CD: push    eax
0x5FC7CE: push    1
0x5FC7D0: push    ecx
0x5FC7D1: mov     ecx, esi
0x5FC7D3: call    Actor_EquipItem
0x5FC7D8: mov     ecx, edi
0x5FC7DA: call    ContainerEntryExtraData_DestroyDataTable
0x5FC7DF: push    edi
0x5FC7E0: call    FormHeapFree
0x5FC7E5: add     esp, 4
0x5FC7E8: cmp     esi, ds:0B333C4h
0x5FC7EE: jz      loc_5FC885
0x5FC7F4: mov     edi, [esp+14h+arg_8]
0x5FC7F8: mov     edx, [edi]
0x5FC7FA: mov     eax, [edx+170h]
0x5FC800: mov     ecx, edi
0x5FC802: call    eax
0x5FC804: push    eax
0x5FC805: call    sub_520F00
0x5FC80A: push    1
0x5FC80C: call    sub_520F40
0x5FC811: add     esp, 8
0x5FC814: mov     ecx, esi
0x5FC816: call    sub_5E40C0
0x5FC81B: fstp    [esp+14h+arg_0]
0x5FC81F: mov     edx, [edi]
0x5FC821: mov     eax, [edx+174h]
0x5FC827: mov     ecx, edi
0x5FC829: call    eax
0x5FC82B: fld     dword ptr [eax+8]
0x5FC82E: mov     ecx, edi; this
0x5FC830: fstp    [esp+14h+arg_8]
0x5FC834: xor     ebx, ebx
0x5FC836: call    Actor_IsNPC
0x5FC83B: test    al, al
0x5FC83D: jnz     short loc_5FC854
0x5FC83F: fld     [esp+14h+arg_8]
0x5FC843: fsub    [esp+14h+arg_0]
0x5FC847: fcomp   qword ptr ds:0A3F3D0h
0x5FC84D: fnstsw  ax
0x5FC84F: test    ah, 41h
0x5FC852: jnz     short loc_5FC859
0x5FC854: mov     ebx, 1
0x5FC859: push    ebx
0x5FC85A: call    sub_520F20
0x5FC85F: mov     ecx, [esi+58h]
0x5FC862: mov     edx, [ecx]
0x5FC864: mov     eax, [edx+48h]
0x5FC867: add     esp, 4
0x5FC86A: push    esi
0x5FC86B: call    eax
0x5FC86D: push    0
0x5FC86F: call    sub_520F00
0x5FC874: push    0
0x5FC876: call    sub_520F40
0x5FC87B: push    0FFFFFFFFh
0x5FC87D: call    sub_520F20
0x5FC882: add     esp, 0Ch
0x5FC885: pop     edi
0x5FC886: pop     esi
0x5FC887: pop     ebp
0x5FC888: xor     al, al
0x5FC88A: pop     ebx
0x5FC88B: pop     ecx
0x5FC88C: retn    14h
