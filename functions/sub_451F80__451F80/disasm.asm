0x451F80: push    0FFFFFFFFh
0x451F82: push    offset SEH_803C90
0x451F87: mov     eax, large fs:0
0x451F8D: push    eax
0x451F8E: push    ecx
0x451F8F: push    esi
0x451F90: push    edi
0x451F91: mov     eax, ds:0B30AACh
0x451F96: xor     eax, esp
0x451F98: push    eax
0x451F99: lea     eax, [esp+1Ch+var_C]
0x451F9D: mov     large fs:0, eax
0x451FA3: mov     edi, ecx
0x451FA5: mov     ecx, [edi+8]
0x451FA8: test    ecx, ecx
0x451FAA: mov     [esp+1Ch+var_10], 0
0x451FB2: jz      short loc_451FCF
0x451FB4: mov     edx, [esp+1Ch+a2]
0x451FB8: lea     eax, [esp+1Ch+var_10]
0x451FBC: push    eax
0x451FBD: push    edx
0x451FBE: call    NiTMap_GetAt
0x451FC3: mov     eax, [esp+1Ch+var_10]
0x451FC7: test    eax, eax
0x451FC9: jnz     loc_4520DA
0x451FCF: push    41Ch; Size
0x451FD4: call    FormHeapAlloc
0x451FD9: add     esp, 4
0x451FDC: mov     [esp+1Ch+var_10], eax
0x451FE0: test    eax, eax
0x451FE2: mov     [esp+1Ch+var_4], 0
0x451FEA: jz      short loc_452004
0x451FEC: push    0; int
0x451FEE: lea     ecx, [edi+1Ch]
0x451FF1: push    ecx; ArgList
0x451FF2: lea     edx, [edi+120h]
0x451FF8: push    edx; lpString2
0x451FF9: mov     ecx, eax
0x451FFB: call    TESFile_constr
0x452000: mov     esi, eax
0x452002: jmp     short loc_452006
0x452004: xor     esi, esi
0x452006: test    byte ptr [edi+3DCh], 1
0x45200D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x452015: jz      short loc_452020
0x452017: or      dword ptr [esi+3DCh], 1
0x45201E: jmp     short loc_452027
0x452020: and     dword ptr [esi+3DCh], 0FFFFFFFEh
0x452027: mov     al, [edi+400h]
0x45202D: mov     edx, [esi+3D8h]
0x452033: movzx   ecx, al
0x452036: shl     ecx, 18h
0x452039: and     edx, 0FFFFFFh
0x45203F: or      ecx, edx
0x452041: mov     [esi+3D8h], ecx
0x452047: mov     [esi+400h], al
0x45204D: mov     eax, ds:0B33A98h
0x452052: push    0
0x452054: add     eax, 8C8h
0x452059: push    eax
0x45205A: mov     ecx, esi
0x45205C: call    TESFile_BuildLoadedMasterArray
0x452061: mov     ecx, [edi+4]
0x452064: test    ecx, ecx
0x452066: mov     eax, edi
0x452068: jz      short loc_452079
0x45206A: lea     ebx, [ebx+0]
0x452070: mov     eax, ecx
0x452072: mov     ecx, [eax+4]
0x452075: test    ecx, ecx
0x452077: jnz     short loc_452070
0x452079: push    0; char
0x45207B: push    0; int
0x45207D: lea     ecx, [esi+1Ch]
0x452080: push    ecx; int
0x452081: lea     edx, [esi+120h]
0x452087: push    edx; lpString2
0x452088: mov     ecx, esi
0x45208A: mov     [esi+4], eax
0x45208D: call    TESFile_OpenBSFile?
0x452092: cmp     dword ptr [edi+8], 0
0x452096: jnz     short loc_4520CA
0x452098: push    10h; Size
0x45209A: call    FormHeapAlloc
0x45209F: add     esp, 4
0x4520A2: mov     [esp+1Ch+var_10], eax
0x4520A6: test    eax, eax
0x4520A8: mov     [esp+1Ch+var_4], 1
0x4520B0: jz      short loc_4520BD
0x4520B2: push    25h ; '%'
0x4520B4: mov     ecx, eax
0x4520B6: call    ??0?$NiTPointerMap@IPAVTESFile@@@@QAE@XZ; NiTPointerMap<uint,TESFile *>::NiTPointerMap<uint,TESFile *>(void)
0x4520BB: jmp     short loc_4520BF
0x4520BD: xor     eax, eax
0x4520BF: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4520C7: mov     [edi+8], eax
0x4520CA: mov     eax, [esp+1Ch+a2]
0x4520CE: mov     ecx, [edi+8]; this
0x4520D1: push    esi; a3
0x4520D2: push    eax; a2
0x4520D3: call    NiTMap_SetAt
0x4520D8: mov     eax, esi
0x4520DA: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4520DE: mov     large fs:0, ecx
0x4520E5: pop     ecx
0x4520E6: pop     edi
0x4520E7: pop     esi
0x4520E8: add     esp, 10h
0x4520EB: retn    4
