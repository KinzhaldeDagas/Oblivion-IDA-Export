0x75DC20: push    ebx
0x75DC21: push    esi
0x75DC22: push    edi
0x75DC23: push    84h ; '„'; Size
0x75DC28: mov     ebx, ecx
0x75DC2A: call    FormHeapAlloc
0x75DC2F: mov     esi, eax
0x75DC31: xor     edi, edi
0x75DC33: add     esp, 4
0x75DC36: cmp     esi, edi
0x75DC38: jz      short loc_75DC81
0x75DC3A: mov     ecx, esi
0x75DC3C: call    sub_7597F0
0x75DC41: mov     eax, [esp+0Ch+arg_0]
0x75DC45: mov     dword ptr [esi], offset ??_7NiMeshPSysData@@6B@; const NiMeshPSysData::`vftable'
0x75DC4B: mov     [esi+68h], edi
0x75DC4E: push    eax
0x75DC4F: push    esi
0x75DC50: mov     ecx, ebx
0x75DC52: mov     dword ptr [esi+74h], offset ??_7?$NiTArray@PAV?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@@@6B@; const NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'
0x75DC59: mov     [esi+7Ch], di
0x75DC5D: mov     word ptr [esi+82h], 1
0x75DC66: mov     [esi+7Eh], di
0x75DC6A: mov     [esi+80h], di
0x75DC71: mov     [esi+78h], edi
0x75DC74: call    sub_75D740
0x75DC79: pop     edi
0x75DC7A: mov     eax, esi
0x75DC7C: pop     esi
0x75DC7D: pop     ebx
0x75DC7E: retn    4
0x75DC81: mov     eax, [esp+0Ch+arg_0]
0x75DC85: push    eax
0x75DC86: xor     esi, esi
0x75DC88: push    esi
0x75DC89: mov     ecx, ebx
0x75DC8B: call    sub_75D740
0x75DC90: pop     edi
0x75DC91: mov     eax, esi
0x75DC93: pop     esi
0x75DC94: pop     ebx
0x75DC95: retn    4
