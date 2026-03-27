0x63A020: sub     esp, 8
0x63A023: mov     eax, ds:0B333C4h
0x63A028: cmp     byte ptr [eax+6E5h], 0
0x63A02F: push    edi
0x63A030: mov     edi, ecx
0x63A032: mov     [esp+0Ch+var_8], edi
0x63A036: jnz     loc_63A205
0x63A03C: push    ebx
0x63A03D: mov     ebx, [esp+10h+arg_0]
0x63A041: mov     ecx, ebx
0x63A043: call    sub_5E1AF0
0x63A048: test    al, al
0x63A04A: jz      loc_63A204
0x63A050: push    esi
0x63A051: mov     ecx, ebx
0x63A053: call    sub_5E2DD0
0x63A058: mov     edx, [edi]
0x63A05A: mov     esi, eax
0x63A05C: mov     eax, [edx+184h]
0x63A062: mov     ecx, edi
0x63A064: call    eax
0x63A066: test    eax, eax
0x63A068: jz      short loc_63A074
0x63A06A: cmp     byte ptr [eax+20h], 14h
0x63A06E: jz      loc_63A203
0x63A074: mov     edx, [ebx]
0x63A076: mov     eax, [edx+334h]
0x63A07C: push    1
0x63A07E: mov     ecx, ebx
0x63A080: call    eax
0x63A082: test    al, al
0x63A084: jnz     loc_63A203
0x63A08A: push    0
0x63A08C: mov     ecx, ebx
0x63A08E: call    sub_5E6CD0
0x63A093: test    al, al
0x63A095: jnz     loc_63A203
0x63A09B: test    esi, esi
0x63A09D: jz      short loc_63A0AE
0x63A09F: mov     ecx, [esi+1Ch]
0x63A0A2: shr     ecx, 0Ch
0x63A0A5: test    cl, 1
0x63A0A8: jnz     loc_63A203
0x63A0AE: lea     ebx, [edi+3Ch]
0x63A0B1: cmp     dword ptr [ebx+4], 0
0x63A0B5: jnz     short loc_63A0BC
0x63A0B7: cmp     dword ptr [ebx], 0
0x63A0BA: jz      short loc_63A0D5
0x63A0BC: mov     esi, [ebx]
0x63A0BE: test    esi, esi
0x63A0C0: jz      short loc_63A0CB
0x63A0C2: push    esi
0x63A0C3: call    FormHeapFree
0x63A0C8: add     esp, 4
0x63A0CB: push    esi
0x63A0CC: mov     ecx, ebx
0x63A0CE: call    BSSimpleList_Remove
0x63A0D3: jmp     short loc_63A0B1
0x63A0D5: push    ebp
0x63A0D6: mov     ebp, [edi+18Ch]
0x63A0DC: test    ebp, ebp
0x63A0DE: mov     [esp+18h+var_4], 0
0x63A0E6: jz      loc_63A1C0
0x63A0EC: lea     esp, [esp+0]
0x63A0F0: mov     edi, [ebp+0]
0x63A0F3: test    edi, edi
0x63A0F5: jz      loc_63A1BC
0x63A0FB: cmp     [esp+18h+var_4], 3
0x63A100: jge     loc_63A1BC
0x63A106: mov     esi, [edi]
0x63A108: mov     edx, [esi]
0x63A10A: mov     eax, [edx+198h]
0x63A110: push    0
0x63A112: mov     ecx, esi
0x63A114: call    eax
0x63A116: test    al, al
0x63A118: jz      loc_63A1B1
0x63A11E: mov     edx, [esi]
0x63A120: mov     eax, [edx+1F8h]
0x63A126: mov     ecx, esi
0x63A128: call    eax
0x63A12A: test    al, al
0x63A12C: jnz     loc_63A1B1
0x63A132: fldz
0x63A134: fcomp   dword ptr [esi+84h]
0x63A13A: fnstsw  ax
0x63A13C: test    ah, 41h
0x63A13F: jnz     short loc_63A1B1
0x63A141: mov     ecx, [esp+18h+arg_0]
0x63A145: push    0
0x63A147: push    ecx
0x63A148: mov     ecx, esi
0x63A14A: call    TesObjectREF_GetDistance
0x63A14F: fcomp   dword ptr ds:0A71ED4h
0x63A155: fnstsw  ax
0x63A157: test    ah, 41h
0x63A15A: jp      short loc_63A1B1
0x63A15C: mov     ecx, [esp+18h+var_8]
0x63A160: cmp     byte ptr [ecx+228h], 0
0x63A167: jnz     short loc_63A1B1
0x63A169: fild    dword ptr [edi+0Ch]
0x63A16C: fcomp   dword ptr ds:0A418D8h
0x63A172: fnstsw  ax
0x63A174: test    ah, 41h
0x63A177: jnz     short loc_63A1B1
0x63A179: push    esi
0x63A17A: add     ecx, 0A8h ; '¨'
0x63A180: call    sub_446C30
0x63A185: test    al, al
0x63A187: jnz     short loc_63A1B1
0x63A189: push    20h ; ' '; Size
0x63A18B: call    FormHeapAlloc
0x63A190: add     esp, 4
0x63A193: test    eax, eax
0x63A195: jz      short loc_63A1A0
0x63A197: mov     ecx, eax
0x63A199: call    sub_628EB0
0x63A19E: jmp     short loc_63A1A2
0x63A1A0: xor     eax, eax
0x63A1A2: push    eax
0x63A1A3: mov     ecx, ebx
0x63A1A5: mov     [eax], esi
0x63A1A7: call    BSSimpleList_PushFront
0x63A1AC: add     [esp+18h+var_4], 1
0x63A1B1: mov     ebp, [ebp+4]
0x63A1B4: test    ebp, ebp
0x63A1B6: jnz     loc_63A0F0
0x63A1BC: mov     edi, [esp+18h+var_8]
0x63A1C0: mov     esi, [ebx]
0x63A1C2: test    esi, esi
0x63A1C4: pop     ebp
0x63A1C5: jz      short loc_63A1FC
0x63A1C7: mov     edi, [esi]
0x63A1C9: mov     ecx, ebx
0x63A1CB: call    sub_67F100
0x63A1D0: push    esi
0x63A1D1: call    FormHeapFree
0x63A1D6: mov     ecx, [esp+18h+arg_0]
0x63A1DA: mov     edx, [ecx]
0x63A1DC: mov     eax, [edx+2F8h]
0x63A1E2: add     esp, 4
0x63A1E5: push    edi
0x63A1E6: call    eax
0x63A1E8: mov     ecx, [esp+14h+var_8]
0x63A1EC: push    edi
0x63A1ED: add     ecx, 0A8h ; '¨'
0x63A1F3: call    BSSimpleList_PushFront
0x63A1F8: mov     edi, [esp+14h+var_8]
0x63A1FC: mov     byte ptr [edi+1D0h], 0
0x63A203: pop     esi
0x63A204: pop     ebx
0x63A205: pop     edi
0x63A206: add     esp, 8
0x63A209: retn    4
