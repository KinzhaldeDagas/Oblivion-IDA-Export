0x8C9980: push    ebp
0x8C9981: mov     ebp, esp
0x8C9983: and     esp, 0FFFFFFF0h
0x8C9986: push    0FFFFFFFFh
0x8C9988: push    offset SEH_8C9980
0x8C998D: mov     eax, large fs:0
0x8C9993: push    eax
0x8C9994: sub     esp, 98h
0x8C999A: mov     eax, ds:0B30AACh
0x8C999F: xor     eax, esp
0x8C99A1: mov     [esp+0A4h+var_14], eax
0x8C99A8: push    ebx
0x8C99A9: push    esi
0x8C99AA: push    edi
0x8C99AB: mov     eax, ds:0B30AACh
0x8C99B0: xor     eax, esp
0x8C99B2: push    eax
0x8C99B3: lea     eax, [esp+0B4h+var_C]
0x8C99BA: mov     large fs:0, eax
0x8C99C0: mov     esi, [ebp+arg_0]
0x8C99C3: mov     eax, ecx
0x8C99C5: test    eax, eax
0x8C99C7: mov     [esp+0B4h+var_9C], eax
0x8C99CB: jz      short loc_8C99D9
0x8C99CD: mov     eax, [eax+8]
0x8C99D0: test    eax, eax
0x8C99D2: jz      short loc_8C99D9
0x8C99D4: add     eax, 20h ; ' '
0x8C99D7: jmp     short loc_8C99DE
0x8C99D9: mov     eax, offset xmmword_B2F090
0x8C99DE: movaps  xmm0, xmmword ptr [eax]
0x8C99E1: movaps  [esp+0B4h+var_60], xmm0
0x8C99E6: movaps  xmm0, xmmword ptr [eax+10h]
0x8C99EA: movaps  [esp+0B4h+var_50], xmm0
0x8C99EF: movaps  xmm0, xmmword ptr [eax+20h]
0x8C99F3: movaps  [esp+0B4h+var_40], xmm0
0x8C99F8: movaps  xmm0, xmmword ptr [eax+30h]
0x8C99FC: lea     eax, [esp+0B4h+var_60]
0x8C9A00: push    eax
0x8C9A01: lea     ecx, [esp+0B8h+var_94]
0x8C9A05: push    ecx
0x8C9A06: movaps  [esp+0BCh+var_30], xmm0
0x8C9A0E: call    sub_607740
0x8C9A13: lea     edx, [esp+0BCh+var_30]
0x8C9A1A: push    edx
0x8C9A1B: lea     eax, [esp+0C0h+var_70]
0x8C9A1F: push    eax
0x8C9A20: call    sub_43F3E0
0x8C9A25: push    0DCh ; 'Ü'; Size
0x8C9A2A: call    FormHeapAlloc
0x8C9A2F: add     esp, 14h
0x8C9A32: mov     [esp+0B4h+var_98], eax
0x8C9A36: test    eax, eax
0x8C9A38: mov     [esp+0B4h+var_4], 0
0x8C9A43: jz      short loc_8C9A52
0x8C9A45: push    0
0x8C9A47: mov     ecx, eax; this
0x8C9A49: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x8C9A4E: mov     ebx, eax
0x8C9A50: jmp     short loc_8C9A54
0x8C9A52: xor     ebx, ebx
0x8C9A54: push    offset aBhkconvextrans; "bhkConvexTransformShape"
0x8C9A59: mov     ecx, ebx
0x8C9A5B: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x8C9A66: call    NiObjectNET_SetName
0x8C9A6B: mov     edx, [esi]
0x8C9A6D: mov     eax, [edx+84h]
0x8C9A73: push    0
0x8C9A75: push    ebx
0x8C9A76: mov     ecx, esi
0x8C9A78: call    eax
0x8C9A7A: mov     ecx, [esp+0B4h+var_70]
0x8C9A7E: mov     edx, [esp+0B4h+var_6C]
0x8C9A82: mov     eax, [esp+0B4h+var_68]
0x8C9A86: mov     [ebx+54h], ecx
0x8C9A89: mov     [ebx+58h], edx
0x8C9A8C: mov     [ebx+5Ch], eax
0x8C9A8F: mov     eax, [esp+0B4h+var_9C]
0x8C9A93: test    eax, eax
0x8C9A95: lea     edi, [ebx+30h]
0x8C9A98: mov     ecx, 9
0x8C9A9D: lea     esi, [esp+0B4h+var_94]
0x8C9AA1: rep movsd
0x8C9AA3: jz      short loc_8C9AB8
0x8C9AA5: mov     eax, [eax+8]
0x8C9AA8: test    eax, eax
0x8C9AAA: jz      short loc_8C9AB8
0x8C9AAC: mov     eax, [eax+10h]
0x8C9AAF: test    eax, eax
0x8C9AB1: jz      short loc_8C9AB8
0x8C9AB3: mov     ecx, [eax+8]
0x8C9AB6: jmp     short loc_8C9ABA
0x8C9AB8: xor     ecx, ecx
0x8C9ABA: test    ecx, ecx
0x8C9ABC: jz      short loc_8C9AC9
0x8C9ABE: mov     edx, [ecx]
0x8C9AC0: mov     eax, [edx+90h]
0x8C9AC6: push    ebx
0x8C9AC7: call    eax
0x8C9AC9: mov     ecx, dword ptr [esp+0B4h+var_C]
0x8C9AD0: mov     large fs:0, ecx
0x8C9AD7: pop     ecx
0x8C9AD8: pop     edi
0x8C9AD9: pop     esi
0x8C9ADA: pop     ebx
0x8C9ADB: mov     ecx, [esp+0A4h+var_14]
0x8C9AE2: xor     ecx, esp
0x8C9AE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C9AE9: mov     esp, ebp
0x8C9AEB: pop     ebp
0x8C9AEC: retn    4
