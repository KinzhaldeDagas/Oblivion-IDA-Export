0x7EFB30: push    0FFFFFFFFh
0x7EFB32: push    offset ??1PrecipitationShaderProperty@@UAE@XZ_SEH
0x7EFB37: mov     eax, large fs:0
0x7EFB3D: push    eax
0x7EFB3E: push    ecx
0x7EFB3F: push    ebp
0x7EFB40: push    esi
0x7EFB41: push    edi
0x7EFB42: mov     eax, ds:0B30AACh
0x7EFB47: xor     eax, esp
0x7EFB49: push    eax
0x7EFB4A: lea     eax, [esp+20h+var_C]
0x7EFB4E: mov     large fs:0, eax
0x7EFB54: mov     esi, ecx
0x7EFB56: mov     [esp+20h+var_10], esi
0x7EFB5A: mov     dword ptr [esi], offset ??_7PrecipitationShaderProperty@@6B@; const PrecipitationShaderProperty::`vftable'
0x7EFB60: mov     ebp, ds:0A2807Ch
0x7EFB66: mov     dword ptr [esi+6Ch], 0
0x7EFB6D: mov     edi, [esi+9Ch]
0x7EFB73: test    edi, edi
0x7EFB75: mov     [esp+20h+var_4], 1
0x7EFB7D: jz      short loc_7EFBA1
0x7EFB7F: lea     eax, [edi+4]
0x7EFB82: push    eax; lpAddend
0x7EFB83: call    ebp ; InterlockedDecrement
0x7EFB85: test    eax, eax
0x7EFB87: jnz     short loc_7EFB97
0x7EFB89: test    edi, edi
0x7EFB8B: jz      short loc_7EFB97
0x7EFB8D: mov     edx, [edi]
0x7EFB8F: mov     eax, [edx]
0x7EFB91: push    1
0x7EFB93: mov     ecx, edi
0x7EFB95: call    eax
0x7EFB97: mov     dword ptr [esi+9Ch], 0
0x7EFBA1: mov     edi, [esi+9Ch]
0x7EFBA7: test    edi, edi
0x7EFBA9: mov     byte ptr [esp+20h+var_4], 0
0x7EFBAE: jz      short loc_7EFBC8
0x7EFBB0: lea     ecx, [edi+4]
0x7EFBB3: push    ecx; lpAddend
0x7EFBB4: call    ebp ; InterlockedDecrement
0x7EFBB6: test    eax, eax
0x7EFBB8: jnz     short loc_7EFBC8
0x7EFBBA: test    edi, edi
0x7EFBBC: jz      short loc_7EFBC8
0x7EFBBE: mov     edx, [edi]
0x7EFBC0: mov     eax, [edx]
0x7EFBC2: push    1
0x7EFBC4: mov     ecx, edi
0x7EFBC6: call    eax
0x7EFBC8: mov     ecx, esi; this
0x7EFBCA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EFBD2: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7EFBD7: mov     ecx, [esp+20h+var_C]
0x7EFBDB: mov     large fs:0, ecx
0x7EFBE2: pop     ecx
0x7EFBE3: pop     edi
0x7EFBE4: pop     esi
0x7EFBE5: pop     ebp
0x7EFBE6: add     esp, 10h
0x7EFBE9: retn
