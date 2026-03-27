0x576420: push    0FFFFFFFFh
0x576422: push    offset SEH_576420
0x576427: mov     eax, large fs:0
0x57642D: push    eax
0x57642E: push    ecx
0x57642F: push    esi
0x576430: push    edi
0x576431: mov     eax, ds:0B30AACh
0x576436: xor     eax, esp
0x576438: push    eax
0x576439: lea     eax, [esp+1Ch+var_C]
0x57643D: mov     large fs:0, eax
0x576443: mov     esi, ecx
0x576445: push    3Ch ; '<'; Size
0x576447: call    FormHeapAlloc
0x57644C: add     esp, 4
0x57644F: mov     [esp+1Ch+var_10], eax
0x576453: test    eax, eax
0x576455: mov     [esp+1Ch+var_4], 0
0x57645D: jz      short loc_576473
0x57645F: mov     ecx, ds:0B12E1Ch
0x576465: push    1
0x576467: push    ecx
0x576468: push    1
0x57646A: mov     ecx, eax
0x57646C: call    FonrManager_FontInfo_Load
0x576471: jmp     short loc_576475
0x576473: xor     eax, eax
0x576475: or      edi, 0FFFFFFFFh
0x576478: push    3Ch ; '<'; Size
0x57647A: mov     [esp+20h+var_4], edi
0x57647E: mov     [esi], eax
0x576480: call    FormHeapAlloc
0x576485: add     esp, 4
0x576488: mov     [esp+1Ch+var_10], eax
0x57648C: test    eax, eax
0x57648E: mov     [esp+1Ch+var_4], 1
0x576496: jz      short loc_5764AC
0x576498: mov     edx, ds:0B12E24h
0x57649E: push    1
0x5764A0: push    edx
0x5764A1: push    2
0x5764A3: mov     ecx, eax
0x5764A5: call    FonrManager_FontInfo_Load
0x5764AA: jmp     short loc_5764AE
0x5764AC: xor     eax, eax
0x5764AE: push    3Ch ; '<'; Size
0x5764B0: mov     [esp+20h+var_4], edi
0x5764B4: mov     [esi+4], eax
0x5764B7: call    FormHeapAlloc
0x5764BC: add     esp, 4
0x5764BF: mov     [esp+1Ch+var_10], eax
0x5764C3: test    eax, eax
0x5764C5: mov     [esp+1Ch+var_4], 2
0x5764CD: jz      short loc_5764E3
0x5764CF: mov     ecx, ds:0B12E2Ch
0x5764D5: push    1
0x5764D7: push    ecx
0x5764D8: push    3
0x5764DA: mov     ecx, eax
0x5764DC: call    FonrManager_FontInfo_Load
0x5764E1: jmp     short loc_5764E5
0x5764E3: xor     eax, eax
0x5764E5: push    3Ch ; '<'; Size
0x5764E7: mov     [esp+20h+var_4], edi
0x5764EB: mov     [esi+8], eax
0x5764EE: call    FormHeapAlloc
0x5764F3: add     esp, 4
0x5764F6: mov     [esp+1Ch+var_10], eax
0x5764FA: test    eax, eax
0x5764FC: mov     [esp+1Ch+var_4], 3
0x576504: jz      short loc_57651A
0x576506: mov     edx, ds:0B12E34h
0x57650C: push    1
0x57650E: push    edx
0x57650F: push    4
0x576511: mov     ecx, eax
0x576513: call    FonrManager_FontInfo_Load
0x576518: jmp     short loc_57651C
0x57651A: xor     eax, eax
0x57651C: push    3Ch ; '<'; Size
0x57651E: mov     [esp+20h+var_4], edi
0x576522: mov     [esi+0Ch], eax
0x576525: call    FormHeapAlloc
0x57652A: add     esp, 4
0x57652D: mov     [esp+1Ch+var_10], eax
0x576531: test    eax, eax
0x576533: mov     [esp+1Ch+var_4], 4
0x57653B: jz      short loc_576551
0x57653D: mov     ecx, ds:0B12E3Ch
0x576543: push    1
0x576545: push    ecx
0x576546: push    5
0x576548: mov     ecx, eax
0x57654A: call    FonrManager_FontInfo_Load
0x57654F: jmp     short loc_576553
0x576551: xor     eax, eax
0x576553: mov     [esi+10h], eax
0x576556: mov     byte ptr [esi+14h], 0
0x57655A: mov     eax, esi
0x57655C: mov     ecx, [esp+1Ch+var_C]
0x576560: mov     large fs:0, ecx
0x576567: pop     ecx
0x576568: pop     edi
0x576569: pop     esi
0x57656A: add     esp, 10h
0x57656D: retn
