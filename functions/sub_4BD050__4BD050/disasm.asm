0x4BD050: push    0FFFFFFFFh
0x4BD052: push    offset SEH_68C280
0x4BD057: mov     eax, large fs:0
0x4BD05D: push    eax
0x4BD05E: push    ebp
0x4BD05F: push    esi
0x4BD060: push    edi
0x4BD061: mov     eax, ds:0B30AACh
0x4BD066: xor     eax, esp
0x4BD068: push    eax
0x4BD069: lea     eax, [esp+1Ch+var_C]
0x4BD06D: mov     large fs:0, eax
0x4BD073: mov     esi, ecx
0x4BD075: mov     ebp, [esp+1Ch+arg_4]
0x4BD079: xor     ecx, ecx
0x4BD07B: mov     eax, ebp
0x4BD07D: mov     edx, 4
0x4BD082: mul     edx
0x4BD084: seto    cl
0x4BD087: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VDistantLODLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<DistantLODLoaderTask>>::`vftable'
0x4BD08D: mov     dword ptr [esi+18h], 0
0x4BD094: mov     [esi+8], ebp
0x4BD097: neg     ecx
0x4BD099: or      ecx, eax
0x4BD09B: push    ecx; Size
0x4BD09C: call    FormHeapAlloc
0x4BD0A1: mov     edi, eax
0x4BD0A3: add     esp, 4
0x4BD0A6: mov     [esp+1Ch+arg_4], edi
0x4BD0AA: test    edi, edi
0x4BD0AC: mov     [esp+1Ch+var_4], 0
0x4BD0B4: jz      short loc_4BD0C6
0x4BD0B6: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x4BD0BB: push    ebp
0x4BD0BC: push    4
0x4BD0BE: push    edi
0x4BD0BF: call    sub_401080
0x4BD0C4: jmp     short loc_4BD0C8
0x4BD0C6: xor     edi, edi
0x4BD0C8: mov     [esi+0Ch], edi
0x4BD0CB: mov     edi, [esp+1Ch+a2]
0x4BD0CF: xor     ecx, ecx
0x4BD0D1: lea     eax, [edi+edi*2]
0x4BD0D4: mov     edx, 4
0x4BD0D9: mul     edx
0x4BD0DB: seto    cl
0x4BD0DE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BD0E6: neg     ecx
0x4BD0E8: or      ecx, eax
0x4BD0EA: push    ecx; Size
0x4BD0EB: call    FormHeapAlloc
0x4BD0F0: mov     [esi+4], eax
0x4BD0F3: mov     eax, [esp+20h+arg_8]
0x4BD0F7: push    10h; Size
0x4BD0F9: mov     [esi+10h], eax
0x4BD0FC: call    FormHeapAlloc
0x4BD101: add     esp, 8
0x4BD104: mov     [esp+1Ch+arg_4], eax
0x4BD108: test    eax, eax
0x4BD10A: mov     [esp+1Ch+var_4], 1
0x4BD112: jz      short loc_4BD11E
0x4BD114: push    edi; a2
0x4BD115: mov     ecx, eax; this
0x4BD117: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x4BD11C: jmp     short loc_4BD120
0x4BD11E: xor     eax, eax
0x4BD120: mov     [esi+14h], eax
0x4BD123: mov     eax, esi
0x4BD125: mov     ecx, [esp+1Ch+var_C]
0x4BD129: mov     large fs:0, ecx
0x4BD130: pop     ecx
0x4BD131: pop     edi
0x4BD132: pop     esi
0x4BD133: pop     ebp
0x4BD134: add     esp, 0Ch
0x4BD137: retn    0Ch
