0x677DD0: push    0FFFFFFFFh
0x677DD2: push    offset SEH_68C280
0x677DD7: mov     eax, large fs:0
0x677DDD: push    eax
0x677DDE: push    ebp
0x677DDF: push    esi
0x677DE0: push    edi
0x677DE1: mov     eax, ds:0B30AACh
0x677DE6: xor     eax, esp
0x677DE8: push    eax
0x677DE9: lea     eax, [esp+1Ch+var_C]
0x677DED: mov     large fs:0, eax
0x677DF3: mov     esi, ecx
0x677DF5: mov     ebp, [esp+1Ch+arg_4]
0x677DF9: xor     ecx, ecx
0x677DFB: mov     eax, ebp
0x677DFD: mov     edx, 4
0x677E02: mul     edx
0x677E04: seto    cl
0x677E07: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable'
0x677E0D: mov     dword ptr [esi+18h], 0
0x677E14: mov     [esi+8], ebp
0x677E17: neg     ecx
0x677E19: or      ecx, eax
0x677E1B: push    ecx; Size
0x677E1C: call    FormHeapAlloc
0x677E21: mov     edi, eax
0x677E23: add     esp, 4
0x677E26: mov     [esp+1Ch+arg_4], edi
0x677E2A: test    edi, edi
0x677E2C: mov     [esp+1Ch+var_4], 0
0x677E34: jz      short loc_677E46
0x677E36: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x677E3B: push    ebp
0x677E3C: push    4
0x677E3E: push    edi
0x677E3F: call    sub_401080
0x677E44: jmp     short loc_677E48
0x677E46: xor     edi, edi
0x677E48: mov     [esi+0Ch], edi
0x677E4B: mov     edi, [esp+1Ch+a2]
0x677E4F: xor     ecx, ecx
0x677E51: lea     eax, [edi+edi*2]
0x677E54: mov     edx, 4
0x677E59: mul     edx
0x677E5B: seto    cl
0x677E5E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x677E66: neg     ecx
0x677E68: or      ecx, eax
0x677E6A: push    ecx; Size
0x677E6B: call    FormHeapAlloc
0x677E70: mov     [esi+4], eax
0x677E73: mov     eax, [esp+20h+arg_8]
0x677E77: push    10h; Size
0x677E79: mov     [esi+10h], eax
0x677E7C: call    FormHeapAlloc
0x677E81: add     esp, 8
0x677E84: mov     [esp+1Ch+arg_4], eax
0x677E88: test    eax, eax
0x677E8A: mov     [esp+1Ch+var_4], 1
0x677E92: jz      short loc_677E9E
0x677E94: push    edi; a2
0x677E95: mov     ecx, eax; this
0x677E97: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x677E9C: jmp     short loc_677EA0
0x677E9E: xor     eax, eax
0x677EA0: mov     [esi+14h], eax
0x677EA3: mov     eax, esi
0x677EA5: mov     ecx, [esp+1Ch+var_C]
0x677EA9: mov     large fs:0, ecx
0x677EB0: pop     ecx
0x677EB1: pop     edi
0x677EB2: pop     esi
0x677EB3: pop     ebp
0x677EB4: add     esp, 0Ch
0x677EB7: retn    0Ch
