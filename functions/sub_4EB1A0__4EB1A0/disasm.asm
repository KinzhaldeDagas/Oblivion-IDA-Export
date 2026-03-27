0x4EB1A0: push    ebp
0x4EB1A1: mov     ebp, esp
0x4EB1A3: and     esp, 0FFFFFFF8h
0x4EB1A6: push    0FFFFFFFFh
0x4EB1A8: push    offset SEH_4EB1A0
0x4EB1AD: mov     eax, large fs:0
0x4EB1B3: push    eax
0x4EB1B4: sub     esp, 1Ch
0x4EB1B7: push    ebx
0x4EB1B8: push    ebp
0x4EB1B9: push    esi
0x4EB1BA: push    edi
0x4EB1BB: mov     eax, ds:0B30AACh
0x4EB1C0: xor     eax, esp
0x4EB1C2: push    eax
0x4EB1C3: lea     eax, [esp+3Ch+var_C]
0x4EB1C7: mov     large fs:0, eax
0x4EB1CD: mov     ebp, ecx
0x4EB1CF: xor     esi, esi
0x4EB1D1: mov     [esp+3Ch+var_18], esi
0x4EB1D5: mov     [esp+3Ch+var_14], si
0x4EB1DA: mov     [esp+3Ch+var_12], si
0x4EB1DF: mov     [esp+3Ch+var_4], esi
0x4EB1E3: mov     dword ptr [esp+3Ch+ArgList], 0FFFFFFE0h
0x4EB1EB: mov     edi, dword ptr [esp+3Ch+ArgList]
0x4EB1EF: shl     edi, 5
0x4EB1F2: mov     ebx, 0FFFFFFE0h
0x4EB1F7: mov     [esp+3Ch+var_24], edi
0x4EB1FB: jmp     short loc_4EB200
0x4EB1FD: align 10h
0x4EB200: mov     eax, [ebp+10h]
0x4EB203: mov     eax, [eax+0Ch]
0x4EB206: push    20h ; ' '
0x4EB208: mov     ecx, ebx
0x4EB20A: shl     ecx, 5
0x4EB20D: push    ecx
0x4EB20E: push    edi
0x4EB20F: push    eax; ArgList
0x4EB210: lea     edx, [esp+4Ch+var_18]
0x4EB214: push    offset a_DataMeshesLan; ".\\Data\\Meshes\\Landscape\\LOD\\%i.%02"...
0x4EB219: push    edx; int
0x4EB21A: call    BSStringT_Static_Format
0x4EB21F: mov     ecx, ds:0B33A04h
0x4EB225: add     esp, 18h
0x4EB228: cmp     ecx, esi
0x4EB22A: jz      loc_4EB322
0x4EB230: mov     eax, [ecx]
0x4EB232: mov     edx, [esp+3Ch+var_18]
0x4EB236: mov     eax, [eax+4]
0x4EB239: push    0FFFFFFFFh
0x4EB23B: push    esi
0x4EB23C: push    esi
0x4EB23D: push    edx
0x4EB23E: call    eax
0x4EB240: cmp     eax, esi
0x4EB242: jz      loc_4EB322
0x4EB248: push    10h; Size
0x4EB24A: call    FormHeapAlloc
0x4EB24F: mov     edi, eax
0x4EB251: add     esp, 4
0x4EB254: mov     [esp+3Ch+var_20], edi
0x4EB258: cmp     edi, esi
0x4EB25A: mov     byte ptr [esp+3Ch+var_4], 1
0x4EB25F: jz      short loc_4EB29D
0x4EB261: push    60h ; '`'; Size
0x4EB263: mov     [edi+4], ebp
0x4EB266: call    FormHeapAlloc
0x4EB26B: add     esp, 4
0x4EB26E: mov     [esp+3Ch+var_1C], eax
0x4EB272: cmp     eax, esi
0x4EB274: mov     byte ptr [esp+3Ch+var_4], 2
0x4EB279: jz      short loc_4EB28F
0x4EB27B: push    edi
0x4EB27C: mov     ecx, eax
0x4EB27E: call    sub_4EC650
0x4EB283: mov     [edi], eax
0x4EB285: mov     [edi+8], si
0x4EB289: mov     [edi+0Ah], si
0x4EB28D: jmp     short loc_4EB29F
0x4EB28F: xor     eax, eax
0x4EB291: mov     [edi], eax
0x4EB293: mov     [edi+8], si
0x4EB297: mov     [edi+0Ah], si
0x4EB29B: jmp     short loc_4EB29F
0x4EB29D: xor     edi, edi
0x4EB29F: movzx   eax, word ptr [esp+3Ch+ArgList]
0x4EB2A4: movzx   ecx, bx
0x4EB2A7: mov     [edi+8], ax
0x4EB2AB: movsx   eax, ax
0x4EB2AE: movzx   esi, cx
0x4EB2B1: mov     [edi+0Ah], cx
0x4EB2B5: shl     eax, 10h
0x4EB2B8: lea     ecx, [esp+3Ch+var_1C]
0x4EB2BC: push    ecx
0x4EB2BD: or      esi, eax
0x4EB2BF: push    esi
0x4EB2C0: mov     ecx, ebp
0x4EB2C2: mov     byte ptr [esp+44h+var_4], 0
0x4EB2C7: call    NiTMap_GetAt
0x4EB2CC: test    al, al
0x4EB2CE: jz      short loc_4EB2EF
0x4EB2D0: movzx   eax, word ptr [edi+0Ah]
0x4EB2D4: movzx   ecx, word ptr [edi+8]
0x4EB2D8: movsx   edx, ax
0x4EB2DB: movsx   eax, cx
0x4EB2DE: push    edx
0x4EB2DF: push    eax; ArgList
0x4EB2E0: push    offset aUnableToAddLod; "Unable to add LOD for LOD space (%i, %i"...
0x4EB2E5: call    PrintError
0x4EB2EA: add     esp, 0Ch
0x4EB2ED: jmp     short loc_4EB2FB
0x4EB2EF: push    edi; a3
0x4EB2F0: push    esi; a2
0x4EB2F1: mov     ecx, ebp; this
0x4EB2F3: call    NiTMap_SetAt
0x4EB2F8: mov     [edi+4], ebp
0x4EB2FB: mov     ecx, [ebp+10h]
0x4EB2FE: mov     edx, [ecx]
0x4EB300: mov     eax, [edx+0D4h]
0x4EB306: call    eax
0x4EB308: mov     ecx, dword ptr [esp+3Ch+ArgList]
0x4EB30C: push    eax
0x4EB30D: push    ebx
0x4EB30E: push    ecx; ArgList
0x4EB30F: push    offset aFoundTerrainLo; "Found terrain LOD file for %i, %i in wo"...
0x4EB314: call    sub_40FEC0
0x4EB319: mov     edi, [esp+4Ch+var_24]
0x4EB31D: add     esp, 10h
0x4EB320: xor     esi, esi
0x4EB322: add     ebx, 1
0x4EB325: cmp     ebx, 20h ; ' '
0x4EB328: jl      loc_4EB200
0x4EB32E: mov     eax, dword ptr [esp+3Ch+ArgList]
0x4EB332: add     eax, 1
0x4EB335: cmp     eax, 20h ; ' '
0x4EB338: mov     dword ptr [esp+3Ch+ArgList], eax
0x4EB33C: jl      loc_4EB1EB
0x4EB342: mov     edx, [esp+3Ch+var_18]
0x4EB346: push    edx
0x4EB347: call    FormHeapFree
0x4EB34C: add     esp, 4
0x4EB34F: mov     ecx, dword ptr [esp+3Ch+var_C]
0x4EB353: mov     large fs:0, ecx
0x4EB35A: pop     ecx
0x4EB35B: pop     edi
0x4EB35C: pop     esi
0x4EB35D: pop     ebp
0x4EB35E: pop     ebx
0x4EB35F: mov     esp, ebp
0x4EB361: pop     ebp
0x4EB362: retn
