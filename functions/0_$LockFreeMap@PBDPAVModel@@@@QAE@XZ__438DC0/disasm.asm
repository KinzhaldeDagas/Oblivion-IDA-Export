0x438DC0: push    0FFFFFFFFh
0x438DC2: push    offset SEH_68C280
0x438DC7: mov     eax, large fs:0
0x438DCD: push    eax
0x438DCE: push    ebp
0x438DCF: push    esi
0x438DD0: push    edi
0x438DD1: mov     eax, ___security_cookie
0x438DD6: xor     eax, esp
0x438DD8: push    eax
0x438DD9: lea     eax, [esp+1Ch+var_C]
0x438DDD: mov     large fs:0, eax
0x438DE3: mov     esi, ecx
0x438DE5: mov     ebp, [esp+1Ch+arg_4]
0x438DE9: xor     ecx, ecx
0x438DEB: mov     eax, ebp
0x438DED: mov     edx, 4
0x438DF2: mul     edx
0x438DF4: seto    cl
0x438DF7: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::`vftable'
0x438DFD: mov     dword ptr [esi+18h], 0
0x438E04: mov     [esi+8], ebp
0x438E07: neg     ecx
0x438E09: or      ecx, eax
0x438E0B: push    ecx; Size
0x438E0C: call    FormHeapAlloc
0x438E11: mov     edi, eax
0x438E13: add     esp, 4
0x438E16: mov     [esp+1Ch+arg_4], edi
0x438E1A: test    edi, edi
0x438E1C: mov     [esp+1Ch+var_4], 0
0x438E24: jz      short loc_438E36
0x438E26: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x438E2B: push    ebp
0x438E2C: push    4
0x438E2E: push    edi
0x438E2F: call    sub_401080
0x438E34: jmp     short loc_438E38
0x438E36: xor     edi, edi
0x438E38: mov     [esi+0Ch], edi
0x438E3B: mov     edi, [esp+1Ch+a2]
0x438E3F: xor     ecx, ecx
0x438E41: lea     eax, [edi+edi*2]
0x438E44: mov     edx, 4
0x438E49: mul     edx
0x438E4B: seto    cl
0x438E4E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x438E56: neg     ecx
0x438E58: or      ecx, eax
0x438E5A: push    ecx; Size
0x438E5B: call    FormHeapAlloc
0x438E60: mov     [esi+4], eax
0x438E63: mov     eax, [esp+20h+arg_8]
0x438E67: push    10h; Size
0x438E69: mov     [esi+10h], eax
0x438E6C: call    FormHeapAlloc
0x438E71: add     esp, 8
0x438E74: mov     [esp+1Ch+arg_4], eax
0x438E78: test    eax, eax
0x438E7A: mov     [esp+1Ch+var_4], 1
0x438E82: jz      short loc_438E8E
0x438E84: push    edi; a2
0x438E85: mov     ecx, eax; this
0x438E87: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x438E8C: jmp     short loc_438E90
0x438E8E: xor     eax, eax
0x438E90: mov     [esi+14h], eax
0x438E93: mov     eax, esi
0x438E95: mov     ecx, [esp+1Ch+var_C]
0x438E99: mov     large fs:0, ecx
0x438EA0: pop     ecx
0x438EA1: pop     edi
0x438EA2: pop     esi
0x438EA3: pop     ebp
0x438EA4: add     esp, 0Ch
0x438EA7: retn    0Ch
