0x4BD990: push    0FFFFFFFFh
0x4BD992: push    offset SEH_4BD990
0x4BD997: mov     eax, large fs:0
0x4BD99D: push    eax
0x4BD99E: sub     esp, 1C8h
0x4BD9A4: mov     eax, ds:0B30AACh
0x4BD9A9: xor     eax, esp
0x4BD9AB: mov     [esp+1D4h+var_10], eax
0x4BD9B2: push    ebx
0x4BD9B3: push    ebp
0x4BD9B4: push    esi
0x4BD9B5: push    edi
0x4BD9B6: mov     eax, ds:0B30AACh
0x4BD9BB: xor     eax, esp
0x4BD9BD: push    eax
0x4BD9BE: lea     eax, [esp+1E8h+var_C]
0x4BD9C5: mov     large fs:0, eax
0x4BD9CB: mov     eax, [esp+1E8h+arg_8]
0x4BD9D2: mov     ebp, [esp+1E8h+arg_4]
0x4BD9D9: mov     edi, [eax]
0x4BD9DB: xor     ebx, ebx
0x4BD9DD: mov     [esp+1E8h+var_1D4], ecx
0x4BD9E1: mov     ecx, [ebp+0]
0x4BD9E4: mov     [esp+1E8h+var_1BC], eax
0x4BD9E8: xor     eax, eax
0x4BD9EA: mov     [esp+1E8h+var_1B8], ecx
0x4BD9EE: mov     [esp+1E8h+var_1D0], edi
0x4BD9F2: mov     [esp+1E8h+var_1C8], eax
0x4BD9F6: mov     [esp+1E8h+var_1C4], eax
0x4BD9FA: mov     [esp+1E8h+var_1C0], eax
0x4BD9FE: mov     [esp+1E8h+var_1B4], offset ??_7LockFreeMapIterator@?$LockFreeMap@IV?$NiPointer@VDistantLODLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<DistantLODLoaderTask>>::LockFreeMapIterator::`vftable'
0x4BDA06: mov     [esp+1E8h+var_1B0], ebx
0x4BDA0A: mov     [esp+1E8h+var_1AC], ebx
0x4BDA0E: mov     [esp+1E8h+var_1A8], bl
0x4BDA12: mov     [esp+1E8h+var_4], ebx
0x4BDA19: mov     [esp+1E8h+var_1CC], ebx
0x4BDA1D: push    1
0x4BDA1F: lea     edx, [esp+1ECh+var_1CC]
0x4BDA23: push    edx
0x4BDA24: lea     eax, [esp+1F0h+var_1A4]
0x4BDA28: push    eax
0x4BDA29: lea     ecx, [esp+1F4h+var_1B4]
0x4BDA2D: push    ecx
0x4BDA2E: mov     ecx, [esp+1F8h+var_1D4]
0x4BDA32: mov     byte ptr [esp+1F8h+var_4], 1
0x4BDA3A: call    sub_642D90
0x4BDA3F: test    al, al
0x4BDA41: mov     esi, [esp+1E8h+var_1CC]
0x4BDA45: jz      short loc_4BDA7C
0x4BDA47: mov     eax, [esi+10h]
0x4BDA4A: mov     edx, [esi+14h]
0x4BDA4D: mov     cl, 10h
0x4BDA4F: call    __allshr
0x4BDA54: movzx   ecx, al
0x4BDA57: xor     eax, eax
0x4BDA59: lea     esp, [esp+0]
0x4BDA60: cmp     ds:0A45A58h[eax*4], ecx
0x4BDA67: jz      short loc_4BDA73
0x4BDA69: add     eax, 1
0x4BDA6C: cmp     eax, 3
0x4BDA6F: jl      short loc_4BDA60
0x4BDA71: jmp     short loc_4BDA7C
0x4BDA73: add     [esp+eax*4+1E8h+var_1C8], 1
0x4BDA78: lea     eax, [esp+eax*4+1E8h+var_1C8]
0x4BDA7C: cmp     esi, ebx
0x4BDA7E: mov     byte ptr [esp+1E8h+var_4], bl
0x4BDA85: jz      short loc_4BDA9F
0x4BDA87: lea     edx, [esi+8]
0x4BDA8A: push    edx; lpAddend
0x4BDA8B: call    dword ptr ds:0A2807Ch
0x4BDA91: test    eax, eax
0x4BDA93: jnz     short loc_4BDA9F
0x4BDA95: mov     eax, [esi]
0x4BDA97: mov     edx, [eax]
0x4BDA99: push    1
0x4BDA9B: mov     ecx, esi
0x4BDA9D: call    edx
0x4BDA9F: test    [esp+1E8h+var_1A8], 2
0x4BDAA4: jz      loc_4BDA19
0x4BDAAA: mov     eax, [esp+1E8h+var_1C8]
0x4BDAAE: push    eax
0x4BDAAF: lea     ecx, [esp+1ECh+var_1A0]
0x4BDAB3: push    offset aHighLodToLoadD; "High LOD to load: %d"
0x4BDAB8: push    ecx
0x4BDAB9: call    __sprintf
0x4BDABE: fild    [esp+1F4h+var_1D0]
0x4BDAC2: add     esp, 0Ch
0x4BDAC5: push    0FFFFFFFFh; int
0x4BDAC7: mov     edx, 500h
0x4BDACC: sub     edx, ds:0B02E24h
0x4BDAD2: push    3; int
0x4BDAD4: sub     esp, 8
0x4BDAD7: fstp    [esp+1F8h+var_1F4]; float
0x4BDADB: mov     [esp+1F8h+var_1D4], edx
0x4BDADF: fild    [esp+1F8h+var_1D4]
0x4BDAE3: lea     eax, [esp+1F8h+var_1A0]
0x4BDAE7: fstp    [esp+1F8h+var_1F8]; float
0x4BDAEA: push    eax; int
0x4BDAEB: call    InterfaceMgr_DebugTextLine
0x4BDAF0: mov     ecx, [esp+1FCh+var_1C4]
0x4BDAF4: mov     esi, [esp+1FCh+arg_0]
0x4BDAFB: push    ecx
0x4BDAFC: lea     edx, [esp+200h+var_1A0]
0x4BDB00: push    offset aMidLodToLoadD; "Mid LOD to load: %d"
0x4BDB05: add     edi, esi
0x4BDB07: push    edx
0x4BDB08: mov     [esp+208h+var_1D0], edi
0x4BDB0C: call    __sprintf
0x4BDB11: fild    [esp+208h+var_1D0]
0x4BDB15: add     esp, 20h
0x4BDB18: push    0FFFFFFFFh; int
0x4BDB1A: mov     eax, 500h
0x4BDB1F: sub     eax, ds:0B02E24h
0x4BDB25: push    3; int
0x4BDB27: sub     esp, 8
0x4BDB2A: fstp    [esp+1F8h+var_1F4]; float
0x4BDB2E: mov     [esp+1F8h+var_1D4], eax
0x4BDB32: fild    [esp+1F8h+var_1D4]
0x4BDB36: lea     ecx, [esp+1F8h+var_1A0]
0x4BDB3A: fstp    [esp+1F8h+var_1F8]; float
0x4BDB3D: push    ecx; int
0x4BDB3E: call    InterfaceMgr_DebugTextLine
0x4BDB43: mov     edx, [esp+1FCh+var_1C0]
0x4BDB47: push    edx
0x4BDB48: lea     eax, [esp+200h+var_1A0]
0x4BDB4C: push    offset aLowLodToLoadD; "Low LOD to load: %d"
0x4BDB51: add     edi, esi
0x4BDB53: push    eax
0x4BDB54: mov     [esp+208h+var_1D0], edi
0x4BDB58: call    __sprintf
0x4BDB5D: fild    [esp+208h+var_1D0]
0x4BDB61: add     esp, 20h
0x4BDB64: push    0FFFFFFFFh; int
0x4BDB66: mov     ecx, 500h
0x4BDB6B: sub     ecx, ds:0B02E24h
0x4BDB71: push    3; int
0x4BDB73: sub     esp, 8
0x4BDB76: fstp    [esp+1F8h+var_1F4]; float
0x4BDB7A: mov     [esp+1F8h+var_1D4], ecx
0x4BDB7E: fild    [esp+1F8h+var_1D4]
0x4BDB82: lea     edx, [esp+1F8h+var_1A0]
0x4BDB86: fstp    [esp+1F8h+var_1F8]; float
0x4BDB89: push    edx; int
0x4BDB8A: call    InterfaceMgr_DebugTextLine
0x4BDB8F: mov     eax, [esp+1FCh+var_1B8]
0x4BDB93: mov     ecx, [esp+1FCh+var_1BC]
0x4BDB97: add     esp, 14h
0x4BDB9A: add     edi, esi
0x4BDB9C: mov     [ebp+0], eax
0x4BDB9F: mov     [ecx], edi
0x4BDBA1: mov     ecx, dword ptr [esp+1E8h+var_C]
0x4BDBA8: mov     large fs:0, ecx
0x4BDBAF: pop     ecx
0x4BDBB0: pop     edi
0x4BDBB1: pop     esi
0x4BDBB2: pop     ebp
0x4BDBB3: pop     ebx
0x4BDBB4: mov     ecx, [esp+1D4h+var_10]
0x4BDBBB: xor     ecx, esp
0x4BDBBD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BDBC2: add     esp, 1D4h
0x4BDBC8: retn    0Ch
