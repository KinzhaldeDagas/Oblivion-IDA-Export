0x45A990: push    0FFFFFFFFh
0x45A992: push    offset ??1InteriorCellNewReferencesMap@@UAE@XZ_SEH
0x45A997: mov     eax, large fs:0
0x45A99D: push    eax
0x45A99E: sub     esp, 10h
0x45A9A1: push    ebx
0x45A9A2: push    esi
0x45A9A3: push    edi
0x45A9A4: mov     eax, ds:0B30AACh
0x45A9A9: xor     eax, esp
0x45A9AB: push    eax
0x45A9AC: lea     eax, [esp+2Ch+var_C]
0x45A9B0: mov     large fs:0, eax
0x45A9B6: mov     ebx, ecx
0x45A9B8: mov     [esp+2Ch+var_14], ebx
0x45A9BC: mov     dword ptr [ebx], offset ??_7InteriorCellNewReferencesMap@@6B@; const InteriorCellNewReferencesMap::`vftable'
0x45A9C2: xor     eax, eax
0x45A9C4: cmp     [ebx+4], eax
0x45A9C7: mov     [esp+2Ch+var_4], 0
0x45A9CF: jbe     short loc_45A9EA
0x45A9D1: mov     edx, [ebx+8]
0x45A9D4: mov     ecx, edx
0x45A9D6: cmp     dword ptr [ecx], 0
0x45A9D9: jnz     loc_45AA75
0x45A9DF: add     eax, 1
0x45A9E2: add     ecx, 4
0x45A9E5: cmp     eax, [ebx+4]
0x45A9E8: jb      short loc_45A9D6
0x45A9EA: xor     eax, eax
0x45A9EC: test    eax, eax
0x45A9EE: mov     [esp+2Ch+var_18], eax
0x45A9F2: jz      short loc_45AA4C
0x45A9F4: lea     eax, [esp+2Ch+var_1C]
0x45A9F8: push    eax
0x45A9F9: lea     ecx, [esp+30h+var_10]
0x45A9FD: push    ecx
0x45A9FE: lea     edx, [esp+34h+var_18]
0x45AA02: push    edx
0x45AA03: mov     ecx, ebx
0x45AA05: mov     [esp+38h+var_1C], 0
0x45AA0D: call    sub_452600
0x45AA12: mov     esi, [esp+2Ch+var_1C]
0x45AA16: test    esi, esi
0x45AA18: jz      short loc_45AA45
0x45AA1A: cmp     dword ptr [esi+4], 0
0x45AA1E: jz      short loc_45AA36
0x45AA20: mov     eax, [esi+4]
0x45AA23: mov     edi, [eax+4]
0x45AA26: push    eax
0x45AA27: call    FormHeapFree
0x45AA2C: add     esp, 4
0x45AA2F: test    edi, edi
0x45AA31: mov     [esi+4], edi
0x45AA34: jnz     short loc_45AA20
0x45AA36: push    esi
0x45AA37: mov     dword ptr [esi], 0
0x45AA3D: call    FormHeapFree
0x45AA42: add     esp, 4
0x45AA45: cmp     [esp+2Ch+var_18], 0
0x45AA4A: jnz     short loc_45A9F4
0x45AA4C: mov     ecx, ebx
0x45AA4E: call    NiTMap_Clear
0x45AA53: mov     ecx, ebx
0x45AA55: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x45AA5D: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@I@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<uint> *>::~NiTPointerMap<uint,BSSimpleList<uint> *>(void)
0x45AA62: mov     ecx, [esp+2Ch+var_C]
0x45AA66: mov     large fs:0, ecx
0x45AA6D: pop     ecx
0x45AA6E: pop     edi
0x45AA6F: pop     esi
0x45AA70: pop     ebx
0x45AA71: add     esp, 1Ch
0x45AA74: retn
0x45AA75: mov     eax, [edx+eax*4]
0x45AA78: jmp     loc_45A9EC
