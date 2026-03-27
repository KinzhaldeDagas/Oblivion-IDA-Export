0x4A2CE0: push    0FFFFFFFFh
0x4A2CE2: push    offset ??0TESObjectANIO@@QAE@XZ_SEH
0x4A2CE7: mov     eax, large fs:0
0x4A2CED: push    eax
0x4A2CEE: push    ecx
0x4A2CEF: push    esi
0x4A2CF0: push    edi
0x4A2CF1: mov     eax, ds:0B30AACh
0x4A2CF6: xor     eax, esp
0x4A2CF8: push    eax
0x4A2CF9: lea     eax, [esp+1Ch+var_C]
0x4A2CFD: mov     large fs:0, eax
0x4A2D03: mov     edi, ecx
0x4A2D05: mov     [esp+1Ch+var_10], edi
0x4A2D09: mov     dword ptr [edi], offset ??_7TESRegion@@6B@; const TESRegion::`vftable'
0x4A2D0F: mov     esi, [edi+18h]
0x4A2D12: test    esi, esi
0x4A2D14: mov     [esp+1Ch+var_4], 0
0x4A2D1C: jz      short loc_4A2D2E
0x4A2D1E: mov     ecx, esi
0x4A2D20: call    sub_4A44C0
0x4A2D25: push    esi
0x4A2D26: call    FormHeapFree
0x4A2D2B: add     esp, 4
0x4A2D2E: mov     eax, [edi+1Ch]
0x4A2D31: test    eax, eax
0x4A2D33: jz      short loc_4A2D8B
0x4A2D35: mov     esi, [eax]
0x4A2D37: test    esi, esi
0x4A2D39: jz      short loc_4A2D7F
0x4A2D3B: jmp     short loc_4A2D40
0x4A2D3D: align 10h
0x4A2D40: mov     ecx, [eax+4]
0x4A2D43: test    ecx, ecx
0x4A2D45: jz      short loc_4A2D5C
0x4A2D47: mov     edx, [ecx+4]
0x4A2D4A: mov     [eax+4], edx
0x4A2D4D: mov     edx, [ecx]
0x4A2D4F: push    ecx
0x4A2D50: mov     [eax], edx
0x4A2D52: call    FormHeapFree
0x4A2D57: add     esp, 4
0x4A2D5A: jmp     short loc_4A2D62
0x4A2D5C: mov     dword ptr [eax], 0
0x4A2D62: test    esi, esi
0x4A2D64: jz      short loc_4A2D76
0x4A2D66: mov     ecx, esi
0x4A2D68: call    sub_4A76F0
0x4A2D6D: push    esi
0x4A2D6E: call    FormHeapFree
0x4A2D73: add     esp, 4
0x4A2D76: mov     eax, [edi+1Ch]
0x4A2D79: mov     esi, [eax]
0x4A2D7B: test    esi, esi
0x4A2D7D: jnz     short loc_4A2D40
0x4A2D7F: mov     eax, [edi+1Ch]
0x4A2D82: push    eax
0x4A2D83: call    FormHeapFree
0x4A2D88: add     esp, 4
0x4A2D8B: mov     ecx, edi; this
0x4A2D8D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4A2D95: call    TESForm_destr
0x4A2D9A: mov     ecx, [esp+1Ch+var_C]
0x4A2D9E: mov     large fs:0, ecx
0x4A2DA5: pop     ecx
0x4A2DA6: pop     edi
0x4A2DA7: pop     esi
0x4A2DA8: add     esp, 10h
0x4A2DAB: retn
