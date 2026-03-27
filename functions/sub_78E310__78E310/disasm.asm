0x78E310: push    ebp
0x78E311: mov     ebp, esp
0x78E313: push    0FFFFFFFFh
0x78E315: push    offset SEH_78E310
0x78E31A: mov     eax, large fs:0
0x78E320: push    eax
0x78E321: sub     esp, 70h
0x78E324: push    ebx
0x78E325: push    esi
0x78E326: push    edi
0x78E327: mov     eax, ds:0B30AACh
0x78E32C: xor     eax, ebp
0x78E32E: push    eax
0x78E32F: lea     eax, [ebp+var_C]
0x78E332: mov     large fs:0, eax
0x78E338: mov     [ebp+var_10], esp
0x78E33B: mov     [ebp+var_18], ecx
0x78E33E: mov     ebx, [ebp+arg_0]
0x78E341: test    ebx, ebx
0x78E343: mov     [ebp+var_11], 0
0x78E347: mov     [ebp+var_4], 0
0x78E34E: jz      short loc_78E3BA
0x78E350: push    1
0x78E352: push    2800h
0x78E357: push    0
0x78E359: push    ebx
0x78E35A: call    sub_431130
0x78E35F: mov     edi, eax
0x78E361: add     esp, 10h
0x78E364: test    edi, edi
0x78E366: jz      loc_78E478
0x78E36C: mov     eax, [edi]
0x78E36E: mov     edx, [eax+1Ch]
0x78E371: mov     ecx, edi
0x78E373: call    edx
0x78E375: mov     esi, eax
0x78E377: test    esi, esi
0x78E379: jle     loc_78E427
0x78E37F: push    esi; Size
0x78E380: call    FormHeapAlloc
0x78E385: add     esp, 4
0x78E388: mov     ebx, eax
0x78E38A: push    esi
0x78E38B: push    ebx
0x78E38C: mov     ecx, edi
0x78E38E: call    ReadFile??
0x78E393: cmp     eax, esi
0x78E395: mov     dword ptr [ebp+ArgList], eax
0x78E398: jnz     short loc_78E3D1
0x78E39A: mov     ecx, [ebp+var_18]
0x78E39D: push    esi
0x78E39E: push    ebx
0x78E39F: call    sub_78DF90
0x78E3A4: push    ebx
0x78E3A5: mov     [ebp+var_11], al
0x78E3A8: call    FormHeapFree
0x78E3AD: mov     eax, [edi]
0x78E3AF: mov     edx, [eax]
0x78E3B1: add     esp, 4
0x78E3B4: push    1
0x78E3B6: mov     ecx, edi
0x78E3B8: call    edx
0x78E3BA: mov     al, [ebp+var_11]
0x78E3BD: mov     ecx, [ebp+var_C]
0x78E3C0: mov     large fs:0, ecx
0x78E3C7: pop     ecx
0x78E3C8: pop     edi
0x78E3C9: pop     esi
0x78E3CA: pop     ebx
0x78E3CB: mov     esp, ebp
0x78E3CD: pop     ebp
0x78E3CE: retn    4
0x78E3D1: call    __errno
0x78E3D6: mov     eax, [eax]
0x78E3D8: push    eax; int
0x78E3D9: call    _strerror
0x78E3DE: mov     ecx, [ebp+arg_0]
0x78E3E1: mov     edx, dword ptr [ebp+ArgList]
0x78E3E4: push    eax
0x78E3E5: push    ecx
0x78E3E6: push    esi
0x78E3E7: push    edx; ArgList
0x78E3E8: push    offset aOnlyReadDOfDFr; "only read %d of %d from %s [%s]"
0x78E3ED: lea     esi, [ebp+var_60]
0x78E3F0: call    sub_7A54A0
0x78E3F5: add     esp, 18h
0x78E3F8: cmp     dword ptr [eax+18h], 10h
0x78E3FC: mov     byte ptr [ebp+var_4], 1
0x78E400: jb      short loc_78E407
0x78E402: mov     eax, [eax+4]
0x78E405: jmp     short loc_78E40A
0x78E407: add     eax, 4
0x78E40A: lea     ecx, [ebp+var_18]
0x78E40D: push    ecx; char **
0x78E40E: lea     ecx, [ebp+var_2C]; this
0x78E411: mov     [ebp+var_18], eax
0x78E414: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x78E419: push    offset __TI1?AVexception@std@@; throw info for 'class std::exception'
0x78E41E: lea     edx, [ebp+var_2C]
0x78E421: push    edx
0x78E422: call    ThrowException??
0x78E427: call    __errno
0x78E42C: mov     eax, [eax]
0x78E42E: push    eax; int
0x78E42F: call    _strerror
0x78E434: push    eax
0x78E435: push    ebx; ArgList
0x78E436: push    offset aFileSeekFailed; "file seek failed on '%s' [%s]"
0x78E43B: lea     esi, [ebp+var_60]
0x78E43E: call    sub_7A54A0
0x78E443: add     esp, 10h
0x78E446: cmp     dword ptr [eax+18h], 10h
0x78E44A: mov     byte ptr [ebp+var_4], 2
0x78E44E: jb      short loc_78E458
0x78E450: mov     ecx, [eax+4]
0x78E453: mov     [ebp+arg_0], ecx
0x78E456: jmp     short loc_78E45E
0x78E458: add     eax, 4
0x78E45B: mov     [ebp+arg_0], eax
0x78E45E: lea     edx, [ebp+arg_0]
0x78E461: push    edx; char **
0x78E462: lea     ecx, [ebp+var_38]; this
0x78E465: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x78E46A: push    offset __TI1?AVexception@std@@; throw info for 'class std::exception'
0x78E46F: lea     eax, [ebp+var_38]
0x78E472: push    eax
0x78E473: call    ThrowException??
0x78E478: call    __errno
0x78E47D: mov     ecx, [eax]
0x78E47F: push    ecx; int
0x78E480: call    _strerror
0x78E485: push    eax
0x78E486: push    ebx; ArgList
0x78E487: push    offset aFailedToLoadFi; "failed to load file '%s' [%s]"
0x78E48C: lea     esi, [ebp+var_60]
0x78E48F: call    sub_7A54A0
0x78E494: add     esp, 10h
0x78E497: cmp     dword ptr [eax+18h], 10h
0x78E49B: mov     byte ptr [ebp+var_4], 3
0x78E49F: jb      short loc_78E4A9
0x78E4A1: mov     edx, [eax+4]
0x78E4A4: mov     [ebp+arg_0], edx
0x78E4A7: jmp     short loc_78E4AF
0x78E4A9: add     eax, 4
0x78E4AC: mov     [ebp+arg_0], eax
0x78E4AF: lea     eax, [ebp+arg_0]
0x78E4B2: push    eax; char **
0x78E4B3: lea     ecx, [ebp+var_44]; this
0x78E4B6: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x78E4BB: push    offset __TI1?AVexception@std@@; throw info for 'class std::exception'
0x78E4C0: lea     ecx, [ebp+var_44]
0x78E4C3: push    ecx
0x78E4C4: call    ThrowException??
0x78E4C9: mov     ecx, [ebp+var_20]
0x78E4CC: mov     edx, [ecx]
0x78E4CE: mov     eax, [edx+4]
0x78E4D1: call    eax
0x78E4D3: push    eax; ArgList
0x78E4D4: push    offset aCspeedtreertLo; "CSpeedTreeRT::Load Tree - %s"
0x78E4D9: lea     esi, [ebp+var_60]
0x78E4DC: call    sub_7A54A0
0x78E4E1: add     esp, 8
0x78E4E4: cmp     dword ptr [eax+18h], 10h
0x78E4E8: mov     byte ptr [ebp+var_4], 5
0x78E4EC: jb      short loc_78E4F3
0x78E4EE: mov     eax, [eax+4]
0x78E4F1: jmp     short loc_78E4F6
0x78E4F3: add     eax, 4
0x78E4F6: push    eax; Src
0x78E4F7: call    sub_7895E0
0x78E4FC: add     esp, 4
0x78E4FF: lea     ecx, [ebp+var_60]
0x78E502: call    sub_79AB00
0x78E507: mov     eax, offset loc_78E50D
0x78E50C: retn
0x78E50D: jmp     loc_78E3BA
0x78E512: push    offset aCspeedtreer_20; "CSpeedTreeRT::LoadTree - threw an unkno"...
0x78E517: lea     esi, [ebp+var_7C]
0x78E51A: call    sub_7A54A0
0x78E51F: add     esp, 4
0x78E522: cmp     dword ptr [eax+18h], 10h
0x78E526: mov     byte ptr [ebp+var_4], 6
0x78E52A: jb      short loc_78E531
0x78E52C: mov     eax, [eax+4]
0x78E52F: jmp     short loc_78E534
0x78E531: add     eax, 4
0x78E534: push    eax; Src
0x78E535: call    sub_7895E0
0x78E53A: add     esp, 4
0x78E53D: lea     ecx, [ebp+var_7C]
0x78E540: call    sub_79AB00
0x78E545: mov     eax, offset loc_78E3BA
0x78E54A: retn
