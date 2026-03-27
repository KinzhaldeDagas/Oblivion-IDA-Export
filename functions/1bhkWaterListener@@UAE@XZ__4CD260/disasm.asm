0x4CD260: push    0FFFFFFFFh
0x4CD262: push    offset ??1bhkWaterListener@@UAE@XZ_SEH
0x4CD267: mov     eax, large fs:0
0x4CD26D: push    eax
0x4CD26E: push    ecx
0x4CD26F: push    esi
0x4CD270: push    edi
0x4CD271: mov     eax, ds:0B30AACh
0x4CD276: xor     eax, esp
0x4CD278: push    eax
0x4CD279: lea     eax, [esp+1Ch+var_C]
0x4CD27D: mov     large fs:0, eax
0x4CD283: mov     edi, ecx
0x4CD285: mov     [esp+1Ch+var_10], edi
0x4CD289: mov     esi, [edi+0Ch]
0x4CD28C: test    esi, esi
0x4CD28E: mov     [esp+1Ch+var_4], 0
0x4CD296: jz      short loc_4CD2B4
0x4CD298: lea     eax, [esi+4]
0x4CD29B: push    eax; lpAddend
0x4CD29C: call    dword ptr ds:0A2807Ch
0x4CD2A2: test    eax, eax
0x4CD2A4: jnz     short loc_4CD2B4
0x4CD2A6: test    esi, esi
0x4CD2A8: jz      short loc_4CD2B4
0x4CD2AA: mov     edx, [esi]
0x4CD2AC: mov     eax, [edx]
0x4CD2AE: push    1
0x4CD2B0: mov     ecx, esi
0x4CD2B2: call    eax
0x4CD2B4: mov     dword ptr [edi], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x4CD2BA: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4CD2BE: mov     large fs:0, ecx
0x4CD2C5: pop     ecx
0x4CD2C6: pop     edi
0x4CD2C7: pop     esi
0x4CD2C8: add     esp, 10h
0x4CD2CB: retn
