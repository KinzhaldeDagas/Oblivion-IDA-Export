0x64B400: push    0FFFFFFFFh
0x64B402: push    offset ??0MiddleHighProcess@@QAE@XZ_SEH
0x64B407: mov     eax, large fs:0
0x64B40D: push    eax
0x64B40E: push    ecx
0x64B40F: push    ebx
0x64B410: push    esi
0x64B411: push    edi
0x64B412: mov     eax, ds:0B30AACh
0x64B417: xor     eax, esp
0x64B419: push    eax
0x64B41A: lea     eax, [esp+20h+var_C]
0x64B41E: mov     large fs:0, eax
0x64B424: mov     esi, ecx
0x64B426: mov     [esp+20h+var_10], esi
0x64B42A: call    ??0MiddleLowProcess@@QAE@XZ; MiddleLowProcess::MiddleLowProcess(void)
0x64B42F: xor     ebx, ebx
0x64B431: mov     dword ptr [esi], offset ??_7MiddleHighProcess@@6B@; const MiddleHighProcess::`vftable'
0x64B437: mov     [esi+0A8h], ebx
0x64B43D: mov     [esi+0ACh], ebx
0x64B443: mov     [esi+0B0h], ebx
0x64B449: mov     [esi+0B4h], ebx
0x64B44F: mov     [esp+20h+var_4], ebx
0x64B453: mov     [esi+118h], ebx
0x64B459: lea     edi, [esi+128h]
0x64B45F: mov     [edi+0Ch], bx
0x64B463: mov     byte ptr [edi+0Eh], 0FFh
0x64B467: mov     [esi+184h], ebx
0x64B46D: fld     dword ptr ds:0A30634h
0x64B473: push    8; Size
0x64B475: fstp    dword ptr [esi+0F8h]
0x64B47B: mov     byte ptr [esp+24h+var_4], 2
0x64B480: mov     [esi+144h], ebx
0x64B486: mov     [esi+178h], ebx
0x64B48C: mov     [esi+0E4h], ebx
0x64B492: mov     [esi+0E8h], ebx
0x64B498: mov     [esi+0ECh], ebx
0x64B49E: mov     [esi+0F0h], ebx
0x64B4A4: mov     [esi+0FCh], ebx
0x64B4AA: mov     [esi+100h], ebx
0x64B4B0: mov     [esi+104h], ebx
0x64B4B6: mov     [esi+108h], ebx
0x64B4BC: mov     [esi+10Ch], ebx
0x64B4C2: mov     [esi+110h], ebx
0x64B4C8: mov     [esi+0F4h], bl
0x64B4CE: mov     [esi+0F5h], bl
0x64B4D4: mov     word ptr [esi+138h], 0FFFFh
0x64B4DD: mov     [esi+13Ch], ebx
0x64B4E3: mov     [esi+140h], ebx
0x64B4E9: call    FormHeapAlloc
0x64B4EE: add     esp, 4
0x64B4F1: cmp     eax, ebx
0x64B4F3: jz      short loc_64B4FC
0x64B4F5: mov     [eax], ebx
0x64B4F7: mov     [eax+4], ebx
0x64B4FA: jmp     short loc_64B4FE
0x64B4FC: xor     eax, eax
0x64B4FE: fldz
0x64B500: push    ecx
0x64B501: mov     ecx, edi
0x64B503: fstp    [esp+24h+var_24]; float
0x64B506: mov     [esi+174h], eax
0x64B50C: mov     [esi+34h], ebx
0x64B50F: mov     [esi+0C0h], ebx
0x64B515: mov     [esi+0CCh], ebx
0x64B51B: mov     [esi+17Ch], ebx
0x64B521: mov     [esi+114h], bl
0x64B527: mov     [esi+115h], bl
0x64B52D: mov     [esi+11Ch], bl
0x64B533: mov     [esi+38h], ebx
0x64B536: mov     [esi+11Dh], bl
0x64B53C: mov     [esi+120h], ebx
0x64B542: mov     byte ptr [esi+124h], 7Fh
0x64B549: call    sub_6FAEE0
0x64B54E: fldz
0x64B550: mov     [esi+136h], bl
0x64B556: mov     eax, ds:0B3F9A8h
0x64B55B: mov     [edi], eax
0x64B55D: mov     ecx, ds:0B3F9ACh
0x64B563: mov     [edi+4], ecx
0x64B566: mov     edx, ds:0B3F9B0h
0x64B56C: fst     dword ptr [esi+0B8h]
0x64B572: mov     [edi+8], edx
0x64B575: mov     [esi+180h], bl
0x64B57B: mov     edi, [esi+184h]
0x64B581: cmp     edi, ebx
0x64B583: jz      short loc_64B5AB
0x64B585: lea     eax, [edi+4]
0x64B588: fstp    st
0x64B58A: push    eax; lpAddend
0x64B58B: call    dword ptr ds:0A2807Ch
0x64B591: test    eax, eax
0x64B593: jnz     short loc_64B5A3
0x64B595: cmp     edi, ebx
0x64B597: jz      short loc_64B5A3
0x64B599: mov     edx, [edi]
0x64B59B: mov     eax, [edx]
0x64B59D: push    1
0x64B59F: mov     ecx, edi
0x64B5A1: call    eax
0x64B5A3: fldz
0x64B5A5: mov     [esi+184h], ebx
0x64B5AB: fst     dword ptr [esi+0BCh]
0x64B5B1: mov     [esi+0E0h], ebx
0x64B5B7: fst     dword ptr [esi+0C4h]
0x64B5BD: mov     [esi+148h], ebx
0x64B5C3: fld1
0x64B5C5: mov     [esi+14Ch], bl
0x64B5CB: fstp    dword ptr [esi+154h]
0x64B5D1: mov     [esi+150h], ebx
0x64B5D7: mov     [esi+15Ch], ebx
0x64B5DD: mov     [esi+164h], ebx
0x64B5E3: fst     dword ptr [esi+158h]
0x64B5E9: mov     [esi+161h], bl
0x64B5EF: fstp    dword ptr [esi+88h]
0x64B5F5: mov     byte ptr [esi+0C8h], 1
0x64B5FC: mov     [esi+168h], bl
0x64B602: mov     [esi+169h], bl
0x64B608: mov     [esi+160h], bl
0x64B60E: mov     [esi+188h], ebx
0x64B614: mov     [esi+16Ah], bl
0x64B61A: mov     [esi+16Bh], bl
0x64B620: mov     [esi+16Ch], bl
0x64B626: mov     [esi+16Dh], bl
0x64B62C: mov     [esi+170h], ebx
0x64B632: mov     eax, esi
0x64B634: mov     ecx, dword ptr [esp+20h+var_C]
0x64B638: mov     large fs:0, ecx
0x64B63F: pop     ecx
0x64B640: pop     edi
0x64B641: pop     esi
0x64B642: pop     ebx
0x64B643: add     esp, 10h
0x64B646: retn
