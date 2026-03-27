0x55AD30: push    0FFFFFFFFh
0x55AD32: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x55AD37: mov     eax, large fs:0
0x55AD3D: push    eax
0x55AD3E: push    ecx
0x55AD3F: push    esi
0x55AD40: push    edi
0x55AD41: mov     eax, ds:0B30AACh
0x55AD46: xor     eax, esp
0x55AD48: push    eax
0x55AD49: lea     eax, [esp+1Ch+var_C]
0x55AD4D: mov     large fs:0, eax
0x55AD53: mov     edi, ecx
0x55AD55: mov     [esp+1Ch+var_10], edi
0x55AD59: mov     dword ptr [edi], offset ??_7BSFaceGenMorphDataHead@@6B@; const BSFaceGenMorphDataHead::`vftable'
0x55AD5F: cmp     dword ptr [edi+8], 0
0x55AD63: mov     [esp+1Ch+var_4], 0
0x55AD6B: jz      short loc_55AD9E
0x55AD6D: xor     esi, esi
0x55AD6F: nop
0x55AD70: mov     eax, [edi+8]
0x55AD73: add     eax, esi
0x55AD75: cmp     dword ptr [eax], 0
0x55AD78: jz      short loc_55AD8A
0x55AD7A: mov     eax, [eax]
0x55AD7C: test    eax, eax
0x55AD7E: jz      short loc_55AD8A
0x55AD80: mov     edx, [eax]
0x55AD82: mov     ecx, eax
0x55AD84: mov     eax, [edx]
0x55AD86: push    1
0x55AD88: call    eax
0x55AD8A: add     esi, 4
0x55AD8D: cmp     esi, 34h ; '4'
0x55AD90: jb      short loc_55AD70
0x55AD92: mov     ecx, [edi+8]
0x55AD95: push    ecx
0x55AD96: call    FormHeapFree
0x55AD9B: add     esp, 4
0x55AD9E: cmp     dword ptr [edi+0Ch], 0
0x55ADA2: jz      short loc_55ADD6
0x55ADA4: xor     esi, esi
0x55ADA6: mov     edx, [edi+0Ch]
0x55ADA9: cmp     dword ptr [esi+edx], 0
0x55ADAD: lea     eax, [esi+edx]
0x55ADB0: jz      short loc_55ADC2
0x55ADB2: mov     eax, [eax]
0x55ADB4: test    eax, eax
0x55ADB6: jz      short loc_55ADC2
0x55ADB8: mov     edx, [eax]
0x55ADBA: mov     ecx, eax
0x55ADBC: mov     eax, [edx]
0x55ADBE: push    1
0x55ADC0: call    eax
0x55ADC2: add     esi, 4
0x55ADC5: cmp     esi, 44h ; 'D'
0x55ADC8: jb      short loc_55ADA6
0x55ADCA: mov     ecx, [edi+0Ch]
0x55ADCD: push    ecx
0x55ADCE: call    FormHeapFree
0x55ADD3: add     esp, 4
0x55ADD6: cmp     dword ptr [edi+10h], 0
0x55ADDA: jz      short loc_55AE10
0x55ADDC: xor     esi, esi
0x55ADDE: mov     edi, edi
0x55ADE0: mov     edx, [edi+10h]
0x55ADE3: cmp     dword ptr [edx+esi], 0
0x55ADE7: lea     eax, [edx+esi]
0x55ADEA: jz      short loc_55ADFC
0x55ADEC: mov     eax, [eax]
0x55ADEE: test    eax, eax
0x55ADF0: jz      short loc_55ADFC
0x55ADF2: mov     edx, [eax]
0x55ADF4: mov     ecx, eax
0x55ADF6: mov     eax, [edx]
0x55ADF8: push    1
0x55ADFA: call    eax
0x55ADFC: add     esi, 4
0x55ADFF: cmp     esi, 40h ; '@'
0x55AE02: jb      short loc_55ADE0
0x55AE04: mov     ecx, [edi+10h]
0x55AE07: push    ecx
0x55AE08: call    FormHeapFree
0x55AE0D: add     esp, 4
0x55AE10: mov     eax, [edi+14h]
0x55AE13: test    eax, eax
0x55AE15: jz      short loc_55AE38
0x55AE17: cmp     dword ptr [eax], 0
0x55AE1A: jz      short loc_55AE2C
0x55AE1C: mov     eax, [eax]
0x55AE1E: test    eax, eax
0x55AE20: jz      short loc_55AE2C
0x55AE22: mov     edx, [eax]
0x55AE24: mov     ecx, eax
0x55AE26: mov     eax, [edx]
0x55AE28: push    1
0x55AE2A: call    eax
0x55AE2C: mov     ecx, [edi+14h]
0x55AE2F: push    ecx
0x55AE30: call    FormHeapFree
0x55AE35: add     esp, 4
0x55AE38: push    offset NiRefObject_objcount; lpAddend
0x55AE3D: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x55AE43: call    dword ptr ds:0A2807Ch
0x55AE49: mov     ecx, dword ptr [esp+1Ch+var_C]
0x55AE4D: mov     large fs:0, ecx
0x55AE54: pop     ecx
0x55AE55: pop     edi
0x55AE56: pop     esi
0x55AE57: add     esp, 10h
0x55AE5A: retn
