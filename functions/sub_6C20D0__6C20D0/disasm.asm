0x6C20D0: push    0FFFFFFFFh
0x6C20D2: push    offset SEH_6C20D0
0x6C20D7: mov     eax, large fs:0
0x6C20DD: push    eax
0x6C20DE: sub     esp, 18h
0x6C20E1: push    ebx
0x6C20E2: push    ebp
0x6C20E3: push    esi
0x6C20E4: push    edi
0x6C20E5: mov     eax, ds:0B30AACh
0x6C20EA: xor     eax, esp
0x6C20EC: push    eax
0x6C20ED: lea     eax, [esp+38h+var_C]
0x6C20F1: mov     large fs:0, eax
0x6C20F7: mov     ebp, [esp+38h+arg_8]
0x6C20FB: fld     [esp+38h+arg_0]
0x6C20FF: mov     eax, [esp+38h+arg_4]
0x6C2103: mov     edx, [ebp+0]
0x6C2106: mov     edi, [eax]
0x6C2108: push    14h; char
0x6C210A: lea     ecx, [esp+3Ch+var_24]
0x6C210E: push    ecx; int
0x6C210F: push    edx; int
0x6C2110: push    edi; int
0x6C2111: push    ecx
0x6C2112: fstp    [esp+4Ch+var_4C]; float
0x6C2115: call    sub_6D31B0
0x6C211A: add     esp, 14h
0x6C211D: test    al, al
0x6C211F: jz      loc_6C2256
0x6C2125: mov     esi, [ebp+0]
0x6C2128: add     esi, 1
0x6C212B: xor     ecx, ecx
0x6C212D: mov     eax, esi
0x6C212F: mov     edx, 14h
0x6C2134: mul     edx
0x6C2136: seto    cl
0x6C2139: neg     ecx
0x6C213B: or      ecx, eax
0x6C213D: xor     eax, eax
0x6C213F: add     ecx, 4
0x6C2142: setb    al
0x6C2145: neg     eax
0x6C2147: or      eax, ecx
0x6C2149: push    eax; Size
0x6C214A: call    FormHeapAlloc
0x6C214F: add     esp, 4
0x6C2152: mov     [esp+38h+var_20], eax
0x6C2156: test    eax, eax
0x6C2158: mov     [esp+38h+var_4], 0
0x6C2160: jz      short loc_6C217E
0x6C2162: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C2167: push    offset sub_6C1F90; a4
0x6C216C: push    esi; size
0x6C216D: lea     ebx, [eax+4]
0x6C2170: push    14h; a2
0x6C2172: push    ebx; a1
0x6C2173: mov     [eax], esi
0x6C2175: call    ArrayConstructor
0x6C217A: mov     esi, ebx
0x6C217C: jmp     short loc_6C2180
0x6C217E: xor     esi, esi
0x6C2180: mov     eax, [esp+38h+var_24]
0x6C2184: lea     ecx, [eax+eax*4]
0x6C2187: add     ecx, ecx
0x6C2189: add     ecx, ecx
0x6C218B: push    ecx; Size
0x6C218C: push    edi; Src
0x6C218D: push    esi; Dst
0x6C218E: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6C2196: call    _memcpy
0x6C219B: mov     ecx, [ebp+0]
0x6C219E: mov     edx, [esp+44h+var_24]
0x6C21A2: add     esp, 0Ch
0x6C21A5: cmp     ecx, edx
0x6C21A7: jbe     short loc_6C21CB
0x6C21A9: sub     ecx, edx
0x6C21AB: lea     eax, [edx+edx*4]
0x6C21AE: lea     edx, [ecx+ecx*4]
0x6C21B1: add     edx, edx
0x6C21B3: add     eax, eax
0x6C21B5: add     eax, eax
0x6C21B7: add     edx, edx
0x6C21B9: push    edx; Size
0x6C21BA: lea     ecx, [eax+edi]
0x6C21BD: push    ecx; Src
0x6C21BE: lea     edx, [eax+esi+14h]
0x6C21C2: push    edx; Dst
0x6C21C3: call    _memcpy
0x6C21C8: add     esp, 0Ch
0x6C21CB: mov     eax, [ebp+0]
0x6C21CE: fld     [esp+38h+arg_0]
0x6C21D2: push    14h; char
0x6C21D4: push    eax; int
0x6C21D5: push    5; int
0x6C21D7: push    edi; int
0x6C21D8: push    ecx
0x6C21D9: lea     ecx, [esp+4Ch+var_1C]
0x6C21DD: fstp    [esp+4Ch+var_4C]; float
0x6C21E0: push    ecx; int
0x6C21E1: call    sub_6BE280
0x6C21E6: fld     [esp+50h+arg_0]
0x6C21EA: mov     eax, [esp+50h+var_24]
0x6C21EE: lea     edx, [eax+eax*4]
0x6C21F1: lea     eax, [esi+edx*4]
0x6C21F4: fstp    dword ptr [eax]
0x6C21F6: mov     ecx, [esp+50h+var_1C]
0x6C21FA: mov     [eax+4], ecx
0x6C21FD: mov     edx, [esp+50h+var_18]
0x6C2201: mov     [eax+8], edx
0x6C2204: mov     ecx, [esp+50h+var_14]
0x6C2208: mov     [eax+0Ch], ecx
0x6C220B: mov     edx, [esp+50h+var_10]
0x6C220F: mov     [eax+10h], edx
0x6C2212: add     dword ptr [ebp+0], 1
0x6C2216: add     esp, 18h
0x6C2219: test    edi, edi
0x6C221B: jz      short loc_6C223A
0x6C221D: mov     eax, [edi-4]
0x6C2220: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C2225: lea     ebx, [edi-4]
0x6C2228: push    eax; int
0x6C2229: push    14h; unsigned int
0x6C222B: push    edi; void *
0x6C222C: call    $LN21
0x6C2231: push    ebx
0x6C2232: call    FormHeapFree
0x6C2237: add     esp, 4
0x6C223A: mov     ecx, [esp+38h+arg_4]
0x6C223E: mov     [ecx], esi
0x6C2240: mov     al, 1
0x6C2242: mov     ecx, [esp+38h+var_C]
0x6C2246: mov     large fs:0, ecx
0x6C224D: pop     ecx
0x6C224E: pop     edi
0x6C224F: pop     esi
0x6C2250: pop     ebp
0x6C2251: pop     ebx
0x6C2252: add     esp, 24h
0x6C2255: retn
0x6C2256: xor     al, al
0x6C2258: mov     ecx, [esp+38h+var_C]
0x6C225C: mov     large fs:0, ecx
0x6C2263: pop     ecx
0x6C2264: pop     edi
0x6C2265: pop     esi
0x6C2266: pop     ebp
0x6C2267: pop     ebx
0x6C2268: add     esp, 24h
0x6C226B: retn
