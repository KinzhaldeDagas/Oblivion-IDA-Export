0x4A6E20: sub     esp, 0Ch
0x4A6E23: push    ebp
0x4A6E24: mov     ebp, ecx
0x4A6E26: push    4; Size
0x4A6E28: lea     eax, [ebp+20h]
0x4A6E2B: push    eax; Src
0x4A6E2C: push    494C5052h; int
0x4A6E31: call    TESForm_PutFormRecordChunkData
0x4A6E36: add     esp, 0Ch
0x4A6E39: cmp     dword ptr [ebp+4], 0
0x4A6E3D: mov     [esp+10h+var_C], ebp
0x4A6E41: jnz     short loc_4A6E4D
0x4A6E43: cmp     dword ptr [ebp+0], 0
0x4A6E47: jz      loc_4A6F33
0x4A6E4D: push    ebx
0x4A6E4E: push    esi
0x4A6E4F: xor     ecx, ecx
0x4A6E51: push    edi
0x4A6E52: mov     eax, 2000h
0x4A6E57: mov     edx, 8
0x4A6E5C: xor     edi, edi
0x4A6E5E: mul     edx
0x4A6E60: seto    cl
0x4A6E63: mov     [esp+1Ch+var_8], 400h
0x4A6E6B: neg     ecx
0x4A6E6D: or      ecx, eax
0x4A6E6F: push    ecx; Size
0x4A6E70: call    FormHeapAlloc
0x4A6E75: add     esp, 4
0x4A6E78: mov     esi, eax
0x4A6E7A: mov     ecx, 400h
0x4A6E7F: mov     ebx, 2000h
0x4A6E84: jmp     short loc_4A6E8A
0x4A6E86: mov     ebp, [esp+1Ch+var_C]
0x4A6E8A: cmp     dword ptr [ebp+4], 0
0x4A6E8E: jnz     short loc_4A6E96
0x4A6E90: cmp     dword ptr [ebp+0], 0
0x4A6E94: jz      short loc_4A6F0D
0x4A6E96: mov     eax, [ebp+0]
0x4A6E99: mov     edx, [eax]
0x4A6E9B: mov     [esi+edi*8], edx
0x4A6E9E: mov     eax, [eax+4]
0x4A6EA1: mov     [esi+edi*8+4], eax
0x4A6EA5: add     edi, 1
0x4A6EA8: cmp     edi, [esp+1Ch+var_8]
0x4A6EAC: jb      short loc_4A6EFE
0x4A6EAE: add     ecx, 400h
0x4A6EB4: mov     [esp+1Ch+var_4], ecx
0x4A6EB8: mov     [esp+1Ch+var_8], ecx
0x4A6EBC: add     ebx, 2000h
0x4A6EC2: xor     ecx, ecx
0x4A6EC4: mov     eax, ebx
0x4A6EC6: mov     edx, 8
0x4A6ECB: mul     edx
0x4A6ECD: seto    cl
0x4A6ED0: mov     ebp, esi
0x4A6ED2: neg     ecx
0x4A6ED4: or      ecx, eax
0x4A6ED6: push    ecx; Size
0x4A6ED7: call    FormHeapAlloc
0x4A6EDC: mov     esi, eax
0x4A6EDE: lea     eax, ds:0[edi*8]
0x4A6EE5: push    eax; Size
0x4A6EE6: push    ebp; Src
0x4A6EE7: push    esi; Dst
0x4A6EE8: call    _memcpy
0x4A6EED: push    ebp
0x4A6EEE: call    FormHeapFree
0x4A6EF3: mov     ebp, [esp+30h+var_C]
0x4A6EF7: mov     ecx, [esp+30h+var_4]
0x4A6EFB: add     esp, 14h
0x4A6EFE: mov     ebp, [ebp+4]
0x4A6F01: test    ebp, ebp
0x4A6F03: mov     [esp+1Ch+var_C], ebp
0x4A6F07: jnz     loc_4A6E86
0x4A6F0D: test    edi, edi
0x4A6F0F: jz      short loc_4A6F27
0x4A6F11: lea     ecx, ds:0[edi*8]
0x4A6F18: push    ecx; Size
0x4A6F19: push    esi; Src
0x4A6F1A: push    444C5052h; int
0x4A6F1F: call    TESForm_PutFormRecordChunkData
0x4A6F24: add     esp, 0Ch
0x4A6F27: push    esi
0x4A6F28: call    FormHeapFree
0x4A6F2D: add     esp, 4
0x4A6F30: pop     edi
0x4A6F31: pop     esi
0x4A6F32: pop     ebx
0x4A6F33: pop     ebp
0x4A6F34: add     esp, 0Ch
0x4A6F37: retn
