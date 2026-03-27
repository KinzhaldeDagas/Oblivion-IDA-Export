0x45ADC0: sub     esp, 554h
0x45ADC6: mov     eax, ds:0B30AACh
0x45ADCB: xor     eax, esp
0x45ADCD: mov     [esp+554h+var_4], eax
0x45ADD4: mov     eax, [esp+554h+lpString2]
0x45ADDB: push    ebx
0x45ADDC: push    ebp
0x45ADDD: push    edi
0x45ADDE: push    eax; lpString2
0x45ADDF: lea     eax, [esp+564h+String1]
0x45ADE6: mov     edi, ecx
0x45ADE8: push    eax; lpString1
0x45ADE9: mov     [esp+568h+var_52C], edi
0x45ADED: call    dword ptr ds:0A28164h
0x45ADF3: push    offset a_txt; ".txt"
0x45ADF8: lea     ecx, [esp+564h+String1]
0x45ADFF: push    ecx; lpString1
0x45AE00: call    dword ptr ds:0A28160h
0x45AE06: mov     ecx, ds:0B33A04h
0x45AE0C: xor     ebx, ebx
0x45AE0E: cmp     ecx, ebx
0x45AE10: jz      short loc_45AE37
0x45AE12: mov     edx, [ecx]
0x45AE14: mov     edx, [edx+4]
0x45AE17: push    0FFFFFFFFh
0x45AE19: push    ebx
0x45AE1A: push    ebx
0x45AE1B: lea     eax, [esp+56Ch+String1]
0x45AE22: push    eax
0x45AE23: call    edx
0x45AE25: cmp     eax, ebx
0x45AE27: jz      short loc_45AE37
0x45AE29: lea     eax, [esp+560h+String1]
0x45AE30: push    eax; lpFileName
0x45AE31: call    dword ptr ds:0A280ACh
0x45AE37: push    ebx; hTemplateFile
0x45AE38: push    80h ; '€'; dwFlagsAndAttributes
0x45AE3D: push    4; dwCreationDisposition
0x45AE3F: push    ebx; lpSecurityAttributes
0x45AE40: push    ebx; dwShareMode
0x45AE41: push    0C0000000h; dwDesiredAccess
0x45AE46: lea     ecx, [esp+578h+String1]
0x45AE4D: push    ecx; lpFileName
0x45AE4E: call    dword ptr ds:0A28090h
0x45AE54: mov     ebp, eax
0x45AE56: cmp     ebp, 0FFFFFFFFh
0x45AE59: mov     [esp+560h+hFile], ebp
0x45AE5D: jz      loc_45B2E6
0x45AE63: push    offset aChanges; "Changes"
0x45AE68: push    offset aName; "Name"
0x45AE6D: push    offset aV; "V"
0x45AE72: push    offset aFlags; "Flags"
0x45AE77: push    offset aSize; "Size"
0x45AE7C: push    offset aFormId; "Form ID"
0x45AE81: lea     edx, [esp+578h+Buffer]
0x45AE85: push    offset a8s5s8s02s40sS; "  %-8s %-5s %-8s %02s %-40s  %s\r\n\r\n"
0x45AE8A: push    edx
0x45AE8B: mov     word ptr [esp+580h+var_544+2], bx
0x45AE90: mov     [esp+580h+var_548], ebx
0x45AE94: mov     [esp+580h+var_54C], ebx
0x45AE98: mov     word ptr [esp+580h+var_544], 0FFFFh
0x45AE9F: call    __sprintf
0x45AEA4: lea     eax, [esp+580h+Buffer]
0x45AEA8: add     esp, 20h
0x45AEAB: lea     ecx, [eax+1]
0x45AEAE: mov     edi, edi
0x45AEB0: mov     dl, [eax]
0x45AEB2: add     eax, 1
0x45AEB5: test    dl, dl
0x45AEB7: jnz     short loc_45AEB0
0x45AEB9: push    esi
0x45AEBA: push    ebx; lpOverlapped
0x45AEBB: sub     eax, ecx
0x45AEBD: lea     ecx, [esp+568h+NumberOfBytesWritten]
0x45AEC1: push    ecx; lpNumberOfBytesWritten
0x45AEC2: push    eax; nNumberOfBytesToWrite
0x45AEC3: lea     edx, [esp+570h+Buffer]
0x45AEC7: push    edx; lpBuffer
0x45AEC8: push    ebp; hFile
0x45AEC9: call    dword ptr ds:0A28098h
0x45AECF: mov     edx, [edi]
0x45AED1: mov     ecx, [edx+4]
0x45AED4: xor     eax, eax
0x45AED6: cmp     ecx, ebx
0x45AED8: jbe     short loc_45AEEE
0x45AEDA: mov     edx, [edx+8]
0x45AEDD: mov     esi, edx
0x45AEDF: nop
0x45AEE0: cmp     [esi], ebx
0x45AEE2: jnz     short loc_45AF3A
0x45AEE4: add     eax, 1
0x45AEE7: add     esi, 4
0x45AEEA: cmp     eax, ecx
0x45AEEC: jb      short loc_45AEE0
0x45AEEE: xor     eax, eax
0x45AEF0: test    eax, eax
0x45AEF2: mov     [esp+564h+var_528], eax
0x45AEF6: jz      loc_45B20E
0x45AEFC: lea     esp, [esp+0]
0x45AF00: lea     eax, [esp+564h+var_51C]
0x45AF04: push    eax
0x45AF05: lea     ecx, [esp+568h+var_552+1]
0x45AF09: push    ecx
0x45AF0A: mov     ecx, [edi]
0x45AF0C: lea     edx, [esp+56Ch+var_528]
0x45AF10: push    edx
0x45AF11: call    sub_452800
0x45AF16: mov     al, byte ptr [esp+564h+var_552+1]
0x45AF1A: test    al, al
0x45AF1C: mov     ebx, [esp+564h+var_51C]
0x45AF20: mov     [esp+564h+var_534], ebx
0x45AF24: jnz     short loc_45AF3F
0x45AF26: lea     eax, [esp+564h+var_510]
0x45AF2A: push    offset aForm; "Form"
0x45AF2F: push    eax
0x45AF30: call    __sprintf
0x45AF35: add     esp, 8
0x45AF38: jmp     short loc_45AF73
0x45AF3A: mov     eax, [edx+eax*4]
0x45AF3D: jmp     short loc_45AEF0
0x45AF3F: cmp     al, 45h ; 'E'
0x45AF41: lea     ecx, [esp+564h+var_510]
0x45AF45: jnz     short loc_45AF57
0x45AF47: push    offset aBuffer; "Buffer"
0x45AF4C: push    ecx
0x45AF4D: call    __sprintf
0x45AF52: add     esp, 8
0x45AF55: jmp     short loc_45AF73
0x45AF57: movzx   eax, al
0x45AF5A: lea     edx, [eax+eax*2]
0x45AF5D: mov     eax, ds:0B05E04h[edx*4]
0x45AF64: push    eax
0x45AF65: push    offset aS; "%s"
0x45AF6A: push    ecx
0x45AF6B: call    __sprintf
0x45AF70: add     esp, 0Ch
0x45AF73: lea     edx, [esp+564h+var_510]
0x45AF77: push    edx
0x45AF78: lea     eax, [esp+568h+Buffer]
0x45AF7C: push    offset aSs; "%ss:\r\n\r\n"
0x45AF81: push    eax
0x45AF82: call    __sprintf
0x45AF87: lea     eax, [esp+570h+Buffer]
0x45AF8B: add     esp, 0Ch
0x45AF8E: lea     edx, [eax+1]
0x45AF91: mov     cl, [eax]
0x45AF93: add     eax, 1
0x45AF96: test    cl, cl
0x45AF98: jnz     short loc_45AF91
0x45AF9A: xor     esi, esi
0x45AF9C: push    esi; lpOverlapped
0x45AF9D: lea     ecx, [esp+568h+var_518]
0x45AFA1: push    ecx; lpNumberOfBytesWritten
0x45AFA2: sub     eax, edx
0x45AFA4: push    eax; nNumberOfBytesToWrite
0x45AFA5: lea     edx, [esp+570h+Buffer]
0x45AFA9: push    edx; lpBuffer
0x45AFAA: push    ebp; hFile
0x45AFAB: call    dword ptr ds:0A28098h
0x45AFB1: or      di, 0FFFFh
0x45AFB6: test    ebx, ebx
0x45AFB8: mov     word ptr [esp+564h+var_538+2], si
0x45AFBD: mov     [esp+564h+var_53C], esi
0x45AFC1: mov     [esp+564h+var_540], esi
0x45AFC5: mov     word ptr [esp+564h+var_538], di
0x45AFCA: jz      loc_45B164
0x45AFD0: mov     eax, [esp+564h+var_534]
0x45AFD4: mov     ebx, [eax]
0x45AFD6: test    ebx, ebx
0x45AFD8: jz      loc_45B151
0x45AFDE: mov     ecx, [ebx]
0x45AFE0: push    ecx; a1
0x45AFE1: call    TESForm_LookupByFormID
0x45AFE6: mov     ebp, eax
0x45AFE8: movzx   eax, word ptr [ebx+0Ah]
0x45AFEC: add     esp, 4
0x45AFEF: cmp     ax, si
0x45AFF2: jbe     short loc_45AFF9
0x45AFF4: mov     word ptr [esp+564h+var_538+2], ax
0x45AFF9: cmp     ax, di
0x45AFFC: jnb     short loc_45B003
0x45AFFE: mov     word ptr [esp+564h+var_538], ax
0x45B003: mov     ecx, [ebx+5]
0x45B006: add     [esp+564h+var_540], 1
0x45B00B: movzx   edx, ax
0x45B00E: movzx   eax, byte ptr [ebx+4]
0x45B012: add     [esp+564h+var_53C], edx
0x45B016: push    0
0x45B018: push    eax
0x45B019: push    ecx
0x45B01A: mov     ecx, ds:0B33B00h
0x45B020: push    ebp
0x45B021: lea     edx, [esp+574h+var_1F8]
0x45B028: push    edx
0x45B029: call    sub_453A90
0x45B02E: xor     esi, esi
0x45B030: push    esi; int
0x45B031: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x45B036: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45B03B: push    esi; int
0x45B03C: push    ebp; void *
0x45B03D: mov     [esp+578h+var_550], esi
0x45B041: call    OblivionDynamicCast
0x45B046: push    esi; int
0x45B047: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45B04C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45B051: mov     edi, eax
0x45B053: push    esi; int
0x45B054: push    ebp; void *
0x45B055: mov     [esp+58Ch+NumberOfBytesWritten], edi
0x45B059: call    OblivionDynamicCast
0x45B05E: add     esp, 28h
0x45B061: test    ebp, ebp
0x45B063: jz      loc_45B0E5
0x45B069: test    eax, eax
0x45B06B: jz      short loc_45B07A
0x45B06D: mov     ecx, eax; this
0x45B06F: call    TESObjectREFR_GetName
0x45B074: mov     [esp+564h+var_550], eax
0x45B078: mov     esi, eax
0x45B07A: test    edi, edi
0x45B07C: jz      short loc_45B0AA
0x45B07E: test    esi, esi
0x45B080: jz      short loc_45B096
0x45B082: mov     edi, offset EmptyString
0x45B087: mov     ecx, 1
0x45B08C: xor     eax, eax
0x45B08E: repe cmpsb
0x45B090: jnz     short loc_45B0A6
0x45B092: mov     edi, [esp+564h+NumberOfBytesWritten]
0x45B096: mov     edi, [edi+4]
0x45B099: test    edi, edi
0x45B09B: jnz     short loc_45B0A2
0x45B09D: mov     edi, offset EmptyString
0x45B0A2: mov     [esp+564h+var_550], edi
0x45B0A6: mov     esi, [esp+564h+var_550]
0x45B0AA: test    esi, esi
0x45B0AC: jz      short loc_45B0BE
0x45B0AE: mov     edi, offset EmptyString
0x45B0B3: mov     ecx, 1
0x45B0B8: xor     edx, edx
0x45B0BA: repe cmpsb
0x45B0BC: jnz     short loc_45B0D6
0x45B0BE: mov     eax, [ebp+0]
0x45B0C1: mov     edx, [eax+0D4h]
0x45B0C7: mov     ecx, ebp
0x45B0C9: call    edx
0x45B0CB: lea     ecx, [esp+564h+var_1F8]
0x45B0D2: push    ecx
0x45B0D3: push    eax
0x45B0D4: jmp     short loc_45B0F2
0x45B0D6: mov     eax, [esp+564h+var_550]
0x45B0DA: lea     ecx, [esp+564h+var_1F8]
0x45B0E1: push    ecx
0x45B0E2: push    eax
0x45B0E3: jmp     short loc_45B0F2
0x45B0E5: lea     ecx, [esp+564h+var_1F8]
0x45B0EC: push    ecx
0x45B0ED: push    offset aNotLoaded; "NOT LOADED"
0x45B0F2: movzx   edx, byte ptr [ebx+9]
0x45B0F6: mov     eax, [ebx+5]
0x45B0F9: movzx   ecx, word ptr [ebx+0Ah]
0x45B0FD: push    edx
0x45B0FE: mov     edx, [ebx]
0x45B100: push    eax
0x45B101: push    ecx
0x45B102: push    edx
0x45B103: lea     eax, [esp+57Ch+Buffer]
0x45B107: push    offset a08x5i08x2i40sS; "  %08X %5i %08X %2i %-40s- %s\r\n"
0x45B10C: push    eax
0x45B10D: call    __sprintf
0x45B112: lea     eax, [esp+584h+Buffer]
0x45B119: add     esp, 20h
0x45B11C: lea     edx, [eax+1]
0x45B11F: nop
0x45B120: mov     cl, [eax]
0x45B122: add     eax, 1
0x45B125: test    cl, cl
0x45B127: jnz     short loc_45B120
0x45B129: push    0; lpOverlapped
0x45B12B: sub     eax, edx
0x45B12D: lea     ecx, [esp+568h+var_514]
0x45B131: push    ecx; lpNumberOfBytesWritten
0x45B132: push    eax; nNumberOfBytesToWrite
0x45B133: mov     eax, [esp+570h+hFile]
0x45B137: lea     edx, [esp+570h+Buffer]
0x45B13B: push    edx; lpBuffer
0x45B13C: push    eax; hFile
0x45B13D: call    dword ptr ds:0A28098h
0x45B143: mov     di, word ptr [esp+564h+var_538]
0x45B148: mov     si, word ptr [esp+564h+var_538+2]
0x45B14D: mov     ebp, [esp+564h+hFile]
0x45B151: mov     ecx, [esp+564h+var_534]
0x45B155: mov     eax, [ecx+4]
0x45B158: test    eax, eax
0x45B15A: mov     [esp+564h+var_534], eax
0x45B15E: jnz     loc_45AFD0
0x45B164: fild    [esp+564h+var_53C]
0x45B168: sub     esp, 8
0x45B16B: lea     edx, [esp+56Ch+var_510]
0x45B16F: mov     ecx, edx
0x45B171: fidiv   [esp+56Ch+var_540]
0x45B175: movzx   eax, si
0x45B178: fstp    [esp+56Ch+var_56C]
0x45B17B: push    edx
0x45B17C: push    eax
0x45B17D: push    ecx
0x45B17E: movzx   edx, di
0x45B181: push    edx
0x45B182: mov     eax, ecx
0x45B184: mov     ecx, [esp+57Ch+var_53C]
0x45B188: push    eax
0x45B189: push    ecx
0x45B18A: mov     edx, eax
0x45B18C: mov     eax, [esp+584h+var_540]
0x45B190: push    edx
0x45B191: push    eax
0x45B192: mov     ecx, edx
0x45B194: push    ecx
0x45B195: lea     edx, [esp+590h+Buffer]
0x45B19C: push    offset aTotalSNumITota; "\r\nTotal %s Num: %i  Total %s Size: %i"...
0x45B1A1: push    edx
0x45B1A2: call    __sprintf
0x45B1A7: lea     eax, [esp+598h+Buffer]
0x45B1AE: add     esp, 34h
0x45B1B1: lea     edx, [eax+1]
0x45B1B4: mov     cl, [eax]
0x45B1B6: add     eax, 1
0x45B1B9: test    cl, cl
0x45B1BB: jnz     short loc_45B1B4
0x45B1BD: push    0; lpOverlapped
0x45B1BF: lea     ecx, [esp+568h+var_530]
0x45B1C3: push    ecx; lpNumberOfBytesWritten
0x45B1C4: sub     eax, edx
0x45B1C6: push    eax; nNumberOfBytesToWrite
0x45B1C7: lea     edx, [esp+570h+Buffer]
0x45B1CB: push    edx; lpBuffer
0x45B1CC: push    ebp; hFile
0x45B1CD: call    dword ptr ds:0A28098h
0x45B1D3: cmp     si, word ptr [esp+564h+var_544+2]
0x45B1D8: jbe     short loc_45B1DF
0x45B1DA: mov     word ptr [esp+564h+var_544+2], si
0x45B1DF: cmp     di, word ptr [esp+564h+var_544]
0x45B1E4: jnb     short loc_45B1EB
0x45B1E6: mov     word ptr [esp+564h+var_544], di
0x45B1EB: mov     eax, [esp+564h+var_53C]
0x45B1EF: mov     ecx, [esp+564h+var_540]
0x45B1F3: add     [esp+564h+var_548], eax
0x45B1F7: add     [esp+564h+var_54C], ecx
0x45B1FB: cmp     [esp+564h+var_528], 0
0x45B200: mov     edi, [esp+564h+var_52C]
0x45B204: jnz     loc_45AF00
0x45B20A: mov     ebx, [esp+564h+var_548]
0x45B20E: push    0; lpOverlapped
0x45B210: lea     edx, [esp+568h+var_530]
0x45B214: push    edx; lpNumberOfBytesWritten
0x45B215: push    10h; nNumberOfBytesToWrite
0x45B217: push    offset Buffer; "Extra Stats:\r\n\r\n"
0x45B21C: push    ebp; hFile
0x45B21D: call    dword ptr ds:0A28098h
0x45B223: mov     edi, [edi+4]
0x45B226: test    edi, edi
0x45B228: jz      short loc_45B282
0x45B22A: lea     ebx, [ebx+0]
0x45B230: mov     esi, [edi]
0x45B232: test    esi, esi
0x45B234: jz      short loc_45B277
0x45B236: mov     eax, [esi+4]
0x45B239: mov     ecx, [esi]
0x45B23B: push    eax
0x45B23C: push    ecx
0x45B23D: lea     edx, [esp+56Ch+Buffer]
0x45B241: push    offset a8iS; "  %8i      %s\r\n"
0x45B246: push    edx
0x45B247: call    __sprintf
0x45B24C: lea     eax, [esp+574h+Buffer]
0x45B250: add     esp, 10h
0x45B253: lea     edx, [eax+1]
0x45B256: mov     cl, [eax]
0x45B258: add     eax, 1
0x45B25B: test    cl, cl
0x45B25D: jnz     short loc_45B256
0x45B25F: push    0; lpOverlapped
0x45B261: lea     ecx, [esp+568h+var_530]
0x45B265: push    ecx; lpNumberOfBytesWritten
0x45B266: sub     eax, edx
0x45B268: push    eax; nNumberOfBytesToWrite
0x45B269: lea     edx, [esp+570h+Buffer]
0x45B26D: push    edx; lpBuffer
0x45B26E: push    ebp; hFile
0x45B26F: call    dword ptr ds:0A28098h
0x45B275: add     ebx, [esi]
0x45B277: mov     edi, [edi+4]
0x45B27A: test    edi, edi
0x45B27C: jnz     short loc_45B230
0x45B27E: mov     [esp+564h+var_548], ebx
0x45B282: fild    [esp+564h+var_548]
0x45B286: movzx   eax, word ptr [esp+564h+var_544+2]
0x45B28B: movzx   ecx, word ptr [esp+564h+var_544]
0x45B290: fidiv   [esp+564h+var_54C]
0x45B294: mov     edx, [esp+564h+var_54C]
0x45B298: sub     esp, 8
0x45B29B: fstp    [esp+56Ch+var_56C]
0x45B29E: push    eax
0x45B29F: push    ecx
0x45B2A0: push    ebx
0x45B2A1: push    edx
0x45B2A2: lea     eax, [esp+57Ch+Buffer]
0x45B2A6: push    offset aTotalNumITotal; "\r\n\r\nTotal Num: %i  Total Size: %i  "...
0x45B2AB: push    eax
0x45B2AC: call    __sprintf
0x45B2B1: add     esp, 20h
0x45B2B4: lea     eax, [esp+564h+Buffer]
0x45B2B8: lea     edx, [eax+1]
0x45B2BB: pop     esi
0x45B2BC: lea     esp, [esp+0]
0x45B2C0: mov     cl, [eax]
0x45B2C2: add     eax, 1
0x45B2C5: test    cl, cl
0x45B2C7: jnz     short loc_45B2C0
0x45B2C9: push    0; lpOverlapped
0x45B2CB: lea     ecx, [esp+564h+var_530]
0x45B2CF: push    ecx; lpNumberOfBytesWritten
0x45B2D0: sub     eax, edx
0x45B2D2: push    eax; nNumberOfBytesToWrite
0x45B2D3: lea     edx, [esp+56Ch+Buffer]
0x45B2D7: push    edx; lpBuffer
0x45B2D8: push    ebp; hFile
0x45B2D9: call    dword ptr ds:0A28098h
0x45B2DF: push    ebp; hObject
0x45B2E0: call    dword ptr ds:0A28094h
0x45B2E6: mov     ecx, [esp+560h+var_4]
0x45B2ED: pop     edi
0x45B2EE: pop     ebp
0x45B2EF: pop     ebx
0x45B2F0: xor     ecx, esp
0x45B2F2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45B2F7: add     esp, 554h
0x45B2FD: retn    4
