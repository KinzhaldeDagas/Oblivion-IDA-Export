0x72F180: push    0FFFFFFFFh
0x72F182: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x72F187: mov     eax, large fs:0
0x72F18D: push    eax
0x72F18E: push    ecx
0x72F18F: push    esi
0x72F190: push    edi
0x72F191: mov     eax, ds:0B30AACh
0x72F196: xor     eax, esp
0x72F198: push    eax
0x72F199: lea     eax, [esp+1Ch+var_C]
0x72F19D: mov     large fs:0, eax
0x72F1A3: mov     esi, ecx
0x72F1A5: mov     [esp+1Ch+var_10], esi
0x72F1A9: mov     dword ptr [esi], offset ??_7NiSkinData@@6B@; const NiSkinData::`vftable'
0x72F1AF: mov     [esp+1Ch+var_4], 0
0x72F1B7: call    sub_72EFB0
0x72F1BC: mov     eax, [esi+44h]
0x72F1BF: push    eax
0x72F1C0: call    FormHeapFree
0x72F1C5: mov     edi, [esi+8]
0x72F1C8: add     esp, 4
0x72F1CB: test    edi, edi
0x72F1CD: jz      short loc_72F1EB
0x72F1CF: lea     eax, [edi+4]
0x72F1D2: push    eax; lpAddend
0x72F1D3: call    dword ptr ds:0A2807Ch
0x72F1D9: test    eax, eax
0x72F1DB: jnz     short loc_72F1EB
0x72F1DD: test    edi, edi
0x72F1DF: jz      short loc_72F1EB
0x72F1E1: mov     edx, [edi]
0x72F1E3: mov     eax, [edx]
0x72F1E5: push    1
0x72F1E7: mov     ecx, edi
0x72F1E9: call    eax
0x72F1EB: mov     ecx, esi
0x72F1ED: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x72F1F5: call    NiRefObject_destr
0x72F1FA: mov     ecx, dword ptr [esp+1Ch+var_C]
0x72F1FE: mov     large fs:0, ecx
0x72F205: pop     ecx
0x72F206: pop     edi
0x72F207: pop     esi
0x72F208: add     esp, 10h
0x72F20B: retn
