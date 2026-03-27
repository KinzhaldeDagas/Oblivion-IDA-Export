0x432520: push    0FFFFFFFFh
0x432522: push    offset SEH_68C280
0x432527: mov     eax, large fs:0
0x43252D: push    eax
0x43252E: push    ebp
0x43252F: push    esi
0x432530: push    edi
0x432531: mov     eax, ___security_cookie
0x432536: xor     eax, esp
0x432538: push    eax
0x432539: lea     eax, [esp+1Ch+var_C]
0x43253D: mov     large fs:0, eax
0x432543: mov     esi, ecx
0x432545: mov     ebp, [esp+1Ch+arg_4]
0x432549: xor     ecx, ecx
0x43254B: mov     eax, ebp
0x43254D: mov     edx, 4
0x432552: mul     edx
0x432554: seto    cl
0x432557: mov     dword ptr [esi], offset ??_7?$LockFreeMap@_JV?$NiPointer@V?$BSTask@_J@@@@@@6B@; const LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::`vftable'
0x43255D: mov     dword ptr [esi+18h], 0
0x432564: mov     [esi+8], ebp
0x432567: neg     ecx
0x432569: or      ecx, eax
0x43256B: push    ecx; Size
0x43256C: call    FormHeapAlloc
0x432571: mov     edi, eax
0x432573: add     esp, 4
0x432576: mov     [esp+1Ch+arg_4], edi
0x43257A: test    edi, edi
0x43257C: mov     [esp+1Ch+var_4], 0
0x432584: jz      short loc_432596
0x432586: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x43258B: push    ebp
0x43258C: push    4
0x43258E: push    edi
0x43258F: call    sub_401080
0x432594: jmp     short loc_432598
0x432596: xor     edi, edi
0x432598: mov     [esi+0Ch], edi
0x43259B: mov     edi, [esp+1Ch+a2]
0x43259F: xor     ecx, ecx
0x4325A1: lea     eax, [edi+edi*2]
0x4325A4: mov     edx, 4
0x4325A9: mul     edx
0x4325AB: seto    cl
0x4325AE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4325B6: neg     ecx
0x4325B8: or      ecx, eax
0x4325BA: push    ecx; Size
0x4325BB: call    FormHeapAlloc
0x4325C0: mov     [esi+4], eax
0x4325C3: mov     eax, [esp+20h+arg_8]
0x4325C7: push    10h; Size
0x4325C9: mov     [esi+10h], eax
0x4325CC: call    FormHeapAlloc
0x4325D1: add     esp, 8
0x4325D4: mov     [esp+1Ch+arg_4], eax
0x4325D8: test    eax, eax
0x4325DA: mov     [esp+1Ch+var_4], 1
0x4325E2: jz      short loc_4325EE
0x4325E4: push    edi; a2
0x4325E5: mov     ecx, eax; this
0x4325E7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x4325EC: jmp     short loc_4325F0
0x4325EE: xor     eax, eax
0x4325F0: mov     [esi+14h], eax
0x4325F3: mov     eax, esi
0x4325F5: mov     ecx, [esp+1Ch+var_C]
0x4325F9: mov     large fs:0, ecx
0x432600: pop     ecx
0x432601: pop     edi
0x432602: pop     esi
0x432603: pop     ebp
0x432604: add     esp, 0Ch
0x432607: retn    0Ch
