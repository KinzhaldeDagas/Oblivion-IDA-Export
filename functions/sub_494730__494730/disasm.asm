0x494730: sub     esp, 108h
0x494736: mov     eax, ds:0B30AACh
0x49473B: xor     eax, esp
0x49473D: mov     [esp+108h+var_4], eax
0x494744: push    ebx
0x494745: push    ebp
0x494746: mov     ebp, [esp+110h+lpBuffer]
0x49474D: push    esi
0x49474E: push    edi
0x49474F: mov     edi, [esp+118h+lpFileName]
0x494756: mov     esi, ecx
0x494758: push    offset unk_A2F830; lpCriticalSection
0x49475D: mov     ecx, offset stru_B34E00
0x494762: call    NiEnterCriticalSection
0x494767: mov     eax, ds:0B34D8Ch
0x49476C: test    eax, eax
0x49476E: jz      short loc_4947BF
0x494770: cmp     byte ptr ds:0B34E80h, 0
0x494777: jnz     short loc_4947BF
0x494779: cmp     byte ptr [eax+8], 0
0x49477D: lea     ecx, [eax+8]
0x494780: mov     byte ptr ds:0B34E80h, 1
0x494787: jnz     short loc_49478E
0x494789: mov     ecx, offset aUnknown; "UNKNOWN"
0x49478E: push    ecx
0x49478F: add     eax, 0E0h ; 'à'
0x494794: push    eax
0x494795: lea     eax, [esp+120h+var_104]
0x494799: push    offset aSByS; "(%s by %s) -> "
0x49479E: push    eax
0x49479F: call    __sprintf
0x4947A4: mov     edx, [esi]
0x4947A6: mov     edx, [edx+28h]
0x4947A9: add     esp, 10h
0x4947AC: push    0
0x4947AE: lea     eax, [esp+11Ch+var_104]
0x4947B2: push    eax
0x4947B3: push    edi
0x4947B4: mov     ecx, esi
0x4947B6: call    edx
0x4947B8: mov     byte ptr ds:0B34E80h, 0
0x4947BF: mov     ecx, offset stru_B34E00; lpCriticalSection
0x4947C4: call    NiLeaveCriticalSection_0
0x4947C9: push    0; hTemplateFile
0x4947CB: push    80h ; '€'; dwFlagsAndAttributes
0x4947D0: push    4; dwCreationDisposition
0x4947D2: push    0; lpSecurityAttributes
0x4947D4: push    0; dwShareMode
0x4947D6: push    0C0000000h; dwDesiredAccess
0x4947DB: push    edi; lpFileName
0x4947DC: xor     bl, bl
0x4947DE: call    dword ptr ds:0A28090h
0x4947E4: mov     esi, eax
0x4947E6: cmp     esi, 0FFFFFFFFh
0x4947E9: jz      loc_494870
0x4947EF: mov     eax, ebp
0x4947F1: lea     edx, [eax+1]
0x4947F4: mov     cl, [eax]
0x4947F6: add     eax, 1
0x4947F9: test    cl, cl
0x4947FB: jnz     short loc_4947F4
0x4947FD: push    2; dwMoveMethod
0x4947FF: push    0; lpDistanceToMoveHigh
0x494801: push    0; lDistanceToMove
0x494803: sub     eax, edx
0x494805: push    esi; hFile
0x494806: mov     edi, eax
0x494808: call    dword ptr ds:0A280A4h
0x49480E: push    0; lpOverlapped
0x494810: lea     eax, [esp+11Ch+NumberOfBytesWritten]
0x494814: push    eax; lpNumberOfBytesWritten
0x494815: push    edi; nNumberOfBytesToWrite
0x494816: push    ebp; lpBuffer
0x494817: push    esi; hFile
0x494818: call    dword ptr ds:0A28098h
0x49481E: test    eax, eax
0x494820: setnz   bl
0x494823: cmp     byte ptr ds:0B34E80h, 0
0x49482A: jnz     short loc_494858
0x49482C: test    bl, bl
0x49482E: jz      short loc_494858
0x494830: cmp     byte ptr [edi+ebp-2], 0Dh
0x494835: jnz     short loc_49483E
0x494837: cmp     byte ptr [edi+ebp-1], 0Ah
0x49483C: jz      short loc_494858
0x49483E: push    0; lpOverlapped
0x494840: lea     ecx, [esp+11Ch+NumberOfBytesWritten]
0x494844: push    ecx; lpNumberOfBytesWritten
0x494845: push    2; nNumberOfBytesToWrite
0x494847: push    offset word_A3D9B0; lpBuffer
0x49484C: push    esi; hFile
0x49484D: call    dword ptr ds:0A28098h
0x494853: test    eax, eax
0x494855: setnz   bl
0x494858: cmp     [esp+118h+arg_8], 0
0x494860: jz      short loc_494869
0x494862: push    esi; hFile
0x494863: call    dword ptr ds:0A28178h
0x494869: push    esi; hObject
0x49486A: call    dword ptr ds:0A28094h
0x494870: mov     ecx, [esp+118h+var_4]
0x494877: pop     edi
0x494878: pop     esi
0x494879: pop     ebp
0x49487A: mov     al, bl
0x49487C: pop     ebx
0x49487D: xor     ecx, esp
0x49487F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x494884: add     esp, 108h
0x49488A: retn    0Ch
