0x983754: push    ebp
0x983755: lea     ebp, [esp-1E8h]
0x98375C: sub     esp, 268h
0x983762: mov     eax, ds:0B30AACh
0x983767: xor     eax, ebp
0x983769: mov     [ebp+1E8h+var_4], eax
0x98376F: push    ebx
0x983770: push    esi
0x983771: mov     esi, [ebp+1E8h+lpFileName]
0x983777: xor     ebx, ebx
0x983779: cmp     esi, ebx
0x98377B: push    edi
0x98377C: mov     edi, [ebp+1E8h+arg_4]
0x983782: mov     [ebp+1E8h+LocalFileTime.dwHighDateTime], esi
0x983785: jnz     short loc_9837AB
0x983787: call    ___doserrno
0x98378C: mov     [eax], ebx
0x98378E: call    __errno
0x983793: push    ebx
0x983794: push    ebx
0x983795: push    ebx
0x983796: push    ebx
0x983797: push    ebx
0x983798: mov     dword ptr [eax], 16h
0x98379E: call    __invalid_parameter
0x9837A3: add     esp, 14h
0x9837A6: jmp     loc_983A87
0x9837AB: cmp     edi, ebx
0x9837AD: jz      short loc_983787
0x9837AF: push    offset byte_AA3ECC; unsigned __int8 *
0x9837B4: push    esi; unsigned __int8 *
0x9837B5: call    __mbscspn
0x9837BA: test    eax, eax
0x9837BC: pop     ecx
0x9837BD: pop     ecx
0x9837BE: jz      short loc_9837D6
0x9837C0: call    __errno
0x9837C5: push    2
0x9837C7: pop     esi
0x9837C8: mov     [eax], esi
0x9837CA: call    ___doserrno
0x9837CF: mov     [eax], esi
0x9837D1: jmp     loc_983A87
0x9837D6: cmp     byte ptr [esi+1], 3Ah ; ':'
0x9837DA: jnz     short loc_9837F6
0x9837DC: mov     al, [esi]
0x9837DE: cmp     al, bl
0x9837E0: jz      short loc_9837E7
0x9837E2: cmp     [esi+2], bl
0x9837E5: jz      short loc_9837C0
0x9837E7: movsx   eax, al
0x9837EA: push    eax; unsigned int
0x9837EB: call    __mbctolower
0x9837F0: pop     ecx
0x9837F1: sub     eax, 60h ; '`'
0x9837F4: jmp     short loc_9837FB
0x9837F6: call    __getdrive
0x9837FB: mov     [ebp+1E8h+var_268], eax
0x9837FE: lea     eax, [ebp+1E8h+FindFileData]
0x983801: push    eax; lpFindFileData
0x983802: push    esi; lpFileName
0x983803: call    dword ptr ds:0A2812Ch
0x983809: cmp     eax, 0FFFFFFFFh
0x98380C: mov     [ebp+1E8h+Memory], eax
0x98380F: jnz     loc_9838EC
0x983815: push    offset off_AA3EC8; unsigned __int8 *
0x98381A: push    esi; unsigned __int8 *
0x98381B: mov     [ebp+1E8h+Memory], ebx
0x98381E: call    __mbscspn
0x983823: test    eax, eax
0x983825: pop     ecx
0x983826: pop     ecx
0x983827: jz      short loc_9837C0
0x983829: push    104h; SizeInBytes
0x98382E: lea     eax, [ebp+1E8h+FullPath]
0x983834: push    esi; Path
0x983835: push    eax; FullPath
0x983836: call    __fullpath
0x98383B: add     esp, 0Ch
0x98383E: cmp     eax, ebx
0x983840: jnz     short loc_98385E
0x983842: call    __errno
0x983847: cmp     dword ptr [eax], 22h ; '"'
0x98384A: jnz     loc_9837C0
0x983850: push    ebx; SizeInBytes
0x983851: push    esi; Path
0x983852: push    ebx; FullPath
0x983853: call    __fullpath
0x983858: add     esp, 0Ch
0x98385B: mov     [ebp+1E8h+Memory], eax
0x98385E: mov     esi, eax
0x983860: cmp     esi, ebx
0x983862: jz      short loc_9838D5
0x983864: push    esi; Str
0x983865: call    _strlen
0x98386A: cmp     eax, 3
0x98386D: pop     ecx
0x98386E: jz      short loc_983879
0x983870: call    _IsRootUNCName
0x983875: test    eax, eax
0x983877: jz      short loc_9838D5
0x983879: push    esi; lpRootPathName
0x98387A: call    dword ptr ds:0A280B8h
0x983880: cmp     eax, 1
0x983883: jbe     short loc_9838D5
0x983885: cmp     [ebp+1E8h+Memory], ebx
0x983888: jz      short loc_983893
0x98388A: push    [ebp+1E8h+Memory]; Memory
0x98388D: call    _free
0x983892: pop     ecx
0x983893: push    0FFFFFFFFh
0x983895: push    ebx
0x983896: push    ebx
0x983897: push    ebx
0x983898: push    1
0x98389A: push    1
0x98389C: push    7BCh
0x9838A1: mov     [ebp+1E8h+FindFileData.dwFileAttributes], 10h
0x9838A8: mov     [ebp+1E8h+FindFileData.nFileSizeHigh], ebx
0x9838AB: mov     [ebp+1E8h+FindFileData.nFileSizeLow], ebx
0x9838AE: mov     [ebp+1E8h+FindFileData.cFileName], bl
0x9838B1: call    ___loctotime64_t
0x9838B6: mov     esi, [ebp+1E8h+LocalFileTime.dwHighDateTime]
0x9838B9: mov     ecx, edx
0x9838BB: add     esp, 1Ch
0x9838BE: mov     [edi+20h], eax
0x9838C1: mov     [edi+24h], edx
0x9838C4: mov     [edi+18h], eax
0x9838C7: mov     [edi+1Ch], ecx
0x9838CA: mov     [edi+28h], eax
0x9838CD: mov     [edi+2Ch], ecx
0x9838D0: jmp     loc_983A3D
0x9838D5: cmp     [ebp+1E8h+Memory], ebx
0x9838D8: jz      loc_9837C0
0x9838DE: push    [ebp+1E8h+Memory]; Memory
0x9838E1: call    _free
0x9838E6: pop     ecx
0x9838E7: jmp     loc_9837C0
0x9838EC: cmp     [ebp+1E8h+FindFileData.ftLastWriteTime.dwLowDateTime], ebx
0x9838EF: jnz     short loc_9838FE
0x9838F1: cmp     [ebp+1E8h+FindFileData.ftLastWriteTime.dwHighDateTime], ebx
0x9838F4: jnz     short loc_9838FE
0x9838F6: mov     [edi+20h], ebx
0x9838F9: mov     [edi+24h], ebx
0x9838FC: jmp     short loc_983958
0x9838FE: lea     eax, [ebp+1E8h+LocalFileTime]
0x983901: push    eax; lpLocalFileTime
0x983902: lea     eax, [ebp+1E8h+FindFileData.ftLastWriteTime]
0x983905: push    eax; lpFileTime
0x983906: call    dword ptr ds:0A28168h
0x98390C: test    eax, eax
0x98390E: jz      loc_983A71
0x983914: lea     eax, [ebp+1E8h+SystemTime]
0x983917: push    eax; lpSystemTime
0x983918: lea     eax, [ebp+1E8h+LocalFileTime]
0x98391B: push    eax; lpFileTime
0x98391C: call    dword ptr ds:0A28138h
0x983922: test    eax, eax
0x983924: jz      loc_983A71
0x98392A: movzx   eax, [ebp+1E8h+SystemTime.wSecond]
0x98392E: push    0FFFFFFFFh
0x983930: push    eax
0x983931: movzx   eax, [ebp+1E8h+SystemTime.wMinute]
0x983935: push    eax
0x983936: movzx   eax, [ebp+1E8h+SystemTime.wHour]
0x98393A: push    eax
0x98393B: movzx   eax, [ebp+1E8h+SystemTime.wDay]
0x98393F: push    eax
0x983940: movzx   eax, [ebp+1E8h+SystemTime.wMonth]
0x983944: push    eax
0x983945: movzx   eax, [ebp+1E8h+SystemTime.wYear]
0x983949: push    eax
0x98394A: call    ___loctotime64_t
0x98394F: add     esp, 1Ch
0x983952: mov     [edi+20h], eax
0x983955: mov     [edi+24h], edx
0x983958: cmp     [ebp+1E8h+FindFileData.ftLastAccessTime.dwLowDateTime], ebx
0x98395B: jnz     short loc_983970
0x98395D: cmp     [ebp+1E8h+FindFileData.ftLastAccessTime.dwHighDateTime], ebx
0x983960: jnz     short loc_983970
0x983962: mov     eax, [edi+20h]
0x983965: mov     [edi+18h], eax
0x983968: mov     eax, [edi+24h]
0x98396B: mov     [edi+1Ch], eax
0x98396E: jmp     short loc_9839CA
0x983970: lea     eax, [ebp+1E8h+LocalFileTime]
0x983973: push    eax; lpLocalFileTime
0x983974: lea     eax, [ebp+1E8h+FindFileData.ftLastAccessTime]
0x983977: push    eax; lpFileTime
0x983978: call    dword ptr ds:0A28168h
0x98397E: test    eax, eax
0x983980: jz      loc_983A71
0x983986: lea     eax, [ebp+1E8h+SystemTime]
0x983989: push    eax; lpSystemTime
0x98398A: lea     eax, [ebp+1E8h+LocalFileTime]
0x98398D: push    eax; lpFileTime
0x98398E: call    dword ptr ds:0A28138h
0x983994: test    eax, eax
0x983996: jz      loc_983A71
0x98399C: movzx   eax, [ebp+1E8h+SystemTime.wSecond]
0x9839A0: push    0FFFFFFFFh
0x9839A2: push    eax
0x9839A3: movzx   eax, [ebp+1E8h+SystemTime.wMinute]
0x9839A7: push    eax
0x9839A8: movzx   eax, [ebp+1E8h+SystemTime.wHour]
0x9839AC: push    eax
0x9839AD: movzx   eax, [ebp+1E8h+SystemTime.wDay]
0x9839B1: push    eax
0x9839B2: movzx   eax, [ebp+1E8h+SystemTime.wMonth]
0x9839B6: push    eax
0x9839B7: movzx   eax, [ebp+1E8h+SystemTime.wYear]
0x9839BB: push    eax
0x9839BC: call    ___loctotime64_t
0x9839C1: add     esp, 1Ch
0x9839C4: mov     [edi+18h], eax
0x9839C7: mov     [edi+1Ch], edx
0x9839CA: cmp     [ebp+1E8h+FindFileData.ftCreationTime.dwLowDateTime], ebx
0x9839CD: jnz     short loc_9839E2
0x9839CF: cmp     [ebp+1E8h+FindFileData.ftCreationTime.dwHighDateTime], ebx
0x9839D2: jnz     short loc_9839E2
0x9839D4: mov     eax, [edi+20h]
0x9839D7: mov     [edi+28h], eax
0x9839DA: mov     eax, [edi+24h]
0x9839DD: mov     [edi+2Ch], eax
0x9839E0: jmp     short loc_983A34
0x9839E2: lea     eax, [ebp+1E8h+LocalFileTime]
0x9839E5: push    eax; lpLocalFileTime
0x9839E6: lea     eax, [ebp+1E8h+FindFileData.ftCreationTime]
0x9839E9: push    eax; lpFileTime
0x9839EA: call    dword ptr ds:0A28168h
0x9839F0: test    eax, eax
0x9839F2: jz      short loc_983A71
0x9839F4: lea     eax, [ebp+1E8h+SystemTime]
0x9839F7: push    eax; lpSystemTime
0x9839F8: lea     eax, [ebp+1E8h+LocalFileTime]
0x9839FB: push    eax; lpFileTime
0x9839FC: call    dword ptr ds:0A28138h
0x983A02: test    eax, eax
0x983A04: jz      short loc_983A71
0x983A06: movzx   eax, [ebp+1E8h+SystemTime.wSecond]
0x983A0A: push    0FFFFFFFFh
0x983A0C: push    eax
0x983A0D: movzx   eax, [ebp+1E8h+SystemTime.wMinute]
0x983A11: push    eax
0x983A12: movzx   eax, [ebp+1E8h+SystemTime.wHour]
0x983A16: push    eax
0x983A17: movzx   eax, [ebp+1E8h+SystemTime.wDay]
0x983A1B: push    eax
0x983A1C: movzx   eax, [ebp+1E8h+SystemTime.wMonth]
0x983A20: push    eax
0x983A21: movzx   eax, [ebp+1E8h+SystemTime.wYear]
0x983A25: push    eax
0x983A26: call    ___loctotime64_t
0x983A2B: add     esp, 1Ch
0x983A2E: mov     [edi+28h], eax
0x983A31: mov     [edi+2Ch], edx
0x983A34: push    [ebp+1E8h+Memory]; hFindFile
0x983A37: call    dword ptr ds:0A28120h
0x983A3D: push    esi; unsigned __int8 *
0x983A3E: push    [ebp+1E8h+FindFileData.dwFileAttributes]; char
0x983A41: call    ___dtoxmode
0x983A46: mov     [edi+6], ax
0x983A4A: mov     eax, [ebp+1E8h+FindFileData.nFileSizeLow]
0x983A4D: mov     [edi+14h], eax
0x983A50: mov     eax, [ebp+1E8h+var_268]
0x983A53: dec     eax
0x983A54: pop     ecx
0x983A55: mov     [edi], eax
0x983A57: mov     [edi+10h], eax
0x983A5A: pop     ecx
0x983A5B: mov     word ptr [edi+8], 1
0x983A61: mov     [edi+4], bx
0x983A65: mov     [edi+0Ch], bx
0x983A69: mov     [edi+0Ah], bx
0x983A6D: xor     eax, eax
0x983A6F: jmp     short loc_983A8A
0x983A71: call    dword ptr ds:0A281ECh
0x983A77: push    eax
0x983A78: call    __dosmaperr
0x983A7D: pop     ecx
0x983A7E: push    [ebp+1E8h+Memory]; hFindFile
0x983A81: call    dword ptr ds:0A28120h
0x983A87: or      eax, 0FFFFFFFFh
0x983A8A: mov     ecx, [ebp+1E8h+var_4]
0x983A90: pop     edi
0x983A91: pop     esi
0x983A92: xor     ecx, ebp
0x983A94: pop     ebx
0x983A95: call    @__security_check_cookie@4
0x983A9A: add     ebp, 1E8h
0x983AA0: leave
0x983AA1: retn
