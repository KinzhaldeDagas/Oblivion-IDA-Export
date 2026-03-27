0x748B00: sub     esp, 124h
0x748B06: mov     eax, ds:0B30AACh
0x748B0B: xor     eax, esp
0x748B0D: mov     [esp+124h+var_4], eax
0x748B14: push    esi
0x748B15: mov     esi, ecx
0x748B17: cmp     dword ptr [esi+100h], 0
0x748B1E: jz      loc_748BDC
0x748B24: push    offset asc_A854D8; "/**************************************"...
0x748B29: call    sub_748AB0
0x748B2E: push    esi; ArgList
0x748B2F: push    offset aSLogFileClosed; "* %s - Log File Closed\n"
0x748B34: lea     eax, [esp+130h+DstBuf]
0x748B38: push    100h; SizeInBytes
0x748B3D: push    eax; DstBuf
0x748B3E: call    sub_6C5D40
0x748B43: add     esp, 10h
0x748B46: lea     ecx, [esp+128h+DstBuf]
0x748B4A: push    ecx; Str
0x748B4B: mov     ecx, esi
0x748B4D: call    sub_748AB0
0x748B52: lea     edx, [esp+128h+SystemTime]
0x748B56: push    edx; lpSystemTime
0x748B57: call    dword ptr ds:0A28108h
0x748B5D: lea     eax, [esp+128h+var_114]
0x748B61: push    eax; lpSystemTime
0x748B62: call    dword ptr ds:0A28174h
0x748B68: movzx   ecx, [esp+128h+var_114.wSecond]
0x748B6D: movzx   edx, [esp+128h+var_114.wMinute]
0x748B72: movzx   eax, [esp+128h+var_114.wHour]
0x748B77: push    ecx
0x748B78: movzx   ecx, [esp+12Ch+SystemTime.wSecond]
0x748B7D: push    edx
0x748B7E: movzx   edx, [esp+130h+SystemTime.wMinute]
0x748B83: push    eax
0x748B84: movzx   eax, [esp+134h+SystemTime.wHour]
0x748B89: push    ecx
0x748B8A: movzx   ecx, [esp+138h+SystemTime.wYear]
0x748B8F: push    edx
0x748B90: movzx   edx, [esp+13Ch+SystemTime.wDay]
0x748B95: push    eax
0x748B96: movzx   eax, [esp+140h+SystemTime.wMonth]
0x748B9B: push    ecx
0x748B9C: push    edx
0x748B9D: push    eax; ArgList
0x748B9E: push    offset a02d02d04d2d02d; "*     %02d/%02d/%04d - %2d:%02d:%02d UT"...
0x748BA3: lea     ecx, [esp+150h+DstBuf]
0x748BA7: push    100h; SizeInBytes
0x748BAC: push    ecx; DstBuf
0x748BAD: call    sub_6C5D40
0x748BB2: add     esp, 30h
0x748BB5: lea     edx, [esp+128h+DstBuf]
0x748BB9: push    edx; Str
0x748BBA: mov     ecx, esi
0x748BBC: call    sub_748AB0
0x748BC1: push    offset asc_A85440; "***************************************"...
0x748BC6: mov     ecx, esi
0x748BC8: call    sub_748AB0
0x748BCD: mov     eax, [esi+100h]
0x748BD3: push    eax; File
0x748BD4: call    _fclose
0x748BD9: add     esp, 4
0x748BDC: mov     ecx, [esp+128h+var_4]
0x748BE3: mov     dword ptr [esi+100h], 0
0x748BED: pop     esi
0x748BEE: xor     ecx, esp
0x748BF0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x748BF5: add     esp, 124h
0x748BFB: retn
