0x6CCF50: push    0FFFFFFFFh
0x6CCF52: push    offset ??1NiBlendBoolInterpolator@@UAE@XZ_SEH
0x6CCF57: mov     eax, large fs:0
0x6CCF5D: push    eax
0x6CCF5E: push    ecx
0x6CCF5F: push    esi
0x6CCF60: push    edi
0x6CCF61: mov     eax, ds:0B30AACh
0x6CCF66: xor     eax, esp
0x6CCF68: push    eax
0x6CCF69: lea     eax, [esp+1Ch+var_C]
0x6CCF6D: mov     large fs:0, eax
0x6CCF73: mov     esi, ecx
0x6CCF75: mov     [esp+1Ch+var_10], esi
0x6CCF79: mov     dword ptr [esi], offset ??_7NiBlendInterpolator@@6B@; const NiBlendInterpolator::`vftable'
0x6CCF7F: mov     eax, [esi+14h]
0x6CCF82: test    eax, eax
0x6CCF84: mov     [esp+1Ch+var_4], 0
0x6CCF8C: jz      short loc_6CCFAB
0x6CCF8E: mov     ecx, [eax-4]
0x6CCF91: lea     edi, [eax-4]
0x6CCF94: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6CCF99: push    ecx; int
0x6CCF9A: push    18h; unsigned int
0x6CCF9C: push    eax; void *
0x6CCF9D: call    $LN21
0x6CCFA2: push    edi
0x6CCFA3: call    FormHeapFree
0x6CCFA8: add     esp, 4
0x6CCFAB: mov     ecx, esi
0x6CCFAD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6CCFB5: call    sub_6EBA30
0x6CCFBA: mov     ecx, [esp+1Ch+var_C]
0x6CCFBE: mov     large fs:0, ecx
0x6CCFC5: pop     ecx
0x6CCFC6: pop     edi
0x6CCFC7: pop     esi
0x6CCFC8: add     esp, 10h
0x6CCFCB: retn
