0x8C1840: push    0FFFFFFFFh
0x8C1842: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8C1847: mov     eax, large fs:0
0x8C184D: push    eax
0x8C184E: push    ecx
0x8C184F: push    ebp
0x8C1850: push    esi
0x8C1851: push    edi
0x8C1852: mov     eax, ds:0B30AACh
0x8C1857: xor     eax, esp
0x8C1859: push    eax
0x8C185A: lea     eax, [esp+20h+var_C]
0x8C185E: mov     large fs:0, eax
0x8C1864: mov     edi, ecx
0x8C1866: push    offset stru_BA7C80; lpCriticalSection
0x8C186B: call    dword ptr ds:0A2806Ch
0x8C1871: call    dword ptr ds:0A2808Ch
0x8C1877: mov     ebp, 1
0x8C187C: add     ds:0BA7CFCh, ebp
0x8C1882: push    10h; Size
0x8C1884: mov     ds:0BA7CF8h, eax
0x8C1889: call    FormHeapAlloc
0x8C188E: mov     esi, eax
0x8C1890: add     esp, 4
0x8C1893: mov     [esp+20h+var_10], esi
0x8C1897: test    esi, esi
0x8C1899: mov     [esp+20h+var_4], 0
0x8C18A1: jz      short loc_8C18CB
0x8C18A3: mov     ecx, esi; this
0x8C18A5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C18AA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C18B0: mov     dword ptr [esi+0Ch], 0
0x8C18B7: add     ds:0BA7D4Ch, ebp
0x8C18BD: mov     dword ptr [esi], offset ??_7bhkPrismaticConstraint@@6B@; const bhkPrismaticConstraint::`vftable'
0x8C18C3: add     ds:0BA80C4h, ebp
0x8C18C9: jmp     short loc_8C18CD
0x8C18CB: xor     esi, esi
0x8C18CD: mov     eax, [esp+20h+arg_0]
0x8C18D1: push    eax
0x8C18D2: push    esi
0x8C18D3: mov     ecx, edi
0x8C18D5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C18DD: call    sub_8A0860
0x8C18E2: sub     ds:0BA7CFCh, ebp
0x8C18E8: jnz     short loc_8C18F4
0x8C18EA: mov     dword ptr ds:0BA7CF8h, 0
0x8C18F4: push    offset stru_BA7C80; lpCriticalSection
0x8C18F9: call    dword ptr ds:0A28074h
0x8C18FF: mov     eax, esi
0x8C1901: mov     ecx, [esp+20h+var_C]
0x8C1905: mov     large fs:0, ecx
0x8C190C: pop     ecx
0x8C190D: pop     edi
0x8C190E: pop     esi
0x8C190F: pop     ebp
0x8C1910: add     esp, 10h
0x8C1913: retn    4
