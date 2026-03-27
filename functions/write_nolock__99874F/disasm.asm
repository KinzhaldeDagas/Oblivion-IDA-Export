0x99874F: push    ebp
0x998750: lea     ebp, [esp-518h]
0x998757: sub     esp, 594h
0x99875D: mov     eax, ___security_cookie
0x998762: xor     eax, ebp
0x998764: mov     [ebp+518h+var_4], eax
0x99876A: mov     eax, [ebp+518h+arg_4]
0x998770: push    esi
0x998771: xor     esi, esi
0x998773: cmp     [ebp+518h+nNumberOfBytesToWrite], esi
0x998779: mov     [ebp+518h+SrcCh], eax
0x99877C: mov     [ebp+518h+var_578], esi
0x99877F: mov     [ebp+518h+var_580], esi
0x998782: jnz     short loc_99878B
0x998784: xor     eax, eax
0x998786: jmp     loc_998CFF
0x99878B: cmp     eax, esi
0x99878D: jnz     short loc_9987B6
0x99878F: call    ___doserrno
0x998794: mov     [eax], esi
0x998796: call    __errno
0x99879B: push    esi
0x99879C: push    esi
0x99879D: push    esi
0x99879E: push    esi
0x99879F: push    esi
0x9987A0: mov     dword ptr [eax], 16h
0x9987A6: call    __invalid_parameter
0x9987AB: add     esp, 14h
0x9987AE: or      eax, 0FFFFFFFFh
0x9987B1: jmp     loc_998CFF
0x9987B6: mov     esi, [ebp+518h+arg_0]
0x9987BC: push    ebx
0x9987BD: mov     ebx, esi
0x9987BF: and     ebx, 1Fh
0x9987C2: imul    ebx, 28h ; '('
0x9987C5: mov     eax, esi
0x9987C7: sar     eax, 5
0x9987CA: push    edi
0x9987CB: lea     edi, ds:0BAAAC0h[eax*4]
0x9987D2: mov     eax, [edi]
0x9987D4: add     eax, ebx
0x9987D6: mov     cl, [eax+24h]
0x9987D9: add     cl, cl
0x9987DB: sar     cl, 1
0x9987DD: cmp     cl, 2
0x9987E0: mov     [ebp+518h+var_588], edi
0x9987E3: mov     [ebp+518h+var_56D], cl
0x9987E6: jz      short loc_9987ED
0x9987E8: cmp     cl, 1
0x9987EB: jnz     short loc_998820
0x9987ED: mov     ecx, [ebp+518h+nNumberOfBytesToWrite]
0x9987F3: not     ecx
0x9987F5: test    cl, 1
0x9987F8: jnz     short loc_998820
0x9987FA: call    ___doserrno
0x9987FF: xor     esi, esi
0x998801: mov     [eax], esi
0x998803: call    __errno
0x998808: push    esi
0x998809: push    esi
0x99880A: push    esi
0x99880B: push    esi
0x99880C: push    esi
0x99880D: mov     dword ptr [eax], 16h
0x998813: call    __invalid_parameter
0x998818: add     esp, 14h
0x99881B: jmp     loc_998CF5
0x998820: test    byte ptr [eax+4], 20h
0x998824: jz      short loc_998835
0x998826: push    2; dwMoveMethod
0x998828: push    0; int
0x99882A: push    0; int
0x99882C: push    esi; int
0x99882D: call    __lseeki64_nolock
0x998832: add     esp, 10h
0x998835: push    esi; int
0x998836: call    __isatty
0x99883B: test    eax, eax
0x99883D: pop     ecx
0x99883E: jz      loc_998A3A
0x998844: mov     eax, [edi]
0x998846: test    byte ptr [ebx+eax+4], 80h
0x99884B: jz      loc_998A3A
0x998851: call    __getptd
0x998856: mov     eax, [eax+6Ch]
0x998859: xor     ecx, ecx
0x99885B: cmp     [eax+14h], ecx
0x99885E: lea     eax, [ebp+518h+Mode]
0x998861: setz    cl
0x998864: push    eax; lpMode
0x998865: mov     eax, [edi]
0x998867: push    dword ptr [ebx+eax]; hConsoleHandle
0x99886A: mov     esi, ecx
0x99886C: call    ds:GetConsoleMode
0x998872: test    eax, eax
0x998874: jz      loc_998A3A
0x99887A: test    esi, esi
0x99887C: jz      short loc_998888
0x99887E: cmp     [ebp+518h+var_56D], 0
0x998882: jz      loc_998A3A
0x998888: call    ds:GetConsoleCP
0x99888E: and     [ebp+518h+NumberOfBytesWritten], 0
0x998892: cmp     [ebp+518h+nNumberOfBytesToWrite], 0
0x998899: mov     esi, [ebp+518h+SrcCh]
0x99889C: mov     [ebp+518h+Mode], eax
0x99889F: mov     [ebp+518h+var_58C], esi
0x9988A2: jbe     loc_998CA7
0x9988A8: and     [ebp+518h+var_574], 0
0x9988AC: jmp     short loc_9988B1
0x9988AE: mov     esi, [ebp+518h+var_58C]
0x9988B1: mov     al, [ebp+518h+var_56D]
0x9988B4: test    al, al
0x9988B6: jnz     loc_9989C2
0x9988BC: mov     al, [esi]
0x9988BE: xor     ecx, ecx
0x9988C0: cmp     al, 0Ah
0x9988C2: setz    cl
0x9988C5: movsx   eax, al
0x9988C8: push    eax; C
0x9988C9: mov     [ebp+518h+var_590], ecx
0x9988CC: call    _isleadbyte
0x9988D1: test    eax, eax
0x9988D3: pop     ecx
0x9988D4: jnz     short loc_9988F0
0x9988D6: push    1; SrcSizeInBytes
0x9988D8: lea     eax, [ebp+518h+DstCh]
0x9988DB: push    esi; SrcCh
0x9988DC: push    eax; DstCh
0x9988DD: call    _mbtowc
0x9988E2: add     esp, 0Ch
0x9988E5: cmp     eax, 0FFFFFFFFh
0x9988E8: jz      loc_998C9D
0x9988EE: jmp     short loc_998920
0x9988F0: mov     eax, [ebp+518h+SrcCh]
0x9988F3: sub     eax, esi
0x9988F5: add     eax, [ebp+518h+nNumberOfBytesToWrite]
0x9988FB: cmp     eax, 1
0x9988FE: jbe     loc_998C9D
0x998904: push    2; SrcSizeInBytes
0x998906: lea     eax, [ebp+518h+DstCh]
0x998909: push    esi; SrcCh
0x99890A: push    eax; DstCh
0x99890B: call    _mbtowc
0x998910: add     esp, 0Ch
0x998913: cmp     eax, 0FFFFFFFFh
0x998916: jz      loc_998C9D
0x99891C: inc     esi
0x99891D: inc     [ebp+518h+var_574]
0x998920: xor     eax, eax
0x998922: push    eax; lpUsedDefaultChar
0x998923: push    eax; lpDefaultChar
0x998924: push    5; cbMultiByte
0x998926: lea     ecx, [ebp+518h+MultiByteStr]
0x99892C: push    ecx; lpMultiByteStr
0x99892D: push    1; cchWideChar
0x99892F: lea     ecx, [ebp+518h+DstCh]
0x998932: push    ecx; lpWideCharStr
0x998933: push    eax; dwFlags
0x998934: push    [ebp+518h+Mode]; CodePage
0x998937: inc     esi
0x998938: inc     [ebp+518h+var_574]
0x99893B: mov     [ebp+518h+var_58C], esi
0x99893E: call    ds:WideCharToMultiByte
0x998944: mov     esi, eax
0x998946: test    esi, esi
0x998948: jz      loc_998C9D
0x99894E: push    0; lpOverlapped
0x998950: lea     eax, [ebp+518h+NumberOfBytesWritten]
0x998953: push    eax; lpNumberOfBytesWritten
0x998954: push    esi; nNumberOfBytesToWrite
0x998955: lea     eax, [ebp+518h+MultiByteStr]
0x99895B: push    eax; lpBuffer
0x99895C: mov     eax, [edi]
0x99895E: push    dword ptr [ebx+eax]; hFile
0x998961: call    ds:WriteFile
0x998967: test    eax, eax
0x998969: jz      loc_998C94
0x99896F: mov     eax, [ebp+518h+NumberOfBytesWritten]
0x998972: add     [ebp+518h+var_578], eax
0x998975: cmp     eax, esi
0x998977: jl      loc_998C9D
0x99897D: cmp     [ebp+518h+var_590], 0
0x998981: jz      loc_998A26
0x998987: push    0; lpOverlapped
0x998989: lea     eax, [ebp+518h+NumberOfBytesWritten]
0x99898C: push    eax; lpNumberOfBytesWritten
0x99898D: push    1; nNumberOfBytesToWrite
0x99898F: lea     eax, [ebp+518h+MultiByteStr]
0x998995: push    eax; lpBuffer
0x998996: mov     eax, [edi]
0x998998: mov     [ebp+518h+MultiByteStr], 0Dh
0x99899F: push    dword ptr [ebx+eax]; hFile
0x9989A2: call    ds:WriteFile
0x9989A8: test    eax, eax
0x9989AA: jz      loc_998C94
0x9989B0: cmp     [ebp+518h+NumberOfBytesWritten], 1
0x9989B4: jl      loc_998C9D
0x9989BA: inc     [ebp+518h+var_580]
0x9989BD: inc     [ebp+518h+var_578]
0x9989C0: jmp     short loc_998A26
0x9989C2: cmp     al, 1
0x9989C4: jz      short loc_9989CA
0x9989C6: cmp     al, 2
0x9989C8: jnz     short loc_9989E5
0x9989CA: movzx   ecx, word ptr [esi]
0x9989CD: xor     edx, edx
0x9989CF: cmp     cx, 0Ah
0x9989D3: setz    dl
0x9989D6: inc     esi
0x9989D7: inc     esi
0x9989D8: add     [ebp+518h+var_574], 2
0x9989DC: mov     dword ptr [ebp+518h+DstCh], ecx
0x9989DF: mov     [ebp+518h+var_58C], esi
0x9989E2: mov     [ebp+518h+var_590], edx
0x9989E5: cmp     al, 1
0x9989E7: jz      short loc_9989ED
0x9989E9: cmp     al, 2
0x9989EB: jnz     short loc_998A26
0x9989ED: push    dword ptr [ebp+518h+DstCh]; Buffer
0x9989F0: call    __putwch_nolock
0x9989F5: cmp     ax, [ebp+518h+DstCh]
0x9989F9: pop     ecx
0x9989FA: jnz     loc_998C94
0x998A00: inc     [ebp+518h+var_578]
0x998A03: cmp     [ebp+518h+var_590], 0
0x998A07: jz      short loc_998A26
0x998A09: push    0Dh
0x998A0B: pop     eax
0x998A0C: push    eax; Buffer
0x998A0D: mov     dword ptr [ebp+518h+DstCh], eax
0x998A10: call    __putwch_nolock
0x998A15: cmp     ax, [ebp+518h+DstCh]
0x998A19: pop     ecx
0x998A1A: jnz     loc_998C94
0x998A20: inc     [ebp+518h+var_578]
0x998A23: inc     [ebp+518h+var_580]
0x998A26: mov     eax, [ebp+518h+nNumberOfBytesToWrite]
0x998A2C: cmp     [ebp+518h+var_574], eax
0x998A2F: jb      loc_9988AE
0x998A35: jmp     loc_998C9D
0x998A3A: mov     eax, [edi]
0x998A3C: add     eax, ebx
0x998A3E: test    byte ptr [eax+4], 80h
0x998A42: jz      loc_998C6D
0x998A48: mov     eax, [ebp+518h+SrcCh]
0x998A4B: xor     esi, esi
0x998A4D: cmp     [ebp+518h+var_56D], 0
0x998A51: mov     dword ptr [ebp+518h+DstCh], esi
0x998A54: jnz     loc_998AEB
0x998A5A: cmp     [ebp+518h+nNumberOfBytesToWrite], esi
0x998A60: mov     [ebp+518h+NumberOfBytesWritten], eax
0x998A63: jbe     loc_998CCE
0x998A69: mov     ecx, [ebp+518h+NumberOfBytesWritten]
0x998A6C: and     [ebp+518h+var_574], 0
0x998A70: sub     ecx, [ebp+518h+SrcCh]
0x998A73: lea     eax, [ebp+518h+Buffer]
0x998A76: cmp     ecx, [ebp+518h+nNumberOfBytesToWrite]
0x998A7C: jnb     short loc_998AA5
0x998A7E: mov     edx, [ebp+518h+NumberOfBytesWritten]
0x998A81: inc     [ebp+518h+NumberOfBytesWritten]
0x998A84: mov     dl, [edx]
0x998A86: inc     ecx
0x998A87: cmp     dl, 0Ah
0x998A8A: jnz     short loc_998A96
0x998A8C: inc     [ebp+518h+var_580]
0x998A8F: mov     byte ptr [eax], 0Dh
0x998A92: inc     eax
0x998A93: inc     [ebp+518h+var_574]
0x998A96: mov     [eax], dl
0x998A98: inc     eax
0x998A99: inc     [ebp+518h+var_574]
0x998A9C: cmp     [ebp+518h+var_574], 400h
0x998AA3: jb      short loc_998A76
0x998AA5: mov     esi, eax
0x998AA7: lea     eax, [ebp+518h+Buffer]
0x998AAA: sub     esi, eax
0x998AAC: push    0; lpOverlapped
0x998AAE: lea     eax, [ebp+518h+var_584]
0x998AB1: push    eax; lpNumberOfBytesWritten
0x998AB2: push    esi; nNumberOfBytesToWrite
0x998AB3: lea     eax, [ebp+518h+Buffer]
0x998AB6: push    eax; lpBuffer
0x998AB7: mov     eax, [edi]
0x998AB9: push    dword ptr [ebx+eax]; hFile
0x998ABC: call    ds:WriteFile
0x998AC2: test    eax, eax
0x998AC4: jz      loc_998C94
0x998ACA: mov     eax, [ebp+518h+var_584]
0x998ACD: add     [ebp+518h+var_578], eax
0x998AD0: cmp     eax, esi
0x998AD2: jl      loc_998C9D
0x998AD8: mov     eax, [ebp+518h+NumberOfBytesWritten]
0x998ADB: sub     eax, [ebp+518h+SrcCh]
0x998ADE: cmp     eax, [ebp+518h+nNumberOfBytesToWrite]
0x998AE4: jb      short loc_998A69
0x998AE6: jmp     loc_998C9D
0x998AEB: cmp     [ebp+518h+var_56D], 2
0x998AEF: jnz     loc_998B92
0x998AF5: cmp     [ebp+518h+nNumberOfBytesToWrite], esi
0x998AFB: mov     [ebp+518h+NumberOfBytesWritten], eax
0x998AFE: jbe     loc_998CCE
0x998B04: mov     ecx, [ebp+518h+NumberOfBytesWritten]
0x998B07: xor     esi, esi
0x998B09: sub     ecx, [ebp+518h+SrcCh]
0x998B0C: lea     eax, [ebp+518h+Buffer]
0x998B0F: cmp     ecx, [ebp+518h+nNumberOfBytesToWrite]
0x998B15: jnb     short loc_998B48
0x998B17: mov     edx, [ebp+518h+NumberOfBytesWritten]
0x998B1A: add     [ebp+518h+NumberOfBytesWritten], 2
0x998B1E: movzx   edx, word ptr [edx]
0x998B21: inc     ecx
0x998B22: inc     ecx
0x998B23: cmp     dx, 0Ah
0x998B27: jnz     short loc_998B36
0x998B29: add     [ebp+518h+var_580], 2
0x998B2D: mov     word ptr [eax], 0Dh
0x998B32: inc     eax
0x998B33: inc     eax
0x998B34: inc     esi
0x998B35: inc     esi
0x998B36: mov     edi, [ebp+518h+var_588]
0x998B39: mov     [eax], dx
0x998B3C: inc     eax
0x998B3D: inc     eax
0x998B3E: inc     esi
0x998B3F: inc     esi
0x998B40: cmp     esi, 3FFh
0x998B46: jb      short loc_998B0F
0x998B48: mov     esi, eax
0x998B4A: lea     eax, [ebp+518h+Buffer]
0x998B4D: sub     esi, eax
0x998B4F: push    0; lpOverlapped
0x998B51: lea     eax, [ebp+518h+var_584]
0x998B54: push    eax; lpNumberOfBytesWritten
0x998B55: push    esi; nNumberOfBytesToWrite
0x998B56: lea     eax, [ebp+518h+Buffer]
0x998B59: push    eax; lpBuffer
0x998B5A: mov     eax, [edi]
0x998B5C: push    dword ptr [ebx+eax]; hFile
0x998B5F: call    ds:WriteFile
0x998B65: test    eax, eax
0x998B67: jz      loc_998C94
0x998B6D: mov     eax, [ebp+518h+var_584]
0x998B70: add     [ebp+518h+var_578], eax
0x998B73: cmp     eax, esi
0x998B75: jl      loc_998C9D
0x998B7B: mov     eax, [ebp+518h+NumberOfBytesWritten]
0x998B7E: sub     eax, [ebp+518h+SrcCh]
0x998B81: cmp     eax, [ebp+518h+nNumberOfBytesToWrite]
0x998B87: jb      loc_998B04
0x998B8D: jmp     loc_998C9D
0x998B92: cmp     [ebp+518h+nNumberOfBytesToWrite], esi
0x998B98: mov     [ebp+518h+var_574], eax
0x998B9B: jbe     loc_998CCE
0x998BA1: mov     ecx, [ebp+518h+var_574]
0x998BA4: and     [ebp+518h+NumberOfBytesWritten], 0
0x998BA8: sub     ecx, [ebp+518h+SrcCh]
0x998BAB: push    2
0x998BAD: lea     eax, [ebp+518h+WideCharStr]
0x998BB3: pop     esi
0x998BB4: cmp     ecx, [ebp+518h+nNumberOfBytesToWrite]
0x998BBA: jnb     short loc_998BE8
0x998BBC: mov     edx, [ebp+518h+var_574]
0x998BBF: movzx   edx, word ptr [edx]
0x998BC2: add     [ebp+518h+var_574], esi
0x998BC5: add     ecx, esi
0x998BC7: cmp     dx, 0Ah
0x998BCB: jnz     short loc_998BD7
0x998BCD: mov     word ptr [eax], 0Dh
0x998BD2: add     eax, esi
0x998BD4: add     [ebp+518h+NumberOfBytesWritten], esi
0x998BD7: add     [ebp+518h+NumberOfBytesWritten], esi
0x998BDA: mov     [eax], dx
0x998BDD: add     eax, esi
0x998BDF: cmp     [ebp+518h+NumberOfBytesWritten], 152h
0x998BE6: jb      short loc_998BB4
0x998BE8: xor     esi, esi
0x998BEA: push    esi; lpUsedDefaultChar
0x998BEB: push    esi; lpDefaultChar
0x998BEC: push    2ABh; cbMultiByte
0x998BF1: lea     ecx, [ebp+518h+var_410]
0x998BF7: push    ecx; lpMultiByteStr
0x998BF8: lea     ecx, [ebp+518h+WideCharStr]
0x998BFE: sub     eax, ecx
0x998C00: cdq
0x998C01: sub     eax, edx
0x998C03: sar     eax, 1
0x998C05: push    eax; cchWideChar
0x998C06: mov     eax, ecx
0x998C08: push    eax; lpWideCharStr
0x998C09: push    esi; dwFlags
0x998C0A: push    0FDE9h; CodePage
0x998C0F: call    ds:WideCharToMultiByte
0x998C15: mov     edi, eax
0x998C17: cmp     edi, esi
0x998C19: jz      short loc_998C94
0x998C1B: push    0; lpOverlapped
0x998C1D: lea     eax, [ebp+518h+var_584]
0x998C20: push    eax; lpNumberOfBytesWritten
0x998C21: mov     eax, edi
0x998C23: sub     eax, esi
0x998C25: push    eax; nNumberOfBytesToWrite
0x998C26: lea     eax, [ebp+esi+518h+var_410]
0x998C2D: push    eax; lpBuffer
0x998C2E: mov     eax, [ebp+518h+var_588]
0x998C31: mov     eax, [eax]
0x998C33: push    dword ptr [ebx+eax]; hFile
0x998C36: call    ds:WriteFile
0x998C3C: test    eax, eax
0x998C3E: jz      short loc_998C49
0x998C40: add     esi, [ebp+518h+var_584]
0x998C43: cmp     edi, esi
0x998C45: jg      short loc_998C1B
0x998C47: jmp     short loc_998C52
0x998C49: call    ds:GetLastError
0x998C4F: mov     dword ptr [ebp+518h+DstCh], eax
0x998C52: cmp     edi, esi
0x998C54: jg      short loc_998C9D
0x998C56: mov     eax, [ebp+518h+var_574]
0x998C59: sub     eax, [ebp+518h+SrcCh]
0x998C5C: cmp     eax, [ebp+518h+nNumberOfBytesToWrite]
0x998C62: mov     [ebp+518h+var_578], eax
0x998C65: jb      loc_998BA1
0x998C6B: jmp     short loc_998C9D
0x998C6D: push    0; lpOverlapped
0x998C6F: lea     ecx, [ebp+518h+var_584]
0x998C72: push    ecx; lpNumberOfBytesWritten
0x998C73: push    [ebp+518h+nNumberOfBytesToWrite]; nNumberOfBytesToWrite
0x998C79: push    [ebp+518h+SrcCh]; lpBuffer
0x998C7C: push    dword ptr [eax]; hFile
0x998C7E: call    ds:WriteFile
0x998C84: test    eax, eax
0x998C86: jz      short loc_998C94
0x998C88: mov     eax, [ebp+518h+var_584]
0x998C8B: and     dword ptr [ebp+518h+DstCh], 0
0x998C8F: mov     [ebp+518h+var_578], eax
0x998C92: jmp     short loc_998C9D
0x998C94: call    ds:GetLastError
0x998C9A: mov     dword ptr [ebp+518h+DstCh], eax
0x998C9D: mov     eax, [ebp+518h+var_578]
0x998CA0: test    eax, eax
0x998CA2: jnz     short loc_998CFA
0x998CA4: mov     edi, [ebp+518h+var_588]
0x998CA7: xor     esi, esi
0x998CA9: cmp     dword ptr [ebp+518h+DstCh], esi
0x998CAC: jz      short loc_998CCE
0x998CAE: push    5
0x998CB0: pop     esi
0x998CB1: cmp     dword ptr [ebp+518h+DstCh], esi
0x998CB4: jnz     short loc_998CC3
0x998CB6: call    __errno
0x998CBB: mov     dword ptr [eax], 9
0x998CC1: jmp     short loc_998CEE
0x998CC3: push    dword ptr [ebp+518h+DstCh]
0x998CC6: call    __dosmaperr
0x998CCB: pop     ecx
0x998CCC: jmp     short loc_998CF5
0x998CCE: mov     eax, [edi]
0x998CD0: test    byte ptr [ebx+eax+4], 40h
0x998CD5: jz      short loc_998CE3
0x998CD7: mov     eax, [ebp+518h+SrcCh]
0x998CDA: cmp     byte ptr [eax], 1Ah
0x998CDD: jnz     short loc_998CE3
0x998CDF: xor     eax, eax
0x998CE1: jmp     short loc_998CFD
0x998CE3: call    __errno
0x998CE8: mov     dword ptr [eax], 1Ch
0x998CEE: call    ___doserrno
0x998CF3: mov     [eax], esi
0x998CF5: or      eax, 0FFFFFFFFh
0x998CF8: jmp     short loc_998CFD
0x998CFA: sub     eax, [ebp+518h+var_580]
0x998CFD: pop     edi
0x998CFE: pop     ebx
0x998CFF: mov     ecx, [ebp+518h+var_4]
0x998D05: xor     ecx, ebp
0x998D07: pop     esi
0x998D08: call    @__security_check_cookie@4
0x998D0D: add     ebp, 518h
0x998D13: leave
0x998D14: retn
