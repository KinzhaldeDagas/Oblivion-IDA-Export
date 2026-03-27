0x75DB40: push    ecx
0x75DB41: push    ebp
0x75DB42: mov     ebp, [esp+8+arg_0]
0x75DB46: push    esi
0x75DB47: mov     esi, ecx
0x75DB49: push    edi
0x75DB4A: movzx   edi, word ptr [esi+7Eh]
0x75DB4E: cmp     ebp, edi
0x75DB50: jnb     short loc_75DBA6
0x75DB52: cmp     edi, ebp
0x75DB54: jbe     loc_75DC13
0x75DB5A: xor     ebp, ebp
0x75DB5C: mov     edi, 0FFFFh
0x75DB61: movzx   eax, word ptr [esi+7Eh]
0x75DB65: cmp     ax, bp
0x75DB68: jz      short loc_75DB95
0x75DB6A: mov     ecx, [esi+78h]
0x75DB6D: add     eax, 0FFFFFFFFh
0x75DB70: mov     [esi+7Eh], ax
0x75DB74: movzx   eax, ax
0x75DB77: lea     eax, [ecx+eax*4]
0x75DB7A: mov     ecx, [eax]
0x75DB7C: cmp     ecx, ebp
0x75DB7E: mov     [eax], ebp
0x75DB80: jz      short loc_75DB95
0x75DB82: add     [esi+80h], di
0x75DB89: cmp     ecx, ebp
0x75DB8B: jz      short loc_75DB95
0x75DB8D: mov     edx, [ecx]
0x75DB8F: mov     eax, [edx]
0x75DB91: push    1
0x75DB93: call    eax
0x75DB95: movzx   ecx, word ptr [esi+7Eh]
0x75DB99: cmp     ecx, [esp+10h+arg_0]
0x75DB9D: ja      short loc_75DB61
0x75DB9F: pop     edi
0x75DBA0: pop     esi
0x75DBA1: pop     ebp
0x75DBA2: pop     ecx
0x75DBA3: retn    4
0x75DBA6: jbe     short loc_75DC13
0x75DBA8: push    ebx
0x75DBA9: lea     ebx, [esi+74h]
0x75DBAC: push    ebp
0x75DBAD: mov     ecx, ebx
0x75DBAF: call    NiTArray_SetSize
0x75DBB4: cmp     edi, ebp
0x75DBB6: jnb     short loc_75DC12
0x75DBB8: xor     ebp, ebp
0x75DBBA: lea     ebx, [ebx+0]
0x75DBC0: push    10h; Size
0x75DBC2: call    FormHeapAlloc
0x75DBC7: add     esp, 4
0x75DBCA: cmp     eax, ebp
0x75DBCC: jz      short loc_75DBEB
0x75DBCE: mov     dword ptr [eax], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x75DBD4: mov     [eax+8], bp
0x75DBD8: mov     word ptr [eax+0Eh], 1
0x75DBDE: mov     [eax+0Ah], bp
0x75DBE2: mov     [eax+0Ch], bp
0x75DBE6: mov     [eax+4], ebp
0x75DBE9: jmp     short loc_75DBED
0x75DBEB: xor     eax, eax
0x75DBED: mov     edx, [esi+70h]
0x75DBF0: push    edx
0x75DBF1: mov     ecx, eax
0x75DBF3: mov     [esp+18h+var_4], eax
0x75DBF7: call    sub_523B10
0x75DBFC: lea     eax, [esp+14h+var_4]
0x75DC00: push    eax
0x75DC01: push    edi
0x75DC02: mov     ecx, ebx
0x75DC04: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75DC09: add     edi, 1
0x75DC0C: cmp     edi, [esp+14h+arg_0]
0x75DC10: jb      short loc_75DBC0
0x75DC12: pop     ebx
0x75DC13: pop     edi
0x75DC14: pop     esi
0x75DC15: pop     ebp
0x75DC16: pop     ecx
0x75DC17: retn    4
