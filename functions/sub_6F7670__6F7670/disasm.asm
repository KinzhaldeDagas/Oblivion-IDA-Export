0x6F7670: push    0FFFFFFFFh
0x6F7672: push    offset SEH_6F7670
0x6F7677: mov     eax, large fs:0
0x6F767D: push    eax
0x6F767E: push    ecx
0x6F767F: push    ebx
0x6F7680: push    ebp
0x6F7681: push    esi
0x6F7682: push    edi
0x6F7683: mov     eax, ds:0B30AACh
0x6F7688: xor     eax, esp
0x6F768A: push    eax
0x6F768B: lea     eax, [esp+24h+var_C]
0x6F768F: mov     large fs:0, eax
0x6F7695: mov     esi, ecx
0x6F7697: mov     [esp+24h+var_10], esi
0x6F769B: push    esi; struct std::_Locinfo *
0x6F769C: mov     [esp+28h+var_4], 4
0x6F76A4: call    ?_Locinfo_dtor@_Locinfo@std@@SAXPAV12@@Z; std::_Locinfo::_Locinfo_dtor(std::_Locinfo *)
0x6F76A9: mov     ebp, 10h
0x6F76AE: add     esp, 4
0x6F76B1: cmp     [esi+70h], ebp
0x6F76B4: jb      short loc_6F76C2
0x6F76B6: mov     eax, [esi+5Ch]
0x6F76B9: push    eax
0x6F76BA: call    FormHeapFree
0x6F76BF: add     esp, 4
0x6F76C2: xor     ebx, ebx
0x6F76C4: mov     edi, 0Fh
0x6F76C9: mov     [esi+70h], edi
0x6F76CC: mov     [esi+6Ch], ebx
0x6F76CF: mov     [esi+5Ch], bl
0x6F76D2: cmp     [esi+54h], ebp
0x6F76D5: jb      short loc_6F76E3
0x6F76D7: mov     eax, [esi+40h]
0x6F76DA: push    eax
0x6F76DB: call    FormHeapFree
0x6F76E0: add     esp, 4
0x6F76E3: mov     [esi+54h], edi
0x6F76E6: mov     [esi+50h], ebx
0x6F76E9: mov     [esi+40h], bl
0x6F76EC: cmp     [esi+38h], ebp
0x6F76EF: jb      short loc_6F76FD
0x6F76F1: mov     eax, [esi+24h]
0x6F76F4: push    eax
0x6F76F5: call    FormHeapFree
0x6F76FA: add     esp, 4
0x6F76FD: mov     [esi+38h], edi
0x6F7700: mov     [esi+34h], ebx
0x6F7703: mov     [esi+24h], bl
0x6F7706: cmp     [esi+1Ch], ebp
0x6F7709: jb      short loc_6F7717
0x6F770B: mov     eax, [esi+8]
0x6F770E: push    eax
0x6F770F: call    FormHeapFree
0x6F7714: add     esp, 4
0x6F7717: mov     [esi+1Ch], edi
0x6F771A: mov     [esi+18h], ebx
0x6F771D: mov     ecx, esi; this
0x6F771F: mov     [esi+8], bl
0x6F7722: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6F772A: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F772F: mov     ecx, [esp+24h+var_C]
0x6F7733: mov     large fs:0, ecx
0x6F773A: pop     ecx
0x6F773B: pop     edi
0x6F773C: pop     esi
0x6F773D: pop     ebp
0x6F773E: pop     ebx
0x6F773F: add     esp, 10h
0x6F7742: retn
