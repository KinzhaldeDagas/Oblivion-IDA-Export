0x7AF820: push    0FFFFFFFFh
0x7AF822: push    offset ??0MapShader@@QAE@XZ_SEH
0x7AF827: mov     eax, large fs:0
0x7AF82D: push    eax
0x7AF82E: push    ecx
0x7AF82F: push    ebx
0x7AF830: push    ebp
0x7AF831: push    esi
0x7AF832: push    edi
0x7AF833: mov     eax, ds:0B30AACh
0x7AF838: xor     eax, esp
0x7AF83A: push    eax
0x7AF83B: lea     eax, [esp+24h+var_C]
0x7AF83F: mov     large fs:0, eax
0x7AF845: mov     esi, ecx
0x7AF847: mov     [esp+24h+var_10], esi
0x7AF84B: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7AF850: push    offset sub_4027D0; a5
0x7AF855: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7AF85A: push    1; size
0x7AF85C: lea     eax, [esi+94h]
0x7AF862: push    4; a2
0x7AF864: xor     ebp, ebp
0x7AF866: push    eax; a1
0x7AF867: mov     [esp+38h+var_4], ebp
0x7AF86B: mov     dword ptr [esi], offset ??_7MapShader@@6B@; const MapShader::`vftable'
0x7AF871: call    ArrayConstructor
0x7AF876: push    offset sub_7016A0; a5
0x7AF87B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7AF880: push    1; size
0x7AF882: push    4; a2
0x7AF884: lea     edi, [esi+98h]
0x7AF88A: push    edi; a1
0x7AF88B: mov     byte ptr [esp+38h+var_4], 1
0x7AF890: call    ArrayConstructor
0x7AF895: push    offset sub_7016A0; a5
0x7AF89A: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7AF89F: push    1; size
0x7AF8A1: push    4; a2
0x7AF8A3: lea     ebx, [esi+9Ch]
0x7AF8A9: push    ebx; a1
0x7AF8AA: mov     byte ptr [esp+38h+var_4], 2
0x7AF8AF: call    ArrayConstructor
0x7AF8B4: fldz
0x7AF8B6: fst     dword ptr [esi+0B0h]
0x7AF8BC: fst     dword ptr [esi+0B4h]
0x7AF8C2: fst     dword ptr [esi+0B8h]
0x7AF8C8: fstp    dword ptr [esi+0BCh]
0x7AF8CE: mov     [esi+0C0h], ebp
0x7AF8D4: mov     [esi+90h], ebp
0x7AF8DA: mov     ebp, [edi]
0x7AF8DC: test    ebp, ebp
0x7AF8DE: mov     byte ptr [esp+24h+var_4], 4
0x7AF8E3: jz      short loc_7AF908
0x7AF8E5: lea     eax, [ebp+4]
0x7AF8E8: push    eax; lpAddend
0x7AF8E9: call    dword ptr ds:0A2807Ch
0x7AF8EF: test    eax, eax
0x7AF8F1: jnz     short loc_7AF902
0x7AF8F3: test    ebp, ebp
0x7AF8F5: jz      short loc_7AF902
0x7AF8F7: mov     edx, [ebp+0]
0x7AF8FA: mov     eax, [edx]
0x7AF8FC: push    1
0x7AF8FE: mov     ecx, ebp
0x7AF900: call    eax
0x7AF902: mov     dword ptr [edi], 0
0x7AF908: mov     edi, [ebx]
0x7AF90A: test    edi, edi
0x7AF90C: jz      short loc_7AF930
0x7AF90E: lea     ecx, [edi+4]
0x7AF911: push    ecx; lpAddend
0x7AF912: call    dword ptr ds:0A2807Ch
0x7AF918: test    eax, eax
0x7AF91A: jnz     short loc_7AF92A
0x7AF91C: test    edi, edi
0x7AF91E: jz      short loc_7AF92A
0x7AF920: mov     edx, [edi]
0x7AF922: mov     eax, [edx]
0x7AF924: push    1
0x7AF926: mov     ecx, edi
0x7AF928: call    eax
0x7AF92A: mov     dword ptr [ebx], 0
0x7AF930: mov     ecx, [esi+94h]
0x7AF936: test    ecx, ecx
0x7AF938: jz      short loc_7AF94F
0x7AF93A: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7AF93E: jnz     short loc_7AF945
0x7AF940: call    sub_7604D0
0x7AF945: mov     dword ptr [esi+94h], 0
0x7AF94F: mov     byte ptr [esi+20h], 1
0x7AF953: mov     edi, [esi+0C0h]
0x7AF959: test    edi, edi
0x7AF95B: jz      short loc_7AF983
0x7AF95D: lea     ecx, [edi+4]
0x7AF960: push    ecx; lpAddend
0x7AF961: call    dword ptr ds:0A2807Ch
0x7AF967: test    eax, eax
0x7AF969: jnz     short loc_7AF979
0x7AF96B: test    edi, edi
0x7AF96D: jz      short loc_7AF979
0x7AF96F: mov     edx, [edi]
0x7AF971: mov     eax, [edx]
0x7AF973: push    1
0x7AF975: mov     ecx, edi
0x7AF977: call    eax
0x7AF979: mov     dword ptr [esi+0C0h], 0
0x7AF983: mov     eax, esi
0x7AF985: mov     ecx, dword ptr [esp+24h+var_C]
0x7AF989: mov     large fs:0, ecx
0x7AF990: pop     ecx
0x7AF991: pop     edi
0x7AF992: pop     esi
0x7AF993: pop     ebp
0x7AF994: pop     ebx
0x7AF995: add     esp, 10h
0x7AF998: retn
