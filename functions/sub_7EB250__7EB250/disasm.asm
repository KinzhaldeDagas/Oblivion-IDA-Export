0x7EB250: push    0FFFFFFFFh
0x7EB252: push    offset SEH_803C90
0x7EB257: mov     eax, large fs:0
0x7EB25D: push    eax
0x7EB25E: push    ecx
0x7EB25F: push    esi
0x7EB260: push    edi
0x7EB261: mov     eax, ds:0B30AACh
0x7EB266: xor     eax, esp
0x7EB268: push    eax
0x7EB269: lea     eax, [esp+1Ch+var_C]
0x7EB26D: mov     large fs:0, eax
0x7EB273: mov     edi, ecx
0x7EB275: cmp     dword ptr [edi+2Ch], 0
0x7EB279: lea     esi, [edi+2Ch]
0x7EB27C: jnz     loc_7EB310
0x7EB282: push    34h ; '4'; Size
0x7EB284: call    FormHeapAlloc
0x7EB289: add     esp, 4
0x7EB28C: mov     [esp+1Ch+var_10], eax
0x7EB290: test    eax, eax
0x7EB292: mov     [esp+1Ch+var_4], 0
0x7EB29A: jz      short loc_7EB2AC
0x7EB29C: mov     ecx, ds:0B43104h
0x7EB2A2: push    ecx
0x7EB2A3: mov     ecx, eax
0x7EB2A5: call    NiD3DShaderCostantMapPixel__Construct
0x7EB2AA: jmp     short loc_7EB2AE
0x7EB2AC: xor     eax, eax
0x7EB2AE: push    eax; a2
0x7EB2AF: mov     ecx, esi; this
0x7EB2B1: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EB2B9: call    NiSmartPointer_Set??
0x7EB2BE: mov     ecx, [esi]
0x7EB2C0: mov     edx, [ecx]
0x7EB2C2: mov     eax, [edx+18h]
0x7EB2C5: push    0
0x7EB2C7: push    offset flt_B2D90C
0x7EB2CC: push    4
0x7EB2CE: push    10h
0x7EB2D0: push    offset EmptyString
0x7EB2D5: push    1
0x7EB2D7: push    2
0x7EB2D9: push    0
0x7EB2DB: push    10000007h
0x7EB2E0: push    offset aFdoublevis; "fDoubleVis"
0x7EB2E5: call    eax
0x7EB2E7: mov     ecx, [esi]
0x7EB2E9: mov     edx, [ecx]
0x7EB2EB: mov     eax, [edx+18h]
0x7EB2EE: push    0
0x7EB2F0: push    offset flt_B46114
0x7EB2F5: push    4
0x7EB2F7: push    10h
0x7EB2F9: push    offset EmptyString
0x7EB2FE: push    1
0x7EB300: push    1
0x7EB302: push    0
0x7EB304: push    10000007h
0x7EB309: push    offset aFblurparams; "fBlurParams"
0x7EB30E: call    eax
0x7EB310: cmp     dword ptr [edi+30h], 0
0x7EB314: lea     esi, [edi+30h]
0x7EB317: jnz     loc_7EB3AB
0x7EB31D: push    34h ; '4'; Size
0x7EB31F: call    FormHeapAlloc
0x7EB324: add     esp, 4
0x7EB327: mov     [esp+1Ch+var_10], eax
0x7EB32B: test    eax, eax
0x7EB32D: mov     [esp+1Ch+var_4], 1
0x7EB335: jz      short loc_7EB347
0x7EB337: mov     ecx, ds:0B43104h
0x7EB33D: push    ecx
0x7EB33E: mov     ecx, eax
0x7EB340: call    NiD3DShaderCostantMapVertex__Construct
0x7EB345: jmp     short loc_7EB349
0x7EB347: xor     eax, eax
0x7EB349: push    eax; a2
0x7EB34A: mov     ecx, esi; this
0x7EB34C: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EB354: call    NiSmartPointer_Set??
0x7EB359: mov     ecx, [esi]
0x7EB35B: mov     edx, [ecx]
0x7EB35D: mov     eax, [edx+18h]
0x7EB360: push    0
0x7EB362: push    offset flt_B2D8EC
0x7EB367: push    4
0x7EB369: push    10h
0x7EB36B: push    offset EmptyString
0x7EB370: push    1
0x7EB372: push    6
0x7EB374: push    0
0x7EB376: push    10000007h
0x7EB37B: push    offset aTexratio0; "texRatio0"
0x7EB380: call    eax
0x7EB382: mov     ecx, [esi]
0x7EB384: mov     edx, [ecx]
0x7EB386: mov     eax, [edx+18h]
0x7EB389: push    0
0x7EB38B: push    offset flt_B2D8FC
0x7EB390: push    4
0x7EB392: push    10h
0x7EB394: push    offset EmptyString
0x7EB399: push    1
0x7EB39B: push    7
0x7EB39D: push    0
0x7EB39F: push    10000007h
0x7EB3A4: push    offset aTexratio1; "texRatio1"
0x7EB3A9: call    eax
0x7EB3AB: mov     ecx, [esp+1Ch+a2]
0x7EB3AF: push    ecx; a2
0x7EB3B0: mov     ecx, edi; this
0x7EB3B2: call    sub_77AA60
0x7EB3B7: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7EB3BB: mov     large fs:0, ecx
0x7EB3C2: pop     ecx
0x7EB3C3: pop     edi
0x7EB3C4: pop     esi
0x7EB3C5: add     esp, 10h
0x7EB3C8: retn    4
