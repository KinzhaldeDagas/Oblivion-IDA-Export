0x4BD230: push    0FFFFFFFFh
0x4BD232: push    offset SEH_4BD230
0x4BD237: mov     eax, large fs:0
0x4BD23D: push    eax
0x4BD23E: sub     esp, 10h
0x4BD241: push    ebx
0x4BD242: push    ebp
0x4BD243: push    esi
0x4BD244: push    edi
0x4BD245: mov     eax, ds:0B30AACh
0x4BD24A: xor     eax, esp
0x4BD24C: push    eax
0x4BD24D: lea     eax, [esp+30h+var_C]
0x4BD251: mov     large fs:0, eax
0x4BD257: mov     ebx, ecx
0x4BD259: mov     [esp+30h+var_14], ebx
0x4BD25D: mov     ecx, [ebx+10h]
0x4BD260: lea     ebp, [ebx+0Ch]
0x4BD263: xor     eax, eax
0x4BD265: test    ecx, ecx
0x4BD267: mov     [esp+30h+var_4], 2
0x4BD26F: jbe     short loc_4BD289
0x4BD271: mov     esi, [ebp+8]
0x4BD274: mov     edx, esi
0x4BD276: cmp     dword ptr [edx], 0
0x4BD279: jnz     loc_4BD371
0x4BD27F: add     eax, 1
0x4BD282: add     edx, 4
0x4BD285: cmp     eax, ecx
0x4BD287: jb      short loc_4BD276
0x4BD289: xor     eax, eax
0x4BD28B: test    eax, eax
0x4BD28D: mov     [esp+30h+var_18], eax
0x4BD291: jz      short loc_4BD2F9
0x4BD293: mov     edi, offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4BD298: jmp     short loc_4BD2A0
0x4BD29A: align 10h
0x4BD2A0: lea     eax, [esp+30h+var_1C]
0x4BD2A4: push    eax
0x4BD2A5: lea     ecx, [esp+34h+var_10]
0x4BD2A9: push    ecx
0x4BD2AA: lea     edx, [esp+38h+var_18]
0x4BD2AE: push    edx
0x4BD2AF: mov     ecx, ebp
0x4BD2B1: mov     [esp+3Ch+var_1C], 0
0x4BD2B9: call    sub_452600
0x4BD2BE: mov     esi, [esp+30h+var_1C]
0x4BD2C2: test    esi, esi
0x4BD2C4: jz      short loc_4BD2F2
0x4BD2C6: mov     eax, [esi+24h]
0x4BD2C9: push    eax
0x4BD2CA: mov     [esi+20h], edi
0x4BD2CD: call    FormHeapFree
0x4BD2D2: mov     eax, [esi+14h]
0x4BD2D5: push    eax
0x4BD2D6: mov     [esi+10h], edi
0x4BD2D9: call    FormHeapFree
0x4BD2DE: mov     eax, [esi+4]
0x4BD2E1: push    eax
0x4BD2E2: mov     [esi], edi
0x4BD2E4: call    FormHeapFree
0x4BD2E9: push    esi
0x4BD2EA: call    FormHeapFree
0x4BD2EF: add     esp, 10h
0x4BD2F2: cmp     [esp+30h+var_18], 0
0x4BD2F7: jnz     short loc_4BD2A0
0x4BD2F9: mov     ecx, ebp
0x4BD2FB: call    NiTMap_Clear
0x4BD300: mov     esi, [ebx+20h]
0x4BD303: test    esi, esi
0x4BD305: mov     edi, ds:0A2807Ch
0x4BD30B: mov     byte ptr [esp+30h+var_4], 1
0x4BD310: jz      short loc_4BD32A
0x4BD312: lea     eax, [esi+4]
0x4BD315: push    eax; lpAddend
0x4BD316: call    edi ; InterlockedDecrement
0x4BD318: test    eax, eax
0x4BD31A: jnz     short loc_4BD32A
0x4BD31C: test    esi, esi
0x4BD31E: jz      short loc_4BD32A
0x4BD320: mov     edx, [esi]
0x4BD322: mov     eax, [edx]
0x4BD324: push    1
0x4BD326: mov     ecx, esi
0x4BD328: call    eax
0x4BD32A: mov     esi, [ebx+1Ch]
0x4BD32D: test    esi, esi
0x4BD32F: mov     byte ptr [esp+30h+var_4], 0
0x4BD334: jz      short loc_4BD34E
0x4BD336: lea     ecx, [esi+4]
0x4BD339: push    ecx; lpAddend
0x4BD33A: call    edi ; InterlockedDecrement
0x4BD33C: test    eax, eax
0x4BD33E: jnz     short loc_4BD34E
0x4BD340: test    esi, esi
0x4BD342: jz      short loc_4BD34E
0x4BD344: mov     edx, [esi]
0x4BD346: mov     eax, [edx]
0x4BD348: push    1
0x4BD34A: mov     ecx, esi
0x4BD34C: call    eax
0x4BD34E: mov     ecx, ebp
0x4BD350: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4BD358: call    ??1?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@UAE@XZ; NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(void)
0x4BD35D: mov     ecx, [esp+30h+var_C]
0x4BD361: mov     large fs:0, ecx
0x4BD368: pop     ecx
0x4BD369: pop     edi
0x4BD36A: pop     esi
0x4BD36B: pop     ebp
0x4BD36C: pop     ebx
0x4BD36D: add     esp, 1Ch
0x4BD370: retn
0x4BD371: mov     eax, [esi+eax*4]
0x4BD374: jmp     loc_4BD28B
