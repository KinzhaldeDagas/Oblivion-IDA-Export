0x7AEF80: push    0FFFFFFFFh
0x7AEF82: push    offset SEH_803C90
0x7AEF87: mov     eax, large fs:0
0x7AEF8D: push    eax
0x7AEF8E: push    ecx
0x7AEF8F: push    esi
0x7AEF90: push    edi
0x7AEF91: mov     eax, ds:0B30AACh
0x7AEF96: xor     eax, esp
0x7AEF98: push    eax
0x7AEF99: lea     eax, [esp+1Ch+var_C]
0x7AEF9D: mov     large fs:0, eax
0x7AEFA3: mov     esi, ecx
0x7AEFA5: cmp     dword ptr [esi+30h], 0
0x7AEFA9: lea     edi, [esi+30h]
0x7AEFAC: jnz     short loc_7AF012
0x7AEFAE: push    34h ; '4'; Size
0x7AEFB0: call    FormHeapAlloc
0x7AEFB5: add     esp, 4
0x7AEFB8: mov     [esp+1Ch+var_10], eax
0x7AEFBC: test    eax, eax
0x7AEFBE: mov     [esp+1Ch+var_4], 0
0x7AEFC6: jz      short loc_7AEFD5
0x7AEFC8: mov     ecx, [esi+14h]
0x7AEFCB: push    ecx
0x7AEFCC: mov     ecx, eax
0x7AEFCE: call    NiD3DShaderCostantMapVertex__Construct
0x7AEFD3: jmp     short loc_7AEFD7
0x7AEFD5: xor     eax, eax
0x7AEFD7: push    eax; a2
0x7AEFD8: mov     ecx, edi; this
0x7AEFDA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7AEFE2: call    NiSmartPointer_Set??
0x7AEFE7: mov     ecx, [edi]
0x7AEFE9: mov     edx, [ecx]
0x7AEFEB: mov     edx, [edx+18h]
0x7AEFEE: push    0
0x7AEFF0: lea     eax, [esi+0A0h]
0x7AEFF6: push    eax
0x7AEFF7: push    4
0x7AEFF9: push    10h
0x7AEFFB: push    offset EmptyString
0x7AF000: push    1
0x7AF002: push    6
0x7AF004: push    0
0x7AF006: push    10000007h
0x7AF00B: push    offset aTexratio0; "texRatio0"
0x7AF010: call    edx
0x7AF012: cmp     dword ptr [esi+2Ch], 0
0x7AF016: lea     edi, [esi+2Ch]
0x7AF019: jnz     short loc_7AF07F
0x7AF01B: push    34h ; '4'; Size
0x7AF01D: call    FormHeapAlloc
0x7AF022: add     esp, 4
0x7AF025: mov     [esp+1Ch+var_10], eax
0x7AF029: test    eax, eax
0x7AF02B: mov     [esp+1Ch+var_4], 1
0x7AF033: jz      short loc_7AF042
0x7AF035: mov     ecx, [esi+14h]
0x7AF038: push    ecx
0x7AF039: mov     ecx, eax
0x7AF03B: call    NiD3DShaderCostantMapPixel__Construct
0x7AF040: jmp     short loc_7AF044
0x7AF042: xor     eax, eax
0x7AF044: push    eax; a2
0x7AF045: mov     ecx, edi; this
0x7AF047: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7AF04F: call    NiSmartPointer_Set??
0x7AF054: mov     ecx, [edi]
0x7AF056: mov     edx, [ecx]
0x7AF058: mov     edx, [edx+18h]
0x7AF05B: push    0
0x7AF05D: lea     eax, [esi+0B0h]
0x7AF063: push    eax
0x7AF064: push    4
0x7AF066: push    10h
0x7AF068: push    offset EmptyString
0x7AF06D: push    1
0x7AF06F: push    1
0x7AF071: push    0
0x7AF073: push    10000007h
0x7AF078: push    offset aCameraPos; "Camera Pos"
0x7AF07D: call    edx
0x7AF07F: mov     eax, [esp+1Ch+a2]
0x7AF083: push    eax; a2
0x7AF084: mov     ecx, esi; this
0x7AF086: call    sub_77AA60
0x7AF08B: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7AF08F: mov     large fs:0, ecx
0x7AF096: pop     ecx
0x7AF097: pop     edi
0x7AF098: pop     esi
0x7AF099: add     esp, 10h
0x7AF09C: retn    4
