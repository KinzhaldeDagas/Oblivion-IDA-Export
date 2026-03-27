0x438F10: push    0FFFFFFFFh
0x438F12: push    offset SEH_68C280
0x438F17: mov     eax, large fs:0
0x438F1D: push    eax
0x438F1E: push    ebp
0x438F1F: push    esi
0x438F20: push    edi
0x438F21: mov     eax, ___security_cookie
0x438F26: xor     eax, esp
0x438F28: push    eax
0x438F29: lea     eax, [esp+1Ch+var_C]
0x438F2D: mov     large fs:0, eax
0x438F33: mov     esi, ecx
0x438F35: mov     ebp, [esp+1Ch+arg_4]
0x438F39: xor     ecx, ecx
0x438F3B: mov     eax, ebp
0x438F3D: mov     edx, 4
0x438F42: mul     edx
0x438F44: seto    cl
0x438F47: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVKFModel@@@@6B@; const LockFreeMap<char const *,KFModel *>::`vftable'
0x438F4D: mov     dword ptr [esi+18h], 0
0x438F54: mov     [esi+8], ebp
0x438F57: neg     ecx
0x438F59: or      ecx, eax
0x438F5B: push    ecx; Size
0x438F5C: call    FormHeapAlloc
0x438F61: mov     edi, eax
0x438F63: add     esp, 4
0x438F66: mov     [esp+1Ch+arg_4], edi
0x438F6A: test    edi, edi
0x438F6C: mov     [esp+1Ch+var_4], 0
0x438F74: jz      short loc_438F86
0x438F76: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x438F7B: push    ebp
0x438F7C: push    4
0x438F7E: push    edi
0x438F7F: call    sub_401080
0x438F84: jmp     short loc_438F88
0x438F86: xor     edi, edi
0x438F88: mov     [esi+0Ch], edi
0x438F8B: mov     edi, [esp+1Ch+a2]
0x438F8F: xor     ecx, ecx
0x438F91: lea     eax, [edi+edi*2]
0x438F94: mov     edx, 4
0x438F99: mul     edx
0x438F9B: seto    cl
0x438F9E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x438FA6: neg     ecx
0x438FA8: or      ecx, eax
0x438FAA: push    ecx; Size
0x438FAB: call    FormHeapAlloc
0x438FB0: mov     [esi+4], eax
0x438FB3: mov     eax, [esp+20h+arg_8]
0x438FB7: push    10h; Size
0x438FB9: mov     [esi+10h], eax
0x438FBC: call    FormHeapAlloc
0x438FC1: add     esp, 8
0x438FC4: mov     [esp+1Ch+arg_4], eax
0x438FC8: test    eax, eax
0x438FCA: mov     [esp+1Ch+var_4], 1
0x438FD2: jz      short loc_438FDE
0x438FD4: push    edi; a2
0x438FD5: mov     ecx, eax; this
0x438FD7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x438FDC: jmp     short loc_438FE0
0x438FDE: xor     eax, eax
0x438FE0: mov     [esi+14h], eax
0x438FE3: mov     eax, esi
0x438FE5: mov     ecx, [esp+1Ch+var_C]
0x438FE9: mov     large fs:0, ecx
0x438FF0: pop     ecx
0x438FF1: pop     edi
0x438FF2: pop     esi
0x438FF3: pop     ebp
0x438FF4: add     esp, 0Ch
0x438FF7: retn    0Ch
