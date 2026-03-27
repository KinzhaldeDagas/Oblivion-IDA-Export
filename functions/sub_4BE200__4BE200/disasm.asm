0x4BE200: push    0FFFFFFFFh
0x4BE202: push    offset SEH_68C280
0x4BE207: mov     eax, large fs:0
0x4BE20D: push    eax
0x4BE20E: push    ebp
0x4BE20F: push    esi
0x4BE210: push    edi
0x4BE211: mov     eax, ds:0B30AACh
0x4BE216: xor     eax, esp
0x4BE218: push    eax
0x4BE219: lea     eax, [esp+1Ch+var_C]
0x4BE21D: mov     large fs:0, eax
0x4BE223: mov     esi, ecx
0x4BE225: mov     ebp, [esp+1Ch+arg_4]
0x4BE229: xor     ecx, ecx
0x4BE22B: mov     eax, ebp
0x4BE22D: mov     edx, 4
0x4BE232: mul     edx
0x4BE234: seto    cl
0x4BE237: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::`vftable'
0x4BE23D: mov     dword ptr [esi+18h], 0
0x4BE244: mov     [esi+8], ebp
0x4BE247: neg     ecx
0x4BE249: or      ecx, eax
0x4BE24B: push    ecx; Size
0x4BE24C: call    FormHeapAlloc
0x4BE251: mov     edi, eax
0x4BE253: add     esp, 4
0x4BE256: mov     [esp+1Ch+arg_4], edi
0x4BE25A: test    edi, edi
0x4BE25C: mov     [esp+1Ch+var_4], 0
0x4BE264: jz      short loc_4BE276
0x4BE266: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x4BE26B: push    ebp
0x4BE26C: push    4
0x4BE26E: push    edi
0x4BE26F: call    sub_401080
0x4BE274: jmp     short loc_4BE278
0x4BE276: xor     edi, edi
0x4BE278: mov     [esi+0Ch], edi
0x4BE27B: mov     edi, [esp+1Ch+a2]
0x4BE27F: xor     ecx, ecx
0x4BE281: lea     eax, [edi+edi*2]
0x4BE284: mov     edx, 4
0x4BE289: mul     edx
0x4BE28B: seto    cl
0x4BE28E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BE296: neg     ecx
0x4BE298: or      ecx, eax
0x4BE29A: push    ecx; Size
0x4BE29B: call    FormHeapAlloc
0x4BE2A0: mov     [esi+4], eax
0x4BE2A3: mov     eax, [esp+20h+arg_8]
0x4BE2A7: push    10h; Size
0x4BE2A9: mov     [esi+10h], eax
0x4BE2AC: call    FormHeapAlloc
0x4BE2B1: add     esp, 8
0x4BE2B4: mov     [esp+1Ch+arg_4], eax
0x4BE2B8: test    eax, eax
0x4BE2BA: mov     [esp+1Ch+var_4], 1
0x4BE2C2: jz      short loc_4BE2CE
0x4BE2C4: push    edi; a2
0x4BE2C5: mov     ecx, eax; this
0x4BE2C7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x4BE2CC: jmp     short loc_4BE2D0
0x4BE2CE: xor     eax, eax
0x4BE2D0: mov     [esi+14h], eax
0x4BE2D3: mov     eax, esi
0x4BE2D5: mov     ecx, [esp+1Ch+var_C]
0x4BE2D9: mov     large fs:0, ecx
0x4BE2E0: pop     ecx
0x4BE2E1: pop     edi
0x4BE2E2: pop     esi
0x4BE2E3: pop     ebp
0x4BE2E4: add     esp, 0Ch
0x4BE2E7: retn    0Ch
