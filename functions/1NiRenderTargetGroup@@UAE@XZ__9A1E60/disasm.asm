0x9A1E60: push    0FFFFFFFFh
0x9A1E62: push    offset ??1NiRenderTargetGroup@@UAE@XZ_SEH
0x9A1E67: mov     eax, large fs:0
0x9A1E6D: push    eax
0x9A1E6E: push    ecx
0x9A1E6F: push    esi
0x9A1E70: push    edi
0x9A1E71: mov     eax, ___security_cookie
0x9A1E76: xor     eax, esp
0x9A1E78: push    eax
0x9A1E79: lea     eax, [esp+1Ch+var_C]
0x9A1E7D: mov     large fs:0, eax
0x9A1E83: mov     esi, ecx
0x9A1E85: mov     [esp+1Ch+var_10], esi
0x9A1E89: mov     dword ptr [esi], offset ??_7NiRenderTargetGroup@@6B@; const NiRenderTargetGroup::`vftable'
0x9A1E8F: mov     ecx, [esi+20h]
0x9A1E92: test    ecx, ecx
0x9A1E94: mov     [esp+1Ch+var_4], 2
0x9A1E9C: jz      short loc_9A1EA6
0x9A1E9E: mov     eax, [ecx]
0x9A1EA0: mov     edx, [eax]
0x9A1EA2: push    1
0x9A1EA4: call    edx
0x9A1EA6: mov     edi, [esi+1Ch]
0x9A1EA9: test    edi, edi
0x9A1EAB: mov     byte ptr [esp+1Ch+var_4], 1
0x9A1EB0: jz      short loc_9A1ECE
0x9A1EB2: lea     eax, [edi+4]
0x9A1EB5: push    eax; lpAddend
0x9A1EB6: call    ds:InterlockedDecrement
0x9A1EBC: test    eax, eax
0x9A1EBE: jnz     short loc_9A1ECE
0x9A1EC0: test    edi, edi
0x9A1EC2: jz      short loc_9A1ECE
0x9A1EC4: mov     edx, [edi]
0x9A1EC6: mov     eax, [edx]
0x9A1EC8: push    1
0x9A1ECA: mov     ecx, edi
0x9A1ECC: call    eax
0x9A1ECE: push    offset sub_7016A0; void (__thiscall *)(void *)
0x9A1ED3: push    4; int
0x9A1ED5: push    4; unsigned int
0x9A1ED7: lea     ecx, [esi+8]
0x9A1EDA: push    ecx; void *
0x9A1EDB: mov     byte ptr [esp+2Ch+var_4], 0
0x9A1EE0: call    $LN21
0x9A1EE5: mov     ecx, esi
0x9A1EE7: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x9A1EEF: call    NiRefObject_destr
0x9A1EF4: mov     ecx, [esp+1Ch+var_C]
0x9A1EF8: mov     large fs:0, ecx
0x9A1EFF: pop     ecx
0x9A1F00: pop     edi
0x9A1F01: pop     esi
0x9A1F02: add     esp, 10h
0x9A1F05: retn
