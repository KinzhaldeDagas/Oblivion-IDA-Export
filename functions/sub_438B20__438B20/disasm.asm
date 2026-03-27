0x438B20: push    0FFFFFFFFh
0x438B22: push    offset SEH_68C280
0x438B27: mov     eax, large fs:0
0x438B2D: push    eax
0x438B2E: push    ebp
0x438B2F: push    esi
0x438B30: push    edi
0x438B31: mov     eax, ___security_cookie
0x438B36: xor     eax, esp
0x438B38: push    eax
0x438B39: lea     eax, [esp+1Ch+var_C]
0x438B3D: mov     large fs:0, eax
0x438B43: mov     esi, ecx
0x438B45: mov     ebp, [esp+1Ch+arg_4]
0x438B49: xor     ecx, ecx
0x438B4B: mov     eax, ebp
0x438B4D: mov     edx, 4
0x438B52: mul     edx
0x438B54: seto    cl
0x438B57: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedHelmet@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::`vftable'
0x438B5D: mov     dword ptr [esi+18h], 0
0x438B64: mov     [esi+8], ebp
0x438B67: neg     ecx
0x438B69: or      ecx, eax
0x438B6B: push    ecx; Size
0x438B6C: call    FormHeapAlloc
0x438B71: mov     edi, eax
0x438B73: add     esp, 4
0x438B76: mov     [esp+1Ch+arg_4], edi
0x438B7A: test    edi, edi
0x438B7C: mov     [esp+1Ch+var_4], 0
0x438B84: jz      short loc_438B96
0x438B86: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x438B8B: push    ebp
0x438B8C: push    4
0x438B8E: push    edi
0x438B8F: call    sub_401080
0x438B94: jmp     short loc_438B98
0x438B96: xor     edi, edi
0x438B98: mov     [esi+0Ch], edi
0x438B9B: mov     edi, [esp+1Ch+a2]
0x438B9F: xor     ecx, ecx
0x438BA1: lea     eax, [edi+edi*2]
0x438BA4: mov     edx, 4
0x438BA9: mul     edx
0x438BAB: seto    cl
0x438BAE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x438BB6: neg     ecx
0x438BB8: or      ecx, eax
0x438BBA: push    ecx; Size
0x438BBB: call    FormHeapAlloc
0x438BC0: mov     [esi+4], eax
0x438BC3: mov     eax, [esp+20h+arg_8]
0x438BC7: push    10h; Size
0x438BC9: mov     [esi+10h], eax
0x438BCC: call    FormHeapAlloc
0x438BD1: add     esp, 8
0x438BD4: mov     [esp+1Ch+arg_4], eax
0x438BD8: test    eax, eax
0x438BDA: mov     [esp+1Ch+var_4], 1
0x438BE2: jz      short loc_438BEE
0x438BE4: push    edi; a2
0x438BE5: mov     ecx, eax; this
0x438BE7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x438BEC: jmp     short loc_438BF0
0x438BEE: xor     eax, eax
0x438BF0: mov     [esi+14h], eax
0x438BF3: mov     eax, esi
0x438BF5: mov     ecx, [esp+1Ch+var_C]
0x438BF9: mov     large fs:0, ecx
0x438C00: pop     ecx
0x438C01: pop     edi
0x438C02: pop     esi
0x438C03: pop     ebp
0x438C04: add     esp, 0Ch
0x438C07: retn    0Ch
