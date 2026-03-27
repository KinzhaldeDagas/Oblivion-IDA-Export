0x4338C0: push    0FFFFFFFFh
0x4338C2: push    offset SEH_4338C0
0x4338C7: mov     eax, large fs:0
0x4338CD: push    eax
0x4338CE: push    ebx
0x4338CF: push    esi
0x4338D0: push    edi
0x4338D1: mov     eax, ___security_cookie
0x4338D6: xor     eax, esp
0x4338D8: push    eax
0x4338D9: lea     eax, [esp+1Ch+var_C]
0x4338DD: mov     large fs:0, eax
0x4338E3: mov     esi, ecx
0x4338E5: mov     edi, [esi+14h]
0x4338E8: mov     eax, [edi+4]
0x4338EB: push    eax; dwTlsIndex
0x4338EC: mov     [esp+20h+var_4], 0
0x4338F4: call    ds:TlsGetValue
0x4338FA: test    eax, eax
0x4338FC: jnz     short loc_433906
0x4338FE: push    esi; a2
0x4338FF: mov     ecx, edi; this
0x433901: call    ThreadSpecificInterfaceManager_AddInterface
0x433906: mov     ecx, dword ptr [esp+1Ch+arg_10]
0x43390A: push    ecx; char
0x43390B: mov     ecx, [esp+20h+arg_8]
0x43390F: lea     edx, [esp+20h+arg_C]
0x433913: push    edx; int
0x433914: mov     edx, [esp+24h+arg_4]
0x433918: push    ecx; int
0x433919: mov     ecx, [esp+28h+arg_0]
0x43391D: push    edx; int
0x43391E: push    ecx; LONG
0x43391F: mov     ecx, eax
0x433921: call    sub_4331F0
0x433926: mov     esi, [esp+1Ch+arg_C]
0x43392A: test    esi, esi
0x43392C: mov     bl, al
0x43392E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x433936: jz      short loc_433950
0x433938: lea     edx, [esi+8]
0x43393B: push    edx; lpAddend
0x43393C: call    ds:InterlockedDecrement
0x433942: test    eax, eax
0x433944: jnz     short loc_433950
0x433946: mov     eax, [esi]
0x433948: mov     edx, [eax]
0x43394A: push    1
0x43394C: mov     ecx, esi
0x43394E: call    edx
0x433950: mov     al, bl
0x433952: mov     ecx, dword ptr [esp+1Ch+var_C]
0x433956: mov     large fs:0, ecx
0x43395D: pop     ecx
0x43395E: pop     edi
0x43395F: pop     esi
0x433960: pop     ebx
0x433961: add     esp, 0Ch
0x433964: retn    14h
