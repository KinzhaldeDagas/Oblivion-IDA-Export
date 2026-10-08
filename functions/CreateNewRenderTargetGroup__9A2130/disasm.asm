0x9A2130: push    0FFFFFFFFh; Creates an empty NiRenderTargetGroup with a requested color-target count. Rejects null renderer, counts above renderer capability, and counts above Oblivion's hard MRT limit of four.
0x9A2132: push    offset SEH_9A2130
0x9A2137: mov     eax, large fs:0
0x9A213D: push    eax
0x9A213E: push    esi
0x9A213F: mov     eax, ___security_cookie
0x9A2144: xor     eax, esp
0x9A2146: push    eax
0x9A2147: lea     eax, [esp+14h+var_C]
0x9A214B: mov     large fs:0, eax
0x9A2151: mov     ecx, [esp+14h+renderer]
0x9A2155: test    ecx, ecx
0x9A2157: jnz     short loc_9A216C
0x9A2159: xor     eax, eax
0x9A215B: mov     ecx, [esp+14h+var_C]
0x9A215F: mov     large fs:0, ecx
0x9A2166: pop     ecx
0x9A2167: pop     esi
0x9A2168: add     esp, 0Ch
0x9A216B: retn
0x9A216C: mov     eax, [ecx]
0x9A216E: mov     edx, [eax+9Ch]
0x9A2174: call    edx
0x9A2176: mov     esi, [esp+14h+maxTargets]
0x9A217A: cmp     eax, esi
0x9A217C: jb      short loc_9A2159
0x9A217E: cmp     esi, 4
0x9A2181: ja      short loc_9A2159
0x9A2183: push    24h ; '$'; Size
0x9A2185: call    FormHeapAlloc
0x9A218A: add     esp, 4
0x9A218D: mov     [esp+14h+renderer], eax
0x9A2191: test    eax, eax
0x9A2193: mov     [esp+14h+var_4], 0
0x9A219B: jz      short loc_9A21B8
0x9A219D: mov     ecx, eax; this
0x9A219F: call    ??0NiRenderTargetGroup@@QAE@XZ; NiRenderTargetGroup::NiRenderTargetGroup(void)
0x9A21A4: mov     [eax+18h], esi
0x9A21A7: mov     ecx, [esp+14h+var_C]
0x9A21AB: mov     large fs:0, ecx
0x9A21B2: pop     ecx
0x9A21B3: pop     esi
0x9A21B4: add     esp, 0Ch
0x9A21B7: retn
0x9A21B8: xor     eax, eax
0x9A21BA: mov     [eax+18h], esi
0x9A21BD: mov     ecx, [esp+14h+var_C]
0x9A21C1: mov     large fs:0, ecx
0x9A21C8: pop     ecx
0x9A21C9: pop     esi
0x9A21CA: add     esp, 0Ch
0x9A21CD: retn
0x9D7DB0: mov     eax, [ebp+8]
0x9D7DB3: push    eax
0x9D7DB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D7DB9: pop     ecx
0x9D7DBA: retn
0x9D7DBB: mov     edx, [esp+renderer]
0x9D7DBF: lea     eax, [edx-4]
0x9D7DC2: mov     ecx, [edx-8]
0x9D7DC5: xor     ecx, eax
0x9D7DC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7DCC: mov     eax, offset stru_B00288
0x9D7DD1: jmp     ___CxxFrameHandler3
