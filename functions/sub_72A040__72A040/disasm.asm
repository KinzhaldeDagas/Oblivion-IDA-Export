0x72A040: push    ebx
0x72A041: push    ebp
0x72A042: mov     ebp, dword ptr [esp+8+ArgList]
0x72A046: push    esi
0x72A047: mov     eax, ebp
0x72A049: push    edi
0x72A04A: mov     esi, ecx
0x72A04C: lea     edx, [eax+1]
0x72A04F: nop
0x72A050: mov     cl, [eax]
0x72A052: add     eax, 1
0x72A055: test    cl, cl
0x72A057: jnz     short loc_72A050
0x72A059: sub     eax, edx
0x72A05B: lea     edi, [eax+41h]
0x72A05E: push    edi; Size
0x72A05F: call    FormHeapAlloc
0x72A064: fld     dword ptr [esi+0Ch]
0x72A067: sub     esp, 1Ch
0x72A06A: fstp    [esp+30h+var_18]
0x72A06E: mov     ebx, eax
0x72A070: fld     dword ptr [esi+8]
0x72A073: fstp    [esp+30h+var_20]
0x72A077: fld     dword ptr [esi+4]
0x72A07A: fstp    [esp+30h+var_28]
0x72A07E: fld     dword ptr [esi]
0x72A080: fstp    [esp+30h+var_30]
0x72A083: push    ebp; ArgList
0x72A084: push    offset aSGGGG; "%s = (%g, %g, %g) , %g"
0x72A089: push    edi; SizeInBytes
0x72A08A: push    ebx; DstBuf
0x72A08B: call    sub_6C5D40
0x72A090: add     esp, 30h
0x72A093: pop     edi
0x72A094: pop     esi
0x72A095: pop     ebp
0x72A096: mov     eax, ebx
0x72A098: pop     ebx
0x72A099: retn    4
