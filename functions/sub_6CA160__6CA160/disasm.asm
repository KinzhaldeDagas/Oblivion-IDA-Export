0x6CA160: push    0FFFFFFFFh
0x6CA162: push    offset SEH_6CA160
0x6CA167: mov     eax, large fs:0
0x6CA16D: push    eax
0x6CA16E: sub     esp, 328h
0x6CA174: mov     eax, ds:0B30AACh
0x6CA179: xor     eax, esp
0x6CA17B: mov     [esp+334h+var_10], eax
0x6CA182: push    ebx
0x6CA183: push    ebp
0x6CA184: push    esi
0x6CA185: push    edi
0x6CA186: mov     eax, ds:0B30AACh
0x6CA18B: xor     eax, esp
0x6CA18D: push    eax; Src
0x6CA18E: lea     eax, [esp+348h+var_C]
0x6CA195: mov     large fs:0, eax
0x6CA19B: mov     eax, [esp+348h+Src]
0x6CA1A2: mov     ebp, [esp+348h+arg_4]
0x6CA1A9: push    eax; Src
0x6CA1AA: lea     eax, [esp+34Ch+Dst]
0x6CA1B1: push    104h; SizeInBytes
0x6CA1B6: push    eax; Dst
0x6CA1B7: mov     [esp+354h+var_320], ecx
0x6CA1BB: call    _strcpy_s
0x6CA1C0: lea     ecx, [esp+354h+Dst]
0x6CA1C7: push    0Ah; Val
0x6CA1C9: push    ecx; Str
0x6CA1CA: mov     [esp+35Ch+Str], 0
0x6CA1CF: mov     [esp+35Ch+var_114], 0
0x6CA1D7: call    _strchr
0x6CA1DC: mov     esi, eax
0x6CA1DE: add     esp, 14h
0x6CA1E1: test    esi, esi
0x6CA1E3: jz      short loc_6CA225
0x6CA1E5: lea     edx, [esi+1]
0x6CA1E8: push    edx; Src
0x6CA1E9: lea     eax, [esp+34Ch+Str]
0x6CA1ED: push    104h; SizeInBytes
0x6CA1F2: push    eax; Dst
0x6CA1F3: call    _strcpy_s
0x6CA1F8: lea     ecx, [esp+354h+Str]
0x6CA1FC: push    0Ah; Val
0x6CA1FE: push    ecx; Str
0x6CA1FF: mov     byte ptr [esi], 0
0x6CA202: call    _strchr
0x6CA207: mov     esi, eax
0x6CA209: lea     edx, [esi+1]
0x6CA20C: push    edx; Src
0x6CA20D: lea     eax, [esp+360h+var_114]
0x6CA214: push    104h; SizeInBytes
0x6CA219: push    eax; Dst
0x6CA21A: call    _strcpy_s
0x6CA21F: add     esp, 20h
0x6CA222: mov     byte ptr [esi], 0
0x6CA225: mov     edx, [ebp+0]
0x6CA228: mov     eax, [edx+74h]
0x6CA22B: mov     ecx, ebp
0x6CA22D: mov     [esp+348h+var_334], 0
0x6CA235: call    eax
0x6CA237: test    ax, ax
0x6CA23A: jbe     loc_6CA3E3
0x6CA240: mov     ecx, [esp+348h+var_320]
0x6CA244: mov     ebx, [ecx+64h]
0x6CA247: test    ebx, ebx
0x6CA249: mov     [esp+348h+var_330], ebx
0x6CA24D: jz      short loc_6CA259
0x6CA24F: lea     edx, [ebx+4]
0x6CA252: push    edx; lpAddend
0x6CA253: call    dword ptr ds:0A28078h
0x6CA259: mov     eax, 0FFFFh
0x6CA25E: mov     [esp+348h+var_32C], ax
0x6CA263: mov     [esp+348h+var_32A], ax
0x6CA268: mov     word ptr [esp+348h+var_328], ax
0x6CA26D: mov     word ptr [esp+348h+var_328+2], ax
0x6CA272: mov     [esp+348h+var_324], ax
0x6CA277: lea     eax, [esp+348h+Dst]
0x6CA27E: push    eax
0x6CA27F: mov     ecx, ebx
0x6CA281: mov     [esp+34Ch+var_4], 1
0x6CA28C: call    sub_6C6270
0x6CA291: mov     edi, offset aProp_0; "PROP"
0x6CA296: lea     esi, [esp+348h+Str]
0x6CA29A: mov     ecx, 5
0x6CA29F: xor     edx, edx
0x6CA2A1: repe cmpsb
0x6CA2A3: mov     [esp+348h+var_32C], ax
0x6CA2A8: jnz     short loc_6CA2BE
0x6CA2AA: lea     eax, [esp+348h+var_114]
0x6CA2B1: push    eax
0x6CA2B2: mov     ecx, ebx
0x6CA2B4: call    sub_6C6270
0x6CA2B9: mov     [esp+348h+var_32A], ax
0x6CA2BE: mov     edx, [ebp+0]
0x6CA2C1: mov     eax, [edx+4]
0x6CA2C4: mov     ecx, ebp
0x6CA2C6: call    eax
0x6CA2C8: mov     eax, [eax]
0x6CA2CA: test    eax, eax
0x6CA2CC: jnz     short loc_6CA2DA
0x6CA2CE: mov     edi, 0FFFFh
0x6CA2D3: mov     word ptr [esp+348h+var_328], di
0x6CA2D8: jmp     short loc_6CA2EC
0x6CA2DA: push    eax
0x6CA2DB: mov     ecx, ebx
0x6CA2DD: call    sub_6C6270
0x6CA2E2: mov     word ptr [esp+348h+var_328], ax
0x6CA2E7: mov     edi, 0FFFFh
0x6CA2EC: mov     edx, [ebp+0]
0x6CA2EF: mov     eax, [edx+8Ch]
0x6CA2F5: mov     ecx, ebp
0x6CA2F7: call    eax
0x6CA2F9: test    eax, eax
0x6CA2FB: jnz     short loc_6CA304
0x6CA2FD: mov     word ptr [esp+348h+var_328+2], di
0x6CA302: jmp     short loc_6CA311
0x6CA304: push    eax
0x6CA305: mov     ecx, ebx
0x6CA307: call    sub_6C6270
0x6CA30C: mov     word ptr [esp+348h+var_328+2], ax
0x6CA311: mov     edx, [ebp+0]
0x6CA314: mov     esi, [esp+348h+var_334]
0x6CA318: mov     eax, [edx+78h]
0x6CA31B: push    esi
0x6CA31C: mov     ecx, ebp
0x6CA31E: call    eax
0x6CA320: test    eax, eax
0x6CA322: jnz     short loc_6CA32B
0x6CA324: mov     [esp+348h+var_324], di
0x6CA329: jmp     short loc_6CA338
0x6CA32B: push    eax
0x6CA32C: mov     ecx, ebx
0x6CA32E: call    sub_6C6270
0x6CA333: mov     [esp+348h+var_324], ax
0x6CA338: mov     edx, [ebp+0]
0x6CA33B: mov     eax, [edx+80h]
0x6CA341: push    esi
0x6CA342: mov     ecx, ebp
0x6CA344: call    eax
0x6CA346: mov     esi, [esp+348h+var_320]
0x6CA34A: lea     ecx, [esp+348h+var_330]
0x6CA34E: push    ecx
0x6CA34F: push    eax
0x6CA350: mov     ecx, esi
0x6CA352: call    sub_6C94E0
0x6CA357: cmp     eax, 0FFFFFFFFh
0x6CA35A: jz      loc_6CA40F
0x6CA360: mov     edx, [esi+14h]
0x6CA363: shl     eax, 4
0x6CA366: mov     esi, [edx+eax+4]
0x6CA36A: cmp     esi, ebp
0x6CA36C: lea     edi, [edx+eax+4]
0x6CA370: jz      short loc_6CA39E
0x6CA372: test    esi, esi
0x6CA374: jz      short loc_6CA392
0x6CA376: lea     eax, [esi+4]
0x6CA379: push    eax; lpAddend
0x6CA37A: call    dword ptr ds:0A2807Ch
0x6CA380: test    eax, eax
0x6CA382: jnz     short loc_6CA392
0x6CA384: test    esi, esi
0x6CA386: jz      short loc_6CA392
0x6CA388: mov     edx, [esi]
0x6CA38A: mov     eax, [edx]
0x6CA38C: push    1
0x6CA38E: mov     ecx, esi
0x6CA390: call    eax
0x6CA392: lea     ecx, [ebp+4]
0x6CA395: push    ecx; lpAddend
0x6CA396: mov     [edi], ebp
0x6CA398: call    dword ptr ds:0A28078h
0x6CA39E: test    ebx, ebx
0x6CA3A0: mov     [esp+348h+var_4], 0FFFFFFFFh
0x6CA3AB: jz      short loc_6CA3C5
0x6CA3AD: lea     edx, [ebx+4]
0x6CA3B0: push    edx; lpAddend
0x6CA3B1: call    dword ptr ds:0A2807Ch
0x6CA3B7: test    eax, eax
0x6CA3B9: jnz     short loc_6CA3C5
0x6CA3BB: mov     eax, [ebx]
0x6CA3BD: mov     edx, [eax]
0x6CA3BF: push    1
0x6CA3C1: mov     ecx, ebx
0x6CA3C3: call    edx
0x6CA3C5: mov     esi, [esp+348h+var_334]
0x6CA3C9: mov     eax, [ebp+0]
0x6CA3CC: mov     edx, [eax+74h]
0x6CA3CF: add     esi, 1
0x6CA3D2: mov     ecx, ebp
0x6CA3D4: mov     [esp+348h+var_334], esi
0x6CA3D8: call    edx
0x6CA3DA: cmp     si, ax
0x6CA3DD: jb      loc_6CA240
0x6CA3E3: mov     al, 1
0x6CA3E5: mov     ecx, [esp+348h+var_C]
0x6CA3EC: mov     large fs:0, ecx
0x6CA3F3: pop     ecx
0x6CA3F4: pop     edi
0x6CA3F5: pop     esi
0x6CA3F6: pop     ebp
0x6CA3F7: pop     ebx
0x6CA3F8: mov     ecx, [esp+334h+var_10]
0x6CA3FF: xor     ecx, esp
0x6CA401: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6CA406: add     esp, 334h
0x6CA40C: retn    8
0x6CA40F: test    ebx, ebx
0x6CA411: mov     [esp+348h+var_4], 0FFFFFFFFh
0x6CA41C: jz      short loc_6CA436
0x6CA41E: lea     eax, [ebx+4]
0x6CA421: push    eax; lpAddend
0x6CA422: call    dword ptr ds:0A2807Ch
0x6CA428: test    eax, eax
0x6CA42A: jnz     short loc_6CA436
0x6CA42C: mov     edx, [ebx]
0x6CA42E: mov     eax, [edx]
0x6CA430: push    1
0x6CA432: mov     ecx, ebx
0x6CA434: call    eax
0x6CA436: xor     al, al
0x6CA438: jmp     short loc_6CA3E5
